#include "UnityAppController+Rendering.h"
#include "UnityAppController+ViewHandling.h"

#include "Unity/InternalProfiler.h"
#include "Unity/UnityMetalSupport.h"
#include "Unity/DisplayManager.h"

#include "UI/UnityView.h"

#include <dlfcn.h>

// _glesContextCreated was renamed to _renderingInited
extern bool _renderingInited;
extern bool _unityAppReady;
extern bool _skipPresent;
extern bool _didResignActive;

static int _renderingAPI = 0;
static int SelectRenderingAPIImpl();

static bool _enableRunLoopAcceptInput = false;

@implementation UnityAppController (Rendering)

- (void)createDisplayLink
{
    _displayLink = [CADisplayLink displayLinkWithTarget: self selector: @selector(repaintDisplayLink)];
    [self callbackFramerateChange: -1];
    [_displayLink addToRunLoop: [NSRunLoop currentRunLoop] forMode: NSRunLoopCommonModes];
}

- (void)destroyDisplayLink
{
    [_displayLink invalidate];
    _displayLink = nil;
}

- (void)repaintDisplayLink
{
    if (!_didResignActive)
    {
        UnityDisplayLinkCallback(_displayLink.timestamp);
        [self repaint];
    }
}

- (void)repaint
{
#if UNITY_SUPPORT_ROTATION
    [self checkOrientationRequest];
#endif
    [_unityView recreateRenderingSurfaceIfNeeded];
    [_unityView processKeyboard];
    UnityDeliverUIEvents();

    if (!UnityIsPaused())
        UnityRepaint();
}

- (void)callbackGfxInited
{
    InitRendering();
    _renderingInited = true;

    [self shouldAttachRenderDelegate];
    [_unityView recreateRenderingSurface];
    [_renderDelegate mainDisplayInited: _mainDisplay.surface];

    _mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackPresent:(const UnityFrameStats*)frameStats
{
    if (_skipPresent || _didResignActive)
        return;

    // metal needs special processing, because in case of airplay we need extra command buffers to present non-main screen drawables
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
    #if UNITY_CAN_USE_METAL
        [[DisplayManager Instance].mainDisplay present];
        [[DisplayManager Instance] enumerateNonMainDisplaysWithBlock:^(DisplayConnection* conn) {
            PreparePresentNonMainScreenMTL((UnityDisplaySurfaceMTL*)conn.surface);
        }];
    #endif
    }
    else
    {
        [[DisplayManager Instance] present];
    }

    Profiler_FramePresent(frameStats);
}

- (void)callbackFramerateChange:(int)targetFPS
{
    if (targetFPS <= 0)
        targetFPS = UnityGetTargetFPS();

    // on tvos it is possible to start application without a screen attached
    // alas, mainScreen is set in this case, but the values provided are bogus
    //   and in the case of maxFPS = 0 we will end up in endless recursion
    const int maxFPS = (int)[UIScreen mainScreen].maximumFramesPerSecond;
    if (maxFPS > 0 && targetFPS > maxFPS)
    {
        targetFPS = maxFPS;
        // note that this changes FPS, resulting in UnityFramerateChangeCallback call, calling this method recursively recursively
        UnitySetTargetFPS(targetFPS);
        return;
    }

    _enableRunLoopAcceptInput = (targetFPS == maxFPS && UnityDeviceCPUCount() > 1);

#if UNITY_HAS_IOSSDK_15_0 && UNITY_HAS_TVOSSDK_15_0
    if (@available(iOS 15.0, tvOS 15.0, *))
        _displayLink.preferredFrameRateRange = CAFrameRateRangeMake(targetFPS, targetFPS, targetFPS);
    else
#endif
    _displayLink.preferredFramesPerSecond = targetFPS;
}

- (void)selectRenderingAPI
{
    NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
    _renderingAPI = SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
    NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
    return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void UnityGfxInitedCallback()
{
    [GetAppController() callbackGfxInited];
}

extern "C" void UnityPresentContextCallback(struct UnityFrameStats const* unityFrameStats)
{
    [GetAppController() callbackPresent: unityFrameStats];
}

extern "C" void UnityFramerateChangeCallback(int targetFPS)
{
    [GetAppController() callbackFramerateChange: targetFPS];
}

static NSBundle*        _MetalBundle    = nil;
static id<MTLDevice>    _MetalDevice    = nil;

static bool IsMetalSupported(int /*api*/)
{
    _MetalBundle = [NSBundle bundleWithPath: @"/System/Library/Frameworks/Metal.framework"];
    if (_MetalBundle)
    {
        [_MetalBundle load];
        _MetalDevice = ((MTLCreateSystemDefaultDeviceFunc)::dlsym(dlopen(0, RTLD_LOCAL | RTLD_LAZY), "MTLCreateSystemDefaultDevice"))();
        if (_MetalDevice)
            return true;
    }

    [_MetalBundle unload];
    return false;
}

static int SelectRenderingAPIImpl()
{
    const int api = UnityGetRenderingAPI();
    if (api == apiMetal && IsMetalSupported(0))
        return api;

#if TARGET_IPHONE_SIMULATOR || TARGET_TVOS_SIMULATOR
    printf_console("On Simulator, Metal is supported only from iOS 13, and it requires at least macOS 10.15 and Xcode 11. Setting no graphics device.\n");
    return apiNoGraphics;
#else
    assert(false);
    return 0;
#endif
}

extern "C" NSBundle*            UnityGetMetalBundle()
{
    return _MetalBundle;
}

extern "C" MTLDeviceRef         UnityGetMetalDevice()       { return _MetalDevice; }
extern "C" MTLCommandQueueRef   UnityGetMetalCommandQueue() { return ((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->commandQueue; }
extern "C" MTLCommandQueueRef   UnityGetMetalDrawableCommandQueue() { return ((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->drawableCommandQueue; }

extern "C" int                  UnitySelectedRenderingAPI() { return _renderingAPI; }

extern "C" UnityRenderBufferHandle  UnityBackbufferColor()      { return GetMainDisplaySurface()->unityColorBuffer; }
extern "C" UnityRenderBufferHandle  UnityBackbufferDepth()      { return GetMainDisplaySurface()->unityDepthBuffer; }

extern "C" void                 DisplayManagerEndFrameRendering() { [[DisplayManager Instance] endFrameRendering]; }

extern "C" void                 UnityPrepareScreenshot()    { UnitySetRenderTarget(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer); }

extern "C" void UnityRepaint()
{
    @autoreleasepool
    {
        Profiler_FrameStart();
        UnityPlayerLoop();
        Profiler_FrameEnd();
    }
}
