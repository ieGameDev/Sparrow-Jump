#pragma once

#import <UIKit/UIKit.h>
#import "PluginBase/UnityViewControllerListener.h"

#if PLATFORM_IOS
    #define UNITY_VIEW_CONTROLLER_BASE_CLASS UIViewController
#elif PLATFORM_TVOS
    // GCEventViewController interface declaration was moved to a different header at some point
    // but GCController.h was still including GameController.h (umbrella header for the framework)
    // In the end XCode15 broke this.
    // GCEventViewController.h is the correct header, but we want to support older xcode versions too
    // we did check that xcode13 has this new header already, so we use it on xcode13 or newer
    #if __clang_major__ >= 13
        #import <GameController/GCEventViewController.h>
    #else
        #import <GameController/GCController.h>
    #endif
    #define UNITY_VIEW_CONTROLLER_BASE_CLASS GCEventViewController
#endif

@interface UnityViewControllerBase : UNITY_VIEW_CONTROLLER_BASE_CLASS
{
    id<UnityViewControllerNotifications> _notificationDelegate;
}
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;

@property (nonatomic, retain) id<UnityViewControllerNotifications> notificationDelegate;

@end

#if PLATFORM_IOS
#include "UnityViewControllerBase+iOS.h"
#elif PLATFORM_TVOS
#include "UnityViewControllerBase+tvOS.h"
#endif

// this should be used to create view controller that plays nicely with unity and account for player settings
UnityViewControllerBase* AllocUnityViewController(void);

UnityViewControllerBase* AllocUnityDefaultViewController(void);
#if UNITY_SUPPORT_ROTATION
UnityViewControllerBase* AllocUnitySingleOrientationViewController(UIInterfaceOrientation orient);
#endif
