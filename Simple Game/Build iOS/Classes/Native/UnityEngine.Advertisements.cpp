#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>
struct ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct Tables_t04CE0F63C280273D5A4590D5369D7BAAFF3059DD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>[]
struct KeyValuePair_2U5BU5D_tE4E53A6E48FA62DFC341E3980B2327031569D3C3;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0;
// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0;
// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Advertisements.Banner
struct Banner_tB60B533B960F53183013116DC24FC2712B966C4C;
// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Advertisements.Configuration
struct Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.Advertisements.Events.FinishEventArgs
struct FinishEventArgs_t55225010C8720801D571EBBFBA57BFE413EF593C;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Advertisements.IBanner
struct IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// UnityEngine.Advertisements.INativeBanner
struct INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB;
// UnityEngine.Advertisements.INativePlatform
struct INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274;
// UnityEngine.Advertisements.Platform.IPlatform
struct IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B;
// UnityEngine.Advertisements.Platform.iOS.IosBanner
struct IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener
struct IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF;
// UnityEngine.Advertisements.Platform.iOS.IosLoadListener
struct IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43;
// UnityEngine.Advertisements.Platform.iOS.IosNativeObject
struct IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform
struct IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE;
// UnityEngine.Advertisements.IosShowListener
struct IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Advertisements.MetaData
struct MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Advertisements.Platform.Platform
struct Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD;
// UnityEngine.Advertisements.Events.StartEventArgs
struct StartEventArgs_t45DD9C9EC8E17B62384663F37B8F14376C25CD64;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch
struct UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch
struct UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch
struct UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate
struct UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate
struct UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate
struct UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate
struct UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate
struct UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate
struct UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback
struct InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback
struct InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7;
// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback
struct LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC;
// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback
struct LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2;
// UnityEngine.Advertisements.IosShowListener/ShowClickCallback
struct ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2;
// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback
struct ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325;
// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback
struct ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4;
// UnityEngine.Advertisements.IosShowListener/ShowStartCallback
struct ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E;
// UnityEngine.Advertisements.Utilities.Json/Parser
struct Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6;
// UnityEngine.Advertisements.Utilities.Json/Serializer
struct Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF;
// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197;
IL2CPP_EXTERN_C String_t* _stringLiteral129F45EE853C8888E072C8BD92C8D75F5E6130EE;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5288AA775893C983428668C2C3DE7154A4254F58;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75;
IL2CPP_EXTERN_C String_t* _stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralEB33678B599704543406B12FACBA3E107A0064D7;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* AssemblyInfoUtilities_GetCurrentAssemblyInfoVersion_m1C709D0280B5DFBC0A174B941ED81E06E2324352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_mE7693235F08D8636791A1F6B1D3CA6473B3F1F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_mA10FD3A97A12B3D741BC1C55480B8729887CE57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m5E3C7D974C60FD3F5969872954A9B92F3A295361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m79BFD04962395F2F98C54430F8CDA3C67120C8E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_mFF9CBA9A273B94D754FDE94E4E58B9D7C13C5604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_mCBE62A8AF1A2A18B2B7693541EBA2BBC6A7C3C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m5A75DEB3C3F072DA5FAE171096FD0E1E3549E1B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_m83D21DBCD758480DC5D6BE235E27E430BA787DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_m90924D5BE72D0034ACA272502C839D02F730056B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_m15C25D8C1F85ADDC9526CC3E7B67F27A479B0A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m4A55FFC194EAE6706816F896828907443C60401B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_m67047D405FBF5FAB8A9DFCB832268BC59D83CF6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m5EE4BF9DAEC86927DA84958582315885D55FC6D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_m962272B8C13209EB182591F825BBFA897E7C45D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_m98AB7A0529A5CCE24EEAE6BF06BF2BF2FC7A7659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_m4CA70EC534C1864180AB34F897EAE2F7072E8646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m4628C13D4C4EDB481680D18FFE87F81B2E293528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m20AA6CCE43A0C8735DABE6C74EABD69E5E6C15E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_m4702F0FAB42972493A239E6987533D29F6F0C0B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_mFF9220DE776EC5910A9D7AFB00A7CFD322DB6E51_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7F3AA6E0ACE7011E29F468D1715FF29A537C5BC0 
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t04CE0F63C280273D5A4590D5369D7BAAFF3059DD* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tE4E53A6E48FA62DFC341E3980B2327031569D3C3* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UnityEngine.Advertisements.Advertisement
struct Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// UnityEngine.Advertisements.Utilities.AssemblyInfoUtilities
struct AssemblyInfoUtilities_tBF5115D8CC3442E6829C008AE628BA45B12655D3  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Banner
struct Banner_tB60B533B960F53183013116DC24FC2712B966C4C  : public RuntimeObject
{
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Advertisements.Banner::<ShowAfterLoad>k__BackingField
	bool ___U3CShowAfterLoadU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativeBanner UnityEngine.Advertisements.Banner::m_NativeBanner
	RuntimeObject* ___m_NativeBanner_2;
};

// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerView>k__BackingField
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___U3CbannerViewU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerPlacementId>k__BackingField
	String_t* ___U3CbannerPlacementIdU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___U3CerrorCallbackU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CclickCallbackU3Ek__BackingField_2;
};

// UnityEngine.Advertisements.Utilities.Color
struct Color_t29F9B2EA647C75210E663296557A1F87E81EB5D1  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Configuration
struct Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25  : public RuntimeObject
{
	// System.Boolean UnityEngine.Advertisements.Configuration::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Configuration::<defaultPlacement>k__BackingField
	String_t* ___U3CdefaultPlacementU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Configuration::<placements>k__BackingField
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___U3CplacementsU3Ek__BackingField_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.Advertisements.Utilities.EnumUtilities
struct EnumUtilities_t72D0C4D9CF8304F6D3F28D44A95705824294D781  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner
struct IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Utilities.Json
struct Json_tBFF327E070947CC5E237B1ED209D50FD052CE95F  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Advertisements.MetaData
struct MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.Platform.Platform
struct Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA  : public RuntimeObject
{
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::<Banner>k__BackingField
	RuntimeObject* ___U3CBannerU3Ek__BackingField_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::<NativePlatform>k__BackingField
	RuntimeObject* ___U3CNativePlatformU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Advertisements.Platform.Platform::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_3;
};

// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD  : public RuntimeObject
{
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch
struct UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648  : public RuntimeObject
{
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::m_InitializationListener
	RuntimeObject* ___m_InitializationListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;
};

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch
struct UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD  : public RuntimeObject
{
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::m_LoadListener
	RuntimeObject* ___m_LoadListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;
};

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch
struct UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177  : public RuntimeObject
{
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::m_ShowListener
	RuntimeObject* ___m_ShowListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;
};

// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_1;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* ___m_CoroutineExecutor_2;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* ___m_ApplicationQuit_3;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_4;
};

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.Advertisements.Advertisement/Banner
struct Banner_tC291C39CE7B69AD9C989CB4A9FD2C47B38928CFB  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::bannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___bannerOptions_0;
};

// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::bannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___bannerOptions_0;
};

// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::bannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___bannerOptions_0;
};

// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::bannerOptions
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___bannerOptions_0;
};

// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::bannerOptions
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___bannerOptions_0;
	// System.String UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::message
	String_t* ___message_1;
};

// UnityEngine.Advertisements.Utilities.Json/Parser
struct Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6  : public RuntimeObject
{
	// System.IO.StringReader UnityEngine.Advertisements.Utilities.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_1;
};

// UnityEngine.Advertisements.Utilities.Json/Serializer
struct Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF  : public RuntimeObject
{
	// System.Text.StringBuilder UnityEngine.Advertisements.Utilities.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
};

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::<>4__this
	UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::placementId
	String_t* ___placementId_1;
};

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::placementId
	String_t* ___placementId_1;
};

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::<>4__this
	UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::placementId
	String_t* ___placementId_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Advertisements.Events.StartEventArgs
struct StartEventArgs_t45DD9C9EC8E17B62384663F37B8F14376C25CD64  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String UnityEngine.Advertisements.Events.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// System.Reflection.AssemblyContentType
struct AssemblyContentType_tE0A2224D247DD97616065CB0ECB16912B756D745 
{
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct AssemblyHashAlgorithm_t6202395EA0C9A01D6342348A9535DF4CA47010D1 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;
};

// System.Reflection.AssemblyNameFlags
struct AssemblyNameFlags_t48EB44AFB7A3310746DD78ACC3DC5AE6D3D91122 
{
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct AssemblyVersionCompatibility_t1E27EE4AB4137C64EE164A25A184E844AC722159 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.BannerPosition
struct BannerPosition_t846E133F4901E2921000660CA6E16706690F6DC1 
{
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.HideFlags
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.Platform.iOS.IosNativeObject
struct IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::m_NativePtr
	intptr_t ___m_NativePtr_1;
};

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Reflection.ProcessorArchitecture
struct ProcessorArchitecture_t549C86643DDABC4E0C6DC968F0C74A707ADCAD9B 
{
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ScaleMode
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.ShowResult
struct ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D 
{
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___2;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsCompletionState
struct UnityAdsCompletionState_tC54DE3F6E0BA6C165BF1268C0AD77DEEA8246369 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsCompletionState::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsInitializationError
struct UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsInitializationError::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsLoadError
struct UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsLoadError::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsShowCompletionState
struct UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowCompletionState::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.UnityAdsShowError
struct UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91 
{
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowError::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN
struct TOKEN_t21E2DF47E8A811528BB6EE65EFD0B30FC6A81D44 
{
	// System.Int32 UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN::value__
	int32_t ___value___2;
};

// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.AndroidInitializationListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_5;
};

// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.AndroidLoadListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_5;
};

// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidShowListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.AndroidShowListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Advertisements.Events.FinishEventArgs
struct FinishEventArgs_t55225010C8720801D571EBBFBA57BFE413EF593C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String UnityEngine.Advertisements.Events.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Events.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener
struct IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF  : public IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C
{
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::m_UnityAdsInternalListener
	RuntimeObject* ___m_UnityAdsInternalListener_2;
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::m_UserListener
	RuntimeObject* ___m_UserListener_3;
};

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener
struct IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43  : public IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C
{
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.Platform.iOS.IosLoadListener::m_UnityAdsInternalListener
	RuntimeObject* ___m_UnityAdsInternalListener_2;
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.Platform.iOS.IosLoadListener::m_UserListener
	RuntimeObject* ___m_UserListener_3;
};

// UnityEngine.Advertisements.Platform.iOS.IosPlatform
struct IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE  : public IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C
{
};

// UnityEngine.Advertisements.IosShowListener
struct IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55  : public IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C
{
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.IosShowListener::m_UnityAdsInternalListener
	RuntimeObject* ___m_UnityAdsInternalListener_2;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.IosShowListener::m_UserListener
	RuntimeObject* ___m_UserListener_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* ___U3CU3E4__this_0;
	// UnityEngine.Advertisements.UnityAdsInitializationError UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::error
	int32_t ___error_1;
	// System.String UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::message
	String_t* ___message_2;
};

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsLoadError UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::error
	int32_t ___error_2;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::message
	String_t* ___message_3;
};

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::<>4__this
	UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsShowError UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::error
	int32_t ___error_2;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::message
	String_t* ___message_3;
};

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C  : public RuntimeObject
{
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::<>4__this
	UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsShowCompletionState UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::showCompletionState
	int32_t ___showCompletionState_2;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate
struct UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate
struct UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate
struct UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate
struct UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate
struct UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate
struct UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback
struct InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback
struct InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback
struct LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback
struct LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.IosShowListener/ShowClickCallback
struct ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback
struct ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback
struct ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.IosShowListener/ShowStartCallback
struct ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E  : public MulticastDelegate_t
{
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___OnApplicationQuitEventHandler_4;
};

// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;
};

// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_5;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UnityEngine.Advertisements.Advertisement
struct Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_0;
};

// UnityEngine.Advertisements.Advertisement

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Reflection.Assembly

// System.Reflection.Assembly

// UnityEngine.Advertisements.Utilities.AssemblyInfoUtilities

// UnityEngine.Advertisements.Utilities.AssemblyInfoUtilities

// UnityEngine.Advertisements.Banner

// UnityEngine.Advertisements.Banner

// UnityEngine.Advertisements.Platform.Android.BannerBundle

// UnityEngine.Advertisements.Platform.Android.BannerBundle

// UnityEngine.Advertisements.BannerLoadOptions

// UnityEngine.Advertisements.BannerLoadOptions

// UnityEngine.Advertisements.BannerOptions

// UnityEngine.Advertisements.BannerOptions

// UnityEngine.Advertisements.Utilities.Color

// UnityEngine.Advertisements.Utilities.Color

// UnityEngine.Advertisements.Configuration

// UnityEngine.Advertisements.Configuration

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// UnityEngine.Advertisements.Utilities.EnumUtilities

// UnityEngine.Advertisements.Utilities.EnumUtilities

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// UnityEngine.Advertisements.Platform.iOS.IosBanner
struct IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields
{
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.iOS.IosBanner::s_Banner
	RuntimeObject* ___s_Banner_0;
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.iOS.IosBanner::s_BannerLoadOptions
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___s_BannerLoadOptions_1;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.iOS.IosBanner::s_BannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___s_BannerOptions_2;
	// System.String UnityEngine.Advertisements.Platform.iOS.IosBanner::s_PlacementId
	String_t* ___s_PlacementId_3;
};

// UnityEngine.Advertisements.Platform.iOS.IosBanner

// UnityEngine.Advertisements.Utilities.Json

// UnityEngine.Advertisements.Utilities.Json

// UnityEngine.Advertisements.MetaData

// UnityEngine.Advertisements.MetaData

// UnityEngine.Advertisements.Platform.Platform

// UnityEngine.Advertisements.Platform.Platform

// UnityEngine.Advertisements.ShowOptions

// UnityEngine.Advertisements.ShowOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch

// UnityEngine.Advertisements.Utilities.UnityLifecycleManager

// UnityEngine.Advertisements.Utilities.UnityLifecycleManager

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform

// System.Version

// System.Version

// UnityEngine.Advertisements.Advertisement/Banner

// UnityEngine.Advertisements.Advertisement/Banner

// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0

// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0

// UnityEngine.Advertisements.Utilities.Json/Parser

// UnityEngine.Advertisements.Utilities.Json/Parser

// UnityEngine.Advertisements.Utilities.Json/Serializer

// UnityEngine.Advertisements.Utilities.Json/Serializer

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.SByte

// System.SByte

// System.Single

// System.Single

// UnityEngine.Advertisements.Events.StartEventArgs

// UnityEngine.Advertisements.Events.StartEventArgs

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// UnityEngine.Advertisements.BannerPosition

// UnityEngine.Advertisements.BannerPosition

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.HideFlags

// UnityEngine.HideFlags

// System.Int32Enum

// System.Int32Enum

// UnityEngine.Advertisements.Platform.iOS.IosNativeObject
struct IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject> UnityEngine.Advertisements.Platform.iOS.IosNativeObject::s_Objects
	ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* ___s_Objects_0;
};

// UnityEngine.Advertisements.Platform.iOS.IosNativeObject

// System.Globalization.NumberStyles

// System.Globalization.NumberStyles

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RuntimePlatform

// UnityEngine.RuntimePlatform

// UnityEngine.ScaleMode

// UnityEngine.ScaleMode

// UnityEngine.Advertisements.ShowResult

// UnityEngine.Advertisements.ShowResult

// System.IO.StringReader

// System.IO.StringReader

// UnityEngine.TextAnchor

// UnityEngine.TextAnchor

// UnityEngine.Advertisements.UnityAdsCompletionState

// UnityEngine.Advertisements.UnityAdsCompletionState

// UnityEngine.Advertisements.UnityAdsInitializationError

// UnityEngine.Advertisements.UnityAdsInitializationError

// UnityEngine.Advertisements.UnityAdsLoadError

// UnityEngine.Advertisements.UnityAdsLoadError

// UnityEngine.Advertisements.UnityAdsShowCompletionState

// UnityEngine.Advertisements.UnityAdsShowCompletionState

// UnityEngine.Advertisements.UnityAdsShowError

// UnityEngine.Advertisements.UnityAdsShowError

// UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN

// UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN

// UnityEngine.Advertisements.AndroidInitializationListener

// UnityEngine.Advertisements.AndroidInitializationListener

// UnityEngine.Advertisements.AndroidLoadListener

// UnityEngine.Advertisements.AndroidLoadListener

// UnityEngine.Advertisements.AndroidShowListener

// UnityEngine.Advertisements.AndroidShowListener

// System.Reflection.AssemblyName

// System.Reflection.AssemblyName

// UnityEngine.Advertisements.Events.FinishEventArgs

// UnityEngine.Advertisements.Events.FinishEventArgs

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener

// UnityEngine.Advertisements.Platform.iOS.IosPlatform
struct IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Platform.iOS.IosPlatform::s_Platform
	RuntimeObject* ___s_Platform_2;
};

// UnityEngine.Advertisements.Platform.iOS.IosPlatform

// UnityEngine.Advertisements.IosShowListener

// UnityEngine.Advertisements.IosShowListener

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0

// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback

// UnityEngine.Advertisements.BannerOptions/BannerCallback

// UnityEngine.Advertisements.BannerOptions/BannerCallback

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate

// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback

// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback

// UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback

// UnityEngine.Advertisements.IosShowListener/ShowClickCallback

// UnityEngine.Advertisements.IosShowListener/ShowClickCallback

// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback

// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback

// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback

// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback

// UnityEngine.Advertisements.IosShowListener/ShowStartCallback

// UnityEngine.Advertisements.IosShowListener/ShowStartCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.Advertisements.Utilities.ApplicationQuit

// UnityEngine.Advertisements.Utilities.ApplicationQuit

// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder

// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder

// UnityEngine.Advertisements.Utilities.CoroutineExecutor

// UnityEngine.Advertisements.Utilities.CoroutineExecutor

// System.MissingMethodException

// System.MissingMethodException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<System.Int32Enum>(UnityEngine.AndroidJavaObject,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25A8F8268087DE8629EC995A05677B9C86D99FDA_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IosNativeObject_Get_TisRuntimeObject_m086EC7B7982D792090576B7686C31368218F9FE9_gshared (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::TryRemove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m855D8CA3E8A992B3287966D0C9A74523A937C124_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;

// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mFFCC7E5D24C35AF45F2C3FE61A20D60102FF5293 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsSupported_m8667F8C15F3456DBD1BECF1E46325B62D24004FF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mCE0B655C8B046A9FB6AD8087647B47C028A989C3 (String_t* ___0_gameId, bool ___1_testMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343 (String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch__ctor_mF2ABB02A80CBE4A3172B19B9EC0B5DE8884E1B37 (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* __this, RuntimeObject* ___0_initializationListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch__ctor_mB24396B2BAFBB8B8D1CD308623A7FEA521118ACB (UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* __this, RuntimeObject* ___0_loadListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F (String_t* ___0_placementId, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___1_showOptions, RuntimeObject* ___2_showListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch__ctor_mC91CA102BE0AFAF3B37F48FF57FA4506CE076E62 (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, RuntimeObject* ___0_showListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner__ctor_m47EED48FF6224AE89523B2D1757D8AA4EEEF643B (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform__ctor_m0E03BB69D8FB05B9050A9FE39665EA5018B14D73 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, RuntimeObject* ___0_nativeBanner, RuntimeObject* ___1_unityLifecycleManager, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, RuntimeObject* ___0_nativePlatform, RuntimeObject* ___1_banner, RuntimeObject* ___2_unityLifecycleManager, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E (String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3 (String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_options, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m4747FA100A6EF589C36DC877BD8A95B32955A760 (U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m4E11E903A9092380909C5373A53CBE051DEFBDBF (U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA9CEB57A912B3A7F8EADB9E6EAD30A53157EFED7 (U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m4F22653F77E1FCA2D39FDFB286E2D73AAB63B6F7 (U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m3C81E7699582016CE9F3C30E78E41CED45F6C5BE (U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Object UnityEngine.Advertisements.Utilities.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m0176FA19A2AE215B8FF1AEDE908B7617DA71C63E (String_t* ___0_json, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*, const RuntimeMethod*))Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Configuration::get_placements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* Configuration_get_placements_mE3E678A58FDF7A749AC0479A8B167B63900C3164_inline (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*, String_t*, bool, const RuntimeMethod*))Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5E055A48B47F27C369B62EDD5AA6C4CB38B5C5D4 (U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB906CFF2F656859346B52B729E63E6DE39E12B85 (U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mE5FF6BC01880890F5D28D80BDCDCD5FCB4A03E2B (U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3A7281913C593B0472B7BE84390ADC5522C63117 (U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mEF502DD172075C7FECF90811DE82E7C4D98EF4BE (U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4628F07EAEB71AD9CB29B08AA7AE4A569ECA2D51 (U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m05C92017BD1C1B0579C2D74A1169320776321F37 (U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Utilities.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m1C4FF3782DC29AAFAB04A88BB4C656001BC82D64 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsInitializationError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m79BFD04962395F2F98C54430F8CDA3C67120C8E1 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, int32_t ___1_defaultValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25A8F8268087DE8629EC995A05677B9C86D99FDA_gshared)(___0_androidJavaObject, ___1_defaultValue, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsLoadError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_mFF9CBA9A273B94D754FDE94E4E58B9D7C13C5604 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, int32_t ___1_defaultValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25A8F8268087DE8629EC995A05677B9C86D99FDA_gshared)(___0_androidJavaObject, ___1_defaultValue, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m5A75DEB3C3F072DA5FAE171096FD0E1E3549E1B3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, int32_t ___1_defaultValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25A8F8268087DE8629EC995A05677B9C86D99FDA_gshared)(___0_androidJavaObject, ___1_defaultValue, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowCompletionState>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_mCBE62A8AF1A2A18B2B7693541EBA2BBC6A7C3C5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_androidJavaObject, int32_t ___1_defaultValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25A8F8268087DE8629EC995A05677B9C86D99FDA_gshared)(___0_androidJavaObject, ___1_defaultValue, method);
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8 (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback__ctor_m897C659A20060FF543E77FEEB6C31143BA04AD3B (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback__ctor_m294FC5864A920A16EAEA7C98E2B8A9F9A84156FD (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback__ctor_mBB13232BAE893C111CEB06852A6A0494AA9B8A26 (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback__ctor_mF851FB924D286AA7C6A95A1172B4D3DB48CFC190 (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Advertisements.IosShowListener::ShowListenerCreate(UnityEngine.Advertisements.IosShowListener/ShowFailureCallback,UnityEngine.Advertisements.IosShowListener/ShowStartCallback,UnityEngine.Advertisements.IosShowListener/ShowClickCallback,UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosShowListener_ShowListenerCreate_m7C2EA72BA898DEC6B45DB11DDBCCDB195FC9BBAF (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* ___0_showFailureCallback, ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* ___1_showStartCallback, ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* ___2_showClickCallback, ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* ___3_showCompleteCallback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::set_NativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::get_NativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::ShowListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_ShowListenerDestroy_mC3F3AB16B7C4AD7628AB0E3E8CDAF451E589323E (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<UnityEngine.Advertisements.IosShowListener>(System.IntPtr)
inline IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143 (intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* (*) (intptr_t, const RuntimeMethod*))IosNativeObject_Get_TisRuntimeObject_m086EC7B7982D792090576B7686C31368218F9FE9_gshared)(___0_ptr, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosNativeObject::CheckDisposedAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56 (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m251263851C162468F7F488A647B130E75B11BE45 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_m7AC17878AD4E4507EA9DBEFE0C5EC002D45C5CF3 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m77DB799629ADE2776F17994754037D4F7A213983 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m84E57FA3EB5465801F9960547800A5F6141DB3A6 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, int32_t ___1_showCompletionState, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Version System.Reflection.AssemblyName::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mAC5B42D624A8CFD1EF5D80CBAF7868D1542BD4BD (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Utilities.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m1FC8AE2907666BA4DF2959499632B2CCBBB6ABFB (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m69423DCB1DDF8173B3C4203C9B042393100ABC3F (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m5A0B8C5763C8FDBB927671E81EAFE6829C59B049 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN UnityEngine.Advertisements.Utilities.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Utilities.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m1ECEB7AAC822DADFF507E1EB92D5ED1EFB6552C1 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseByToken(UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m468FA0F051D3395D84D19033EDC73740E8C66202 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mCC01A1EBA06359F6E06F40D79AE46293B7EBFC2D (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Advertisements.Utilities.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mE5C1F9B0144E43586BEC691EF254383EDE7F2881 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Advertisements.Utilities.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_mBFBE589544D69BCCD62F95AF1C26EE838839CB38 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char UnityEngine.Advertisements.Utilities.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Utilities.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m966F5DFFFDD2960329F4EAC1B240169893949A0A (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, int64_t* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, double* ___3_result, const RuntimeMethod* method) ;
// System.Char UnityEngine.Advertisements.Utilities.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m519FDB6D6DA25DAF4436414B4DA3021224741F6E (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Utilities.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mA970D8A00C30AB60B6B2F0164808FBE948DBCF30 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD1CE5097611ABBF92324AF3F7EA1DF85B5A5D04E (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m41D33F14F2F8B17B847A19A49B3D97DDA896EF4D (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m3F6340C65DE1F793A8AA009F1CFD5BD699431C65 (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m84E4B00C515E2C90B339525CD873DC409836BCA6 (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m5D60D8CEACBDE3427FD88E142951DE7B6B8A48BD (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mA75321EA54122E00EBCE3DCC9D6229F31CC690BB (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m39398EF751CC1915AE7EBBD6ED2FFF87570B998B (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_category, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___0_metaData, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_m92B551A85073A8F911E5C60DA0D37CC603EAE938 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87 (String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5 (String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E (String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidUnload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C (String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866 (String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerIsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosBanner_UnityAdsBannerIsLoaded_m90463A0FB95AB1AB5081446B6D7A30249D988F53 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate__ctor_mC2F978C5B4FD019B5BCCB0B8737C018FE02B00D3 (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerShowCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerShowCallback_m425E8FC0100A5405F5D9A531CA45E1C6B0F913BA (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate__ctor_mA3C2A3FF5879901D7203E2B4E9E945CB5650C900 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerHideCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerHideCallback_mF23AB8E8D253E97B58E9DC5DEE5379DE2A038C72 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate__ctor_mF78D36DB0AB1EAB4F8AB1E1B28534462B917A674 (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerClickCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerClickCallback_m5705B371FD8F2B8C0088E816919182D75AE56EDC (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate__ctor_m49507EAF0079DE66E9757AB02060212865D2DD49 (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerErrorCallback_mEC87BA8E40A48E9A1EC0273EB57D32511B325C1C (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate__ctor_mE5DA7401A8D0DA10304E957ED79B7EBEFBDA3E94 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerUnloadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerUnloadCallback_m3D462B860DC3312FF2FE27D454A5B980E3E20D72 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate__ctor_m7BD3C1E7F485B1F9D4C935E268192FA326027A61 (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerLoadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerLoadCallback_mBFEC177DC1F8597E33DB4F61B26F203519E4746A (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* ___0_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityBannerInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityBannerInitialize_mFC2AC3997F03D458AAA5BAD55E245E1223633371 (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_Hide_m4F1FC59F856743AA78D712D571D72358751D6A75 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, bool ___0_destroy, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerShow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerShow_m139CBC82A3DA4A284E711D4606CFD4D807978DF2 (String_t* ___0_placementId, bool ___1_showAfterLoad, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerHide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerHide_m245878F1BCD621CF1478E6A9B010055CD0AD5FCA (bool ___0_shouldDestroy, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerSetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerSetPosition_mF88E70AD35D881AD1C5AE1980CEA7EC09700EC3B (int32_t ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9 (intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback__ctor_m5A23D70231180014D62FE9D429FEE79435AD1938 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback__ctor_mC521A504BB3B212E46C6A59E859323B2A3A7458E (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosInitializationListener_InitializationListenerCreate_mB199C9A705B61992A14C227F39F0A97BB31F8991 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* ___0_initSuccessCallback, InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* ___1_initFailureCallback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_InitializationListenerDestroy_mA384AD3249858CFBB54D8921BEEBD03D21B01EC8 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<UnityEngine.Advertisements.Platform.iOS.IosInitializationListener>(System.IntPtr)
inline IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D (intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* (*) (intptr_t, const RuntimeMethod*))IosNativeObject_Get_TisRuntimeObject_m086EC7B7982D792090576B7686C31368218F9FE9_gshared)(___0_ptr, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_mD7E7B7196BC62360E8136DB4B8825DF2D01FCEF4 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_m50440FB3281F53BCD4285C094386A218AD06F598 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadSuccess(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421 (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSuccessCallback__ctor_mBF0507473DA20B4B2CEF8D4E5FAF40A2EF011886 (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFailureCallback__ctor_m4535B9398DEBB31B35499F90C7AED9C9B11E9E36 (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosLoadListener::LoadListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosLoadListener_LoadListenerCreate_m8DD016FE5EA7F1FCE0B06A68643C76FF21F0DF5B (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* ___0_loadSuccessCallback, LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* ___1_loadFailureCallback, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::LoadListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_LoadListenerDestroy_mEC9ACCAF950346B6B3380EB600907B7AFFA335F1 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<UnityEngine.Advertisements.Platform.iOS.IosLoadListener>(System.IntPtr)
inline IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964 (intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* (*) (intptr_t, const RuntimeMethod*))IosNativeObject_Get_TisRuntimeObject_m086EC7B7982D792090576B7686C31368218F9FE9_gshared)(___0_ptr, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadSuccess_m5020499F5D992282458022F68DDC77C3E7E480A3 (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, String_t* ___0_placementId, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadFailure(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadFailure_m3018914207B1E6D55327014DA5B4FA655BC13060 (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_mA10FD3A97A12B3D741BC1C55480B8729887CE57F (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* __this, intptr_t ___0_key, IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA*, intptr_t, IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::TryAdd(TKey,TValue)
inline bool ConcurrentDictionary_2_TryAdd_mE7693235F08D8636791A1F6B1D3CA6473B3F1F72 (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* __this, intptr_t ___0_key, IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA*, intptr_t, IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m855D8CA3E8A992B3287966D0C9A74523A937C124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::BridgeTransfer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_BridgeTransfer_m2DE41F45E7522207337CC3223AD358EDFB9FFF79 (intptr_t ___0_x, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::.ctor()
inline void ConcurrentDictionary_2__ctor_m5E3C7D974C60FD3F5969872954A9B92F3A295361 (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener__ctor_m36B70D1D7D223E1B0D8852B4899F411874E554F5 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsInitialize(System.String,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsInitialize_m91FAE4B4894520E5D2E27D48ADDA6A8E2FA35CFF (String_t* ___0_gameId, bool ___1_testMode, intptr_t ___2_initializationListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener__ctor_m84CDA9EB8A017D1835695C13BDC16475BB987D1F (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsLoad(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsLoad_mBEA70CC7A78E1DA0C8F7D031DEAFA16D0AA47ADC (String_t* ___0_placementId, intptr_t ___1_loadListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.IosShowListener::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener__ctor_mA643087226F8596C5627EE0AF6170BDCD8200B88 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsShow(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsShow_mC3BC61972386DC96A97195D6A0CE2E90A5A7E4F8 (String_t* ___0_placementId, intptr_t ___1_showListener, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mFD2AF853F6F25C473A93FE898C2BF8D2C6C826C1 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetMetaData_m5D14016F4E66908F1A5F12BA2D7D0912D59F7AC7 (String_t* ___0_category, String_t* ___1_data, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsGetDebugMode_mB7D8A5D60A57351E4C5272153B8FE6F25000BDC8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDebugMode_m66220727A48CF1F5D00470F86872FF166852E2D0 (bool ___0_debugMode, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetVersion_m21916B208AD224FC9C619547957406219823E9EB (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsInitialized_m2083441C61F02A7B23DD030AE5856F85E207CE6E (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* BannerPlaceholder_BackgroundTexture_mA1C83D534C3005BCE9A50A66E48EE53654DFEE1E (int32_t ___0_width, int32_t ___1_height, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BannerPlaceholder_GetBannerRect_mE3DD03B1E8CF6EA072A70F995D7D01BF2942C94F (int32_t ___0_position, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mB2D6A5CDD9F6D8F79B87778837B70663E47D952E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_image, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mB96DA06923A0D6550CDBA2355A0BC11F27EEFD4F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_image, int32_t ___2_scaleMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA7CD625644B152E88F757E4B51F12A827BE49E57 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityAdsShowListenerCreate(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsShowListenerDestroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsBannerShow(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsBannerHide(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsBannerIsLoaded();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsBannerSetPosition(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerShowCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerHideCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerClickCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerErrorCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerUnloadCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerLoadCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityBannerInitialize();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityAdsInitializationListenerCreate(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsInitializationListenerDestroy(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityAdsLoadListenerCreate(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsLoadListenerDestroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsBridgeTransfer(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsInitialize(char*, int32_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsLoad(char*, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsShow(char*, intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsGetDebugMode();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDebugMode(int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityAdsGetVersion();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsIsInitialized();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetMetaData(char*, char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_mCC6272BAAF27A9D700E13D1DE3EF7CCA19A6BA48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Platform == null)
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Platform = CreatePlatform();
		RuntimeObject* L_1;
		L_1 = Advertisement_CreatePlatform_mFFCC7E5D24C35AF45F2C3FE61A20D60102FF5293(NULL);
		((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0), (void*)L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m91E4922DA136C2D13868A1B8F4BDC5CDEFBA6284 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isInitialized => s_Platform.IsInitialized;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_IsInitialized() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_mB5C493696A3AF825A4CB2EDD59433E41E9F270A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isSupported => IsSupported();
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsSupported_m8667F8C15F3456DBD1BECF1E46325B62D24004FF(NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_debugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_debugMode_mA48C95433E4B43F8A4A486DCAA57CABE8E47F171 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_Platform.DebugMode;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_DebugMode() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_set_debugMode_m875E4AD7978EB6DE6386DB8DAE191EBD6E5EA4B9 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => s_Platform.DebugMode = value;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::set_DebugMode(System.Boolean) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Advertisement_get_version_m0F7D3CD4FF1DD2D8FB3F88B063D8EE75034049D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string version => s_Platform.Version;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.Platform.IPlatform::get_Version() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isShowing_mF005B1BBF65F82D7A3331B26EEF8FFA0B41BCF27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isShowing => s_Platform.IsShowing;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_IsShowing() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m65DDA835C7863A3A6F216816F9AD39886DADBFAA (String_t* ___0_gameId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize(gameId, false);
		String_t* L_0 = ___0_gameId;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mCE0B655C8B046A9FB6AD8087647B47C028A989C3(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mCE0B655C8B046A9FB6AD8087647B47C028A989C3 (String_t* ___0_gameId, bool ___1_testMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize(gameId, testMode, null);
		String_t* L_0 = ___0_gameId;
		bool L_1 = ___1_testMode;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343(L_0, L_1, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343 (String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5288AA775893C983428668C2C3DE7154A4254F58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (initializationListener == null)
		RuntimeObject* L_0 = ___2_initializationListener;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("initializationListener is null, you will not receive any callbacks");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5288AA775893C983428668C2C3DE7154A4254F58, NULL);
	}

IL_000d:
	{
		// s_Platform.Initialize(gameId, testMode, new UnityAdsInitializationListenerMainDispatch(initializationListener, s_Platform.UnityLifecycleManager));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_2 = ___0_gameId;
		bool L_3 = ___1_testMode;
		RuntimeObject* L_4 = ___2_initializationListener;
		RuntimeObject* L_5 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_5);
		UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* L_7 = (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648*)il2cpp_codegen_object_new(UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAdsInitializationListenerMainDispatch__ctor_mF2ABB02A80CBE4A3172B19B9EC0B5DE8884E1B37(L_7, L_4, L_6, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(8 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m695F46AFB590B658A0B435F9027B8D64A3DE62D7 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(placementId, null);
		String_t* L_0 = ___0_placementId;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_0, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loadListener == null)
		RuntimeObject* L_0 = ___1_loadListener;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("loadListener is null, you will not receive any callbacks");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8, NULL);
	}

IL_000d:
	{
		// s_Platform.Load(placementId, new UnityAdsLoadListenerMainDispatch(loadListener, s_Platform.UnityLifecycleManager));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_2 = ___0_placementId;
		RuntimeObject* L_3 = ___1_loadListener;
		RuntimeObject* L_4 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_4);
		UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* L_6 = (UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD*)il2cpp_codegen_object_new(UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAdsLoadListenerMainDispatch__ctor_mB24396B2BAFBB8B8D1CD308623A7FEA521118ACB(L_6, L_3, L_5, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(9 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_1, L_2, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(UnityEngine.Advertisements.ShowOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mAF47E7D8C83EFACCD5EBDADEF4EEA4261C688825 (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___0_showOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(null, showOptions, null);
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_0 = ___0_showOptions;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F((String_t*)NULL, L_0, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m6D29C6EC0264A8EDB4EFBA4D49282A019CAB3E03 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, null, null);
		String_t* L_0 = ___0_placementId;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F(L_0, (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD*)NULL, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mE88C7251835BB57036B01C42B9C6CA7D63155E32 (String_t* ___0_placementId, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___1_showOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, showOptions, null);
		String_t* L_0 = ___0_placementId;
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_1 = ___1_showOptions;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F(L_0, L_1, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___0_placementId, RuntimeObject* ___1_showListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, null, showListener);
		String_t* L_0 = ___0_placementId;
		RuntimeObject* L_1 = ___1_showListener;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F(L_0, (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD*)NULL, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mD97A736E31BC882EAA93655679EFFFA9482F591F (String_t* ___0_placementId, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___1_showOptions, RuntimeObject* ___2_showListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showListener == null)
		RuntimeObject* L_0 = ___2_showListener;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("showListener is null, you will not receive any callbacks");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240, NULL);
	}

IL_000d:
	{
		// s_Platform.Show(placementId, showOptions, new UnityAdsShowListenerMainDispatch(showListener, s_Platform.UnityLifecycleManager));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_2 = ___0_placementId;
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_3 = ___1_showOptions;
		RuntimeObject* L_4 = ___2_showListener;
		RuntimeObject* L_5 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_5);
		UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* L_7 = (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177*)il2cpp_codegen_object_new(UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAdsShowListenerMainDispatch__ctor_mC91CA102BE0AFAF3B37F48FF57FA4506CE076E62(L_7, L_4, L_6, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD*, RuntimeObject* >::Invoke(10 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_SetMetaData_m9BF33875888AB1DAB282065CE1563F0C1F78EF71 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___0_metaData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.SetMetaData(metaData);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_1 = ___0_metaData;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* >::Invoke(11 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mFFCC7E5D24C35AF45F2C3FE61A20D60102FF5293 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t* V_4 = NULL;
	UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* V_5 = NULL;
	Banner_tB60B533B960F53183013116DC24FC2712B966C4C* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	try
	{// begin try (depth: 1)
		// IUnityLifecycleManager unityLifecycleManager = new UnityLifecycleManager();
		UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_0 = (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882*)il2cpp_codegen_object_new(UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB(L_0, NULL);
		V_0 = L_0;
		// nativeBanner = new Platform.iOS.IosBanner();
		IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* L_1 = (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B*)il2cpp_codegen_object_new(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IosBanner__ctor_m47EED48FF6224AE89523B2D1757D8AA4EEEF643B(L_1, NULL);
		// nativePlatform = new Platform.iOS.IosPlatform();
		IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* L_2 = (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE*)il2cpp_codegen_object_new(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IosPlatform__ctor_m0E03BB69D8FB05B9050A9FE39665EA5018B14D73(L_2, NULL);
		V_1 = L_2;
		// IBanner banner = new Advertisements.Banner(nativeBanner, unityLifecycleManager);
		RuntimeObject* L_3 = V_0;
		Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_4 = (Banner_tB60B533B960F53183013116DC24FC2712B966C4C*)il2cpp_codegen_object_new(Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39(L_4, L_1, L_3, NULL);
		V_2 = L_4;
		// return new Platform.Platform(nativePlatform, banner, unityLifecycleManager);
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = V_2;
		RuntimeObject* L_7 = V_0;
		Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* L_8 = (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA*)il2cpp_codegen_object_new(Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0(L_8, L_5, L_6, L_7, NULL);
		V_3 = L_8;
		goto IL_0066;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		{
			Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			// catch (Exception exception)
			V_4 = L_9;
		}
		try
		{// begin try (depth: 2)
			// Debug.LogError("Initializing Unity Ads.");
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB)), NULL);
			// Debug.LogError(exception.Message);
			Exception_t* L_10 = V_4;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_10);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
			// }
			goto IL_0040;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003d;
			}
			throw e;
		}

CATCH_003d:
		{// begin catch(System.MissingMethodException)
			MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_12 = ((MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*));;
			// catch (MissingMethodException)
			// {}
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0040;
		}// end catch (depth: 2)

IL_0040:
		{
			// var unsupportedPlatform = new Platform.Unsupported.UnsupportedPlatform();
			UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* L_13 = (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59_il2cpp_TypeInfo_var)));
			NullCheck(L_13);
			UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6(L_13, NULL);
			// var coroutineExecutor = new UnityLifecycleManager();
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_14 = (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var)));
			NullCheck(L_14);
			UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB(L_14, NULL);
			V_5 = L_14;
			// var unsupportedBanner = new Platform.Unsupported.UnsupportedBanner();
			UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* L_15 = (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF_il2cpp_TypeInfo_var)));
			NullCheck(L_15);
			UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246(L_15, NULL);
			// var genericBanner = new Advertisements.Banner(unsupportedBanner, coroutineExecutor);
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_16 = V_5;
			Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_17 = (Banner_tB60B533B960F53183013116DC24FC2712B966C4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var)));
			NullCheck(L_17);
			Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39(L_17, L_15, L_16, NULL);
			V_6 = L_17;
			// return new Platform.Platform(unsupportedPlatform, genericBanner, coroutineExecutor);
			Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_18 = V_6;
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_19 = V_5;
			Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* L_20 = (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var)));
			NullCheck(L_20);
			Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0(L_20, L_13, L_18, L_19, NULL);
			V_3 = L_20;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0066;
		}
	}// end catch (depth: 1)

IL_0066:
	{
		// }
		RuntimeObject* L_21 = V_3;
		return L_21;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsSupported_m8667F8C15F3456DBD1BECF1E46325B62D24004FF (const RuntimeMethod* method) 
{
	{
		// return Application.isEditor || Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)8))? 1 : 0);
	}

IL_0019:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mC169DCAAF163A3CB2D47A027BF6E9D506F3F1474 (const RuntimeMethod* method) 
{
	{
		// Load(null, null);
		Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E((String_t*)NULL, (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mFE610D5ED3081839D46EFEE02879C62B8D6B966A (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___0_options, const RuntimeMethod* method) 
{
	{
		// Load(null, options);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = ___0_options;
		Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E((String_t*)NULL, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_m5C5B43E953C6ADB7A494B29B2C679579E97E5E86 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// Load(placementId, null);
		String_t* L_0 = ___0_placementId;
		Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E(L_0, (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E (String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.Load(placementId, options);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___0_placementId;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_3 = ___1_options;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* >::Invoke(4 /* System.Void UnityEngine.Advertisements.IBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_mE9997CF7E601CC299C5B6C11C6CA074E6A57126C (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// Show(placementId, null);
		String_t* L_0 = ___0_placementId;
		Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3(L_0, (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3 (String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		// if (string.IsNullOrEmpty((placementId)))
		String_t* L_0 = ___0_placementId;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning("placementId is empty");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197, NULL);
	}

IL_0012:
	{
		// s_Platform.Banner.Show(string.IsNullOrEmpty(placementId) ? null : placementId, options);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___0_placementId;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		G_B3_0 = L_3;
		if (L_5)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___0_placementId;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0028:
	{
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_7 = ___1_options;
		NullCheck(G_B5_1);
		InterfaceActionInvoker2< String_t*, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* >::Invoke(5 /* System.Void UnityEngine.Advertisements.IBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, G_B5_1, G_B5_0, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC (bool ___0_destroy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.Hide(destroy);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		bool L_2 = ___0_destroy;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Advertisements.IBanner::Hide(System.Boolean) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8 (int32_t ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.SetPosition(position);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___0_position;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void UnityEngine.Advertisements.IBanner::SetPosition(UnityEngine.Advertisements.BannerPosition) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement/Banner::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_isLoaded_m60FC1B700C59644D92131B2C28218ABB146243FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isLoaded => s_Platform.Banner.IsLoaded;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.Advertisements.IBanner::get_IsLoaded() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->___U3CUnityLifecycleManagerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Banner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_IsLoaded_m442AE4E4332886CA887C2901F125DEDF74469076 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsLoaded => m_NativeBanner.IsLoaded;
		RuntimeObject* L_0 = __this->___m_NativeBanner_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Advertisements.INativeBanner::get_IsLoaded() */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Banner::get_ShowAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_ShowAfterLoad_m0F5758A87EC97CB00326193263FA91BAF27DB9A4 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = __this->___U3CShowAfterLoadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Banner::set_ShowAfterLoad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_set_ShowAfterLoad_m4748C54A24F9F34CDCFA582DC64D5D539DCD83CF (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowAfterLoadU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, RuntimeObject* ___0_nativeBanner, RuntimeObject* ___1_unityLifecycleManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Banner(INativeBanner nativeBanner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NativeBanner = nativeBanner;
		RuntimeObject* L_0 = ___0_nativeBanner;
		__this->___m_NativeBanner_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NativeBanner_2), (void*)L_0);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_1 = ___1_unityLifecycleManager;
		__this->___U3CUnityLifecycleManagerU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityLifecycleManagerU3Ek__BackingField_0), (void*)L_1);
		// m_NativeBanner.SetupBanner(this);
		RuntimeObject* L_2 = __this->___m_NativeBanner_2;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativeBanner::SetupBanner(UnityEngine.Advertisements.IBanner) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_2, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mF9AF0805B1312D1430FF8C9B034C81068F453289 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_loadOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Load(placementId, loadOptions);
		RuntimeObject* L_0 = __this->___m_NativeBanner_2;
		String_t* L_1 = ___0_placementId;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ___1_loadOptions;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativeBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m661CD517BDB0ED56DA8E07145C09877DE6C4E2BD (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_showOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Show(placementId, showOptions);
		RuntimeObject* L_0 = __this->___m_NativeBanner_2;
		String_t* L_1 = ___0_placementId;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ___1_showOptions;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativeBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mA4CAE84741A6D00B02A270661712FF2AF11C79E3 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, bool ___0_destroy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Hide(destroy);
		RuntimeObject* L_0 = __this->___m_NativeBanner_2;
		bool L_1 = ___0_destroy;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativeBanner::Hide(System.Boolean) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m4FDEDF04AF2BE1D18B2943B3F790DE780E65510A (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.SetPosition(position);
		RuntimeObject* L_0 = __this->___m_NativeBanner_2;
		int32_t L_1 = ___0_position;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void UnityEngine.Advertisements.INativeBanner::SetPosition(UnityEngine.Advertisements.BannerPosition) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidShow(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidShow_m5B765AE737AB14ED9F65E362E6A43DC01DEA0CD2 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_bannerOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_m83D21DBCD758480DC5D6BE235E27E430BA787DE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* V_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* L_0 = (U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m4747FA100A6EF589C36DC877BD8A95B32955A760(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* L_1 = V_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ___1_bannerOptions;
		NullCheck(L_1);
		L_1->___bannerOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bannerOptions_0), (void*)L_2);
		// var showCallback = bannerOptions?.showCallback;
		U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_4 = L_3->___bannerOptions_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_6;
		L_6 = BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline(G_B2_0, NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (showCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.showCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline(__this, NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_m83D21DBCD758480DC5D6BE235E27E430BA787DE4_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidHide(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidHide_m09394537E2EDAEBE7C3C6CC361A3E08C60F3DE7B (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_bannerOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_m90924D5BE72D0034ACA272502C839D02F730056B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* V_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* L_0 = (U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m4E11E903A9092380909C5373A53CBE051DEFBDBF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* L_1 = V_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ___1_bannerOptions;
		NullCheck(L_1);
		L_1->___bannerOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bannerOptions_0), (void*)L_2);
		// var hideCallback = bannerOptions?.hideCallback;
		U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_4 = L_3->___bannerOptions_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_6;
		L_6 = BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline(G_B2_0, NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (hideCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.hideCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline(__this, NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_m90924D5BE72D0034ACA272502C839D02F730056B_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerClick(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerClick_mFD37A3761C965E9B5B3736ED4134133B61A3D844 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_bannerOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_m15C25D8C1F85ADDC9526CC3E7B67F27A479B0A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* V_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* L_0 = (U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mA9CEB57A912B3A7F8EADB9E6EAD30A53157EFED7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* L_1 = V_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ___1_bannerOptions;
		NullCheck(L_1);
		L_1->___bannerOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bannerOptions_0), (void*)L_2);
		// var clickCallback = bannerOptions?.clickCallback;
		U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_4 = L_3->___bannerOptions_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_6;
		L_6 = BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline(G_B2_0, NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (clickCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.clickCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline(__this, NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_m15C25D8C1F85ADDC9526CC3E7B67F27A479B0A80_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidLoad(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidLoad_m60D642C8AEB283AEAB542E12F1E8F1E6358251B5 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_bannerOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m4A55FFC194EAE6706816F896828907443C60401B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* V_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B2_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B1_0 = NULL;
	LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* L_0 = (U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m4F22653F77E1FCA2D39FDFB286E2D73AAB63B6F7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* L_1 = V_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ___1_bannerOptions;
		NullCheck(L_1);
		L_1->___bannerOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bannerOptions_0), (void*)L_2);
		// var loadCallback = bannerOptions?.loadCallback;
		U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* L_3 = V_0;
		NullCheck(L_3);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_4 = L_3->___bannerOptions_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_6;
		L_6 = BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline(G_B2_0, NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (loadCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.loadCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline(__this, NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m4A55FFC194EAE6706816F896828907443C60401B_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidError(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidError_mE4F8CE5706D59D32B2EF44811913E302C3E1A17B (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, String_t* ___0_message, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_bannerOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_m67047D405FBF5FAB8A9DFCB832268BC59D83CF6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* V_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B2_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B1_0 = NULL;
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* L_0 = (U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_m3C81E7699582016CE9F3C30E78E41CED45F6C5BE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* L_1 = V_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ___1_bannerOptions;
		NullCheck(L_1);
		L_1->___bannerOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___bannerOptions_0), (void*)L_2);
		U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* L_3 = V_0;
		String_t* L_4 = ___0_message;
		NullCheck(L_3);
		L_3->___message_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___message_1), (void*)L_4);
		// var errorCallback = bannerOptions?.errorCallback;
		U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* L_5 = V_0;
		NullCheck(L_5);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_6 = L_5->___bannerOptions_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = ((ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029*)(NULL));
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_8;
		L_8 = BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline(G_B2_0, NULL);
		G_B3_0 = L_8;
	}

IL_0026:
	{
		// if (errorCallback != null)
		if (!G_B3_0)
		{
			goto IL_0044;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.errorCallback(message ?? "");
		// });
		RuntimeObject* L_9;
		L_9 = Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline(__this, NULL);
		RuntimeObject* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_m67047D405FBF5FAB8A9DFCB832268BC59D83CF6E_RuntimeMethod_var), NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, G_B6_0, L_12);
	}

IL_0044:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m4747FA100A6EF589C36DC877BD8A95B32955A760 (U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::<UnityAdsBannerDidShow>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_m83D21DBCD758480DC5D6BE235E27E430BA787DE4 (U3CU3Ec__DisplayClass15_0_t6C38025BEDA9768EBCC9BC0CF6C3BC9A4A857F62* __this, const RuntimeMethod* method) 
{
	{
		// bannerOptions.showCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___bannerOptions_0;
		NullCheck(L_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_1;
		L_1 = BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline(L_0, NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_1, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m4E11E903A9092380909C5373A53CBE051DEFBDBF (U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::<UnityAdsBannerDidHide>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_m90924D5BE72D0034ACA272502C839D02F730056B (U3CU3Ec__DisplayClass16_0_t3298F9AED3574B59E2648A0C1346FCAD307889B4* __this, const RuntimeMethod* method) 
{
	{
		// bannerOptions.hideCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___bannerOptions_0;
		NullCheck(L_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_1;
		L_1 = BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline(L_0, NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_1, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA9CEB57A912B3A7F8EADB9E6EAD30A53157EFED7 (U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::<UnityAdsBannerClick>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_m15C25D8C1F85ADDC9526CC3E7B67F27A479B0A80 (U3CU3Ec__DisplayClass17_0_t9A6913ED7D5B9D5EE92072DB5F66E194C1FE10DB* __this, const RuntimeMethod* method) 
{
	{
		// bannerOptions.clickCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___bannerOptions_0;
		NullCheck(L_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_1;
		L_1 = BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline(L_0, NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_1, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m4F22653F77E1FCA2D39FDFB286E2D73AAB63B6F7 (U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::<UnityAdsBannerDidLoad>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m4A55FFC194EAE6706816F896828907443C60401B (U3CU3Ec__DisplayClass18_0_tFAC5BF2C63DD4C89FA1650F2930F3E9466C342FD* __this, const RuntimeMethod* method) 
{
	{
		// bannerOptions.loadCallback();
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = __this->___bannerOptions_0;
		NullCheck(L_0);
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_1;
		L_1 = BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline(L_0, NULL);
		NullCheck(L_1);
		LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline(L_1, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m3C81E7699582016CE9F3C30E78E41CED45F6C5BE (U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::<UnityAdsBannerDidError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_m67047D405FBF5FAB8A9DFCB832268BC59D83CF6E (U3CU3Ec__DisplayClass19_0_tC82D6DD127E32BDC651E58C21B2833BD7B88B829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* G_B1_1 = NULL;
	{
		// bannerOptions.errorCallback(message ?? "");
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = __this->___bannerOptions_0;
		NullCheck(L_0);
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_1;
		L_1 = BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline(L_0, NULL);
		String_t* L_2 = __this->___message_1;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline(G_B2_1, G_B2_0, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = __this->___U3CloadCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_loadCallback(UnityEngine.Advertisements.BannerLoadOptions/LoadCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = ___0_value;
		__this->___U3CloadCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = __this->___U3CerrorCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_errorCallback(UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = ___0_value;
		__this->___U3CerrorCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions__ctor_m866C2FA6DEA20A35F7FBE25536D96BD563D1CFE7 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Multicast(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* currentDelegate = reinterpret_cast<LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenInst(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStatic(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStaticInvoker(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_ClosedStaticInvoker(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadCallback_BeginInvoke_m02A93BA6D20D9D0B0064C7B418AD37CE20EE6841 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_EndInvoke_m3A434EEDAE14DE0F904E1AA76BEFDAC3A390211D (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Multicast(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* currentDelegate = reinterpret_cast<ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenInst(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStatic(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStaticInvoker(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_ClosedStaticInvoker(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorCallback_BeginInvoke_mC8B1C65043AB79A4EC1D785EAAF872A4DA0AF123 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_EndInvoke_m35620ED255897F7A4AB358326A1CA9BF18BF8700 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CshowCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_showCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3CshowCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CshowCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3ChideCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_hideCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3ChideCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChideCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CclickCallbackU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_clickCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___0_value;
		__this->___U3CclickCallbackU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclickCallbackU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions__ctor_m5D0194C2660940617F25552DB827D41D10878A60 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Multicast(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* currentDelegate = reinterpret_cast<BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenInst(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStatic(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStaticInvoker(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_ClosedStaticInvoker(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.BannerOptions/BannerCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerCallback_BeginInvoke_mE972EB06F67266A2A2BB189225D030FDF6260890 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_EndInvoke_m54A738BAF902D9C7B879D00BB537C724DF145DB9 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Advertisements.Configuration::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_get_enabled_mCBF6B4CED103DF0A4C32454021CA8E17CDA74CCF (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled { get; }
		bool L_0 = __this->___U3CenabledU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Configuration::get_defaultPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_mAB060316687DE33F90FF27429524F28679310509 (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, const RuntimeMethod* method) 
{
	{
		// public string defaultPlacement { get; }
		String_t* L_0 = __this->___U3CdefaultPlacementU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Configuration::get_placements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* Configuration_get_placements_mE3E678A58FDF7A749AC0479A8B167B63900C3164 (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, bool> placements { get; }
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = __this->___U3CplacementsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Configuration::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mE21B5EE6481C52C30E914F440A0F7848AF493362 (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, String_t* ___0_configurationResponse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral129F45EE853C8888E072C8BD92C8D75F5E6130EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB33678B599704543406B12FACBA3E107A0064D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// public Configuration(string configurationResponse)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var configurationJson = (Dictionary<string, object>)Json.Deserialize(configurationResponse);
		String_t* L_0 = ___0_configurationResponse;
		RuntimeObject* L_1;
		L_1 = Json_Deserialize_m0176FA19A2AE215B8FF1AEDE908B7617DA71C63E(L_0, NULL);
		V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)CastclassClass((RuntimeObject*)L_1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		// enabled = (bool)configurationJson["enabled"];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		__this->___U3CenabledU3Ek__BackingField_0 = ((*(bool*)((bool*)(bool*)UnBox(L_3, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		// placements = new Dictionary<string, bool>();
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_4 = (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*)il2cpp_codegen_object_new(Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D(L_4, Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		__this->___U3CplacementsU3Ek__BackingField_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementsU3Ek__BackingField_2), (void*)L_4);
		// foreach (Dictionary<string, object> placement in (List<object>)configurationJson["placements"])
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteralEB33678B599704543406B12FACBA3E107A0064D7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_6, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var)));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_7;
		L_7 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_6, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var)), List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009e_1;
			}

IL_004b_1:
			{
				// foreach (Dictionary<string, object> placement in (List<object>)configurationJson["placements"])
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				// var id = (string)placement["id"];
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)CastclassClass((RuntimeObject*)L_8, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_9, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
				// var allowSkip = (bool)placement["allowSkip"];
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = L_9;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteral129F45EE853C8888E072C8BD92C8D75F5E6130EE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
				V_3 = ((*(bool*)((bool*)(bool*)UnBox(L_12, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
				// if ((bool)placement["default"])
				NullCheck(L_11);
				RuntimeObject* L_13;
				L_13 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
				if (!((*(bool*)((bool*)(bool*)UnBox(L_13, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
				{
					goto IL_0091_1;
				}
			}
			{
				// defaultPlacement = id;
				String_t* L_14 = V_2;
				__this->___U3CdefaultPlacementU3Ek__BackingField_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdefaultPlacementU3Ek__BackingField_1), (void*)L_14);
			}

IL_0091_1:
			{
				// placements.Add(id, allowSkip);
				Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_15;
				L_15 = Configuration_get_placements_mE3E678A58FDF7A749AC0479A8B167B63900C3164_inline(__this, NULL);
				String_t* L_16 = V_2;
				bool L_17 = V_3;
				NullCheck(L_15);
				Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_15, L_16, L_17, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
			}

IL_009e_1:
			{
				// foreach (Dictionary<string, object> placement in (List<object>)configurationJson["placements"])
				bool L_18;
				L_18 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_00b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch__ctor_mF2ABB02A80CBE4A3172B19B9EC0B5DE8884E1B37 (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* __this, RuntimeObject* ___0_initializationListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) 
{
	{
		// public UnityAdsInitializationListenerMainDispatch(IUnityAdsInitializationListener initializationListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_InitializationListener = initializationListener;
		RuntimeObject* L_0 = ___0_initializationListener;
		__this->___m_InitializationListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InitializationListener_0), (void*)L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___1_lifecycleManager;
		__this->___m_LifecycleManager_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LifecycleManager_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_OnInitializationComplete_m3F574F08BDCC7C37F77E7A23DBD4A87ABFEBD516 (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_mFF9220DE776EC5910A9D7AFB00A7CFD322DB6E51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
		RuntimeObject* L_0 = __this->___m_LifecycleManager_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_mFF9220DE776EC5910A9D7AFB00A7CFD322DB6E51_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_OnInitializationFailed_m85CA948CB74E5EA43C6DD91BD292F2926D8455F6 (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_m98AB7A0529A5CCE24EEAE6BF06BF2BF2FC7A7659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* L_0 = (U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m5E055A48B47F27C369B62EDD5AA6C4CB38B5C5D4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* L_2 = V_0;
		int32_t L_3 = ___0_error;
		NullCheck(L_2);
		L_2->___error_1 = L_3;
		U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* L_4 = V_0;
		String_t* L_5 = ___1_message;
		NullCheck(L_4);
		L_4->___message_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___message_2), (void*)L_5);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
		RuntimeObject* L_6 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_m98AB7A0529A5CCE24EEAE6BF06BF2BF2FC7A7659_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_6, L_8);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::<OnInitializationComplete>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_mFF9220DE776EC5910A9D7AFB00A7CFD322DB6E51 (UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
		RuntimeObject* L_0 = __this->___m_InitializationListener_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5E055A48B47F27C369B62EDD5AA6C4CB38B5C5D4 (U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::<OnInitializationFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_m98AB7A0529A5CCE24EEAE6BF06BF2BF2FC7A7659 (U3CU3Ec__DisplayClass4_0_tCCA8575A25C18751CF5BE8FE24AA92670654BA82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
		UnityAdsInitializationListenerMainDispatch_tC73E6A9A4220FDA88808C426ED68D3640F6EB648* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_InitializationListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		int32_t L_3 = __this->___error_1;
		String_t* L_4 = __this->___message_2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch__ctor_mB24396B2BAFBB8B8D1CD308623A7FEA521118ACB (UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* __this, RuntimeObject* ___0_loadListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) 
{
	{
		// public UnityAdsLoadListenerMainDispatch(IUnityAdsLoadListener loadListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_LoadListener = loadListener;
		RuntimeObject* L_0 = ___0_loadListener;
		__this->___m_LoadListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LoadListener_0), (void*)L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___1_lifecycleManager;
		__this->___m_LifecycleManager_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LifecycleManager_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch_OnUnityAdsAdLoaded_mF2B5A49C9AA3F474864CFED5053F2A2B482962C9 (UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m5EE4BF9DAEC86927DA84958582315885D55FC6D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* L_0 = (U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mB906CFF2F656859346B52B729E63E6DE39E12B85(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
		RuntimeObject* L_4 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m5EE4BF9DAEC86927DA84958582315885D55FC6D0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch_OnUnityAdsFailedToLoad_m99373259D9E6FFA7A00FA79966F71FA66A776823 (UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_m4CA70EC534C1864180AB34F897EAE2F7072E8646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_0 = (U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mE5FF6BC01880890F5D28D80BDCDCD5FCB4A03E2B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_4 = V_0;
		int32_t L_5 = ___1_error;
		NullCheck(L_4);
		L_4->___error_2 = L_5;
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_6 = V_0;
		String_t* L_7 = ___2_message;
		NullCheck(L_6);
		L_6->___message_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___message_3), (void*)L_7);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
		RuntimeObject* L_8 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_m4CA70EC534C1864180AB34F897EAE2F7072E8646_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB906CFF2F656859346B52B729E63E6DE39E12B85 (U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::<OnUnityAdsAdLoaded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m5EE4BF9DAEC86927DA84958582315885D55FC6D0 (U3CU3Ec__DisplayClass3_0_tCA30DF24336529019A08BE4173AB39DF118152BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
		UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_LoadListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mE5FF6BC01880890F5D28D80BDCDCD5FCB4A03E2B (U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::<OnUnityAdsFailedToLoad>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_m4CA70EC534C1864180AB34F897EAE2F7072E8646 (U3CU3Ec__DisplayClass4_0_tEE3E50E7D6A1597C9A65C2F3771967DC7282F72D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
		UnityAdsLoadListenerMainDispatch_t9E67A95EEF47EFA1236ECAA9371791108CC706DD* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_LoadListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		int32_t L_4 = __this->___error_2;
		String_t* L_5 = __this->___message_3;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch__ctor_mC91CA102BE0AFAF3B37F48FF57FA4506CE076E62 (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, RuntimeObject* ___0_showListener, RuntimeObject* ___1_lifecycleManager, const RuntimeMethod* method) 
{
	{
		// public UnityAdsShowListenerMainDispatch(IUnityAdsShowListener showListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_ShowListener = showListener;
		RuntimeObject* L_0 = ___0_showListener;
		__this->___m_ShowListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ShowListener_0), (void*)L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___1_lifecycleManager;
		__this->___m_LifecycleManager_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LifecycleManager_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowFailure_mA172EEDE4E56C03CDD44C9B8B89EE310E65C6787 (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_m962272B8C13209EB182591F825BBFA897E7C45D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_0 = (U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m3A7281913C593B0472B7BE84390ADC5522C63117(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_4 = V_0;
		int32_t L_5 = ___1_error;
		NullCheck(L_4);
		L_4->___error_2 = L_5;
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_6 = V_0;
		String_t* L_7 = ___2_message;
		NullCheck(L_6);
		L_6->___message_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___message_3), (void*)L_7);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
		RuntimeObject* L_8 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_m962272B8C13209EB182591F825BBFA897E7C45D9_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowStart_m50D0D64B5AAC5633641700C4B87234C271DEB6AE (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m4628C13D4C4EDB481680D18FFE87F81B2E293528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* L_0 = (U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mEF502DD172075C7FECF90811DE82E7C4D98EF4BE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
		RuntimeObject* L_4 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m4628C13D4C4EDB481680D18FFE87F81B2E293528_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowClick_m8AB08D3F969664C46E7DBDADDD2E11253C0E5585 (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m20AA6CCE43A0C8735DABE6C74EABD69E5E6C15E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* L_0 = (U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m4628F07EAEB71AD9CB29B08AA7AE4A569ECA2D51(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
		RuntimeObject* L_4 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m20AA6CCE43A0C8735DABE6C74EABD69E5E6C15E5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowComplete_m4AC0B79B50A55D077DF28C759DE051DE591D10CB (UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* __this, String_t* ___0_placementId, int32_t ___1_showCompletionState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_m4702F0FAB42972493A239E6987533D29F6F0C0B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* L_0 = (U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m05C92017BD1C1B0579C2D74A1169320776321F37(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* L_2 = V_0;
		String_t* L_3 = ___0_placementId;
		NullCheck(L_2);
		L_2->___placementId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___placementId_1), (void*)L_3);
		U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* L_4 = V_0;
		int32_t L_5 = ___1_showCompletionState;
		NullCheck(L_4);
		L_4->___showCompletionState_2 = L_5;
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		RuntimeObject* L_6 = __this->___m_LifecycleManager_1;
		U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_m4702F0FAB42972493A239E6987533D29F6F0C0B1_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_6, L_8);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3A7281913C593B0472B7BE84390ADC5522C63117 (U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::<OnUnityAdsShowFailure>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_m962272B8C13209EB182591F825BBFA897E7C45D9 (U3CU3Ec__DisplayClass3_0_t2AA593008CAA0CCBFF0BB57AA6088C401FB8D5ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
		UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ShowListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		int32_t L_4 = __this->___error_2;
		String_t* L_5 = __this->___message_3;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mEF502DD172075C7FECF90811DE82E7C4D98EF4BE (U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::<OnUnityAdsShowStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m4628C13D4C4EDB481680D18FFE87F81B2E293528 (U3CU3Ec__DisplayClass4_0_t55A772FB4A508EDA1EB6B441AA39636D77FC940B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
		UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ShowListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4628F07EAEB71AD9CB29B08AA7AE4A569ECA2D51 (U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::<OnUnityAdsShowClick>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m20AA6CCE43A0C8735DABE6C74EABD69E5E6C15E5 (U3CU3Ec__DisplayClass5_0_t2F4D22A19A6FF07FA7DC885B020032CC13D779BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
		UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ShowListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m05C92017BD1C1B0579C2D74A1169320776321F37 (U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::<OnUnityAdsShowComplete>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_m4702F0FAB42972493A239E6987533D29F6F0C0B1 (U3CU3Ec__DisplayClass6_0_tB607B5FFAC50746985181999140FF245535B036C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		UnityAdsShowListenerMainDispatch_t86A32944EFB142EA66205DA3CFDD3113DD191177* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ShowListener_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->___placementId_1;
		int32_t L_4 = __this->___showCompletionState_2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->___U3CcategoryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CcategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<string, object> m_MetaData = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___m_MetaData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MetaData_0), (void*)L_0);
		// public MetaData(string category)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.category = category;
		String_t* L_1 = ___0_category;
		MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MetaData[key] = value;
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		String_t* L_1 = ___0_key;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Object UnityEngine.Advertisements.MetaData::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Get_m929996ABB8FD9EA6AB04466361F87AA9AD3C2286 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_MetaData[key];
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_mC60E8FEDBF17C5ACA56B847F3ACFD75208F9A5DD (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mFD2AF853F6F25C473A93FE898C2BF8D2C6C826C1 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// return Json.Serialize(m_MetaData);
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		String_t* L_1;
		L_1 = Json_Serialize_m1C4FF3782DC29AAFAB04A88BB4C656001BC82D64(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_mD8397CD48024E1B7377D72AA2D10D36AD4A3352F (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, RuntimeObject* ___0_initializationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidInitializationListener(IUnityAdsInitializationListener initializationListener) : base(CLASS_REFERENCE) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327, NULL);
		// m_ManagedListener = initializationListener;
		RuntimeObject* L_0 = ___0_initializationListener;
		__this->___m_ManagedListener_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationComplete_mEA1FF2313E39C2428AB8927EC20BE16A54354224 (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->___m_ManagedListener_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationFailed(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationFailed_mC67E18394023D0EC62A082EBA31F50092549FF1C (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_error, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m79BFD04962395F2F98C54430F8CDA3C67120C8E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationFailed(EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsInitializationError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->___m_ManagedListener_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_error;
		int32_t L_3;
		L_3 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m79BFD04962395F2F98C54430F8CDA3C67120C8E1(L_2, 0, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m79BFD04962395F2F98C54430F8CDA3C67120C8E1_RuntimeMethod_var);
		String_t* L_4 = ___1_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_mE4A5C2D2C504D65DEE14F507DB6E9C830E39D4FF (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, RuntimeObject* ___0_loadListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidLoadListener(IUnityAdsLoadListener loadListener) : base(CLASS_REFERENCE) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79, NULL);
		// m_ManagedListener = loadListener;
		RuntimeObject* L_0 = ___0_loadListener;
		__this->___m_ManagedListener_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsAdLoaded_m773EFB625F840DF3DF34A6D2E5501756C8499171 (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_0 = __this->___m_ManagedListener_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsFailedToLoad(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsFailedToLoad_mEF9AC0598A47727AF499E0B9BFA186A268383668 (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, String_t* ___0_placementId, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_mFF9CBA9A273B94D754FDE94E4E58B9D7C13C5604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsFailedToLoad(placementId, EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsLoadError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->___m_ManagedListener_5;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___0_placementId;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___1_error;
		int32_t L_4;
		L_4 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_mFF9CBA9A273B94D754FDE94E4E58B9D7C13C5604(L_3, 5, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_mFF9CBA9A273B94D754FDE94E4E58B9D7C13C5604_RuntimeMethod_var);
		String_t* L_5 = ___2_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2, L_4, L_5);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_mDA962C9A0AE9098F61C0FB811C4B5F3475F69C3C (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, RuntimeObject* ___0_platform, RuntimeObject* ___1_showListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidShowListener(IPlatform platform, IUnityAdsShowListener showListener) : base(OBJECT_ID) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192, NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___0_platform;
		__this->___m_Platform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Platform_5), (void*)L_0);
		// m_ManagedListener = showListener;
		RuntimeObject* L_1 = ___1_showListener;
		__this->___m_ManagedListener_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowFailure(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowFailure_mBB96E70EFC1A7C4462C52CFA3FB5DCC3C78EF8CD (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___0_placementId, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m5A75DEB3C3F072DA5FAE171096FD0E1E3549E1B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var enumError = EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsShowError.UNKNOWN);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___1_error;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m5A75DEB3C3F072DA5FAE171096FD0E1E3549E1B3(L_0, 7, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m5A75DEB3C3F072DA5FAE171096FD0E1E3549E1B3_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_2 = __this->___m_Platform_5;
		String_t* L_3 = ___0_placementId;
		int32_t L_4 = V_0;
		String_t* L_5 = ___2_message;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(12 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// m_ManagedListener?.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_6 = __this->___m_ManagedListener_6;
		RuntimeObject* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		String_t* L_8 = ___0_placementId;
		int32_t L_9 = V_0;
		String_t* L_10 = ___2_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowStart_mBFF0BF90241AE06FF430321832475231271F4B49 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->___m_Platform_5;
		String_t* L_1 = ___0_placementId;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowStart(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_2 = __this->___m_ManagedListener_6;
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowClick_m9F36659AF386DBAF68A19A3690241F20262573F6 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->___m_Platform_5;
		String_t* L_1 = ___0_placementId;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(14 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowClick(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_2 = __this->___m_ManagedListener_6;
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowComplete(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowComplete_mE8F9996F082B81F7CD29D3420A1EBE5890A690C5 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___0_placementId, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_mCBE62A8AF1A2A18B2B7693541EBA2BBC6A7C3C5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var showCompletionState = EnumUtilities.GetEnumFromAndroidJavaObject(state, UnityAdsShowCompletionState.UNKNOWN);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___1_state;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_mCBE62A8AF1A2A18B2B7693541EBA2BBC6A7C3C5C(L_0, 2, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_mCBE62A8AF1A2A18B2B7693541EBA2BBC6A7C3C5C_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_2 = __this->___m_Platform_5;
		String_t* L_3 = ___0_placementId;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(15 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// m_ManagedListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_5 = __this->___m_ManagedListener_6;
		RuntimeObject* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		String_t* L_7 = ___0_placementId;
		int32_t L_8 = V_0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD(intptr_t ___0_ptr, char* ___1_placementId, int32_t ___2_error, char* ___3_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Marshaling of parameter '___3_message' to managed representation
	String_t* ____3_message_unmarshaled = NULL;
	____3_message_unmarshaled = il2cpp_codegen_marshal_string_result(___3_message);

	// Managed method invocation
	IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD(___0_ptr, ____1_placementId_unmarshaled, ___2_error, ____3_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F(intptr_t ___0_ptr, char* ___1_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Managed method invocation
	IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F(___0_ptr, ____1_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC(intptr_t ___0_ptr, char* ___1_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Managed method invocation
	IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC(___0_ptr, ____1_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D(intptr_t ___0_ptr, char* ___1_placementId, int32_t ___2_completionState)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Managed method invocation
	IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D(___0_ptr, ____1_placementId_unmarshaled, ___2_completionState, NULL);

}
// System.IntPtr UnityEngine.Advertisements.IosShowListener::ShowListenerCreate(UnityEngine.Advertisements.IosShowListener/ShowFailureCallback,UnityEngine.Advertisements.IosShowListener/ShowStartCallback,UnityEngine.Advertisements.IosShowListener/ShowClickCallback,UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosShowListener_ShowListenerCreate_m7C2EA72BA898DEC6B45DB11DDBCCDB195FC9BBAF (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* ___0_showFailureCallback, ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* ___1_showStartCallback, ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* ___2_showClickCallback, ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* ___3_showCompleteCallback, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_showFailureCallback' to native representation
	Il2CppMethodPointer ____0_showFailureCallback_marshaled = NULL;
	____0_showFailureCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_showFailureCallback));

	// Marshaling of parameter '___1_showStartCallback' to native representation
	Il2CppMethodPointer ____1_showStartCallback_marshaled = NULL;
	____1_showStartCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_showStartCallback));

	// Marshaling of parameter '___2_showClickCallback' to native representation
	Il2CppMethodPointer ____2_showClickCallback_marshaled = NULL;
	____2_showClickCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_showClickCallback));

	// Marshaling of parameter '___3_showCompleteCallback' to native representation
	Il2CppMethodPointer ____3_showCompleteCallback_marshaled = NULL;
	____3_showCompleteCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_showCompleteCallback));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsShowListenerCreate)(____0_showFailureCallback_marshaled, ____1_showStartCallback_marshaled, ____2_showClickCallback_marshaled, ____3_showCompleteCallback_marshaled);

	return returnValue;
}
// System.Void UnityEngine.Advertisements.IosShowListener::ShowListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_ShowListenerDestroy_mC3F3AB16B7C4AD7628AB0E3E8CDAF451E589323E (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsShowListenerDestroy)(___0_ptr);

}
// System.Void UnityEngine.Advertisements.IosShowListener::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener__ctor_mA643087226F8596C5627EE0AF6170BDCD8200B88 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IosShowListener(IUnityAdsShowListener unityAdsInternalListener, IUnityAdsShowListener userListener)
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8(__this, NULL);
		// NativePtr = ShowListenerCreate(OnShowFailure, OnShowStart, OnShowClick, OnShowComplete);
		ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* L_0 = (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4*)il2cpp_codegen_object_new(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShowFailureCallback__ctor_m897C659A20060FF543E77FEEB6C31143BA04AD3B(L_0, NULL, (intptr_t)((void*)IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD_RuntimeMethod_var), NULL);
		ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* L_1 = (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E*)il2cpp_codegen_object_new(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ShowStartCallback__ctor_m294FC5864A920A16EAEA7C98E2B8A9F9A84156FD(L_1, NULL, (intptr_t)((void*)IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F_RuntimeMethod_var), NULL);
		ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* L_2 = (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2*)il2cpp_codegen_object_new(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ShowClickCallback__ctor_mBB13232BAE893C111CEB06852A6A0494AA9B8A26(L_2, NULL, (intptr_t)((void*)IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC_RuntimeMethod_var), NULL);
		ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* L_3 = (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325*)il2cpp_codegen_object_new(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ShowCompleteCallback__ctor_mF851FB924D286AA7C6A95A1172B4D3DB48CFC190(L_3, NULL, (intptr_t)((void*)IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D_RuntimeMethod_var), NULL);
		intptr_t L_4;
		L_4 = IosShowListener_ShowListenerCreate_m7C2EA72BA898DEC6B45DB11DDBCCDB195FC9BBAF(L_0, L_1, L_2, L_3, NULL);
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_4, NULL);
		// m_UnityAdsInternalListener = unityAdsInternalListener;
		RuntimeObject* L_5 = ___0_unityAdsInternalListener;
		__this->___m_UnityAdsInternalListener_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)L_5);
		// m_UserListener = userListener;
		RuntimeObject* L_6 = ___1_userListener;
		__this->___m_UserListener_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_Dispose_mADCC8A42CCF6D51FB69CFBBF7997BD7722CE5751 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// ShowListenerDestroy(NativePtr);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		IosShowListener_ShowListenerDestroy_mC3F3AB16B7C4AD7628AB0E3E8CDAF451E589323E(L_3, NULL);
		// NativePtr = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_4, NULL);
		// m_UnityAdsInternalListener = null;
		__this->___m_UnityAdsInternalListener_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)(RuntimeObject*)NULL);
		// m_UserListener = null;
		__this->___m_UserListener_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m251263851C162468F7F488A647B130E75B11BE45 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowFailure(placementId, error, message);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		int32_t L_3 = ___1_error;
		String_t* L_4 = ___2_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
	}

IL_0014:
	{
		// m_UserListener?.OnUnityAdsShowFailure(placementId, error, message);
		RuntimeObject* L_5 = __this->___m_UserListener_3;
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		String_t* L_7 = ___0_placementId;
		int32_t L_8 = ___1_error;
		String_t* L_9 = ___2_message;
		NullCheck(G_B5_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B5_0, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_m7AC17878AD4E4507EA9DBEFE0C5EC002D45C5CF3 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// m_UserListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_3 = __this->___m_UserListener_3;
		RuntimeObject* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___0_placementId;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B5_0, L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m77DB799629ADE2776F17994754037D4F7A213983 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// m_UserListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_3 = __this->___m_UserListener_3;
		RuntimeObject* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___0_placementId;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B5_0, L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m84E57FA3EB5465801F9960547800A5F6141DB3A6 (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* __this, String_t* ___0_placementId, int32_t ___1_showCompletionState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		int32_t L_3 = ___1_showCompletionState;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// m_UserListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_4 = __this->___m_UserListener_3;
		RuntimeObject* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		String_t* L_6 = ___0_placementId;
		int32_t L_7 = ___1_showCompletionState;
		NullCheck(G_B5_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B5_0, L_6, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_mBADADD183FD03110BBF651DD49FC8368BF475FFD (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143(L_0, IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowFailure(placementId, (UnityAdsShowError)error, message);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		int32_t L_11 = ___2_error;
		String_t* L_12 = ___3_message;
		NullCheck(L_9);
		IosShowListener_OnShowFailure_m251263851C162468F7F488A647B130E75B11BE45(L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_mEBD5F85F337E03ED4C006C531C0ADBEBDC65270F (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143(L_0, IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowStart(placementId);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		NullCheck(L_9);
		IosShowListener_OnShowStart_m7AC17878AD4E4507EA9DBEFE0C5EC002D45C5CF3(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m4150FFAE1FC1393598BAF78420CCC604BB7CF0FC (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143(L_0, IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowClick(placementId);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		NullCheck(L_9);
		IosShowListener_OnShowClick_m77DB799629ADE2776F17994754037D4F7A213983(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m18CF99E5FA9F8869CE328EF3974E8363F1E45B6D (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143(L_0, IosNativeObject_Get_TisIosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_m6969987D8137499472AD194C25168C2B2932A143_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowComplete(placementId, (UnityAdsShowCompletionState)completionState);
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		int32_t L_11 = ___2_completionState;
		NullCheck(L_9);
		IosShowListener_OnShowComplete_m84E57FA3EB5465801F9960547800A5F6141DB3A6(L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_Multicast(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* currentDelegate = reinterpret_cast<ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, ___2_error, ___3_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_OpenInst(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_error, ___3_message, method);
}
void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_OpenStatic(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_error, ___3_message, method);
}
void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_OpenStaticInvoker(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId, ___2_error, ___3_message);
}
void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_ClosedStaticInvoker(ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId, ___2_error, ___3_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4 (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Marshaling of parameter '___3_message' to native representation
	char* ____3_message_marshaled = NULL;
	____3_message_marshaled = il2cpp_codegen_marshal_string(___3_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled, ___2_error, ____3_message_marshaled);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_message' native representation
	il2cpp_codegen_marshal_free(____3_message_marshaled);
	____3_message_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback__ctor_m897C659A20060FF543E77FEEB6C31143BA04AD3B (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857_Multicast;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::Invoke(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback_Invoke_m1D687849C77F64C39170925F34C60C644F823857 (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, ___2_error, ___3_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::BeginInvoke(System.IntPtr,System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowFailureCallback_BeginInvoke_m6D3258AB326F5926037300C6D6D40C27CF867CAB (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_error);
	__d_args[3] = ___3_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback_EndInvoke_mA5CFFB1DB8F79A098533EA4143101A2D01660CCD (ShowFailureCallback_t10E9016748C9BCA478502AD26D54F331700431F4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_Multicast(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* currentDelegate = reinterpret_cast<ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_OpenInst(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_OpenStatic(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_OpenStaticInvoker(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId);
}
void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_ClosedStaticInvoker(ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback__ctor_m294FC5864A920A16EAEA7C98E2B8A9F9A84156FD (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13_Multicast;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback_Invoke_m8546500DB0ED43B032BF482FAB1A811675487F13 (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowStartCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowStartCallback_BeginInvoke_m4F5A11164D44529E219322176A3AEB0408124F61 (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, intptr_t ___0_ptr, String_t* ___1_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback_EndInvoke_m8DFBFA5B7460812CA4A14FCF44AC93E7CD9FAD59 (ShowStartCallback_t88D346460DA5371518AE291A4D7E414E6DED995E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_Multicast(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* currentDelegate = reinterpret_cast<ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_OpenInst(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_OpenStatic(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_OpenStaticInvoker(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId);
}
void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_ClosedStaticInvoker(ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2 (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback__ctor_mBB13232BAE893C111CEB06852A6A0494AA9B8A26 (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07_Multicast;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback_Invoke_mF191DD886A1210DB6DE03DD3CE4EAC25210FDB07 (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowClickCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowClickCallback_BeginInvoke_mE2A2CB8E6058753238D60ECB4B23CAF9011D99F6 (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback_EndInvoke_m6553DAC4AC77A98BE589B9768A11CCEF6EB1B8AB (ShowClickCallback_t43BAF4D053B6EB052905E34A173D1187BBF1EAD2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_Multicast(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* currentDelegate = reinterpret_cast<ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, ___2_completionState, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_OpenInst(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_completionState, method);
}
void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_OpenStatic(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_completionState, method);
}
void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_OpenStaticInvoker(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId, ___2_completionState);
}
void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_ClosedStaticInvoker(ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId, ___2_completionState);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325 (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled, ___2_completionState);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback__ctor_mF851FB924D286AA7C6A95A1172B4D3DB48CFC190 (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA_Multicast;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::Invoke(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback_Invoke_mA042EB166291A217EE4E533E8160C33D7A81B7AA (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, ___2_completionState, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::BeginInvoke(System.IntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowCompleteCallback_BeginInvoke_mC7911BEB07A6CBAC5FF0365C6936C6D4C0B6794A (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_completionState, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_completionState);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback_EndInvoke_mD00095DBB22DB187C0ECEA20E9AEF5F0632F53E3 (ShowCompleteCallback_tC2437D9883757E17D936EA7BBC4E6DC88D81E325* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918 (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) 
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->___U3CgamerSidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_gamerSid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOptions_set_gamerSid_m0D887D0139E1B5541108DB6A5ED52E6AEBAFE050 (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CgamerSidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgamerSidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOptions__ctor_m0CA74ADE57219DF7DC3749CEB158459D8F755212 (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m39398EF751CC1915AE7EBBD6ED2FFF87570B998B (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7**)(&__this->___OnApplicationQuitEventHandler_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_m4CE5EDB7A1EFB57CB6FEE7AC659836ACAE5A430E (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7**)(&__this->___OnApplicationQuitEventHandler_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_m67876A4AA945EB02636BE04B62A095514FD6B6EA (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, const RuntimeMethod* method) 
{
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	{
		// OnApplicationQuitEventHandler?.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_m9871D183A5361C34A864EC6B2D64C057F9A4A0DD (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.Utilities.AssemblyInfoUtilities::GetCurrentAssemblyInfoVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyInfoUtilities_GetCurrentAssemblyInfoVersion_m1C709D0280B5DFBC0A174B941ED81E06E2324352 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyInfoUtilities_GetCurrentAssemblyInfoVersion_m1C709D0280B5DFBC0A174B941ED81E06E2324352_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Reflection.Assembly.GetExecutingAssembly().GetName().Version.ToString();
		Assembly_t* L_0;
		L_0 = il2cpp_codegen_get_executing_assembly(AssemblyInfoUtilities_GetCurrentAssemblyInfoVersion_m1C709D0280B5DFBC0A174B941ED81E06E2324352_RuntimeMethod_var);
		NullCheck(L_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1;
		L_1 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(17 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2;
		L_2 = AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_mFFBB1E15F39D09DB1C71B318E56FE477E49C9492 (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// lock (queue)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0042;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				goto IL_0029_1;
			}

IL_0013_1:
			{
				// queue.Dequeue()?.Invoke();
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = __this->___queue_5;
				NullCheck(L_4);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
				L_5 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_4, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
				G_B3_0 = L_6;
				if (L_6)
				{
					G_B4_0 = L_6;
					goto IL_0024_1;
				}
			}
			{
				goto IL_0029_1;
			}

IL_0024_1:
			{
				NullCheck(G_B4_0);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
			}

IL_0029_1:
			{
				// while (queue.Count > 0)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_7 = __this->___queue_5;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_7, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				if ((((int32_t)L_8) > ((int32_t)0)))
				{
					goto IL_0013_1;
				}
			}
			{
				// }
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_m82424D7D43C52BB4FA3EE7284AFB4002BB7E74F6 (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.Advertisements.Utilities.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m0176FA19A2AE215B8FF1AEDE908B7617DA71C63E (String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		// if (json == null)
		String_t* L_0 = ___0_json;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___0_json;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_mAC5B42D624A8CFD1EF5D80CBAF7868D1542BD4BD(L_1, NULL);
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.Utilities.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m1C4FF3782DC29AAFAB04A88BB4C656001BC82D64 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = Serializer_Serialize_m1FC8AE2907666BA4DF2959499632B2CCBBB6ABFB(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Advertisements.Utilities.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mA970D8A00C30AB60B6B2F0164808FBE948DBCF30 (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___0_c;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m69423DCB1DDF8173B3C4203C9B042393100ABC3F (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___0_jsonString;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)L_1);
		// }
		return;
	}
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mAC5B42D624A8CFD1EF5D80CBAF7868D1542BD4BD (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___0_jsonString;
		Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* L_1 = (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6*)il2cpp_codegen_object_new(Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_m69423DCB1DDF8173B3C4203C9B042393100ABC3F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return instance.ParseValue();
			Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m5A0B8C5763C8FDBB927671E81EAFE6829C59B049(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mD25AA14F8A1D392C02C80E7211873EA4256214A9 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	{
		// json.Dispose();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		// json = null;
		__this->___json_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Advertisements.Utilities.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mE5C1F9B0144E43586BEC691EF254383EDE7F2881 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var table = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_3;
		L_3 = Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_m1ECEB7AAC822DADFF507E1EB92D5ED1EFB6552C1(__this, NULL);
		V_1 = L_8;
		// if (name == null)
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_10;
		L_10 = Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m5A0B8C5763C8FDBB927671E81EAFE6829C59B049(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Advertisements.Utilities.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_mBFBE589544D69BCCD62F95AF1C26EE838839CB38 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_m468FA0F051D3395D84D19033EDC73740E8C66202(__this, L_7, NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m5A0B8C5763C8FDBB927671E81EAFE6829C59B049 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF(__this, NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_m468FA0F051D3395D84D19033EDC73740E8C66202(__this, L_1, NULL);
		return L_2;
	}
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseByToken(UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m468FA0F051D3395D84D19033EDC73740E8C66202 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_m1ECEB7AAC822DADFF507E1EB92D5ED1EFB6552C1(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_mCC01A1EBA06359F6E06F40D79AE46293B7EBFC2D(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mE5C1F9B0144E43586BEC691EF254383EDE7F2881(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_mBFBE589544D69BCCD62F95AF1C26EE838839CB38(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String UnityEngine.Advertisements.Utilities.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m1ECEB7AAC822DADFF507E1EB92D5ED1EFB6552C1 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6(__this, NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6(__this, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6(__this, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i = 0; i < 4; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0113:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char)Convert.ToInt32(new string(hex), 16));
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
	}

IL_0137:
	{
		// while (parsing)
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t* L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object UnityEngine.Advertisements.Utilities.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mCC01A1EBA06359F6E06F40D79AE46293B7EBFC2D (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m966F5DFFFDD2960329F4EAC1B240169893949A0A(__this, NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002c;
		}
	}
	{
		// long.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_5;
		L_5 = Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3(L_3, ((int32_t)511), L_4, (&V_2), NULL);
		// return parsedInt;
		int64_t L_6 = V_2;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_002c:
	{
		// double.TryParse(number, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_11;
		L_11 = Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382(L_9, ((int32_t)511), L_10, (&V_1), NULL);
		// return parsedDouble;
		double L_12 = V_1;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD1CE5097611ABBF92324AF3F7EA1DF85B5A5D04E (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (char.IsWhiteSpace(PeekChar))
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m519FDB6D6DA25DAF4436414B4DA3021224741F6E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_4, NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char UnityEngine.Advertisements.Utilities.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m519FDB6D6DA25DAF4436414B4DA3021224741F6E (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.Char UnityEngine.Advertisements.Utilities.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6 (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.Utilities.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m966F5DFFFDD2960329F4EAC1B240169893949A0A (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var word = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m95F109A03A7A0823CAA8968069928E7FCF8718C6(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar))
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m519FDB6D6DA25DAF4436414B4DA3021224741F6E(__this, NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_mA970D8A00C30AB60B6B2F0164808FBE948DBCF30(L_6, NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// UnityEngine.Advertisements.Utilities.Json/Parser/TOKEN UnityEngine.Advertisements.Utilities.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m988D1382009351406633CEE503A5694A440A5FDF (Parser_t03D22A437AC6A001EEB4DE5B0D1C236E48E142F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mD1CE5097611ABBF92324AF3F7EA1DF85B5A5D04E(__this, NULL);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar)
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m519FDB6D6DA25DAF4436414B4DA3021224741F6E(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord)
		String_t* L_15;
		L_15 = Parser_get_NextWord_m966F5DFFFDD2960329F4EAC1B240169893949A0A(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m41D33F14F2F8B17B847A19A49B3D97DDA896EF4D (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Utilities.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m1FC8AE2907666BA4DF2959499632B2CCBBB6ABFB (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* L_0 = (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF*)il2cpp_codegen_object_new(Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Serializer__ctor_m41D33F14F2F8B17B847A19A49B3D97DDA896EF4D(L_0, NULL);
		// instance.SerializeValue(obj);
		Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* L_1 = L_0;
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m3F6340C65DE1F793A8AA009F1CFD5BD699431C65(L_1, L_2, NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t* L_3 = L_1->___builder_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m3F6340C65DE1F793A8AA009F1CFD5BD699431C65 (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t* L_1 = __this->___builder_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject* L_3 = ___0_value;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject* L_6 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool)value ? "true" : "false");
		StringBuilder_t* L_7 = __this->___builder_0;
		RuntimeObject* L_8 = ___0_value;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)(bool*)UnBox(L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject* L_10 = ___0_value;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_m84E4B00C515E2C90B339525CD873DC409836BCA6(__this, L_12, NULL);
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject* L_13 = ___0_value;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m5D60D8CEACBDE3427FD88E142951DE7B6B8A48BD(__this, L_15, NULL);
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject* L_16 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char)value, 1));
		RuntimeObject* L_17 = ___0_value;
		String_t* L_18;
		L_18 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_17, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B(__this, L_18, NULL);
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject* L_19 = ___0_value;
		Serializer_SerializeOther_mA75321EA54122E00EBCE3DCC9D6229F31CC690BB(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m5D60D8CEACBDE3427FD88E142951DE7B6B8A48BD (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_001e_1:
			{
				// foreach (object e in obj.Keys)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// if (!first)
				bool L_10 = V_0;
				if (L_10)
				{
					goto IL_0036_1;
				}
			}
			{
				// builder.Append(',');
				StringBuilder_t* L_11 = __this->___builder_0;
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)44), NULL);
			}

IL_0036_1:
			{
				// SerializeString(e.ToString());
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B(__this, L_14, NULL);
				// builder.Append(':');
				StringBuilder_t* L_15 = __this->___builder_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)58), NULL);
				// SerializeValue(obj[e]);
				RuntimeObject* L_17 = ___0_obj;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_17, L_18);
				Serializer_SerializeValue_m3F6340C65DE1F793A8AA009F1CFD5BD699431C65(__this, L_19, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_005f_1:
			{
				// foreach (object e in obj.Keys)
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t* L_22 = __this->___builder_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m84E4B00C515E2C90B339525CD873DC409836BCA6 (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_2 = ___0_anArray;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0019_1:
			{
				// foreach (object obj in anArray)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (!first)
				bool L_9 = V_0;
				if (L_9)
				{
					goto IL_0031_1;
				}
			}
			{
				// builder.Append(',');
				StringBuilder_t* L_10 = __this->___builder_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
			}

IL_0031_1:
			{
				// SerializeValue(obj);
				RuntimeObject* L_12 = V_2;
				Serializer_SerializeValue_m3F6340C65DE1F793A8AA009F1CFD5BD699431C65(__this, L_12, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_003a_1:
			{
				// foreach (object obj in anArray)
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		// foreach (var c in charArray)
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t* L_11 = __this->___builder_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_25, NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t* L_29 = __this->___builder_0;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t* L_32 = __this->___builder_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t* L_34 = __this->___builder_0;
		String_t* L_35;
		L_35 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012d:
	{
		// foreach (var c in charArray)
		int32_t L_38 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t* L_40 = __this->___builder_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mA75321EA54122E00EBCE3DCC9D6229F31CC690BB (Serializer_t81069FBB239048E383FB04F672C45459A9D0EBBF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float)value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t* L_1 = __this->___builder_0;
		RuntimeObject* L_2 = ___0_value;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		return;
	}

IL_002d:
	{
		// else if (value is int
		//          || value is uint
		//          || value is long
		//          || value is sbyte
		//          || value is byte
		//          || value is short
		//          || value is ushort
		//          || value is ulong)
		RuntimeObject* L_6 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_11 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t* L_14 = __this->___builder_0;
		RuntimeObject* L_15 = ___0_value;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_15, NULL);
		return;
	}

IL_007b:
	{
		// else if (value is double
		//          || value is decimal)
		RuntimeObject* L_17 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_18 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t* L_19 = __this->___builder_0;
		RuntimeObject* L_20 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_20, NULL);
		V_1 = L_21;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_22;
		L_22 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_23;
		L_23 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_22, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_23, NULL);
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject* L_25 = ___0_value;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		Serializer_SerializeString_mA6045F9B7C346B32498011172ED7C19048A2088B(__this, L_26, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	{
		// public UnityLifecycleManager() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var existingCoroutineExecutorGameObject = GameObject.Find(gameObjectName);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, NULL);
		V_0 = L_0;
		// if (existingCoroutineExecutorGameObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_GameObject = existingCoroutineExecutorGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		__this->___m_GameObject_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_1), (void*)L_3);
		// m_CoroutineExecutor = m_GameObject.GetComponent<CoroutineExecutor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_GameObject_1;
		NullCheck(L_4);
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_5;
		L_5 = GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9(L_4, GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var);
		__this->___m_CoroutineExecutor_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_2), (void*)L_5);
		// if (m_CoroutineExecutor != null)
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_6 = __this->___m_CoroutineExecutor_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_8 = __this->___m_CoroutineExecutor_2;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___referenceCount_4;
		NullCheck(L_9);
		L_9->___referenceCount_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// return;
		return;
	}

IL_004e:
	{
		// GameObject.DestroyImmediate(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_GameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_11, NULL);
		// m_GameObject = null;
		__this->___m_GameObject_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0060:
	{
		// m_GameObject = new GameObject(gameObjectName) { hideFlags = HideFlags.HideInHierarchy | HideFlags.HideInInspector};
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12;
		NullCheck(L_13);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_13, 3, NULL);
		__this->___m_GameObject_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_1), (void*)L_13);
		// m_CoroutineExecutor = m_GameObject.AddComponent<CoroutineExecutor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_GameObject_1;
		NullCheck(L_14);
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_15;
		L_15 = GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16(L_14, GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var);
		__this->___m_CoroutineExecutor_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_2), (void*)L_15);
		// m_ApplicationQuit = m_GameObject.AddComponent<ApplicationQuit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_GameObject_1;
		NullCheck(L_16);
		ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* L_17;
		L_17 = GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1(L_16, GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var);
		__this->___m_ApplicationQuit_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ApplicationQuit_3), (void*)L_17);
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_18 = __this->___m_CoroutineExecutor_2;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->___referenceCount_4;
		NullCheck(L_19);
		L_19->___referenceCount_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// GameObject.DontDestroyOnLoad(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_GameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_21, NULL);
		// }
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Advertisements.Utilities.UnityLifecycleManager::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* UnityLifecycleManager_StartCoroutine_m27776EDD20D2DDC6FA6AED8503874107478B9B2A (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, RuntimeObject* ___0_enumerator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B4_0 = NULL;
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B3_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_0 = __this->___m_CoroutineExecutor_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468(__this, NULL);
	}

IL_0013:
	{
		// return m_CoroutineExecutor?.StartCoroutine(enumerator);
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_2 = __this->___m_CoroutineExecutor_2;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
	}

IL_001f:
	{
		RuntimeObject* L_4 = ___0_enumerator;
		NullCheck(G_B4_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B4_0, L_4, NULL);
		return L_5;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_m2FB7AC24D84CAB9C180BD9A753721A816FF75A89 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B5_0 = NULL;
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B4_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* G_B7_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* G_B6_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_0 = __this->___m_CoroutineExecutor_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468(__this, NULL);
	}

IL_0013:
	{
		// lock (m_CoroutineExecutor.queue)
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_2 = __this->___m_CoroutineExecutor_2;
		NullCheck(L_2);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = L_2->___queue_5;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0051;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
				// m_CoroutineExecutor?.queue?.Enqueue(action);
				CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_7 = __this->___m_CoroutineExecutor_2;
				CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_8 = L_7;
				G_B4_0 = L_8;
				if (L_8)
				{
					G_B5_0 = L_8;
					goto IL_0035_1;
				}
			}
			{
				goto IL_0052;
			}

IL_0035_1:
			{
				NullCheck(G_B5_0);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_9 = G_B5_0->___queue_5;
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_10 = L_9;
				G_B6_0 = L_10;
				if (L_10)
				{
					G_B7_0 = L_10;
					goto IL_0040_1;
				}
			}
			{
				goto IL_0052;
			}

IL_0040_1:
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___0_action;
				NullCheck(G_B7_0);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(G_B7_0, L_11, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
				// }
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_m7BFA140FE6714EB97AC5EED19B6B8531073A8E81 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Disposed)
		bool L_0 = __this->___m_Disposed_4;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Disposed = true;
		__this->___m_Disposed_4 = (bool)1;
		// m_CoroutineExecutor.referenceCount--;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_1 = __this->___m_CoroutineExecutor_2;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___referenceCount_4;
		NullCheck(L_2);
		L_2->___referenceCount_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// if (m_CoroutineExecutor.referenceCount == 0) {
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_4 = __this->___m_CoroutineExecutor_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___referenceCount_4;
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// Object.DestroyImmediate(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_GameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_6, NULL);
	}

IL_003a:
	{
		// m_GameObject = null;
		__this->___m_GameObject_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// m_CoroutineExecutor = null;
		__this->___m_CoroutineExecutor_2 = (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_2), (void*)(CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A*)NULL);
		// m_ApplicationQuit = null;
		__this->___m_ApplicationQuit_3 = (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ApplicationQuit_3), (void*)(ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383*)NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::SetOnApplicationQuitCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_SetOnApplicationQuitCallback_m3D2C3C9E990D33C2CFAE2E8EFAB712EB39F6B162 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ApplicationQuit != null)
		ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* L_0 = __this->___m_ApplicationQuit_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_ApplicationQuit.OnApplicationQuitEventHandler += callback;
		ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* L_2 = __this->___m_ApplicationQuit_3;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___0_callback;
		NullCheck(L_2);
		ApplicationQuit_add_OnApplicationQuitEventHandler_m39398EF751CC1915AE7EBBD6ED2FFF87570B998B(L_2, L_3, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::get_Banner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_Banner_m44590C390B95E49FADD385B2C832A5FDE64CCC03 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public IBanner Banner { get; }
		RuntimeObject* L_0 = __this->___U3CBannerU3Ek__BackingField_0;
		return L_0;
	}
}
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_UnityLifecycleManager_mCDB6D41026E6FDC7A32DE457E2464BB32D40F5FA (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->___U3CUnityLifecycleManagerU3Ek__BackingField_1;
		return L_0;
	}
}
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->___U3CNativePlatformU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public bool IsInitialized => NativePlatform?.IsInitialized() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsInitialized() */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsShowingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string Version => NativePlatform?.GetVersion() ?? "UnknownVersion";
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.Advertisements.INativePlatform::GetVersion() */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_DebugMode_m329AB215BB1501981FA84999846DFC48D4856832 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get => NativePlatform?.GetDebugMode() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.Advertisements.INativePlatform::GetDebugMode() */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_DebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_DebugMode_mC8E1103FCB95C846300810DD01FA492DFB7ECE21 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// set => NativePlatform?.SetDebugMode(value);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___0_value;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Advertisements.INativePlatform::SetDebugMode(System.Boolean) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, RuntimeObject* ___0_nativePlatform, RuntimeObject* ___1_banner, RuntimeObject* ___2_unityLifecycleManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Platform(INativePlatform nativePlatform, IBanner banner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// NativePlatform = nativePlatform;
		RuntimeObject* L_0 = ___0_nativePlatform;
		__this->___U3CNativePlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativePlatformU3Ek__BackingField_2), (void*)L_0);
		// Banner = banner;
		RuntimeObject* L_1 = ___1_banner;
		__this->___U3CBannerU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBannerU3Ek__BackingField_0), (void*)L_1);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_2 = ___2_unityLifecycleManager;
		__this->___U3CUnityLifecycleManagerU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityLifecycleManagerU3Ek__BackingField_1), (void*)L_2);
		// NativePlatform.SetupPlatform(this);
		RuntimeObject* L_3;
		L_3 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativePlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_m4B16C65F2EB6A9E82233A728C04DA46361CE6024 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_0 = NULL;
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_1 = NULL;
	{
		// if (!IsInitialized)
		bool L_0;
		L_0 = Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216(__this, NULL);
		if (L_0)
		{
			goto IL_007b;
		}
	}
	{
		// var framework = new MetaData("framework");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_1 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_1, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, NULL);
		V_0 = L_1;
		// framework.Set("name", "Unity");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_2 = V_0;
		NullCheck(L_2);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, NULL);
		// framework.Set("version", Application.unityVersion);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_3 = V_0;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_3);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, NULL);
		// SetMetaData(framework);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_5 = V_0;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_5, NULL);
		// var adapter = new MetaData("adapter");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_6 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_6, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, NULL);
		V_1 = L_6;
		// adapter.Set("name", "Packman");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_7 = V_1;
		NullCheck(L_7);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_7, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F, NULL);
		// adapter.Set("version", Version);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_8 = V_1;
		String_t* L_9;
		L_9 = Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C(__this, NULL);
		NullCheck(L_8);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_8, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_9, NULL);
		// SetMetaData(adapter);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_10 = V_1;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_10, NULL);
		// NativePlatform.Initialize(gameId, testMode, initializationListener);
		RuntimeObject* L_11;
		L_11 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_12 = ___0_gameId;
		bool L_13 = ___1_testMode;
		RuntimeObject* L_14 = ___2_initializationListener;
		NullCheck(L_11);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativePlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_mCF82D128EE6888CDB63BD3EB56F9034BAED83F9C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// Load(placementId, null);
		String_t* L_0 = ___0_placementId;
		Platform_Load_m92B551A85073A8F911E5C60DA0D37CC603EAE938(__this, L_0, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_m92B551A85073A8F911E5C60DA0D37CC603EAE938 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(placementId))
		String_t* L_0 = ___0_placementId;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("placementId cannot be nil or empty");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// NativePlatform.Load(placementId, loadListener);
		RuntimeObject* L_2;
		L_2 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_3 = ___0_placementId;
		RuntimeObject* L_4 = ___1_loadListener;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativePlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m222476A3E1855E064835A59D39725D53C924A335 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___1_showOptions, RuntimeObject* ___2_showListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// if (IsShowing) return;
		bool L_0;
		L_0 = Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsShowing) return;
		return;
	}

IL_0009:
	{
		// if (showOptions != null)
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_1 = ___1_showOptions;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// if (!string.IsNullOrEmpty(showOptions.gamerSid))
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_2 = ___1_showOptions;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// var player = new MetaData("player");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_5 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_5, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, NULL);
		V_0 = L_5;
		// player.Set("server_id", showOptions.gamerSid);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_6 = V_0;
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_7 = ___1_showOptions;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline(L_7, NULL);
		NullCheck(L_6);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_6, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_8, NULL);
		// SetMetaData(player);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_9 = V_0;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_9, NULL);
	}

IL_003c:
	{
		// NativePlatform.Show(string.IsNullOrEmpty(placementId) ? null : placementId, showListener);
		RuntimeObject* L_10;
		L_10 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_11 = ___0_placementId;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		G_B6_0 = L_10;
		if (L_12)
		{
			G_B7_0 = L_10;
			goto IL_004d;
		}
	}
	{
		String_t* L_13 = ___0_placementId;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_004e:
	{
		RuntimeObject* L_14 = ___2_showListener;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativePlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_14);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___0_metaData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlatform.SetMetaData(metaData);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_1 = ___0_metaData;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativePlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowFailure_mDCCA09E6801CF0A7651FC9DDB16D9C242F1EDB04 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowStart_mF1EDD719E846D414DE7058AB3648B4EDC1E80598 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// IsShowing = true;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowClick_m9604A0686C3D0061371A9E12262B640CE2E0A95C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowComplete_m0FD304BDBCA98D10B1E8E65A00D260AE94854CCB (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___0_placementId, int32_t ___1_completionState, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedBanner_get_IsLoaded_mE8AC0AB40796C11895D5D10198AAB8B78D6BFD70 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLoaded => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetupBanner_mABEF7CC1B545E9B38BAAC23F746BDDD3E7CB1CB9 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, RuntimeObject* ___0_banner, const RuntimeMethod* method) 
{
	{
		// public void SetupBanner(IBanner banner) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Load_mF977D0B894335D5B47A78BD0AF35503D7BA9083B (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_loadOptions, const RuntimeMethod* method) 
{
	{
		// public void Load(string placementId, BannerLoadOptions loadOptions) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Show_m5E4EBD678692FF29482D48FBF98A95F9CB116295 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_showOptions, const RuntimeMethod* method) 
{
	{
		// public void Show(string placementId, BannerOptions showOptions) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Hide_m84DC685029818C61BB2D3B74AF562BF96CB1A146 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, bool ___0_destroy, const RuntimeMethod* method) 
{
	{
		// public void Hide(bool destroy = false) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetPosition_m30F1A4F80278E1007A93305ACD0298DE08FBDEAE (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		// public void SetPosition(BannerPosition position) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetupPlatform_mAE4F436A677F0018A54275C2D5D15D49A3E67AD3 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, RuntimeObject* ___0_platform, const RuntimeMethod* method) 
{
	{
		// public void SetupPlatform(IPlatform platform) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m440B506B6A40EAF3E382609B962D3D157507A33F (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) 
{
	{
		// public void Initialize(string gameId, bool testMode, IUnityAdsInitializationListener initializationListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Load_mEDE3F80D4B91A89692222769E61EC21AD39D9364 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) 
{
	{
		// public void Load(string placementId, IUnityAdsLoadListener loadListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_mC3BCF27080E48DB7D0EDC50A806C1037B1396ED5 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___0_placementId, RuntimeObject* ___1_showListener, const RuntimeMethod* method) 
{
	{
		// public void Show(string placementId, IUnityAdsShowListener showListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_mC58DD5B86F8973F79411046EF74DA64AB5EEA2DE (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___0_metaData, const RuntimeMethod* method) 
{
	{
		// public void SetMetaData(MetaData metaData) {}
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_GetDebugMode_m760DA39E3EA2B36FDB66E33E0C4D357A37E9A140 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetDebugMode_m089E9323F754B8B09EAC5BA8C3E665A98060BB94 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, bool ___0_debugMode, const RuntimeMethod* method) 
{
	{
		// public void SetDebugMode(bool debugMode) {}
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetVersion_m09FED2D3C4FDD5E041AEB3C2A4D6709742ADE38C (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnsupportedPlatformVersion";
		return _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsInitialized_mCBCC729DAD4D4DFE3D208C3BB7007C4D3DF48036 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87(char* ___0_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_placementId' to managed representation
	String_t* ____0_placementId_unmarshaled = NULL;
	____0_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___0_placementId);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87(____0_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5(char* ___0_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_placementId' to managed representation
	String_t* ____0_placementId_unmarshaled = NULL;
	____0_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___0_placementId);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5(____0_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E(char* ___0_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_placementId' to managed representation
	String_t* ____0_placementId_unmarshaled = NULL;
	____0_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___0_placementId);

	// Managed method invocation
	IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E(____0_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C(char* ___0_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_placementId' to managed representation
	String_t* ____0_placementId_unmarshaled = NULL;
	____0_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___0_placementId);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C(____0_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866(char* ___0_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_placementId' to managed representation
	String_t* ____0_placementId_unmarshaled = NULL;
	____0_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___0_placementId);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866(____0_placementId_unmarshaled, NULL);

}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosBanner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosBanner_get_IsLoaded_m5636772B36E2F0FE60A760CBE57F9C94148DBFF4 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, const RuntimeMethod* method) 
{
	{
		// get => UnityAdsBannerIsLoaded();
		bool L_0;
		L_0 = IosBanner_UnityAdsBannerIsLoaded_m90463A0FB95AB1AB5081446B6D7A30249D988F53(NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::set_IsLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_set_IsLoaded_m135676909766B345EDC9A6DB9393B8AF302EDB7E (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerShow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerShow_m139CBC82A3DA4A284E711D4606CFD4D807978DF2 (String_t* ___0_placementId, bool ___1_showAfterLoad, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsBannerShow)(____0_placementId_marshaled, static_cast<int32_t>(___1_showAfterLoad));

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerHide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerHide_m245878F1BCD621CF1478E6A9B010055CD0AD5FCA (bool ___0_shouldDestroy, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsBannerHide)(static_cast<int32_t>(___0_shouldDestroy));

}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerIsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosBanner_UnityAdsBannerIsLoaded_m90463A0FB95AB1AB5081446B6D7A30249D988F53 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsBannerIsLoaded)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerSetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerSetPosition_mF88E70AD35D881AD1C5AE1980CEA7EC09700EC3B (int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsBannerSetPosition)(___0_position);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerShowCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerShowCallback_m425E8FC0100A5405F5D9A531CA45E1C6B0F913BA (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerShowCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerHideCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerHideCallback_mF23AB8E8D253E97B58E9DC5DEE5379DE2A038C72 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerHideCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerClickCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerClickCallback_m5705B371FD8F2B8C0088E816919182D75AE56EDC (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerClickCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerErrorCallback_mEC87BA8E40A48E9A1EC0273EB57D32511B325C1C (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerErrorCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerUnloadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerUnloadCallback_m3D462B860DC3312FF2FE27D454A5B980E3E20D72 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerUnloadCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerLoadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerLoadCallback_mBFEC177DC1F8597E33DB4F61B26F203519E4746A (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerLoadCallback)(____0_callback_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityBannerInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityBannerInitialize_mFC2AC3997F03D458AAA5BAD55E245E1223633371 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityBannerInitialize)();

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidShow(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0;
		String_t* L_1 = ___0_placementId;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerOptions_2;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* >::Invoke(8 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidShow(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidHide(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0;
		String_t* L_1 = ___0_placementId;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerOptions_2;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* >::Invoke(9 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidHide(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerClick(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0;
		String_t* L_1 = ___0_placementId;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_2 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerOptions_2;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* >::Invoke(10 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerClick(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidError(message, s_BannerLoadOptions);
		RuntimeObject* L_0 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0;
		String_t* L_1 = ___0_message;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* >::Invoke(12 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidError(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidUnload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866 (String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidLoad(placementId, s_BannerLoadOptions);
		RuntimeObject* L_0 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0;
		String_t* L_1 = ___0_placementId;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* >::Invoke(11 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidLoad(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// s_PlacementId = placementId;
		String_t* L_3 = ___0_placementId;
		((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_SetupBanner_m7139EA263DEA064890FD034DF59D0D5FF1755E86 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, RuntimeObject* ___0_banner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner = banner;
		RuntimeObject* L_0 = ___0_banner;
		((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_Banner_0), (void*)L_0);
		// UnityAdsSetBannerShowCallback(UnityAdsBannerDidShow);
		UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* L_1 = (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA*)il2cpp_codegen_object_new(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAdsBannerShowDelegate__ctor_mC2F978C5B4FD019B5BCCB0B8737C018FE02B00D3(L_1, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerDidShow_m1E1CD25FBFE9813E9187257F8DE88CD90C10BB87_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerShowCallback_m425E8FC0100A5405F5D9A531CA45E1C6B0F913BA(L_1, NULL);
		// UnityAdsSetBannerHideCallback(UnityAdsBannerDidHide);
		UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* L_2 = (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA*)il2cpp_codegen_object_new(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAdsBannerHideDelegate__ctor_mA3C2A3FF5879901D7203E2B4E9E945CB5650C900(L_2, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerHideCallback_mF23AB8E8D253E97B58E9DC5DEE5379DE2A038C72(L_2, NULL);
		// UnityAdsSetBannerClickCallback(UnityAdsBannerClick);
		UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* L_3 = (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994*)il2cpp_codegen_object_new(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAdsBannerClickDelegate__ctor_mF78D36DB0AB1EAB4F8AB1E1B28534462B917A674(L_3, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerClick_mD93041F219B259F924F89602F1F84F6B9441FE4E_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerClickCallback_m5705B371FD8F2B8C0088E816919182D75AE56EDC(L_3, NULL);
		// UnityAdsSetBannerErrorCallback(UnityAdsBannerDidError);
		UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* L_4 = (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017*)il2cpp_codegen_object_new(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAdsBannerErrorDelegate__ctor_m49507EAF0079DE66E9757AB02060212865D2DD49(L_4, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerDidError_m1270383E0FBB9CDE96503BE8E33DD637E6E33D8C_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerErrorCallback_mEC87BA8E40A48E9A1EC0273EB57D32511B325C1C(L_4, NULL);
		// UnityAdsSetBannerUnloadCallback(UnityAdsBannerDidUnload);
		UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* L_5 = (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1*)il2cpp_codegen_object_new(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAdsBannerUnloadDelegate__ctor_mE5DA7401A8D0DA10304E957ED79B7EBEFBDA3E94(L_5, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerDidUnload_mE832691B5B0F1F8D20A0F90749055D77ED58140C_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerUnloadCallback_m3D462B860DC3312FF2FE27D454A5B980E3E20D72(L_5, NULL);
		// UnityAdsSetBannerLoadCallback(UnityAdsBannerDidLoad);
		UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* L_6 = (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356*)il2cpp_codegen_object_new(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAdsBannerLoadDelegate__ctor_m7BD3C1E7F485B1F9D4C935E268192FA326027A61(L_6, NULL, (intptr_t)((void*)IosBanner_UnityAdsBannerDidLoad_m378BBF97DEC20D10E0AB908C4347F7F1820F5866_RuntimeMethod_var), NULL);
		IosBanner_UnityAdsSetBannerLoadCallback_mBFEC177DC1F8597E33DB4F61B26F203519E4746A(L_6, NULL);
		// UnityBannerInitialize();
		IosBanner_UnityBannerInitialize_mFC2AC3997F03D458AAA5BAD55E245E1223633371(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_Load_mAAF0623B789FA50DED607AA77E99C2B7ED73254B (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, String_t* ___0_placementId, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___1_loadOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_BannerLoadOptions = loadOptions;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = ___1_loadOptions;
		((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1), (void*)L_0);
		// if (!string.IsNullOrEmpty(s_PlacementId) && !s_PlacementId.Equals(placementId))
		String_t* L_1 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3;
		String_t* L_4 = ___0_placementId;
		NullCheck(L_3);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// Hide(true);
		IosBanner_Hide_m4F1FC59F856743AA78D712D571D72358751D6A75(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// UnityAdsBannerShow(placementId, false);
		String_t* L_6 = ___0_placementId;
		IosBanner_UnityAdsBannerShow_m139CBC82A3DA4A284E711D4606CFD4D807978DF2(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_Show_m7176599AD9C41438DCFA939894E189FD86832D49 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, String_t* ___0_placementId, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_showOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_BannerOptions = showOptions;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = ___1_showOptions;
		((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerOptions_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerOptions_2), (void*)L_0);
		// s_BannerLoadOptions = null;
		((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1 = (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_BannerLoadOptions_1), (void*)(BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)NULL);
		// if (!string.IsNullOrEmpty(s_PlacementId) && !s_PlacementId.Equals(placementId))
		String_t* L_1 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_3 = ((IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B_il2cpp_TypeInfo_var))->___s_PlacementId_3;
		String_t* L_4 = ___0_placementId;
		NullCheck(L_3);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		// Hide(true);
		IosBanner_Hide_m4F1FC59F856743AA78D712D571D72358751D6A75(__this, (bool)1, NULL);
	}

IL_002c:
	{
		// UnityAdsBannerShow(placementId, true);
		String_t* L_6 = ___0_placementId;
		IosBanner_UnityAdsBannerShow_m139CBC82A3DA4A284E711D4606CFD4D807978DF2(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_Hide_m4F1FC59F856743AA78D712D571D72358751D6A75 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, bool ___0_destroy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsBannerHide(destroy);
		bool L_0 = ___0_destroy;
		IosBanner_UnityAdsBannerHide_m245878F1BCD621CF1478E6A9B010055CD0AD5FCA(L_0, NULL);
		// if (!destroy)
		bool L_1 = ___0_destroy;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// UnityAdsBannerDidHide(string.Empty);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		IosBanner_UnityAdsBannerDidHide_mDD60664CF421EA978C64046BA09C232E38006BF5(L_2, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_SetPosition_m77FA112D5580903F406C5CE038F26DB40156E689 (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		// UnityAdsBannerSetPosition((int)position);
		int32_t L_0 = ___0_position;
		IosBanner_UnityAdsBannerSetPosition_mF88E70AD35D881AD1C5AE1980CEA7EC09700EC3B(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner__ctor_m47EED48FF6224AE89523B2D1757D8AA4EEEF643B (IosBanner_t41EFAECA97D333F1D5CAD83BBB9012E8EDF3499B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_Multicast(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* currentDelegate = reinterpret_cast<UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenInst(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	NullCheck(___0_placementId);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenStatic(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenStaticInvoker(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_placementId);
}
void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_ClosedStaticInvoker(UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	il2cppPInvokeFunc(____0_placementId_marshaled);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate__ctor_mC2F978C5B4FD019B5BCCB0B8737C018FE02B00D3 (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate_Invoke_mB2B52AAAFB040FD7B969A5C7D8FF130E46DE2C5D (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerShowDelegate_BeginInvoke_m97D7B4429DB1CD333438881DC33C063B46FF56CE (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, String_t* ___0_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate_EndInvoke_m2E9976BFA5E6D0E361CC910B7999BF83409E0955 (UnityAdsBannerShowDelegate_t6AD10F27910A0576366058F18112C9F627D2D8BA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_Multicast(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* currentDelegate = reinterpret_cast<UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenInst(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	NullCheck(___0_placementId);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenStatic(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenStaticInvoker(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_placementId);
}
void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_ClosedStaticInvoker(UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	il2cppPInvokeFunc(____0_placementId_marshaled);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate__ctor_mA3C2A3FF5879901D7203E2B4E9E945CB5650C900 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate_Invoke_m18F025DCA97343A98A7664D6CCD1797D319CEC3B (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerHideDelegate_BeginInvoke_mFA28ADB6EB4AD282A9F46E35613666931B555D94 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, String_t* ___0_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate_EndInvoke_m3109B86F3EE2FD0327278A61A91F7B6E21AAD4E1 (UnityAdsBannerHideDelegate_tAF2D1CAD48E4D4AC33CBD61617230F7B8DB1DCBA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_Multicast(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* currentDelegate = reinterpret_cast<UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenInst(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	NullCheck(___0_placementId);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenStatic(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenStaticInvoker(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_placementId);
}
void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_ClosedStaticInvoker(UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994 (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	il2cppPInvokeFunc(____0_placementId_marshaled);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate__ctor_mF78D36DB0AB1EAB4F8AB1E1B28534462B917A674 (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate_Invoke_m755A5746C8423D00AA4A1E4AFF88BEBF7AC184E4 (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerClickDelegate_BeginInvoke_mF2A0346DC748001A4DB4D7DD633AE1CA3B02C31A (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, String_t* ___0_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate_EndInvoke_m3076C87624CE93188C7970EBE35417D0D69C5D03 (UnityAdsBannerClickDelegate_tBE268B1776C730A1C454402F4C21A5CC46A71994* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_Multicast(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* currentDelegate = reinterpret_cast<UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenInst(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	NullCheck(___0_placementId);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenStatic(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenStaticInvoker(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_placementId);
}
void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_ClosedStaticInvoker(UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	il2cppPInvokeFunc(____0_placementId_marshaled);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate__ctor_mE5DA7401A8D0DA10304E957ED79B7EBEFBDA3E94 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate_Invoke_m9638E5D9A72AFFCA597F6610D589B344A66021E2 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerUnloadDelegate_BeginInvoke_m8AE9E3BC2BFF6C79DD6FDA293E952D4BDECB056A (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, String_t* ___0_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate_EndInvoke_m324195D5CCB0B37E86E814534293118E3056CD51 (UnityAdsBannerUnloadDelegate_t25A66AA4113374F3F1B8720E11B7E3660D89DDC1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_Multicast(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* currentDelegate = reinterpret_cast<UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenInst(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	NullCheck(___0_placementId);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenStatic(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_placementId, method);
}
void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenStaticInvoker(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_placementId);
}
void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_ClosedStaticInvoker(UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356 (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	il2cppPInvokeFunc(____0_placementId_marshaled);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate__ctor_m7BD3C1E7F485B1F9D4C935E268192FA326027A61 (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate_Invoke_m3791A052454A4AD6163157FD9D269105A7F69380 (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerLoadDelegate_BeginInvoke_mDDBBA3BF8A0F877DE16E17D85B3513786FAA820A (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, String_t* ___0_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate_EndInvoke_mE5E7601F19616607C7BC8309900136E36C0DE88A (UnityAdsBannerLoadDelegate_tEFC2532BF6E9F31DE2BFC5EF1EB56F210A173356* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_Multicast(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* currentDelegate = reinterpret_cast<UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenInst(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenStatic(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenStaticInvoker(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_ClosedStaticInvoker(UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017 (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate__ctor_m49507EAF0079DE66E9757AB02060212865D2DD49 (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate_Invoke_m26E7C851701060D24224B74A6CFAF0203957935D (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerErrorDelegate_BeginInvoke_m1EDACDEC2DDF6C3EA1512243FED4FEB471DE5CE9 (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate_EndInvoke_m396CD7892A486CA18EDD93BD3DB6A7FFD86F6D38 (UnityAdsBannerErrorDelegate_tDF74DC5582520E6889E4FF844DEBB5741E7C0017* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186(intptr_t ___0_ptr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186(___0_ptr, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9(intptr_t ___0_ptr, int32_t ___1_error, char* ___2_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___2_message' to managed representation
	String_t* ____2_message_unmarshaled = NULL;
	____2_message_unmarshaled = il2cpp_codegen_marshal_string_result(___2_message);

	// Managed method invocation
	IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9(___0_ptr, ___1_error, ____2_message_unmarshaled, NULL);

}
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosInitializationListener_InitializationListenerCreate_mB199C9A705B61992A14C227F39F0A97BB31F8991 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* ___0_initSuccessCallback, InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* ___1_initFailureCallback, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_initSuccessCallback' to native representation
	Il2CppMethodPointer ____0_initSuccessCallback_marshaled = NULL;
	____0_initSuccessCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_initSuccessCallback));

	// Marshaling of parameter '___1_initFailureCallback' to native representation
	Il2CppMethodPointer ____1_initFailureCallback_marshaled = NULL;
	____1_initFailureCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_initFailureCallback));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsInitializationListenerCreate)(____0_initSuccessCallback_marshaled, ____1_initFailureCallback_marshaled);

	return returnValue;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_InitializationListenerDestroy_mA384AD3249858CFBB54D8921BEEBD03D21B01EC8 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsInitializationListenerDestroy)(___0_ptr);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener__ctor_m36B70D1D7D223E1B0D8852B4899F411874E554F5 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IosInitializationListener(IUnityAdsInitializationListener unityAdsInternalListener, IUnityAdsInitializationListener userListener)
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8(__this, NULL);
		// NativePtr = InitializationListenerCreate(OnInitializationComplete, OnInitializationFailed);
		InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* L_0 = (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7*)il2cpp_codegen_object_new(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InitSuccessCallback__ctor_m5A23D70231180014D62FE9D429FEE79435AD1938(L_0, NULL, (intptr_t)((void*)IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186_RuntimeMethod_var), NULL);
		InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* L_1 = (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF*)il2cpp_codegen_object_new(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InitFailureCallback__ctor_mC521A504BB3B212E46C6A59E859323B2A3A7458E(L_1, NULL, (intptr_t)((void*)IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9_RuntimeMethod_var), NULL);
		intptr_t L_2;
		L_2 = IosInitializationListener_InitializationListenerCreate_mB199C9A705B61992A14C227F39F0A97BB31F8991(L_0, L_1, NULL);
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_2, NULL);
		// m_UnityAdsInternalListener = unityAdsInternalListener;
		RuntimeObject* L_3 = ___0_unityAdsInternalListener;
		__this->___m_UnityAdsInternalListener_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)L_3);
		// m_UserListener = userListener;
		RuntimeObject* L_4 = ___1_userListener;
		__this->___m_UserListener_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_Dispose_m4DA064CFD6097B0F6B5DE26CC4D6EC041DAFD937 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// InitializationListenerDestroy(NativePtr);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		IosInitializationListener_InitializationListenerDestroy_mA384AD3249858CFBB54D8921BEEBD03D21B01EC8(L_3, NULL);
		// NativePtr = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_4, NULL);
		// m_UnityAdsInternalListener = null;
		__this->___m_UnityAdsInternalListener_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)(RuntimeObject*)NULL);
		// m_UserListener = null;
		__this->___m_UserListener_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_mD7E7B7196BC62360E8136DB4B8825DF2D01FCEF4 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// m_UserListener?.OnInitializationComplete();
		RuntimeObject* L_2 = __this->___m_UserListener_3;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B5_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B5_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_m50440FB3281F53BCD4285C094386A218AD06F598 (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnInitializationFailed(error, message);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___0_error;
		String_t* L_3 = ___1_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// m_UserListener?.OnInitializationFailed(error, message);
		RuntimeObject* L_4 = __this->___m_UserListener_3;
		RuntimeObject* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_6 = ___0_error;
		String_t* L_7 = ___1_message;
		NullCheck(G_B5_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B5_0, L_6, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_m987036CB09A7E0640E9C3B275BE8E1B01A0A0186 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* V_0 = NULL;
	{
		// var listener = Get<IosInitializationListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_1;
		L_1 = IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D(L_0, IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnInitializationComplete();
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_9 = V_0;
		NullCheck(L_9);
		IosInitializationListener_OnInitializationComplete_mD7E7B7196BC62360E8136DB4B8825DF2D01FCEF4(L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_m6C37185590B642798F653A1576FFA04B85C228F9 (intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* V_0 = NULL;
	{
		// var listener = Get<IosInitializationListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_1;
		L_1 = IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D(L_0, IosNativeObject_Get_TisIosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_m09A5D68CA29453907D837002F16918751FF43E0D_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnInitializationFailed((UnityAdsInitializationError)error, message);
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_9 = V_0;
		int32_t L_10 = ___1_error;
		String_t* L_11 = ___2_message;
		NullCheck(L_9);
		IosInitializationListener_OnInitializationFailed_m50440FB3281F53BCD4285C094386A218AD06F598(L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_Multicast(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* currentDelegate = reinterpret_cast<InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_OpenInst(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_OpenStatic(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_OpenStaticInvoker(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr);
}
void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_ClosedStaticInvoker(InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback__ctor_m5A23D70231180014D62FE9D429FEE79435AD1938 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback_Invoke_mBE28B66EF12A904EC8BE87983FE29F8EA5DC2964 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitSuccessCallback_BeginInvoke_m832E892746513463EBAEC9CFFCA3C21B4F47156B (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback_EndInvoke_mAA5F0B3AC2780B9093B402AE186BDD3F36E2F849 (InitSuccessCallback_t908DA53711A2B84682073755577855008E25EBE7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_Multicast(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* currentDelegate = reinterpret_cast<InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_error, ___2_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_OpenInst(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_error, ___2_message, method);
}
void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_OpenStatic(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_error, ___2_message, method);
}
void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_OpenStaticInvoker(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_error, ___2_message);
}
void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_ClosedStaticInvoker(InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_error, ___2_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_message' to native representation
	char* ____2_message_marshaled = NULL;
	____2_message_marshaled = il2cpp_codegen_marshal_string(___2_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_error, ____2_message_marshaled);

	// Marshaling cleanup of parameter '___2_message' native representation
	il2cpp_codegen_marshal_free(____2_message_marshaled);
	____2_message_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback__ctor_mC521A504BB3B212E46C6A59E859323B2A3A7458E (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback_Invoke_m251663CBBE280C5C21D3000ADEE4A88F6689C7E8 (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_error, ___2_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitFailureCallback_BeginInvoke_mF0CA800A18A15BA943D53CDEB449FA47A5CC4878 (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, intptr_t ___0_ptr, int32_t ___1_error, String_t* ___2_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_error);
	__d_args[2] = ___2_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback_EndInvoke_m1FC6E1487C92B40DAB409CD575DB30DCD45B5E19 (InitFailureCallback_tECFB39864E19872424687C40CD5D21A7435CF8CF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E(intptr_t ___0_ptr, char* ___1_placementId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Managed method invocation
	IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E(___0_ptr, ____1_placementId_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421(intptr_t ___0_ptr, char* ___1_placementId, int32_t ___2_error, char* ___3_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_placementId' to managed representation
	String_t* ____1_placementId_unmarshaled = NULL;
	____1_placementId_unmarshaled = il2cpp_codegen_marshal_string_result(___1_placementId);

	// Marshaling of parameter '___3_message' to managed representation
	String_t* ____3_message_unmarshaled = NULL;
	____3_message_unmarshaled = il2cpp_codegen_marshal_string_result(___3_message);

	// Managed method invocation
	IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421(___0_ptr, ____1_placementId_unmarshaled, ___2_error, ____3_message_unmarshaled, NULL);

}
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosLoadListener::LoadListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosLoadListener_LoadListenerCreate_m8DD016FE5EA7F1FCE0B06A68643C76FF21F0DF5B (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* ___0_loadSuccessCallback, LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* ___1_loadFailureCallback, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_loadSuccessCallback' to native representation
	Il2CppMethodPointer ____0_loadSuccessCallback_marshaled = NULL;
	____0_loadSuccessCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_loadSuccessCallback));

	// Marshaling of parameter '___1_loadFailureCallback' to native representation
	Il2CppMethodPointer ____1_loadFailureCallback_marshaled = NULL;
	____1_loadFailureCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_loadFailureCallback));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsLoadListenerCreate)(____0_loadSuccessCallback_marshaled, ____1_loadFailureCallback_marshaled);

	return returnValue;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::LoadListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_LoadListenerDestroy_mEC9ACCAF950346B6B3380EB600907B7AFFA335F1 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsLoadListenerDestroy)(___0_ptr);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener__ctor_m84CDA9EB8A017D1835695C13BDC16475BB987D1F (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, RuntimeObject* ___0_unityAdsInternalListener, RuntimeObject* ___1_userListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IosLoadListener(IUnityAdsLoadListener unityAdsInternalListener, IUnityAdsLoadListener userListener)
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8(__this, NULL);
		// NativePtr = LoadListenerCreate(OnLoadSuccess, OnLoadFailure);
		LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* L_0 = (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2*)il2cpp_codegen_object_new(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadSuccessCallback__ctor_mBF0507473DA20B4B2CEF8D4E5FAF40A2EF011886(L_0, NULL, (intptr_t)((void*)IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E_RuntimeMethod_var), NULL);
		LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* L_1 = (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC*)il2cpp_codegen_object_new(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoadFailureCallback__ctor_m4535B9398DEBB31B35499F90C7AED9C9B11E9E36(L_1, NULL, (intptr_t)((void*)IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421_RuntimeMethod_var), NULL);
		intptr_t L_2;
		L_2 = IosLoadListener_LoadListenerCreate_m8DD016FE5EA7F1FCE0B06A68643C76FF21F0DF5B(L_0, L_1, NULL);
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_2, NULL);
		// m_UnityAdsInternalListener = unityAdsInternalListener;
		RuntimeObject* L_3 = ___0_unityAdsInternalListener;
		__this->___m_UnityAdsInternalListener_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)L_3);
		// m_UserListener = userListener;
		RuntimeObject* L_4 = ___1_userListener;
		__this->___m_UserListener_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_Dispose_m2FB6B0351500D2ABAA080D92247401EEF79E070B (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// LoadListenerDestroy(NativePtr);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		IosLoadListener_LoadListenerDestroy_mEC9ACCAF950346B6B3380EB600907B7AFFA335F1(L_3, NULL);
		// NativePtr = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_4, NULL);
		// m_UnityAdsInternalListener = null;
		__this->___m_UnityAdsInternalListener_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAdsInternalListener_2), (void*)(RuntimeObject*)NULL);
		// m_UserListener = null;
		__this->___m_UserListener_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserListener_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadSuccess_m5020499F5D992282458022F68DDC77C3E7E480A3 (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// m_UserListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_3 = __this->___m_UserListener_3;
		RuntimeObject* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___0_placementId;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B5_0, L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadFailure(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadFailure_m3018914207B1E6D55327014DA5B4FA655BC13060 (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsFailedToLoad(placementId, error, message);
		RuntimeObject* L_0 = __this->___m_UnityAdsInternalListener_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		String_t* L_2 = ___0_placementId;
		int32_t L_3 = ___1_error;
		String_t* L_4 = ___2_message;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
	}

IL_0014:
	{
		// m_UserListener?.OnUnityAdsFailedToLoad(placementId, error, message);
		RuntimeObject* L_5 = __this->___m_UserListener_3;
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		String_t* L_7 = ___0_placementId;
		int32_t L_8 = ___1_error;
		String_t* L_9 = ___2_message;
		NullCheck(G_B5_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B5_0, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadSuccess(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadSuccess_m7AEC3A51E81BCE60B294464A68D8EBA0A36D0F7E (intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* V_0 = NULL;
	{
		// var listener = Get<IosLoadListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_1;
		L_1 = IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964(L_0, IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnLoadSuccess(placementId);
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		NullCheck(L_9);
		IosLoadListener_OnLoadSuccess_m5020499F5D992282458022F68DDC77C3E7E480A3(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener::OnLoadFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosLoadListener_OnLoadFailure_m5B7DA3DD87D002F12FF5F69079696553E318A421 (intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* V_0 = NULL;
	{
		// var listener = Get<IosLoadListener>(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_1;
		L_1 = IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964(L_0, IosNativeObject_Get_TisIosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_m5694E285D22B0F7878C6A7E317AAD042FDBD1964_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56(L_3, L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnLoadFailure(placementId, (UnityAdsLoadError)error, message);
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_9 = V_0;
		String_t* L_10 = ___1_placementId;
		int32_t L_11 = ___2_error;
		String_t* L_12 = ___3_message;
		NullCheck(L_9);
		IosLoadListener_OnLoadFailure_m3018914207B1E6D55327014DA5B4FA655BC13060(L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_Multicast(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* currentDelegate = reinterpret_cast<LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_OpenInst(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_OpenStatic(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, method);
}
void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_OpenStaticInvoker(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId);
}
void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_ClosedStaticInvoker(LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2 (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSuccessCallback__ctor_mBF0507473DA20B4B2CEF8D4E5FAF40A2EF011886 (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSuccessCallback_Invoke_m524034B8CDB32235B8DE7538373E64F0633E23F6 (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadSuccessCallback_BeginInvoke_m44570534C374F083936212A179ABB8B4350EFF2A (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, intptr_t ___0_ptr, String_t* ___1_placementId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadSuccessCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSuccessCallback_EndInvoke_m292396DE491C97B187CCC80C2EAE2C109BC60EC9 (LoadSuccessCallback_tC18DEA21BB31FCFB9BC8CFD5185A60DC4E8191B2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_Multicast(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* currentDelegate = reinterpret_cast<LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_placementId, ___2_error, ___3_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_OpenInst(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_error, ___3_message, method);
}
void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_OpenStatic(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_placementId, ___2_error, ___3_message, method);
}
void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_OpenStaticInvoker(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_placementId, ___2_error, ___3_message);
}
void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_ClosedStaticInvoker(LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_placementId, ___2_error, ___3_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_placementId' to native representation
	char* ____1_placementId_marshaled = NULL;
	____1_placementId_marshaled = il2cpp_codegen_marshal_string(___1_placementId);

	// Marshaling of parameter '___3_message' to native representation
	char* ____3_message_marshaled = NULL;
	____3_message_marshaled = il2cpp_codegen_marshal_string(___3_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_placementId_marshaled, ___2_error, ____3_message_marshaled);

	// Marshaling cleanup of parameter '___1_placementId' native representation
	il2cpp_codegen_marshal_free(____1_placementId_marshaled);
	____1_placementId_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_message' native representation
	il2cpp_codegen_marshal_free(____3_message_marshaled);
	____3_message_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFailureCallback__ctor_m4535B9398DEBB31B35499F90C7AED9C9B11E9E36 (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF_Multicast;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback::Invoke(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFailureCallback_Invoke_m043ACA9380D2C5DBA0C113A1DE69990BE8BEB7DF (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_placementId, ___2_error, ___3_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback::BeginInvoke(System.IntPtr,System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFailureCallback_BeginInvoke_m53530CE83990357B96279DF5898DDA0D044FEFC3 (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, intptr_t ___0_ptr, String_t* ___1_placementId, int32_t ___2_error, String_t* ___3_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_placementId;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_error);
	__d_args[3] = ___3_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosLoadListener/LoadFailureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFailureCallback_EndInvoke_m2ADFA6ADE1E4DF25C2D89FA78DD2B1B5554E1835 (LoadFailureCallback_tF32F65D379BB027818229DDEF1E6AAAA172662FC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::get_NativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::set_NativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_mE7693235F08D8636791A1F6B1D3CA6473B3F1F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_mA10FD3A97A12B3D741BC1C55480B8729887CE57F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* V_0 = NULL;
	{
		// if (m_NativePtr == value) return;
		intptr_t L_0 = __this->___m_NativePtr_1;
		intptr_t L_1 = ___0_value;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_NativePtr == value) return;
		return;
	}

IL_000f:
	{
		// if (m_NativePtr != IntPtr.Zero)
		intptr_t L_3 = __this->___m_NativePtr_1;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// s_Objects.TryRemove(m_NativePtr, out _);
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* L_6 = ((IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var))->___s_Objects_0;
		intptr_t L_7 = __this->___m_NativePtr_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = ConcurrentDictionary_2_TryRemove_mA10FD3A97A12B3D741BC1C55480B8729887CE57F(L_6, L_7, (&V_0), ConcurrentDictionary_2_TryRemove_mA10FD3A97A12B3D741BC1C55480B8729887CE57F_RuntimeMethod_var);
	}

IL_0034:
	{
		// m_NativePtr = value;
		intptr_t L_9 = ___0_value;
		__this->___m_NativePtr_1 = L_9;
		// if (m_NativePtr != IntPtr.Zero)
		intptr_t L_10 = __this->___m_NativePtr_1;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_12;
		L_12 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		// s_Objects.TryAdd(m_NativePtr, this);
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* L_13 = ((IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var))->___s_Objects_0;
		intptr_t L_14 = __this->___m_NativePtr_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = ConcurrentDictionary_2_TryAdd_mE7693235F08D8636791A1F6B1D3CA6473B3F1F72(L_13, L_14, __this, ConcurrentDictionary_2_TryAdd_mE7693235F08D8636791A1F6B1D3CA6473B3F1F72_RuntimeMethod_var);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_Dispose_m8C56D82ED3B083503DAB55F5A994558E802258B5 (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// BridgeTransfer(NativePtr);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosNativeObject_BridgeTransfer_m2DE41F45E7522207337CC3223AD358EDFB9FFF79(L_3, NULL);
		// NativePtr = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		IosNativeObject_set_NativePtr_m180C35DB2A54546B51EB34413856A1524B875BEC(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosNativeObject::CheckDisposedAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosNativeObject_CheckDisposedAndLogError_m4D6FCCBE996C10BA16DA171711D4BD66D2DA5D56 (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr != IntPtr.Zero) return false;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(__this, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (NativePtr != IntPtr.Zero) return false;
		return (bool)0;
	}

IL_0014:
	{
		// Debug.LogErrorFormat("UnityAds SDK: {0}: Instance of type {1} is disposed. Please create a new instance in order to call any method.", message, GetType().FullName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F, L_6, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::BridgeTransfer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_BridgeTransfer_m2DE41F45E7522207337CC3223AD358EDFB9FFF79 (intptr_t ___0_x, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsBridgeTransfer)(___0_x);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8 (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__cctor_mC9B17D4356EF58B640D46305EC6A1DE569032DD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m5E3C7D974C60FD3F5969872954A9B92F3A295361_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static ConcurrentDictionary<IntPtr, IosNativeObject> s_Objects = new ConcurrentDictionary<IntPtr, IosNativeObject>();
		ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA* L_0 = (ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tA787C67396F2307B5CB81D41497604CB8C08DEFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m5E3C7D974C60FD3F5969872954A9B92F3A295361(L_0, ConcurrentDictionary_2__ctor_m5E3C7D974C60FD3F5969872954A9B92F3A295361_RuntimeMethod_var);
		((IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var))->___s_Objects_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var))->___s_Objects_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsInitialize(System.String,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsInitialize_m91FAE4B4894520E5D2E27D48ADDA6A8E2FA35CFF (String_t* ___0_gameId, bool ___1_testMode, intptr_t ___2_initializationListener, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, intptr_t);

	// Marshaling of parameter '___0_gameId' to native representation
	char* ____0_gameId_marshaled = NULL;
	____0_gameId_marshaled = il2cpp_codegen_marshal_string(___0_gameId);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsInitialize)(____0_gameId_marshaled, static_cast<int32_t>(___1_testMode), ___2_initializationListener);

	// Marshaling cleanup of parameter '___0_gameId' native representation
	il2cpp_codegen_marshal_free(____0_gameId_marshaled);
	____0_gameId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsLoad(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsLoad_mBEA70CC7A78E1DA0C8F7D031DEAFA16D0AA47ADC (String_t* ___0_placementId, intptr_t ___1_loadListener, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsLoad)(____0_placementId_marshaled, ___1_loadListener);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsShow(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsShow_mC3BC61972386DC96A97195D6A0CE2E90A5A7E4F8 (String_t* ___0_placementId, intptr_t ___1_showListener, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___0_placementId' to native representation
	char* ____0_placementId_marshaled = NULL;
	____0_placementId_marshaled = il2cpp_codegen_marshal_string(___0_placementId);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsShow)(____0_placementId_marshaled, ___1_showListener);

	// Marshaling cleanup of parameter '___0_placementId' native representation
	il2cpp_codegen_marshal_free(____0_placementId_marshaled);
	____0_placementId_marshaled = NULL;

}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsGetDebugMode_mB7D8A5D60A57351E4C5272153B8FE6F25000BDC8 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetDebugMode)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDebugMode_m66220727A48CF1F5D00470F86872FF166852E2D0 (bool ___0_debugMode, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDebugMode)(static_cast<int32_t>(___0_debugMode));

}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetVersion_m21916B208AD224FC9C619547957406219823E9EB (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsInitialized_m2083441C61F02A7B23DD030AE5856F85E207CE6E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsIsInitialized)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetMetaData_m5D14016F4E66908F1A5F12BA2D7D0912D59F7AC7 (String_t* ___0_category, String_t* ___1_data, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_category' to native representation
	char* ____0_category_marshaled = NULL;
	____0_category_marshaled = il2cpp_codegen_marshal_string(___0_category);

	// Marshaling of parameter '___1_data' to native representation
	char* ____1_data_marshaled = NULL;
	____1_data_marshaled = il2cpp_codegen_marshal_string(___1_data);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetMetaData)(____0_category_marshaled, ____1_data_marshaled);

	// Marshaling cleanup of parameter '___0_category' native representation
	il2cpp_codegen_marshal_free(____0_category_marshaled);
	____0_category_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_data' native representation
	il2cpp_codegen_marshal_free(____1_data_marshaled);
	____1_data_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_SetupPlatform_mA037039C31352013AF37563441BB6AF42F5175ED (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, RuntimeObject* ___0_iosPlatform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform = iosPlatform;
		RuntimeObject* L_0 = ___0_iosPlatform;
		((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_Initialize_mD0F20600B28A1D368F630037AACA599E1613DE62 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_gameId, bool ___1_testMode, RuntimeObject* ___2_initializationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsInitialize(gameId, testMode, new IosInitializationListener(this, initializationListener).NativePtr);
		String_t* L_0 = ___0_gameId;
		bool L_1 = ___1_testMode;
		RuntimeObject* L_2 = ___2_initializationListener;
		IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF* L_3 = (IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF*)il2cpp_codegen_object_new(IosInitializationListener_tB7DA67996CEC06B061B4588C42A4A2F7EDC800EF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IosInitializationListener__ctor_m36B70D1D7D223E1B0D8852B4899F411874E554F5(L_3, __this, L_2, NULL);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(L_3, NULL);
		IosPlatform_UnityAdsInitialize_m91FAE4B4894520E5D2E27D48ADDA6A8E2FA35CFF(L_0, L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_Load_mD1E91521D1BD39CC58C140D5911C9947C33BFCC1 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, RuntimeObject* ___1_loadListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsLoad(placementId, new IosLoadListener(this, loadListener).NativePtr);
		String_t* L_0 = ___0_placementId;
		RuntimeObject* L_1 = ___1_loadListener;
		IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43* L_2 = (IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43*)il2cpp_codegen_object_new(IosLoadListener_t7A4A4203F735AE730A3CC016D8A32536C81A9C43_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IosLoadListener__ctor_m84CDA9EB8A017D1835695C13BDC16475BB987D1F(L_2, __this, L_1, NULL);
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(L_2, NULL);
		IosPlatform_UnityAdsLoad_mBEA70CC7A78E1DA0C8F7D031DEAFA16D0AA47ADC(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_Show_mC08BB534D212A16570C5970332E8889451C08DA7 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, RuntimeObject* ___1_showListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsShow(placementId, new IosShowListener(this, showListener).NativePtr);
		String_t* L_0 = ___0_placementId;
		RuntimeObject* L_1 = ___1_showListener;
		IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55* L_2 = (IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55*)il2cpp_codegen_object_new(IosShowListener_tF8C45A216F44E9751906B0582BE98C6AEF8FFA55_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IosShowListener__ctor_mA643087226F8596C5627EE0AF6170BDCD8200B88(L_2, __this, L_1, NULL);
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline(L_2, NULL);
		IosPlatform_UnityAdsShow_mC3BC61972386DC96A97195D6A0CE2E90A5A7E4F8(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_SetMetaData_m398E5B4D8270B2FE22C2265577E3387BFFAEF540 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___0_metaData, const RuntimeMethod* method) 
{
	{
		// UnityAdsSetMetaData(metaData.category, metaData.ToJSON());
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_0 = ___0_metaData;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline(L_0, NULL);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_2 = ___0_metaData;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MetaData_ToJSON_mFD2AF853F6F25C473A93FE898C2BF8D2C6C826C1(L_2, NULL);
		IosPlatform_UnityAdsSetMetaData_m5D14016F4E66908F1A5F12BA2D7D0912D59F7AC7(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::GetDebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_GetDebugMode_m74B0A2D0C1B6F7B353365559AC70E8F65A203EDD (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) 
{
	{
		// return UnityAdsGetDebugMode();
		bool L_0;
		L_0 = IosPlatform_UnityAdsGetDebugMode_mB7D8A5D60A57351E4C5272153B8FE6F25000BDC8(NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::SetDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_SetDebugMode_m47C4CCD9263E94B019D38E21B1A5062D60D87E67 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, bool ___0_debugMode, const RuntimeMethod* method) 
{
	{
		// UnityAdsSetDebugMode(debugMode);
		bool L_0 = ___0_debugMode;
		IosPlatform_UnityAdsSetDebugMode_m66220727A48CF1F5D00470F86872FF166852E2D0(L_0, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_GetVersion_m152AA67BEF6A0EF7CFB5D97B5FC312D2EA8BD563 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) 
{
	{
		// return UnityAdsGetVersion();
		String_t* L_0;
		L_0 = IosPlatform_UnityAdsGetVersion_m21916B208AD224FC9C619547957406219823E9EB(NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_IsInitialized_m48E133A2D67E2788603F5504DF475EE51409D592 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) 
{
	{
		// return UnityAdsIsInitialized();
		bool L_0;
		L_0 = IosPlatform_UnityAdsIsInitialized_m2083441C61F02A7B23DD030AE5856F85E207CE6E(NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnInitializationComplete_m2058DBF5FB61DC9F02F2A658D2BA06246A1D32E0 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnInitializationFailed_m06C508F6BAABE4945A5F70B8B7949B345A7287AC (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsAdLoaded_m36F3A08BEED07E4D8D91765AE1736C3F0A42D72E (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsFailedToLoad_mDD1E2B86A80745AF1887DD310D4132431D0A9509 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowFailure_mAF6FA181C77A58A0D74CB810F17162CB90D62567 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, int32_t ___1_error, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.OnUnityAdsShowFailure(placementId, error, message);
		RuntimeObject* L_0 = ((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2;
		String_t* L_1 = ___0_placementId;
		int32_t L_2 = ___1_error;
		String_t* L_3 = ___2_message;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(12 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowStart_mA6B30B83AFBD294442D4CA56ED1A68E36301C95D (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = ((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2;
		String_t* L_1 = ___0_placementId;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowStart(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowClick_m8B15F47C7D1C5CCA593BDC73A60F1EE2C5FB92C3 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = ((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2;
		String_t* L_1 = ___0_placementId;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(14 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowClick(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowComplete_m9A7C7E4B04D9CE627003DAE95986B22481E195B2 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, String_t* ___0_placementId, int32_t ___1_completionState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.OnUnityAdsShowComplete(placementId, completionState);
		RuntimeObject* L_0 = ((IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE_il2cpp_TypeInfo_var))->___s_Platform_2;
		String_t* L_1 = ___0_placementId;
		int32_t L_2 = ___1_completionState;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(15 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform__ctor_m0E03BB69D8FB05B9050A9FE39665EA5018B14D73 (IosPlatform_tF57B6D1CDF5531815DB03CE9C599CD04765386DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5BF1819CF5ABD72241B6C64F9FC1129BBF1CA9E8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_mC91F24FD02F2EBA65D54E8203896D524D8C39E08 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		__this->___IsShowing_7 = (bool)0;
		// aTexture = BackgroundTexture(320, 50, Color.grey);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = BannerPlaceholder_BackgroundTexture_mA1C83D534C3005BCE9A50A66E48EE53654DFEE1E(((int32_t)320), ((int32_t)50), L_0, NULL);
		__this->___aTexture_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aTexture_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_mCA8AD18DFEB7FB97C42600B64E273673F9C8F890 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B5_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B4_0 = NULL;
	{
		// if (!IsShowing) return;
		bool L_0 = __this->___IsShowing_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsShowing) return;
		return;
	}

IL_0009:
	{
		// var myStyle = new GUIStyle(GUI.skin.box) { alignment = TextAnchor.MiddleCenter, fontSize = 20 };
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1;
		L_1 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_1);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_3, L_2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = L_3;
		NullCheck(L_4);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_4, 4, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = L_4;
		NullCheck(L_5);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_5, ((int32_t)20), NULL);
		V_0 = L_5;
		// if (GUI.Button(GetBannerRect(BannerPosition), aTexture))
		int32_t L_6 = __this->___BannerPosition_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = BannerPlaceholder_GetBannerRect_mE3DD03B1E8CF6EA072A70F995D7D01BF2942C94F(L_6, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___aTexture_4;
		bool L_9;
		L_9 = GUI_Button_mB2D6A5CDD9F6D8F79B87778837B70663E47D952E(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// BannerOptions?.clickCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_10 = __this->___BannerOptions_6;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_12;
		L_12 = BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline(G_B5_0, NULL);
		NullCheck(L_12);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_12, NULL);
	}

IL_0056:
	{
		// if (aTexture)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___aTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// var bannerRect = GetBannerRect(BannerPosition);
		int32_t L_15 = __this->___BannerPosition_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = BannerPlaceholder_GetBannerRect_mE3DD03B1E8CF6EA072A70F995D7D01BF2942C94F(L_15, NULL);
		// GUI.DrawTexture(bannerRect, aTexture, ScaleMode.ScaleToFit);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___aTexture_4;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mB96DA06923A0D6550CDBA2355A0BC11F27EEFD4F(L_17, L_18, 2, NULL);
		// GUI.Box(bannerRect, "This would be your banner", myStyle);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = V_0;
		GUI_Box_mA7CD625644B152E88F757E4B51F12A827BE49E57(L_17, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_19, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_m10FF4E0DBC0E2B1852589371C3B31737E3ACB05C (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, int32_t ___0_bannerPosition, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___1_bannerOptions, const RuntimeMethod* method) 
{
	{
		// BannerPosition = bannerPosition;
		int32_t L_0 = ___0_bannerPosition;
		__this->___BannerPosition_5 = L_0;
		// BannerOptions = bannerOptions;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = ___1_bannerOptions;
		__this->___BannerOptions_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BannerOptions_6), (void*)L_1);
		// IsShowing = true;
		__this->___IsShowing_7 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_m39E19D11C89B1ECDC7161FAACC7D0A668BAAF5CC (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		__this->___IsShowing_7 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* BannerPlaceholder_BackgroundTexture_mA1C83D534C3005BCE9A50A66E48EE53654DFEE1E (int32_t ___0_width, int32_t ___1_height, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pix = new Color[width * height];
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// for (var i = 0; i < pix.Length; i++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___2_color;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_5);
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_7 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// var result = new Texture2D(width, height);
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_11, L_9, L_10, NULL);
		// result.SetPixels(pix);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_12, L_13, NULL);
		// result.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_14, NULL);
		// return result;
		return L_14;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BannerPlaceholder_GetBannerRect_mE3DD03B1E8CF6EA072A70F995D7D01BF2942C94F (int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		// return new Rect(Screen.width / 2 - 160, 0, 320, 50);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1/2)), ((int32_t)160)))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		// return new Rect(0, 0, 320, 50);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		// return new Rect(Screen.width - 320, 0, 320, 50);
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_5), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)320)))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height / 2 - 25, 320, 50);
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_6/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_7/2)), ((int32_t)25)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_9;
		L_9 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_9/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		// return new Rect(0, Screen.height - 50, 320, 50);
		int32_t L_12;
		L_12 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		// return new Rect(Screen.width - 320, Screen.height - 50, 320, 50);
		int32_t L_14;
		L_14 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_16), ((float)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)320)))), ((float)((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_17;
		L_17 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_18;
		L_18 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_19), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_17/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_m924CEA544C2BB6BB1FB1B5F720EC76081D508828 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3 (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___U3CbannerViewU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->___U3CbannerPlacementIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_mA358F4E6ED2021BD4D86AE8C55BD6B13C4DD3322 (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, String_t* ___0_bannerPlacementId, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_bannerView, const RuntimeMethod* method) 
{
	{
		// public BannerBundle(string bannerPlacementId, AndroidJavaObject bannerView)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.bannerPlacementId = bannerPlacementId;
		String_t* L_0 = ___0_bannerPlacementId;
		__this->___U3CbannerPlacementIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbannerPlacementIdU3Ek__BackingField_1), (void*)L_0);
		// this.bannerView = bannerView;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___1_bannerView;
		__this->___U3CbannerViewU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbannerViewU3Ek__BackingField_0), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.Events.FinishEventArgs::get_placementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m69D8F82A3C21871ED3C51C7300FAB8467811B868 (FinishEventArgs_t55225010C8720801D571EBBFBA57BFE413EF593C* __this, const RuntimeMethod* method) 
{
	{
		// public string placementId { get; }
		String_t* L_0 = __this->___U3CplacementIdU3Ek__BackingField_1;
		return L_0;
	}
}
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Events.FinishEventArgs::get_showResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_mD1DB487FE3FBD9041BFD08693DF423D346E30E15 (FinishEventArgs_t55225010C8720801D571EBBFBA57BFE413EF593C* __this, const RuntimeMethod* method) 
{
	{
		// public ShowResult showResult { get; }
		int32_t L_0 = __this->___U3CshowResultU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Events.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_m10A53772C9FACCF970D9130DD2F5AEF46F7918EA (FinishEventArgs_t55225010C8720801D571EBBFBA57BFE413EF593C* __this, String_t* ___0_placementId, int32_t ___1_showResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FinishEventArgs(string placementId, ShowResult showResult)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.placementId = placementId;
		String_t* L_0 = ___0_placementId;
		__this->___U3CplacementIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementIdU3Ek__BackingField_1), (void*)L_0);
		// this.showResult = showResult;
		int32_t L_1 = ___1_showResult;
		__this->___U3CshowResultU3Ek__BackingField_2 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.Events.StartEventArgs::get_placementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StartEventArgs_get_placementId_m032BC09ADD693A8F20B9FB26D98D196D6806E4AF (StartEventArgs_t45DD9C9EC8E17B62384663F37B8F14376C25CD64* __this, const RuntimeMethod* method) 
{
	{
		// public string placementId { get; }
		String_t* L_0 = __this->___U3CplacementIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Events.StartEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs__ctor_m341397FC4E0939236327A2F51FECD7CBCCC71334 (StartEventArgs_t45DD9C9EC8E17B62384663F37B8F14376C25CD64* __this, String_t* ___0_placementId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StartEventArgs(string placementId)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.placementId = placementId;
		String_t* L_0 = ___0_placementId;
		__this->___U3CplacementIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplacementIdU3Ek__BackingField_1), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CshowCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E_inline (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->___U3CUnityLifecycleManagerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3ChideCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CclickCallbackU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = __this->___U3CloadCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = __this->___U3CerrorCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* Configuration_get_placements_mE3E678A58FDF7A749AC0479A8B167B63900C3164_inline (Configuration_t03C74BD3D20B9D111122F61697764D98A90BEA25* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, bool> placements { get; }
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = __this->___U3CplacementsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CcategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m544606AB9030B1F3742140FE50AE020B747931EE_inline (IosNativeObject_tB3A48FE8501DA355CFCF6521CE3AD1BC4C79B57C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = __this->___version_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->___U3CNativePlatformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) 
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->___U3CgamerSidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsShowingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->___U3CcategoryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
