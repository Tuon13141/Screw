﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureBool/Action>
struct Dictionary_2_t96E54F7FEB1230F2F6F5B54E2E82FD0D3479B455;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct KeyCollection_tB779CDAF9E021DE7A8B3F1F2703F43D6B1246D3B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct ValueCollection_tE7DD97DBDD0C47E3FE7B359F437EF257E061E3B3;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>[]
struct EntryU5BU5D_t83B8DB93BF42CD1D6B20CC2FA9A45568042285E9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Firebase.CharVector
struct CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39;
// Firebase.RemoteConfig.ConfigSettingsInternal
struct ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47;
// Firebase.RemoteConfig.ConfigValueInternal
struct ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C;
// Firebase.RemoteConfig.FirebaseRemoteConfigInternal
struct FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7;
// Firebase.FutureBool
struct FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36;
// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.FutureBool/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6527DD1DCC2E569B75EEA7B08542B57FD3B37861;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8;
// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE;
// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D;
// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral12D73759F2DFF9D9592DE8455D45A67BD9319FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral4F72F0CE5331B5EFCFCBA058F7839C9C1EB254A7;
IL2CPP_EXTERN_C String_t* _stringLiteral80C1F0F65428C96352C50E78A6ABBDCD5178D360;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE234F4B0FE557BD855D867559DDC597E8EFDEE75;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigInfo_get_LastFetchFailureReason_m8837A463492D13F1CB5DFF86F66D6F022CA91DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSettingsInternal__ctor_mDA2BA88FEECBE723A3DEBA1BFBE204238E988902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSettingsInternal_get_fetch_timeout_in_milliseconds_m7B59586AE2BA4A3D94C0F505465C9CB159F9EFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSettingsInternal_get_minimum_fetch_interval_in_milliseconds_mBF2AE0C60A24D53C8C495A141F3E24FCFD6E9421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSettingsInternal_set_fetch_timeout_in_milliseconds_m62C9B1451A2F3E89DC5727E5892CE77839A12F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSettingsInternal_set_minimum_fetch_interval_in_milliseconds_mCF23C208E156ED5B582A94705D029654AA3001DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigValueInternal_get_source_m58024286F45850D6D296B6F3F26CD18D968934C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9C5F1DA40D2B6692AC65C091B9F71FE85436B02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5BB792C521A48CD7E94DDFF075A34AFB74AF2F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5DD4CB73723ABBC90028CBA994CDA80FD1B93276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_ActivateAsync_m763A5C50F9448234DC75C1CBAB16EF9CCDA5A014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_GetConfigSettings_m6338B6719DE2051DEC2CA3C8667FB3F0991D6CAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_GetInfo_m60B105F39882D0105016C50C5FDE0D79CF81B8B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_GetInstanceInternal_m1F74B684B8B4401EFC99CF83CCA652B40F39805A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_GetKeys_m9811D2FDD6D6E1F77DF4C10813F98F74E31FE641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_GetValueInternal_m4C267D263005D5CECE7F6084FDA14DC3318D8350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m2050FFA80CB213A80A5764D9A5BE92EDCFE68215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfigInternal_get_App_m4FD5363778B6A7DD72C3DFF75A8DB1239C312C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t73EBDCF551298BB973814731A044BD25DEF46C6C 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t83B8DB93BF42CD1D6B20CC2FA9A45568042285E9* ____entries_1;
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
	KeyCollection_tB779CDAF9E021DE7A8B3F1F2703F43D6B1246D3B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE7DD97DBDD0C47E3FE7B359F437EF257E061E3B3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C  : public RuntimeObject
{
	// Firebase.RemoteConfig.FirebaseRemoteConfigInternal Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigInternal
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___remoteConfigInternal_1;
	// Firebase.FirebaseApp Firebase.RemoteConfig.FirebaseRemoteConfig::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_2;
	// System.String Firebase.RemoteConfig.FirebaseRemoteConfig::instanceKey
	String_t* ___instanceKey_3;
};

struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig> Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigByInstanceKey
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* ___remoteConfigByInstanceKey_0;
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE
struct RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B  : public RuntimeObject
{
};

struct RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_StaticFields
{
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8* ___swigExceptionHelper_0;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::swigStringHelper
	SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330* ___swigStringHelper_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8  : public RuntimeObject
{
};

struct SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields
{
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___applicationDelegate_0;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___arithmeticDelegate_1;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___divideByZeroDelegate_2;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___indexOutOfRangeDelegate_3;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidCastDelegate_4;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidOperationDelegate_5;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___ioDelegate_6;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___nullReferenceDelegate_7;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___outOfMemoryDelegate_8;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___overflowDelegate_9;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___systemDelegate_10;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentDelegate_11;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentNullDelegate_12;
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentOutOfRangeDelegate_13;
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C  : public RuntimeObject
{
};

struct SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields
{
	// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

struct SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields
{
	// System.Exception Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330  : public RuntimeObject
{
};

struct SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_StaticFields
{
	// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* ___stringDelegate_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Firebase.RemoteConfig.ConfigSettings
struct ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 
{
	// System.UInt64 Firebase.RemoteConfig.ConfigSettings::<FetchTimeoutInMilliseconds>k__BackingField
	uint64_t ___U3CFetchTimeoutInMillisecondsU3Ek__BackingField_0;
	// System.UInt64 Firebase.RemoteConfig.ConfigSettings::<MinimumFetchIntervalInMilliseconds>k__BackingField
	uint64_t ___U3CMinimumFetchIntervalInMillisecondsU3Ek__BackingField_1;
};

// Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 
{
	// System.Byte[] Firebase.RemoteConfig.ConfigValue::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
	// Firebase.RemoteConfig.ValueSource Firebase.RemoteConfig.ConfigValue::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_3;
};

struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields
{
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanTruePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanTruePattern_0;
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanFalsePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanFalsePattern_1;
};
// Native definition for P/Invoke marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.CharVector
struct CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.CharVector::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.CharVector::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigInfo::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.ConfigInfo::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.DateTime Firebase.RemoteConfig.ConfigInfo::UnixEpochUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpochUtc_2;
};

// Firebase.RemoteConfig.ConfigSettingsInternal
struct ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigSettingsInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.ConfigSettingsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.RemoteConfig.ConfigValueInternal
struct ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigValueInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.ConfigValueInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_15;
};

struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_14;
};

// Firebase.RemoteConfig.FirebaseRemoteConfigInternal
struct FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.FirebaseRemoteConfigInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.FirebaseRemoteConfigInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
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

// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.StringList::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.StringList::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.FutureBool
struct FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBool::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureBool::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureBool/SWIG_CompletionDelegate Firebase.FutureBool::SWIG_CompletionCB
	SWIG_CompletionDelegate_t6527DD1DCC2E569B75EEA7B08542B57FD3B37861* ___SWIG_CompletionCB_7;
};

struct FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureBool/Action> Firebase.FutureBool::Callbacks
	Dictionary_2_t96E54F7FEB1230F2F6F5B54E2E82FD0D3479B455* ___Callbacks_3;
	// System.Int32 Firebase.FutureBool::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureBool::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___SWIG_CompletionCB_7;
};

struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE  : public MulticastDelegate_t
{
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D  : public MulticastDelegate_t
{
};

// Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.UInt64 Firebase.RemoteConfig.ConfigSettings::get_FetchTimeoutInMilliseconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettings::set_FetchTimeoutInMilliseconds(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 Firebase.RemoteConfig.ConfigSettings::get_MinimumFetchIntervalInMilliseconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettings::set_MinimumFetchIntervalInMilliseconds(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettings::set_MinimumFetchInternalInMilliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettings_set_MinimumFetchInternalInMilliseconds_m60815684A4DE57A4CCE482234B0811D8D9A24989 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 Firebase.RemoteConfig.ConfigSettingsInternal::get_fetch_timeout_in_milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettingsInternal_get_fetch_timeout_in_milliseconds_m7B59586AE2BA4A3D94C0F505465C9CB159F9EFF2 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) ;
// System.UInt64 Firebase.RemoteConfig.ConfigSettingsInternal::get_minimum_fetch_interval_in_milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettingsInternal_get_minimum_fetch_interval_in_milliseconds_mBF2AE0C60A24D53C8C495A141F3E24FCFD6E9421 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal__ctor_mDA2BA88FEECBE723A3DEBA1BFBE204238E988902 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::set_fetch_timeout_in_milliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_set_fetch_timeout_in_milliseconds_m62C9B1451A2F3E89DC5727E5892CE77839A12F51 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::set_minimum_fetch_interval_in_milliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_set_minimum_fetch_interval_in_milliseconds_mCF23C208E156ED5B582A94705D029654AA3001DF (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigValue::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigValue::set_Source(Firebase.RemoteConfig.ValueSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigValue::.ctor(System.Byte[],Firebase.RemoteConfig.ValueSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValue__ctor_mACD417E71EBDCA7D676DD65B0E6601F6E3F13E2A (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___source1, const RuntimeMethod* method) ;
// System.String Firebase.RemoteConfig.ConfigValue::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Double Firebase.RemoteConfig.ConfigValue::get_DoubleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ConfigValue_get_DoubleValue_mC09830C380B62CE20E472E9622B8215AC3066800 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m849AF82E6C86C69E45DDDD095A39679D036239B7 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Int64 Firebase.RemoteConfig.ConfigValue::get_LongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Firebase.RemoteConfig.ConfigValue::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_SetSwigCMemOwn_mB22DA217483619E5E72CBB4EE5070C69AED909A3 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, bool ___ownership0, const RuntimeMethod* method) ;
// System.String Firebase.RemoteConfig.FirebaseRemoteConfigInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseRemoteConfigInternal_get_InstanceKey_mC9C5C0148055BCB3A791E2111CE9E6A1C92756E4 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_Dispose_m4C8231B6CFDCE6B1C9379995E6A7FB1EF52BD0D7 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.FirebaseRemoteConfigInternal::getCPtr(Firebase.RemoteConfig.FirebaseRemoteConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseRemoteConfigInternal_getCPtr_mA901D74C854468298F38276F90AA901545B61985 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>::Remove(TKey)
inline bool Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9 (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_Dispose_mC39B4BDBFE4ABDE8408A389E789E057310228884 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// Firebase.RemoteConfig.FirebaseRemoteConfigInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetInstanceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* FirebaseRemoteConfigInternal_GetInstanceInternal_m1F74B684B8B4401EFC99CF83CCA652B40F39805A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_FindByKey_m8CC4F2862627755067B53FC337A7499962DFF33E (String_t* ___instanceKey0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::.ctor(Firebase.RemoteConfig.FirebaseRemoteConfigInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig__ctor_m2F79D2B495EB8602CD81573D25AE86030E0560D1 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___remoteConfig0, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5DD4CB73723ABBC90028CBA994CDA80FD1B93276 (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* __this, String_t* ___key0, FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7*, String_t*, FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m9C5F1DA40D2B6692AC65C091B9F71FE85436B02A (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* __this, String_t* ___key0, FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7*, String_t*, FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_GetInstance_m8EAF2C76B33E588A5B5FB89E22B4062A524124B0 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.RemoteConfig.FirebaseRemoteConfigInternal::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FirebaseRemoteConfigInternal_ActivateAsync_m763A5C50F9448234DC75C1CBAB16EF9CCDA5A014 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfigInternal::FetchAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfigInternal_FetchAsync_m843200ECBC42E441E68BC385FCE94D0BE60A9B48 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigSettingsInternal Firebase.RemoteConfig.ConfigSettings::ToInternal(Firebase.RemoteConfig.ConfigSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ConfigSettings_ToInternal_m8E38421DEA6D09D951339BE4D43B5C1A43C01D51 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 ___cs0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfigInternal::SetConfigSettingsAsync(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfigInternal_SetConfigSettingsAsync_mFE66B09B7FAC8C81226BA958EC4224C36111AC5C (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___settings0, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigSettingsInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetConfigSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* FirebaseRemoteConfigInternal_GetConfigSettings_m6338B6719DE2051DEC2CA3C8667FB3F0991D6CAE (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigSettings Firebase.RemoteConfig.ConfigSettings::FromInternal(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 ConfigSettings_FromInternal_m837009E67AF97FF11A3777F26398D88995B5F010 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___csInternal0, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigValueInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* FirebaseRemoteConfigInternal_GetValueInternal_m4C267D263005D5CECE7F6084FDA14DC3318D8350 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, String_t* ___key0, const RuntimeMethod* method) ;
// Firebase.CharVector Firebase.RemoteConfig.ConfigValueInternal::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) ;
// System.Int32 Firebase.CharVector::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharVector_get_Count_mAB2A8CDBA2A0E72367165A550CC78259C2DAAB3E (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, const RuntimeMethod* method) ;
// System.Void Firebase.CharVector::CopyTo(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVector_CopyTo_m69B2856E774E1A18A77667577080E276A5B3E404 (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ValueSource Firebase.RemoteConfig.ConfigValueInternal::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigValueInternal_get_source_m58024286F45850D6D296B6F3F26CD18D968934C7 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigValueInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal_Dispose_m8BF701B1466B615E7CFC01E48D61CB790FD78BD4 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRemoteConfigInternal_GetKeys_m9811D2FDD6D6E1F77DF4C10813F98F74E31FE641 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigInfo Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* FirebaseRemoteConfigInternal_GetInfo_m60B105F39882D0105016C50C5FDE0D79CF81B8B0 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>::.ctor()
inline void Dictionary_2__ctor_m5BB792C521A48CD7E94DDFF075A34AFB74AF2F68 (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigInfo::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo_Dispose_mFF45EC62231C6F1D619090C91CE8A6A6E50CE8C8 (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigInfo(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigInfo_mCB47B549C8B7B7802EE8E91F3FFD2758E5472C98 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigInfo_LastFetchStatus_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchStatus_get_mBBD053374DC297F7C1D58ECE148028EB59D1BD3B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigInfo_LastFetchFailureReason_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchFailureReason_get_m9F8064B51AAD9C294CE8ABEAECE9F5325BA64070 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigSettingsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigSettingsInternal_m235B4B93AC64E32FFBE2D591272372C5A298CF26 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_fetch_timeout_in_milliseconds_set(System.Runtime.InteropServices.HandleRef,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set_m9DF25559DEBC7A7C1ABBCDF332C44ABF9FC1EE8F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, uint64_t ___jarg21, const RuntimeMethod* method) ;
// System.UInt64 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_fetch_timeout_in_milliseconds_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get_m3915C420470A50F5DF786461D236FF293DFB56BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set(System.Runtime.InteropServices.HandleRef,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set_mB7112E89186EA06AE8585138C15DC35C2D068CEE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, uint64_t ___jarg21, const RuntimeMethod* method) ;
// System.UInt64 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get_m746AA7961209F959EF35B2F06F9588708C4785F2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::new_ConfigSettingsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_new_ConfigSettingsInternal_m17D0DBE756AB8D94BDC75A61D0FB43B00056E7AB (const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal__ctor_mD93EE0E35EF553916D0B1489810D1CD8D25140C4 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::ReleaseReferenceInternal(Firebase.RemoteConfig.FirebaseRemoteConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m2050FFA80CB213A80A5764D9A5BE92EDCFE68215 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___rc0, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.RemoteConfig.FirebaseRemoteConfigInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseRemoteConfigInternal_get_App_m4FD5363778B6A7DD72C3DFF75A8DB1239C312C20 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_Activate(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Activate_mFD01231B4D540510CCFBFF34A43B673D2E01E306 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBool::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBool__ctor_m7225C6D5C5CEE9F476B0EC83BB0B454D6A5E2FC0 (FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.FutureBool::GetTask(Firebase.FutureBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FutureBool_GetTask_m61BCE52E5F0CB99C6736927DA2610741F46C9DC7 (FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36* ___fu0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_Fetch__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Fetch__SWIG_0_mA45C046F7957ABF13BEA910490105EB293C70D33 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___fu0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigSettingsInternal::getCPtr(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ConfigSettingsInternal_getCPtr_m8FCEC5A05DD10A9F67942B277D9598BDD5A69AB1 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_SetConfigSettings(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_SetConfigSettings_m9F0F0C842808651D526C428DAC333D92EB16E1D6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg21, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetConfigSettings(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetConfigSettings_m9B9B456ED7BDD7D0D089CCD6C24BBF72DFD9B308 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetKeys(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetKeys_m12818DB36675D0ED9A98699089FFD5E156D441A6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.StringList::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521 (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetInfo(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInfo_m1E97318768F513415334A20C782F514B14F2B0F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigInfo::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo__ctor_m9B0031DBD81452E2D1FC46DF4BB6FBA829C8D6BA (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_App_get_mC8E02C4BE9F2632D031892DE7E27006BA6668690 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInstanceInternal_m79C4545DB3833E68B8504311E80009167682E8D8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal__ctor_mF1BB63620CF23BF9BFE1D36524CF1E2A61460FE4 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m6DA38DE22C5A43BDBA3112E249999032B1BFBD7B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetValueInternal(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetValueInternal_m029A4B89FC7CE8DD47E76E639DF42002A18A3111 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.ConfigValueInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal__ctor_mF7BD344A294C72D8A813072C195D5DC6303E4092 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigValueInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigValueInternal_mF0580602FE6A3E27E5864E67A21E7A29D665A20C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigValueInternal_data_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_ConfigValueInternal_data_get_m8FABAA7B208B22E1DF5F625EC261CF791E52FE22 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.CharVector::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVector__ctor_mEA7C221A367DCAF1A482672A6D9392B7A0B7C75E (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigValueInternal_source_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigValueInternal_source_get_m7AE049C04064A673DA4E026604B2232A15D48083 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m82F260AB218ED2B40E009C27F05F898B1A5C3968 (SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mB183038863C7A6721142019457201DF0F92906EC (SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330* __this, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Exception Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5 (Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375 (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m6404526A2081B13880D17B9D3C9B32F8893722DD (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_RemoteConfigUtil_m0DEA42E7534E0E52B3FC183E9405957B2998FFBE (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___applicationDelegate0, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___arithmeticDelegate1, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___divideByZeroDelegate2, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___indexOutOfRangeDelegate3, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidCastDelegate4, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidOperationDelegate5, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___ioDelegate6, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___nullReferenceDelegate7, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___outOfMemoryDelegate8, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___overflowDelegate9, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___systemExceptionDelegate10, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_RemoteConfigUtil_mB52A4FBD9552E0E467D7BA843FBAA17E9EB21A86 (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentDelegate0, ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentNullDelegate1, ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) ;
// System.String Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4 (String_t* ___cString0, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m9B8D6CABE54FDB1A8B4FB8A73C5CE2DF7A82277B (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_RemoteConfigUtil_mC99171C36A78E629513BB5568376C7E3B2DBF5C7 (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* ___stringDelegate0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchStatus_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchFailureReason_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_delete_ConfigInfo(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set(void*, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set(void*, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_new_ConfigSettingsInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_delete_ConfigSettingsInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Activate(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Fetch__SWIG_0(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_SetConfigSettings(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetConfigSettings(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetKeys(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInfo(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_App_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInstanceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetValueInternal(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigValueInternal_data_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_RemoteConfig_CSharp_ConfigValueInternal_source_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_RemoteConfig_CSharp_delete_ConfigValueInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_RemoteConfigUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_RemoteConfigUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_RemoteConfigUtil(Il2CppMethodPointer);
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
// System.UInt64 Firebase.RemoteConfig.ConfigSettings::get_FetchTimeoutInMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CFetchTimeoutInMillisecondsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Firebase.RemoteConfig.ConfigSettings::set_FetchTimeoutInMilliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CFetchTimeoutInMillisecondsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18*>(__this + _offset);
	ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657_inline(_thisAdjusted, ___value0, method);
}
// System.UInt64 Firebase.RemoteConfig.ConfigSettings::get_MinimumFetchIntervalInMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CMinimumFetchIntervalInMillisecondsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Firebase.RemoteConfig.ConfigSettings::set_MinimumFetchIntervalInMilliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CMinimumFetchIntervalInMillisecondsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18*>(__this + _offset);
	ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_inline(_thisAdjusted, ___value0, method);
}
// System.Void Firebase.RemoteConfig.ConfigSettings::set_MinimumFetchInternalInMilliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettings_set_MinimumFetchInternalInMilliseconds_m60815684A4DE57A4CCE482234B0811D8D9A24989 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigSettings_set_MinimumFetchInternalInMilliseconds_m60815684A4DE57A4CCE482234B0811D8D9A24989_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18*>(__this + _offset);
	ConfigSettings_set_MinimumFetchInternalInMilliseconds_m60815684A4DE57A4CCE482234B0811D8D9A24989(_thisAdjusted, ___value0, method);
}
// Firebase.RemoteConfig.ConfigSettings Firebase.RemoteConfig.ConfigSettings::FromInternal(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 ConfigSettings_FromInternal_m837009E67AF97FF11A3777F26398D88995B5F010 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___csInternal0, const RuntimeMethod* method) 
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18));
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_0 = ___csInternal0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = ConfigSettingsInternal_get_fetch_timeout_in_milliseconds_m7B59586AE2BA4A3D94C0F505465C9CB159F9EFF2(L_0, NULL);
		ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657_inline((&V_0), L_1, NULL);
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_2 = ___csInternal0;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = ConfigSettingsInternal_get_minimum_fetch_interval_in_milliseconds_mBF2AE0C60A24D53C8C495A141F3E24FCFD6E9421(L_2, NULL);
		ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_inline((&V_0), L_3, NULL);
		ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 L_4 = V_0;
		V_1 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 L_5 = V_1;
		return L_5;
	}
}
// Firebase.RemoteConfig.ConfigSettingsInternal Firebase.RemoteConfig.ConfigSettings::ToInternal(Firebase.RemoteConfig.ConfigSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ConfigSettings_ToInternal_m8E38421DEA6D09D951339BE4D43B5C1A43C01D51 (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 ___cs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* V_0 = NULL;
	ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* V_1 = NULL;
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_0 = (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47*)il2cpp_codegen_object_new(ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConfigSettingsInternal__ctor_mDA2BA88FEECBE723A3DEBA1BFBE204238E988902(L_0, NULL);
		V_0 = L_0;
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_1 = V_0;
		uint64_t L_2;
		L_2 = ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39_inline((&___cs0), NULL);
		NullCheck(L_1);
		ConfigSettingsInternal_set_fetch_timeout_in_milliseconds_m62C9B1451A2F3E89DC5727E5892CE77839A12F51(L_1, L_2, NULL);
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_3 = V_0;
		uint64_t L_4;
		L_4 = ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843_inline((&___cs0), NULL);
		NullCheck(L_3);
		ConfigSettingsInternal_set_minimum_fetch_interval_in_milliseconds_mCF23C208E156ED5B582A94705D029654AA3001DF(L_3, L_4, NULL);
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_5 = V_0;
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_6 = V_1;
		return L_6;
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
// Conversion methods for marshalling of: Firebase.RemoteConfig.ConfigValue
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_pinvoke(const ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857& unmarshaled, ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CDataU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___U3CDataU3Ek__BackingField_2);
	marshaled.___U3CSourceU3Ek__BackingField_3 = unmarshaled.___U3CSourceU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_pinvoke_back(const ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke& marshaled, ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CDataU3Ek__BackingField_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___U3CDataU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDataU3Ek__BackingField_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___U3CDataU3Ek__BackingField_2));
	int32_t unmarshaledU3CSourceU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSourceU3Ek__BackingField_temp_1 = marshaled.___U3CSourceU3Ek__BackingField_3;
	unmarshaled.___U3CSourceU3Ek__BackingField_3 = unmarshaledU3CSourceU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Firebase.RemoteConfig.ConfigValue
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_pinvoke_cleanup(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CDataU3Ek__BackingField_2);
	marshaled.___U3CDataU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: Firebase.RemoteConfig.ConfigValue
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_com(const ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857& unmarshaled, ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com& marshaled)
{
	marshaled.___U3CDataU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___U3CDataU3Ek__BackingField_2);
	marshaled.___U3CSourceU3Ek__BackingField_3 = unmarshaled.___U3CSourceU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_com_back(const ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com& marshaled, ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CDataU3Ek__BackingField_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___U3CDataU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDataU3Ek__BackingField_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___U3CDataU3Ek__BackingField_2));
	int32_t unmarshaledU3CSourceU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CSourceU3Ek__BackingField_temp_1 = marshaled.___U3CSourceU3Ek__BackingField_3;
	unmarshaled.___U3CSourceU3Ek__BackingField_3 = unmarshaledU3CSourceU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Firebase.RemoteConfig.ConfigValue
IL2CPP_EXTERN_C void ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshal_com_cleanup(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CDataU3Ek__BackingField_2);
	marshaled.___U3CDataU3Ek__BackingField_2 = NULL;
}
// System.Void Firebase.RemoteConfig.ConfigValue::.ctor(System.Byte[],Firebase.RemoteConfig.ValueSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValue__ctor_mACD417E71EBDCA7D676DD65B0E6601F6E3F13E2A (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___source1, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_initobj(__this, sizeof(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE_inline(__this, L_0, NULL);
		int32_t L_1 = ___source1;
		ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigValue__ctor_mACD417E71EBDCA7D676DD65B0E6601F6E3F13E2A_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___source1, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	ConfigValue__ctor_mACD417E71EBDCA7D676DD65B0E6601F6E3F13E2A(_thisAdjusted, ___data0, ___source1, method);
}
// System.Double Firebase.RemoteConfig.ConfigValue::get_DoubleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ConfigValue_get_DoubleValue_mC09830C380B62CE20E472E9622B8215AC3066800 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		String_t* L_0;
		L_0 = ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  double ConfigValue_get_DoubleValue_mC09830C380B62CE20E472E9622B8215AC3066800_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	double _returnValue;
	_returnValue = ConfigValue_get_DoubleValue_mC09830C380B62CE20E472E9622B8215AC3066800(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Firebase.RemoteConfig.ConfigValue::get_LongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Convert_ToInt64_m849AF82E6C86C69E45DDDD095A39679D036239B7(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int64_t ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968(_thisAdjusted, method);
	return _returnValue;
}
// System.String Firebase.RemoteConfig.ConfigValue::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(30 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Firebase.RemoteConfig.ConfigValue::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Firebase.RemoteConfig.ConfigValue::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE_inline(_thisAdjusted, ___value0, method);
}
// System.Void Firebase.RemoteConfig.ConfigValue::set_Source(Firebase.RemoteConfig.ValueSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857*>(__this + _offset);
	ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F_inline(_thisAdjusted, ___value0, method);
}
// System.Void Firebase.RemoteConfig.ConfigValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValue__cctor_m168ADC748B45A8641C1EFB706672835C2DE9E971 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F72F0CE5331B5EFCFCBA058F7839C9C1EB254A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE234F4B0FE557BD855D867559DDC597E8EFDEE75);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralE234F4B0FE557BD855D867559DDC597E8EFDEE75, 1, NULL);
		((ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields*)il2cpp_codegen_static_fields_for(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var))->___booleanTruePattern_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields*)il2cpp_codegen_static_fields_for(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var))->___booleanTruePattern_0), (void*)L_0);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, _stringLiteral4F72F0CE5331B5EFCFCBA058F7839C9C1EB254A7, 1, NULL);
		((ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields*)il2cpp_codegen_static_fields_for(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var))->___booleanFalsePattern_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields*)il2cpp_codegen_static_fields_for(ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_il2cpp_TypeInfo_var))->___booleanFalsePattern_1), (void*)L_1);
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
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::.ctor(Firebase.RemoteConfig.FirebaseRemoteConfigInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig__ctor_m2F79D2B495EB8602CD81573D25AE86030E0560D1 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___remoteConfig0, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___app1;
		__this->___firebaseApp_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firebaseApp_2), (void*)L_0);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = __this->___firebaseApp_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_2, __this, (intptr_t)((void*)FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85(L_1, L_2, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_3 = ___remoteConfig0;
		__this->___remoteConfigInternal_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteConfigInternal_1), (void*)L_3);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_4 = __this->___remoteConfigInternal_1;
		NullCheck(L_4);
		FirebaseRemoteConfigInternal_SetSwigCMemOwn_mB22DA217483619E5E72CBB4EE5070C69AED909A3(L_4, (bool)1, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_5 = __this->___remoteConfigInternal_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = FirebaseRemoteConfigInternal_get_InstanceKey_mC9C5C0148055BCB3A791E2111CE9E6A1C92756E4(L_5, NULL);
		__this->___instanceKey_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceKey_3), (void*)L_6);
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_Finalize_mBED53639445C1FA8C389E2B8EBF8225C1DAEBCF4 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseRemoteConfig_Dispose_m4C8231B6CFDCE6B1C9379995E6A7FB1EF52BD0D7(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_Dispose_m4C8231B6CFDCE6B1C9379995E6A7FB1EF52BD0D7 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_0 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0091;
					}
				}
				{
					Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0091:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_4 = __this->___remoteConfigInternal_1;
				if (!L_4)
				{
					goto IL_0041_1;
				}
			}
			{
				FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_5 = __this->___remoteConfigInternal_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_6;
				L_6 = FirebaseRemoteConfigInternal_getCPtr_mA901D74C854468298F38276F90AA901545B61985(L_5, NULL);
				V_3 = L_6;
				intptr_t L_7;
				L_7 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_3), NULL);
				intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_9;
				L_9 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_7, L_8, NULL);
				G_B4_0 = ((int32_t)(L_9));
				goto IL_0042_1;
			}

IL_0041_1:
			{
				G_B4_0 = 0;
			}

IL_0042_1:
			{
				V_2 = (bool)G_B4_0;
				bool L_10 = V_2;
				if (!L_10)
				{
					goto IL_0084_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_11 = __this->___firebaseApp_2;
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_12 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_12, __this, (intptr_t)((void*)FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A_RuntimeMethod_var), NULL);
				NullCheck(L_11);
				FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289(L_11, L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_13 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
				String_t* L_14 = __this->___instanceKey_3;
				NullCheck(L_13);
				bool L_15;
				L_15 = Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9(L_13, L_14, Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9_RuntimeMethod_var);
				FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_16 = __this->___remoteConfigInternal_1;
				NullCheck(L_16);
				FirebaseRemoteConfigInternal_Dispose_mC39B4BDBFE4ABDE8408A389E789E057310228884(L_16, NULL);
				__this->___remoteConfigInternal_1 = (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteConfigInternal_1), (void*)(FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7*)NULL);
			}

IL_0084_1:
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_OnAppDisposed_m60CE0C7CA1B9CB97C55A269EBEF97561F90A734A (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80C1F0F65428C96352C50E78A6ABBDCD5178D360);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(3, _stringLiteral80C1F0F65428C96352C50E78A6ABBDCD5178D360, NULL);
		FirebaseRemoteConfig_Dispose_m4C8231B6CFDCE6B1C9379995E6A7FB1EF52BD0D7(__this, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_1 = __this->___remoteConfigInternal_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = FirebaseRemoteConfigInternal_getCPtr_mA901D74C854468298F38276F90AA901545B61985(L_1, NULL);
		V_1 = L_2;
		intptr_t L_3;
		L_3 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_1), NULL);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_7 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_GetInstance_m8EAF2C76B33E588A5B5FB89E22B4062A524124B0 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5DD4CB73723ABBC90028CBA994CDA80FD1B93276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12D73759F2DFF9D9592DE8455D45A67BD9319FF0);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* V_0 = NULL;
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_1 = NULL;
	bool V_2 = false;
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_3 = NULL;
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B2_0 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B1_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___app0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		G_B2_0 = L_2;
	}

IL_000b:
	{
		___app0 = G_B2_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3 = ___app0;
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_4;
		L_4 = FirebaseRemoteConfigInternal_GetInstanceInternal_m1F74B684B8B4401EFC99CF83CCA652B40F39805A(L_3, NULL);
		V_0 = L_4;
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_5 = V_0;
		V_2 = (bool)((((RuntimeObject*)(FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_7 = ___app0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12D73759F2DFF9D9592DE8455D45A67BD9319FF0, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(4, L_9, NULL);
		V_3 = (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)NULL;
		goto IL_0097;
	}

IL_0038:
	{
		V_1 = (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)NULL;
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_10 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
		V_4 = L_10;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_5;
					if (!L_11)
					{
						goto IL_0092;
					}
				}
				{
					Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_12 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_12, NULL);
				}

IL_0092:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_13 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_13, (&V_5), NULL);
				FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_14 = V_0;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = FirebaseRemoteConfigInternal_get_InstanceKey_mC9C5C0148055BCB3A791E2111CE9E6A1C92756E4(L_14, NULL);
				V_6 = L_15;
				String_t* L_16 = V_6;
				il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_17;
				L_17 = FirebaseRemoteConfig_FindByKey_m8CC4F2862627755067B53FC337A7499962DFF33E(L_16, NULL);
				V_1 = L_17;
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_18 = V_1;
				V_7 = (bool)((!(((RuntimeObject*)(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_19 = V_7;
				if (!L_19)
				{
					goto IL_006d_1;
				}
			}
			{
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_20 = V_1;
				V_3 = L_20;
				goto IL_0097;
			}

IL_006d_1:
			{
				FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_21 = V_0;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_22 = ___app0;
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_23 = (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)il2cpp_codegen_object_new(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				FirebaseRemoteConfig__ctor_m2F79D2B495EB8602CD81573D25AE86030E0560D1(L_23, L_21, L_22, NULL);
				V_1 = L_23;
				il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_24 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
				String_t* L_25 = V_6;
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_26 = V_1;
				NullCheck(L_24);
				Dictionary_2_set_Item_m5DD4CB73723ABBC90028CBA994CDA80FD1B93276(L_24, L_25, L_26, Dictionary_2_set_Item_m5DD4CB73723ABBC90028CBA994CDA80FD1B93276_RuntimeMethod_var);
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_27 = V_1;
		V_3 = L_27;
		goto IL_0097;
	}

IL_0097:
	{
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_28 = V_3;
		return L_28;
	}
}
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_FindByKey_m8CC4F2862627755067B53FC337A7499962DFF33E (String_t* ___instanceKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9C5F1DA40D2B6692AC65C091B9F71FE85436B02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* V_0 = NULL;
	bool V_1 = false;
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_0 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0050;
					}
				}
				{
					Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)NULL;
				il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_4 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
				String_t* L_5 = ___instanceKey0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m9C5F1DA40D2B6692AC65C091B9F71FE85436B02A(L_4, L_5, (&V_2), Dictionary_2_TryGetValue_m9C5F1DA40D2B6692AC65C091B9F71FE85436B02A_RuntimeMethod_var);
				V_3 = L_6;
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_8 = V_2;
				V_4 = (bool)((!(((RuntimeObject*)(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_9 = V_4;
				if (!L_9)
				{
					goto IL_0036_1;
				}
			}
			{
				FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_10 = V_2;
				V_5 = L_10;
				goto IL_0056;
			}

IL_0036_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
				Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_11 = ((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0;
				String_t* L_12 = ___instanceKey0;
				NullCheck(L_11);
				bool L_13;
				L_13 = Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9(L_11, L_12, Dictionary_2_Remove_m35AC41108773C08ECCA63BAFB07F54F5181BAEE9_RuntimeMethod_var);
			}

IL_0043_1:
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		V_5 = (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C*)NULL;
		goto IL_0056;
	}

IL_0056:
	{
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_14 = V_5;
		return L_14;
	}
}
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_1;
		L_1 = FirebaseRemoteConfig_GetInstance_m8EAF2C76B33E588A5B5FB89E22B4062A524124B0(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.RemoteConfig.FirebaseRemoteConfig::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FirebaseRemoteConfig_ActivateAsync_m4259BC44EA9439B3BE4E27135121314FC61D5FDB (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_0 = NULL;
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = FirebaseRemoteConfigInternal_ActivateAsync_m763A5C50F9448234DC75C1CBAB16EF9CCDA5A014(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::FetchAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_FetchAsync_m87F5061F0F4B0227AB63984550AB5EBAE14F8086 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = FirebaseRemoteConfigInternal_FetchAsync_m843200ECBC42E441E68BC385FCE94D0BE60A9B48(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::SetConfigSettingsAsync(Firebase.RemoteConfig.ConfigSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_SetConfigSettingsAsync_m24C0BCEC3A7091B24E462AAB7B8F2247F3AA7C3F (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 ___settings0, const RuntimeMethod* method) 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 L_1 = ___settings0;
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_2;
		L_2 = ConfigSettings_ToInternal_m8E38421DEA6D09D951339BE4D43B5C1A43C01D51(L_1, NULL);
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = FirebaseRemoteConfigInternal_SetConfigSettingsAsync_mFE66B09B7FAC8C81226BA958EC4224C36111AC5C(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		return L_4;
	}
}
// Firebase.RemoteConfig.ConfigSettings Firebase.RemoteConfig.FirebaseRemoteConfig::get_ConfigSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 FirebaseRemoteConfig_get_ConfigSettings_m00B7AC5CF47F5EF69D6BFAAA9729DFE8E167183D (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		NullCheck(L_0);
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_1;
		L_1 = FirebaseRemoteConfigInternal_GetConfigSettings_m6338B6719DE2051DEC2CA3C8667FB3F0991D6CAE(L_0, NULL);
		ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 L_2;
		L_2 = ConfigSettings_FromInternal_m837009E67AF97FF11A3777F26398D88995B5F010(L_1, NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18 L_3 = V_0;
		return L_3;
	}
}
// Firebase.RemoteConfig.ConfigValue Firebase.RemoteConfig.FirebaseRemoteConfig::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_2;
		L_2 = FirebaseRemoteConfigInternal_GetValueInternal_m4C267D263005D5CECE7F6084FDA14DC3318D8350(L_0, L_1, NULL);
		V_0 = L_2;
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_3 = V_0;
		NullCheck(L_3);
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_4;
		L_4 = ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = CharVector_get_Count_mAB2A8CDBA2A0E72367165A550CC78259C2DAAB3E(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_7 = V_0;
		NullCheck(L_7);
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_8;
		L_8 = ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_8);
		CharVector_CopyTo_m69B2856E774E1A18A77667577080E276A5B3E404(L_8, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ConfigValueInternal_get_source_m58024286F45850D6D296B6F3F26CD18D968934C7(L_11, NULL);
		ConfigValue__ctor_mACD417E71EBDCA7D676DD65B0E6601F6E3F13E2A((&V_2), L_10, L_12, NULL);
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_13 = V_0;
		NullCheck(L_13);
		ConfigValueInternal_Dispose_m8BF701B1466B615E7CFC01E48D61CB790FD78BD4(L_13, NULL);
		ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 L_14 = V_2;
		V_3 = L_14;
		goto IL_004c;
	}

IL_004c:
	{
		ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 L_15 = V_3;
		return L_15;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.RemoteConfig.FirebaseRemoteConfig::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRemoteConfig_get_Keys_m95A6C21CB84FA74A4A1F904B44E0702832336FAE (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FirebaseRemoteConfigInternal_GetKeys_m9811D2FDD6D6E1F77DF4C10813F98F74E31FE641(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// Firebase.RemoteConfig.ConfigInfo Firebase.RemoteConfig.FirebaseRemoteConfig::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* FirebaseRemoteConfig_get_Info_m54BE3021C99F11C94F78078DA718C2DF4DDA9AC0 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) 
{
	ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* V_0 = NULL;
	{
		FirebaseRemoteConfig_ThrowIfNull_mC96F3E36EEF574ABBB23A3626D0EDDC170C9757C(__this, NULL);
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = __this->___remoteConfigInternal_1;
		NullCheck(L_0);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_1;
		L_1 = FirebaseRemoteConfigInternal_GetInfo_m60B105F39882D0105016C50C5FDE0D79CF81B8B0(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfig__cctor_m29D3266EA9CA16862DC754E2A299603E47445DEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5BB792C521A48CD7E94DDFF075A34AFB74AF2F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* L_0 = (Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7*)il2cpp_codegen_object_new(Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5BB792C521A48CD7E94DDFF075A34AFB74AF2F68(L_0, Dictionary_2__ctor_m5BB792C521A48CD7E94DDFF075A34AFB74AF2F68_RuntimeMethod_var);
		((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var))->___remoteConfigByInstanceKey_0), (void*)L_0);
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
// System.Void Firebase.RemoteConfig.ConfigInfo::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo__ctor_m9B0031DBD81452E2D1FC46DF4BB6FBA829C8D6BA (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		__this->___UnixEpochUtc_2 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_1 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_1;
		intptr_t L_2 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_3), __this, L_2, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigInfo::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo_Finalize_m543090B411436A7DE178D76D4C466D50B866F0CB (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ConfigInfo_Dispose_mFF45EC62231C6F1D619090C91CE8A6A6E50CE8C8(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigInfo::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo_Dispose_m5D4877D563FF4752F06ECE4867FD7EBB33C15CE6 (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigInfo_Dispose_mFF45EC62231C6F1D619090C91CE8A6A6E50CE8C8(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigInfo::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigInfo_Dispose_mFF45EC62231C6F1D619090C91CE8A6A6E50CE8C8 (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
				RemoteConfigUtilPINVOKE_delete_ConfigInfo_mCB47B549C8B7B7802EE8E91F3FFD2758E5472C98(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// Firebase.RemoteConfig.LastFetchStatus Firebase.RemoteConfig.ConfigInfo::get_LastFetchStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchStatus_get_mBBD053374DC297F7C1D58ECE148028EB59D1BD3B(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// Firebase.RemoteConfig.FetchFailureReason Firebase.RemoteConfig.ConfigInfo::get_LastFetchFailureReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigInfo_get_LastFetchFailureReason_m8837A463492D13F1CB5DFF86F66D6F022CA91DBC (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchFailureReason_get_m9F8064B51AAD9C294CE8ABEAECE9F5325BA64070(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigInfo_get_LastFetchFailureReason_m8837A463492D13F1CB5DFF86F66D6F022CA91DBC_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		return L_6;
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
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal__ctor_mD93EE0E35EF553916D0B1489810D1CD8D25140C4 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigSettingsInternal::getCPtr(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ConfigSettingsInternal_getCPtr_m8FCEC5A05DD10A9F67942B277D9598BDD5A69AB1 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_Finalize_m75F7B09165A952B052F10EF0312175469B96E8F7 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.ConfigSettingsInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_Dispose_mF18670F5A35460260E37D8796DA5873AD3FD9F77 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.ConfigSettingsInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_Dispose_m5EC8400844B1640D0A0CF694687EC32B108FCB55 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
				RemoteConfigUtilPINVOKE_delete_ConfigSettingsInternal_m235B4B93AC64E32FFBE2D591272372C5A298CF26(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::set_fetch_timeout_in_milliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_set_fetch_timeout_in_milliseconds_m62C9B1451A2F3E89DC5727E5892CE77839A12F51 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		uint64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set_m9DF25559DEBC7A7C1ABBCDF332C44ABF9FC1EE8F(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSettingsInternal_set_fetch_timeout_in_milliseconds_m62C9B1451A2F3E89DC5727E5892CE77839A12F51_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.UInt64 Firebase.RemoteConfig.ConfigSettingsInternal::get_fetch_timeout_in_milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettingsInternal_get_fetch_timeout_in_milliseconds_m7B59586AE2BA4A3D94C0F505465C9CB159F9EFF2 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint64_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get_m3915C420470A50F5DF786461D236FF293DFB56BE(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSettingsInternal_get_fetch_timeout_in_milliseconds_m7B59586AE2BA4A3D94C0F505465C9CB159F9EFF2_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint64_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint64_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::set_minimum_fetch_interval_in_milliseconds(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal_set_minimum_fetch_interval_in_milliseconds_mCF23C208E156ED5B582A94705D029654AA3001DF (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		uint64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set_mB7112E89186EA06AE8585138C15DC35C2D068CEE(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSettingsInternal_set_minimum_fetch_interval_in_milliseconds_mCF23C208E156ED5B582A94705D029654AA3001DF_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.UInt64 Firebase.RemoteConfig.ConfigSettingsInternal::get_minimum_fetch_interval_in_milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigSettingsInternal_get_minimum_fetch_interval_in_milliseconds_mBF2AE0C60A24D53C8C495A141F3E24FCFD6E9421 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint64_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get_m746AA7961209F959EF35B2F06F9588708C4785F2(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSettingsInternal_get_minimum_fetch_interval_in_milliseconds_mBF2AE0C60A24D53C8C495A141F3E24FCFD6E9421_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint64_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint64_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.RemoteConfig.ConfigSettingsInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSettingsInternal__ctor_mDA2BA88FEECBE723A3DEBA1BFBE204238E988902 (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = RemoteConfigUtilPINVOKE_new_ConfigSettingsInternal_m17D0DBE756AB8D94BDC75A61D0FB43B00056E7AB(NULL);
		ConfigSettingsInternal__ctor_mD93EE0E35EF553916D0B1489810D1CD8D25140C4(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSettingsInternal__ctor_mDA2BA88FEECBE723A3DEBA1BFBE204238E988902_RuntimeMethod_var)));
	}

IL_001d:
	{
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
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal__ctor_mF1BB63620CF23BF9BFE1D36524CF1E2A61460FE4 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.FirebaseRemoteConfigInternal::getCPtr(Firebase.RemoteConfig.FirebaseRemoteConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseRemoteConfigInternal_getCPtr_mA901D74C854468298F38276F90AA901545B61985 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_Finalize_m8509B73B7889E42E4616AAA7CFC9E6DEA8643F85 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_Dispose_mC39B4BDBFE4ABDE8408A389E789E057310228884 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_Dispose_m41613AF37521B0541C9354CCC6081848BB901272 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m2050FFA80CB213A80A5764D9A5BE92EDCFE68215(__this, NULL);
			__this->___swigCMemOwn_1 = (bool)0;
			intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
			memset((&L_5), 0, sizeof(L_5));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), NULL, L_4, /*hidden argument*/NULL);
			__this->___swigCPtr_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			goto IL_0040;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.String Firebase.RemoteConfig.FirebaseRemoteConfigInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseRemoteConfigInternal_get_InstanceKey_mC9C5C0148055BCB3A791E2111CE9E6A1C92756E4 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseRemoteConfigInternal_get_App_m4FD5363778B6A7DD72C3DFF75A8DB1239C312C20(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_SetSwigCMemOwn_mB22DA217483619E5E72CBB4EE5070C69AED909A3 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, bool ___ownership0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___ownership0;
		__this->___swigCMemOwn_1 = L_0;
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.RemoteConfig.FirebaseRemoteConfigInternal::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FirebaseRemoteConfigInternal_ActivateAsync_m763A5C50F9448234DC75C1CBAB16EF9CCDA5A014 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Activate_mFD01231B4D540510CCFBFF34A43B673D2E01E306(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_ActivateAsync_m763A5C50F9448234DC75C1CBAB16EF9CCDA5A014_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_5 = V_0;
		FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36* L_6 = (FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36*)il2cpp_codegen_object_new(FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FutureBool__ctor_m7225C6D5C5CEE9F476B0EC83BB0B454D6A5E2FC0(L_6, L_5, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureBool_t185502F92C0BCE01BA56B2EB9B800F3BF7F34C36_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = FutureBool_GetTask_m61BCE52E5F0CB99C6736927DA2610741F46C9DC7(L_6, NULL);
		V_2 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8 = V_2;
		return L_8;
	}
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfigInternal::FetchAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfigInternal_FetchAsync_m843200ECBC42E441E68BC385FCE94D0BE60A9B48 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Fetch__SWIG_0_mA45C046F7957ABF13BEA910490105EB293C70D33(L_0, NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_2 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_2, L_1, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_2, NULL);
		V_0 = L_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = V_1;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfigInternal::SetConfigSettingsAsync(Firebase.RemoteConfig.ConfigSettingsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfigInternal_SetConfigSettingsAsync_mFE66B09B7FAC8C81226BA958EC4224C36111AC5C (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_1 = ___settings0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = ConfigSettingsInternal_getCPtr_m8FCEC5A05DD10A9F67942B277D9598BDD5A69AB1(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_SetConfigSettings_m9F0F0C842808651D526C428DAC333D92EB16E1D6(L_0, L_2, NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_4 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_4, L_3, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_4, NULL);
		V_0 = L_5;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6 = V_0;
		V_1 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = V_1;
		return L_7;
	}
}
// Firebase.RemoteConfig.ConfigSettingsInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetConfigSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* FirebaseRemoteConfigInternal_GetConfigSettings_m6338B6719DE2051DEC2CA3C8667FB3F0991D6CAE (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* V_0 = NULL;
	bool V_1 = false;
	ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetConfigSettings_m9B9B456ED7BDD7D0D089CCD6C24BBF72DFD9B308(L_0, NULL);
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_2 = (ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47*)il2cpp_codegen_object_new(ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConfigSettingsInternal__ctor_mD93EE0E35EF553916D0B1489810D1CD8D25140C4(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_GetConfigSettings_m6338B6719DE2051DEC2CA3C8667FB3F0991D6CAE_RuntimeMethod_var)));
	}

IL_0022:
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		ConfigSettingsInternal_t7A67C8B2DBDEDD9C9225494B382F201613B3AE47* L_7 = V_2;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRemoteConfigInternal_GetKeys_m9811D2FDD6D6E1F77DF4C10813F98F74E31FE641 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetKeys_m12818DB36675D0ED9A98699089FFD5E156D441A6(L_0, NULL);
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_2 = (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)il2cpp_codegen_object_new(StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_GetKeys_m9811D2FDD6D6E1F77DF4C10813F98F74E31FE641_RuntimeMethod_var)));
	}

IL_0022:
	{
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// Firebase.RemoteConfig.ConfigInfo Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* FirebaseRemoteConfigInternal_GetInfo_m60B105F39882D0105016C50C5FDE0D79CF81B8B0 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* V_0 = NULL;
	bool V_1 = false;
	ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInfo_m1E97318768F513415334A20C782F514B14F2B0F4(L_0, NULL);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_2 = (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39*)il2cpp_codegen_object_new(ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConfigInfo__ctor_m9B0031DBD81452E2D1FC46DF4BB6FBA829C8D6BA(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_GetInfo_m60B105F39882D0105016C50C5FDE0D79CF81B8B0_RuntimeMethod_var)));
	}

IL_0022:
	{
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_7 = V_2;
		return L_7;
	}
}
// Firebase.FirebaseApp Firebase.RemoteConfig.FirebaseRemoteConfigInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseRemoteConfigInternal_get_App_m4FD5363778B6A7DD72C3DFF75A8DB1239C312C20 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	bool V_2 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_3 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_App_get_mC8E02C4BE9F2632D031892DE7E27006BA6668690(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = V_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)il2cpp_codegen_object_new(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_get_App_m4FD5363778B6A7DD72C3DFF75A8DB1239C312C20_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_11 = V_3;
		return L_11;
	}
}
// Firebase.RemoteConfig.FirebaseRemoteConfigInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetInstanceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* FirebaseRemoteConfigInternal_GetInstanceInternal_m1F74B684B8B4401EFC99CF83CCA652B40F39805A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* V_1 = NULL;
	bool V_2 = false;
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* V_3 = NULL;
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* G_B3_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInstanceInternal_m79C4545DB3833E68B8504311E80009167682E8D8(L_1, NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_6 = V_0;
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_7 = (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7*)il2cpp_codegen_object_new(FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FirebaseRemoteConfigInternal__ctor_mF1BB63620CF23BF9BFE1D36524CF1E2A61460FE4(L_7, L_6, (bool)0, NULL);
		G_B3_0 = L_7;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_10;
		L_10 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_GetInstanceInternal_m1F74B684B8B4401EFC99CF83CCA652B40F39805A_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_11 = V_1;
		V_3 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_12 = V_3;
		return L_12;
	}
}
// System.Void Firebase.RemoteConfig.FirebaseRemoteConfigInternal::ReleaseReferenceInternal(Firebase.RemoteConfig.FirebaseRemoteConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m2050FFA80CB213A80A5764D9A5BE92EDCFE68215 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___rc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* L_0 = ___rc0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseRemoteConfigInternal_getCPtr_mA901D74C854468298F38276F90AA901545B61985(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m6DA38DE22C5A43BDBA3112E249999032B1BFBD7B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m2050FFA80CB213A80A5764D9A5BE92EDCFE68215_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.RemoteConfig.ConfigValueInternal Firebase.RemoteConfig.FirebaseRemoteConfigInternal::GetValueInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* FirebaseRemoteConfigInternal_GetValueInternal_m4C267D263005D5CECE7F6084FDA14DC3318D8350 (FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* V_0 = NULL;
	bool V_1 = false;
	ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetValueInternal_m029A4B89FC7CE8DD47E76E639DF42002A18A3111(L_0, L_1, NULL);
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_3 = (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752*)il2cpp_codegen_object_new(ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConfigValueInternal__ctor_mF7BD344A294C72D8A813072C195D5DC6303E4092(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseRemoteConfigInternal_GetValueInternal_m4C267D263005D5CECE7F6084FDA14DC3318D8350_RuntimeMethod_var)));
	}

IL_0023:
	{
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* L_8 = V_2;
		return L_8;
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
// System.Void Firebase.RemoteConfig.ConfigValueInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal__ctor_mF7BD344A294C72D8A813072C195D5DC6303E4092 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigValueInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal_Finalize_m24E18C469BBCE3FF2131C73733AF83B6D1F01B9B (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.ConfigValueInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigValueInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal_Dispose_m8BF701B1466B615E7CFC01E48D61CB790FD78BD4 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.RemoteConfig.ConfigValueInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.ConfigValueInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigValueInternal_Dispose_m5C01EBB4E29D12B55D90D37EB5EEBC53A1EBA081 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
				RemoteConfigUtilPINVOKE_delete_ConfigValueInternal_mF0580602FE6A3E27E5864E67A21E7A29D665A20C(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// Firebase.CharVector Firebase.RemoteConfig.ConfigValueInternal::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* V_1 = NULL;
	bool V_2 = false;
	CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* V_3 = NULL;
	CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigValueInternal_data_get_m8FABAA7B208B22E1DF5F625EC261CF791E52FE22(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = V_0;
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_6 = (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74*)il2cpp_codegen_object_new(CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CharVector__ctor_mEA7C221A367DCAF1A482672A6D9392B7A0B7C75E(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigValueInternal_get_data_mC3FB40D39AAF14AD2C9DDA29AB7C3DB674B6EE89_RuntimeMethod_var)));
	}

IL_0034:
	{
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_11 = V_3;
		return L_11;
	}
}
// Firebase.RemoteConfig.ValueSource Firebase.RemoteConfig.ConfigValueInternal::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigValueInternal_get_source_m58024286F45850D6D296B6F3F26CD18D968934C7 (ConfigValueInternal_t708737B2FA46B1EC73A6A6F1564185882A034752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = RemoteConfigUtilPINVOKE_ConfigValueInternal_source_get_m7AE049C04064A673DA4E026604B2232A15D48083(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigValueInternal_get_source_m58024286F45850D6D296B6F3F26CD18D968934C7_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		return L_6;
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
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE__cctor_mA40739E0F5A0F58285BD20C512A2634B6708E68A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8* L_0 = (SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8*)il2cpp_codegen_object_new(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m82F260AB218ED2B40E009C27F05F898B1A5C3968(L_0, NULL);
		((RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_StaticFields*)il2cpp_codegen_static_fields_for(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_StaticFields*)il2cpp_codegen_static_fields_for(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330* L_1 = (SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330*)il2cpp_codegen_object_new(SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_mB183038863C7A6721142019457201DF0F92906EC(L_1, NULL);
		((RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_StaticFields*)il2cpp_codegen_static_fields_for(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_StaticFields*)il2cpp_codegen_static_fields_for(RemoteConfigUtilPINVOKE_tD764ED92F869C998473AA7C100FBF7D5AA45491B_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigInfo_LastFetchStatus_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchStatus_get_mBBD053374DC297F7C1D58ECE148028EB59D1BD3B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchStatus_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchStatus_get)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigInfo_LastFetchFailureReason_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigInfo_LastFetchFailureReason_get_m9F8064B51AAD9C294CE8ABEAECE9F5325BA64070 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchFailureReason_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigInfo_LastFetchFailureReason_get)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigInfo(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigInfo_mCB47B549C8B7B7802EE8E91F3FFD2758E5472C98 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_delete_ConfigInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_delete_ConfigInfo)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_fetch_timeout_in_milliseconds_set(System.Runtime.InteropServices.HandleRef,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set_m9DF25559DEBC7A7C1ABBCDF332C44ABF9FC1EE8F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, uint64_t ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_set)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.UInt64 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_fetch_timeout_in_milliseconds_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RemoteConfigUtilPINVOKE_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get_m3915C420470A50F5DF786461D236FF293DFB56BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_fetch_timeout_in_milliseconds_get)(____jarg10_marshaled);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set(System.Runtime.InteropServices.HandleRef,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set_mB7112E89186EA06AE8585138C15DC35C2D068CEE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, uint64_t ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_set)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.UInt64 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RemoteConfigUtilPINVOKE_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get_m746AA7961209F959EF35B2F06F9588708C4785F2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigSettingsInternal_minimum_fetch_interval_in_milliseconds_get)(____jarg10_marshaled);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::new_ConfigSettingsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_new_ConfigSettingsInternal_m17D0DBE756AB8D94BDC75A61D0FB43B00056E7AB (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_new_ConfigSettingsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_new_ConfigSettingsInternal)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigSettingsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigSettingsInternal_m235B4B93AC64E32FFBE2D591272372C5A298CF26 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_delete_ConfigSettingsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_delete_ConfigSettingsInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_Activate(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Activate_mFD01231B4D540510CCFBFF34A43B673D2E01E306 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Activate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Activate)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_Fetch__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_Fetch__SWIG_0_mA45C046F7957ABF13BEA910490105EB293C70D33 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Fetch__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_Fetch__SWIG_0)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_SetConfigSettings(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_SetConfigSettings_m9F0F0C842808651D526C428DAC333D92EB16E1D6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_SetConfigSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_SetConfigSettings)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetConfigSettings(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetConfigSettings_m9B9B456ED7BDD7D0D089CCD6C24BBF72DFD9B308 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetConfigSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetConfigSettings)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetKeys(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetKeys_m12818DB36675D0ED9A98699089FFD5E156D441A6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetKeys", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetKeys)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetInfo(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInfo_m1E97318768F513415334A20C782F514B14F2B0F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInfo)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_App_get_mC8E02C4BE9F2632D031892DE7E27006BA6668690 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_App_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_App_get)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetInstanceInternal_m79C4545DB3833E68B8504311E80009167682E8D8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetInstanceInternal)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_ReleaseReferenceInternal_m6DA38DE22C5A43BDBA3112E249999032B1BFBD7B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::FirebaseRemoteConfigInternal_GetValueInternal(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_FirebaseRemoteConfigInternal_GetValueInternal_m029A4B89FC7CE8DD47E76E639DF42002A18A3111 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetValueInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_FirebaseRemoteConfigInternal_GetValueInternal)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigValueInternal_data_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigUtilPINVOKE_ConfigValueInternal_data_get_m8FABAA7B208B22E1DF5F625EC261CF791E52FE22 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigValueInternal_data_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigValueInternal_data_get)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::ConfigValueInternal_source_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteConfigUtilPINVOKE_ConfigValueInternal_source_get_m7AE049C04064A673DA4E026604B2232A15D48083 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_ConfigValueInternal_source_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_ConfigValueInternal_source_get)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE::delete_ConfigValueInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigUtilPINVOKE_delete_ConfigValueInternal_mF0580602FE6A3E27E5864E67A21E7A29D665A20C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_RemoteConfig_CSharp_delete_ConfigValueInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_RemoteConfig_CSharp_delete_ConfigValueInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_RemoteConfigUtil_m0DEA42E7534E0E52B3FC183E9405957B2998FFBE (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___applicationDelegate0, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___arithmeticDelegate1, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___divideByZeroDelegate2, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___indexOutOfRangeDelegate3, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidCastDelegate4, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___invalidOperationDelegate5, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___ioDelegate6, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___nullReferenceDelegate7, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___outOfMemoryDelegate8, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___overflowDelegate9, ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* ___systemExceptionDelegate10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterExceptionCallbacks_RemoteConfigUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_RemoteConfigUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_RemoteConfigUtil_mB52A4FBD9552E0E467D7BA843FBAA17E9EB21A86 (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentDelegate0, ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentNullDelegate1, ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterExceptionArgumentCallbacks_RemoteConfigUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_RemoteConfigUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_3, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_9, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5(L_9, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mBB58F822B02B510AEFD71F5E41403D9E766885C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_0 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m9B6B269254B357159AA7DCD40E483590F35DA10B_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_1 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_mD29F2A3E583306D3DA0F014F7928EFAFC9B9DB05_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_2 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m29ECFEAEDCA1D8736D2DD0EA240D4FCC48F141F9_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_3 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA1964156FD2B07E9B54C088FEB4A772401E4B414_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_4 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m7631B0978D8F2778F19EE19D63DA7C328E650FDA_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_5 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m3A2021E2645663F9BD3496059BADE623AD651EFA_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_6 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mF911CEDEC882702476CDA340CD73FBD929387D58_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_7 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m67863B0F7E9E97A2D8B9B8E47B5C500FA7820416_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_8 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m8B0C27D05B63350503C572DF25318688284E83EF_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_9 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m49DADE97C409B835CC44E76D1447C74C6E679910_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_10 = (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*)il2cpp_codegen_object_new(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m68BC16E1F3CF300CA268972B1B73E6CE854726A4_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_11 = (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m6404526A2081B13880D17B9D3C9B32F8893722DD(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_mEBA0899DF46B297486F14F75803576D40773BAE6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_12 = (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m6404526A2081B13880D17B9D3C9B32F8893722DD(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_mE645F98D6DA0963BD57F793005677C9BA745B55D_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_13 = (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m6404526A2081B13880D17B9D3C9B32F8893722DD(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7E805F919FB6F4027AFE1903A689FE01CE254DDC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_14 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_15 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_16 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_17 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_18 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_19 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_20 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_21 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_22 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_23 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* L_24 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_RemoteConfigUtil_m0DEA42E7534E0E52B3FC183E9405957B2998FFBE(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_25 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_26 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* L_27 = ((SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_RemoteConfigUtil_mB52A4FBD9552E0E467D7BA843FBAA17E9EB21A86(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m82F260AB218ED2B40E009C27F05F898B1A5C3968 (SWIGExceptionHelper_t5AB5E1BE4A487E8E8DD4D29BA621FDAF950BAFC8* __this, const RuntimeMethod* method) 
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
void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_Multicast(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* currentDelegate = reinterpret_cast<ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenInst(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenStatic(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenStaticInvoker(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_ClosedStaticInvoker(ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m39C51EE50CA06918667CFA0D20D34120CB294375 (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657_Multicast;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m6F94ADD5F4FFE782042317E06898B1E810CE7657 (ExceptionDelegate_tE000F6CC3CCC31078BF24DA187D4DBD603699F4D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_Multicast(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenInst(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenStatic(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenStaticInvoker(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0, ___paramName1);
}
void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_ClosedStaticInvoker(ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0, ___paramName1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m6404526A2081B13880D17B9D3C9B32F8893722DD (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392_Multicast;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m0D114F7D1E99BA95010CCDA6EB6658FE323F8392 (ExceptionArgumentDelegate_tF46C592639D323242BCA19121172D9A54D8E88EE* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___e0;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m22F5C9E09230A9BA5EB67D89AB436052B77BC7C5_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m8EBFDF2E98883770D26EEA2F690355196FB92DCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_3 = L_5;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_4;
					if (!L_6)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_8 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t* L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t* L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mF2757EB9E9CE9703F31501E9BA3FA18315D12B68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5A1A0A582C0D1B4E20E384873173164989B9114C_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_RemoteConfigUtil(Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_RemoteConfigUtil_mC99171C36A78E629513BB5568376C7E3B2DBF5C7 (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* ___stringDelegate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterStringCallback_RemoteConfigUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_RemoteConfigUtil)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4 (String_t* ___cString0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m6BFE1C5B04D0F591E9A85B25EA100918DCEBC766 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* L_0 = (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089*)il2cpp_codegen_object_new(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m9B8D6CABE54FDB1A8B4FB8A73C5CE2DF7A82277B(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_mC0F864DBE96F4FDEB34C49FEDC2DB92A4B5A2AB4_RuntimeMethod_var), NULL);
		((SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* L_1 = ((SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_RemoteConfigUtil_mC99171C36A78E629513BB5568376C7E3B2DBF5C7(L_1, NULL);
		return;
	}
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mB183038863C7A6721142019457201DF0F92906EC (SWIGStringHelper_tEC7448EF59CA05FB46EAD14FD1A53BEAFE84C330* __this, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_Multicast(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* currentDelegate = reinterpret_cast<SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenInst(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenStatic(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenStaticInvoker(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_ClosedStaticInvoker(SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089 (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m9B8D6CABE54FDB1A8B4FB8A73C5CE2DF7A82277B (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A_Multicast;
}
// System.String Firebase.RemoteConfig.RemoteConfigUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m13EB845E857AB899B1933446DD7278472F42BE9A (SWIGStringDelegate_t71F44057E1DE8E295ABFEE9EEDEA34B3E0E89089* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_FetchTimeoutInMilliseconds_m5A6FA03E357FE065ED9189A76F6716D180D02E39_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CFetchTimeoutInMillisecondsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigSettings_set_FetchTimeoutInMilliseconds_m003407309DD0FA6809C45CF425F69724DE7D5657_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CFetchTimeoutInMillisecondsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigSettings_get_MinimumFetchIntervalInMilliseconds_mCDF12B13EB4FCBB9E010AE672A32FD71413CF843_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CMinimumFetchIntervalInMillisecondsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigSettings_set_MinimumFetchIntervalInMilliseconds_m0FA01DCD26EB9BF3B1E4A4D35EFE5E90712EDAA7_inline (ConfigSettings_tBAF827DAF5924A625732B614770F3DB1064E7B18* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___U3CMinimumFetchIntervalInMillisecondsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigValue_set_Data_mC5DB844CBD15084A7806844E1C4E7EBC95C771CE_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigValue_set_Source_m41ABFE41851579863CE43A7EDF20A2ADE97E5F9F_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConfigValue_get_Data_m67F81D148FD9F0A4077790B5C4604378261C9853_inline (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
