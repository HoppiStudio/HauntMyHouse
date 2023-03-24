#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
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
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
// System.Func`2<Oculus.Interaction.HandGrab.HandGrabPoseData,System.Boolean>
struct Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>
struct Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>
struct Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.Pose,System.Boolean>
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19;
// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C;
// System.Func`2<UnityEngine.Quaternion,System.Boolean>
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
// System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA;
// System.Func`2<System.Single,System.Int32>
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9;
// System.Func`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tB0A053D611A12E64831578506F155296DD632944;
// System.Func`2<System.Single,System.Object>
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct Func_2_t80EE4308914889B523F6C2F755648D3B300DC684;
// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t750700353C53A433E575AA00157325AEC6A024D5;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct IEnumerable_1_tD055C829E32D26BEB0D55C3F16B7C40FC6BB3BF2;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>
struct IEnumerable_1_t2BB095AB2DF67A05AFA977F9A716C856D31DC5DA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct IEnumerator_1_t684BECA33EA0A222E858D0EF55B8E9F6033545BF;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>
struct IEnumerator_1_tEECB81389808568F3A4227D00948C08133D9EE8F;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>
struct WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>
struct WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile[]
struct SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile
struct ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral6A13904391B9244725CDA479F017C96337B784A1;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ___s_emptyArray_5;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	int32_t ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	RuntimeObject* ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	float ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892 : public RuntimeObject {};
struct Il2CppArrayBounds;

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

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<System.Single>
struct Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	float ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C* ___m_List_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 
{
	// System.String UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::sceneGUID
	String_t* ___sceneGUID_0;
	// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::profile
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

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

// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>
struct Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current_3;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB0A053D611A12E64831578506F155296DD632944* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>
struct WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 
{
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabPoseData::gripPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPoseData::handPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	// System.Single Oculus.Interaction.HandGrab.HandGrabPoseData::scale
	float ___scale_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
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

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject* ___anyValue_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current_3;
};

// System.Func`2<Oculus.Interaction.HandGrab.HandGrabPoseData,System.Boolean>
struct Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>
struct Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>
struct Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Pose,System.Boolean>
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Quaternion,System.Boolean>
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Int32>
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tB0A053D611A12E64831578506F155296DD632944  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Object>
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>
struct Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct Func_2_t80EE4308914889B523F6C2F755648D3B300DC684  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t750700353C53A433E575AA00157325AEC6A024D5  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>
struct Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>
struct WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>
struct WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ___enumerator_6;
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72  : public Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t750700353C53A433E575AA00157325AEC6A024D5* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
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


// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5_gshared (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB_gshared (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m60740AB81419D00DF45DC8EA8E3A25AE17566AD5_gshared (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B_gshared (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m88325AFB18679FBA1B455264A293EAE1A4721412_gshared_inline (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4_gshared (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* __this, RuntimeObject* ___source0, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m351F93D3C6F5E4BDBF7B5CCB31DBED12B794E9DA_gshared (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mA6225BE1AE5198A2C86105F57FA092C56E1E0CC8_gshared_inline (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source0, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate1, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Pose>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Pose,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___source0, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3E8A13A9FCFFD6C0F16AB6CDEE9562D16CBED163_gshared (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Single,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m027ACE6CC33A250F9CEA92A5FF0F7763926E1FE8_gshared_inline (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* __this, float ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Single,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Single,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m70EA2E64DD6D288044F7E9C745608FC2DD237D6C_gshared (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mE5A176A3F4E921947F105D1F3704A79EA85F5D6E_gshared_inline (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAF0A50E56CD0918C735DEBE4AA39A2ED733C46D3_gshared (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m117F754DB7EEBFB2304E0500AEA18DE502C85793_gshared_inline (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m163D6B71F77CE92B3E9A61C7D430C5B212A3E7F8_gshared (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Vector3,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDD84F2861EF652091F30160CA40B99974FEAC377_gshared_inline (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2CA509071BD31C2422E3999170EDF0E34AA97231_gshared_inline (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___source0, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mADDF17D3B14C3F8AF3476B69C9A7E9DC58F36231_gshared (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mDAACFCB2AD47713A2CB5328DB9DC5FF905F4DEBA_gshared_inline (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57D85141EB8C64BC41BA8DF036CA72D866FAA669_gshared (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t750700353C53A433E575AA00157325AEC6A024D5* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D_gshared (List_1_t9F15086189A9401719178EA3A7122587601C9F5C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m01053F0315D799573D4A7B6F5B20A68EA171AD75_gshared_inline (Func_2_t750700353C53A433E575AA00157325AEC6A024D5* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA6C8C1953839792C5B031429D0CCC532DD0073A4_gshared (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m699F1C79E4158A8C2557FEA8C3C7AB3580235512_gshared_inline (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) ;

// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::GetEnumerator()
inline Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5 (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
inline bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8 (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::.ctor()
inline void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561 (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor()
inline void Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*, const RuntimeMethod*))Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m60740AB81419D00DF45DC8EA8E3A25AE17566AD5 (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m60740AB81419D00DF45DC8EA8E3A25AE17566AD5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>::GetEnumerator()
inline Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m88325AFB18679FBA1B455264A293EAE1A4721412_inline (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_m88325AFB18679FBA1B455264A293EAE1A4721412_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
inline bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5 (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4 (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* __this, RuntimeObject* ___source0, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*, RuntimeObject*, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9 (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m351F93D3C6F5E4BDBF7B5CCB31DBED12B794E9DA (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m351F93D3C6F5E4BDBF7B5CCB31DBED12B794E9DA_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mA6225BE1AE5198A2C86105F57FA092C56E1E0CC8_inline (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mA6225BE1AE5198A2C86105F57FA092C56E1E0CC8_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5 (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::.ctor()
inline void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*, const RuntimeMethod*))Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source0, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate1, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Pose>::GetEnumerator()
inline Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::get_Current()
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.Pose,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>::Invoke(T)
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::MoveNext()
inline bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6 (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987 (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___source0, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*, RuntimeObject*, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m3E8A13A9FCFFD6C0F16AB6CDEE9562D16CBED163 (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m3E8A13A9FCFFD6C0F16AB6CDEE9562D16CBED163_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
inline Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
inline float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Single,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, float, const RuntimeMethod*))Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m027ACE6CC33A250F9CEA92A5FF0F7763926E1FE8_inline (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA*, float, const RuntimeMethod*))Func_2_Invoke_m027ACE6CC33A250F9CEA92A5FF0F7763926E1FE8_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
inline bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209 (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5 (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Single,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, float, const RuntimeMethod*))Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030 (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tB0A053D611A12E64831578506F155296DD632944*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tB0A053D611A12E64831578506F155296DD632944*, float, const RuntimeMethod*))Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287 (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Single,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, float, const RuntimeMethod*))Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m70EA2E64DD6D288044F7E9C745608FC2DD237D6C (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m70EA2E64DD6D288044F7E9C745608FC2DD237D6C_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mE5A176A3F4E921947F105D1F3704A79EA85F5D6E_inline (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mE5A176A3F4E921947F105D1F3704A79EA85F5D6E_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mAF0A50E56CD0918C735DEBE4AA39A2ED733C46D3 (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mAF0A50E56CD0918C735DEBE4AA39A2ED733C46D3_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>::GetEnumerator()
inline Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264 (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m117F754DB7EEBFB2304E0500AEA18DE502C85793_inline (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m117F754DB7EEBFB2304E0500AEA18DE502C85793_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829 (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83 (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::.ctor()
inline void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*, const RuntimeMethod*))Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m163D6B71F77CE92B3E9A61C7D430C5B212A3E7F8 (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9*, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, Func_2_t80EE4308914889B523F6C2F755648D3B300DC684*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m163D6B71F77CE92B3E9A61C7D430C5B212A3E7F8_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.Vector3,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mDD84F2861EF652091F30160CA40B99974FEAC377_inline (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Func_2_Invoke_mDD84F2861EF652091F30160CA40B99974FEAC377_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2CA509071BD31C2422E3999170EDF0E34AA97231_inline (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Func_2_Invoke_m2CA509071BD31C2422E3999170EDF0E34AA97231_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___source0, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*, RuntimeObject*, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mADDF17D3B14C3F8AF3476B69C9A7E9DC58F36231 (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mADDF17D3B14C3F8AF3476B69C9A7E9DC58F36231_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::GetEnumerator()
inline Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mDAACFCB2AD47713A2CB5328DB9DC5FF905F4DEBA_inline (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mDAACFCB2AD47713A2CB5328DB9DC5FF905F4DEBA_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15 (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m57D85141EB8C64BC41BA8DF036CA72D866FAA669 (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t750700353C53A433E575AA00157325AEC6A024D5* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t750700353C53A433E575AA00157325AEC6A024D5*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m57D85141EB8C64BC41BA8DF036CA72D866FAA669_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator()
inline Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D (List_1_t9F15086189A9401719178EA3A7122587601C9F5C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF (*) (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, const RuntimeMethod*))List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
inline SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::Invoke(T)
inline HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m01053F0315D799573D4A7B6F5B20A68EA171AD75_inline (Func_2_t750700353C53A433E575AA00157325AEC6A024D5* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*) (Func_2_t750700353C53A433E575AA00157325AEC6A024D5*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m01053F0315D799573D4A7B6F5B20A68EA171AD75_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
inline bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA6C8C1953839792C5B031429D0CCC532DD0073A4 (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA6C8C1953839792C5B031429D0CCC532DD0073A4_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::Invoke(T)
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m699F1C79E4158A8C2557FEA8C3C7AB3580235512_inline (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m699F1C79E4158A8C2557FEA8C3C7AB3580235512_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5 (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline)(__this, ___arg0, method);
}
// System.String Facebook.WitAi.Lib.WitResponseNode::op_Implicit(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87 (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___d0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___src0, ___srcLen1, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, il2cppRetVal, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___src0, ___srcLen1, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m8DC967543F35E54B736058BC2D3FCFFE921A8052_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_2 = (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*)__this->___selector_5;
		WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* L_3 = (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m8A45D7203970CAEC56A17FB7642DC08354FE71AC(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m66117FFE58A7C34134453BB6CF84EAC44E88EA11_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* L_11 = (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m65D6C37E9192A0D08B671B89109DC9A4D75EA41F_gshared (WhereSelectListIterator_2_t8F9C36625E894E7BDBDCF3F3273EFE656D82E14D* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m796C8279CEB66ADDC80A7EAC36AEE08605979787_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* L_3 = (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAFCE990F26EBDDF656AA01807375D36544C63124_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_11 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1B9A768C2B1A26E615BCDB10078F5231CF0C4ADC_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF2790E5EEE1D2834008B9010A19FF3E957831704_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* L_3 = (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m238375EE3AAF7B4CE3F25C85030EB4F8692B3BC9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = List_1_GetEnumerator_mE145D413FF6CDAE7061E3B5CED7823B0EFCBB7F5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_11 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA426094A845A1CE82FF3AD1193681948DA7603C9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m60740AB81419D00DF45DC8EA8E3A25AE17566AD5_gshared (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_m4E726E40053177B34563E67A7D3ED1EBE3BE07BB_gshared (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* L_2 = (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8*)__this->___selector_5;
		WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* L_3 = (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m60740AB81419D00DF45DC8EA8E3A25AE17566AD5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB01F92EC92CF5B3F21653A184FBA9F2C818FB2F1_gshared (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* L_11 = (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_m88325AFB18679FBA1B455264A293EAE1A4721412_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m909DF1DB856DDBAC5B9CC361679734E5998F7392_gshared (WhereSelectListIterator_2_t6E99EB454E7ACEA2EEA0BA2B8FAE1B16B55A7AE1* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m681F413FC2C5FE51B87C7ED65EF60F4B41DA6CF2_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_2 = (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*)__this->___selector_5;
		WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* L_3 = (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m8618F34681C4961ABD40B542F1C67BDED28DCF4F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBD8DBE1B22CA9AE5EF4CE2F335A919B5C66679F8_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* L_11 = (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m40B821BD9576B72161380E66E341A5A0DE235742_gshared (WhereSelectListIterator_2_t177F986E350A77EED73444042E58A57FF8915CE7* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m89C4946CF9C7CA28F2091618685B85AA11EA3E87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* L_3 = (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7DCCE086E23C0D68D4F9AEF5E70291B76432AAF1_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_11 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC6AFE32AA08E2CBC27F4433BA2319CA59306DC87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D39A066ED4134383555E981E6798ABE193987FA_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* L_3 = (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA38FDC21AFF8361AF5116FA137FCCBCACEA1AD47_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = List_1_GetEnumerator_m8E8CDE0EBC3A66F0257FD41A31A4055983A0665B(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_11 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m760B5F9924376AD216CBF0E0478787D491BBCC1C_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m351F93D3C6F5E4BDBF7B5CCB31DBED12B794E9DA_gshared (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_mF34EBF71DB4FED35AFC2CD2BD0D75180C5C437BB_gshared (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* L_2 = (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80*)__this->___selector_5;
		WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* L_3 = (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m351F93D3C6F5E4BDBF7B5CCB31DBED12B794E9DA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mADD74D8E9E7D85E2E483835477C21B924F40EA00_gshared (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* L_11 = (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_mA6225BE1AE5198A2C86105F57FA092C56E1E0CC8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4A2BFBC5254883A07DAD92BDC5C1B8B01667C434_gshared (WhereSelectListIterator_2_tBCABAD5E4A1035A92C5AC120B3AE4E0D168786CB* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m62045FC9E5DDF7C34F754695E9EBF13C4326DCE8_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* L_3 = (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE97A1BC013242BE83F2417B94F433533ECA0BE17_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3FE0D83DC912C8134BC2E276A0BBBF78E7CCDFF2_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mF42081341BA80585066D84F1EB99058CEAEB9529_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* L_3 = (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m800FE72E92DE905CEB928E72485F8A74DDBFFEF0_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_11 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEA53E9D37F0B4DB9D0E1D26336E8203C5080814B_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source0, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate1, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* WhereSelectListIterator_2_Clone_m47AED1BFB1424EA5DD7CD462A74B68318FAF25DD_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* L_3 = (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6E59DFD08E06CE99C6F1B2E476F96CE1407BBBF7_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_3 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_4;
		L_4 = List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_5 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_7 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_8 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_11 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_1;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_14 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::Dispose() */, (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3F7CA31CDB32C704C8A775637B425248EC96913B_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* L_1 = (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3E8A13A9FCFFD6C0F16AB6CDEE9562D16CBED163_gshared (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_m258B3022E1468EAFBEFF34898C9B127505FF2DA5_gshared (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* L_2 = (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA*)__this->___selector_5;
		WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* L_3 = (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m3E8A13A9FCFFD6C0F16AB6CDEE9562D16CBED163(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCA6998FAD331BB2B285256ACE7E5D53A06DE7C76_gshared (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* L_11 = (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_m027ACE6CC33A250F9CEA92A5FF0F7763926E1FE8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m113C0AEBDDAE97DDE1DEF353015AB104737FDAFE_gshared (WhereSelectListIterator_2_t60B734749C99772780A5DC3BB0ADC287756E3B85* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m83103F083E2774F63DCAF44EEA4FDA620666A842_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* L_3 = (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5EE4A67650BDA6399B4D4CCBA4C6FAF5DBD891CC_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_11 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA93495B19C8B7D4C3787E3E17F2EE687BBCAA203_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tB0A053D611A12E64831578506F155296DD632944* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mA0362CF7356220FFEE8398D75DBBF8A56EF00E2E_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_2 = (Func_2_tB0A053D611A12E64831578506F155296DD632944*)__this->___selector_5;
		WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* L_3 = (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m57DA06108F1F5613A5B3CCE8A62826303E75F030(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m42F09D1899B886163544FA2526D6003330C1571B_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB0A053D611A12E64831578506F155296DD632944* L_11 = (Func_2_tB0A053D611A12E64831578506F155296DD632944*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m68075FABD2216D8D4854D3ADCE10291091F1D306_gshared (WhereSelectListIterator_2_t1F24A66050DFD1325C3D1FD15C36840E43DDAEC5* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m4C5B47918993CE67EEDF80BB4EEB316D15EB817E_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* L_3 = (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m365018BB1C5782BD2AAFBA88AE5D47F6CECDB135_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_11 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1471483926B9C1FB36A517E3AF0FB642126DFCF2_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m70EA2E64DD6D288044F7E9C745608FC2DD237D6C_gshared (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_mCB81E21149D343F4836EF4B066BA20F2B20F2E71_gshared (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* L_2 = (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51*)__this->___selector_5;
		WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* L_3 = (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m70EA2E64DD6D288044F7E9C745608FC2DD237D6C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBE9B091B0BE2E5E9DD32F32E591162231F346F95_gshared (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* L_11 = (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_mE5A176A3F4E921947F105D1F3704A79EA85F5D6E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD925C6E18CA11E6F35E8E4248AA59EC0228AD81E_gshared (WhereSelectListIterator_2_t63D6FC7CB8D210C9AD1EF04B44E529FF91AA143A* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m203266656A861AB9FCE85C6265CBB81759D6EC78_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* L_3 = (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m441444FFC4A56B13F1DCFA2E6C732972CC286B71_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_11 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B9342EC90171F99141E32C1E7D1126C61888256_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAF0A50E56CD0918C735DEBE4AA39A2ED733C46D3_gshared (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_m4C753F36119DAB46F4899D06381F0C76796FF7D3_gshared (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* L_2 = (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60*)__this->___selector_5;
		WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* L_3 = (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mAF0A50E56CD0918C735DEBE4AA39A2ED733C46D3(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m98AE4D79D9BA7A3EB492E03CDD0C8BF4D94654D6_gshared (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* L_11 = (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_m117F754DB7EEBFB2304E0500AEA18DE502C85793_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m68BB63E4CC06EFD5E9BD64BBE61DBDBBB0FBFC05_gshared (WhereSelectListIterator_2_t28277AC7443C6A5098D2D34B1F695766DAAABE2D* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mAA6E54E622F7BE663D868824A8964114883CF9B8_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_2 = (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*)__this->___selector_5;
		WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* L_3 = (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mE284E07CB05A30CB3CD67A6B975FFBB56EA2B829(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3C3E603A5CAAA0B3816226A84D4D8695B2A8033B_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* L_11 = (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA5DFDE58967126D391822B5CCAEAD14051DD8CF3_gshared (WhereSelectListIterator_2_t793E1457EA65F982F1E56BAD6F9D0C97047DF484* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m7514B4D4CA43073C8D6D3B10D6B33C562464A0C8_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* L_3 = (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9801C3269DA1FCC381EED100CE2C710B10873FDE_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_11 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m54A65CB2977BDF55DA3004F81CF889F22E233DE9_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = List_1_GetEnumerator_m2E8AAA332A1CCE110C46806675D27756C848C264(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m163D6B71F77CE92B3E9A61C7D430C5B212A3E7F8_gshared (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_m58825E8238731A2F16FEF9682D37FCECD3B092C1_gshared (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)__this->___source_3;
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_1 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* L_2 = (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684*)__this->___selector_5;
		WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* L_3 = (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m163D6B71F77CE92B3E9A61C7D430C5B212A3E7F8(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m37E6B7EAA039E70F3D22C70D6C7D50137D878B34_gshared (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_4;
		L_4 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* L_5 = (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*)(&__this->___enumerator_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_7 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_8 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDD84F2861EF652091F30160CA40B99974FEAC377_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* L_11 = (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684*)__this->___selector_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m2CA509071BD31C2422E3999170EDF0E34AA97231_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* L_14 = (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8894B480AFB1CC736C5387D0ACF0A1CC20B05E89_gshared (WhereSelectListIterator_2_tBD56FCEE3293C275BADDFCAEF0353B707DB3D7F9* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mADDF17D3B14C3F8AF3476B69C9A7E9DC58F36231_gshared (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_mBB4BDBDF2ACDDFE3F9F7A8411A48CEB9F3EE35C2_gshared (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* L_2 = (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924*)__this->___selector_5;
		WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* L_3 = (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mADDF17D3B14C3F8AF3476B69C9A7E9DC58F36231(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0D393FEEFE02FB5D98D90B58408CF4CA2B4638F5_gshared (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* L_11 = (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_mDAACFCB2AD47713A2CB5328DB9DC5FF905F4DEBA_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2E1EB3EB191855C47C5238A088A7AA525D343622_gshared (WhereSelectListIterator_2_t8F21EF79BABB14643964BC4D7E8646020DF805E9* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m017DDC5605971EF6DC6E63CC46E9C1FF67ECF3C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*)__this->___selector_5;
		WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* L_3 = (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2745F3BB6FB127C4C57AA2EC540DEAA7A89D622_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_11 = (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF06218BFCB481A4B87E64900FBFE9FDABB11A7C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57D85141EB8C64BC41BA8DF036CA72D866FAA669_gshared (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t750700353C53A433E575AA00157325AEC6A024D5* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m232414B728D026EF44EA084DEFE2B40A177B4BEB((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t750700353C53A433E575AA00157325AEC6A024D5* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A* WhereSelectListIterator_2_Clone_m8E7E18D77266B5F16DC8AC924F8F14CA518DB599_gshared (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t750700353C53A433E575AA00157325AEC6A024D5* L_2 = (Func_2_t750700353C53A433E575AA00157325AEC6A024D5*)__this->___selector_5;
		WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* L_3 = (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m57D85141EB8C64BC41BA8DF036CA72D866FAA669(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m39D7A4C6AE387632FBEEE7EB94504CE4B0DB88C5_gshared (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t750700353C53A433E575AA00157325AEC6A024D5* L_11 = (Func_2_t750700353C53A433E575AA00157325AEC6A024D5*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_13;
		L_13 = Func_2_Invoke_m01053F0315D799573D4A7B6F5B20A68EA171AD75_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this)->___current_2))->___handPose_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_tC721A0AAF6C53CCF12B9F5C7A567271E29963C0A*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m02B91D821AE5566D626B5428D37F869EB0821F4B_gshared (WhereSelectListIterator_2_tB630E37F0FB79CB8EAC4ECCD35204FD560941F72* __this, Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t43B8ED4F72B92722D1A21CE52285BBE1B41A8DF4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2* L_1 = (WhereEnumerableIterator_1_tA125302ABE3EF23FF9DACC459D72705CE30E9EA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE7773764765C8A135DA09E478F9640B64A61EEF4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m51E56C25ECF73ECFA4D3EDDBE95158B6DE5EF553_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_2 = (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*)__this->___selector_5;
		WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* L_3 = (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m4A8EDC35F3D32D665831939E542E4840C88D144A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB6B495323235385E5F536D86FEB9EDC404C042C5_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* L_11 = (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB3C7E3A322818666ABFED75FBEC7A4C8BCCE09A3_gshared (WhereSelectListIterator_2_tE542BFD167BAB79811F496ACBCDEA722CB43D2B6* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA6C8C1953839792C5B031429D0CCC532DD0073A4_gshared (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m209476131688285E41C8E33285E55E392D3D1C3F_gshared (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* L_2 = (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F*)__this->___selector_5;
		WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* L_3 = (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA6C8C1953839792C5B031429D0CCC532DD0073A4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m924B82F691D85FAF134351E9A796B9BD0C8D2E3B_gshared (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* L_11 = (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m699F1C79E4158A8C2557FEA8C3C7AB3580235512_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2C0A0B7C6FE1C5965DEDD574ED1C16ACF140AFD0_gshared (WhereSelectListIterator_2_tC9D75AB54D610C593E22CB0D298FF4AF26FB3A1F* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m89B522BAE24867FCC8287422B3CD6B3E4DD1DAE0_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* L_3 = (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFB9C45CEBAED3E2C325D5D59C257CAB6F743AA46_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = List_1_GetEnumerator_m90A3012B8AAD96148CF75F671CE8925B53BADD0D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_11 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m072977E25657E836E04AE9F97F55D76809EF700A_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_gshared (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// responseNode = node;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___node0;
		NullCheck(L_1);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_2, NULL);
		__this->___id_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_1), (void*)L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4 = ___node0;
		NullCheck(L_4);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_5, NULL);
		__this->___name_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = ___node0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_8, NULL);
		__this->___role_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___role_3), (void*)L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10 = ___node0;
		NullCheck(L_10);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11;
		L_11 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_11);
		__this->___start_4 = L_12;
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_13 = ___node0;
		NullCheck(L_13);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_14;
		L_14 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_13, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_14);
		__this->___end_5 = L_15;
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_16 = ___node0;
		NullCheck(L_16);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_17;
		L_17 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_17, NULL);
		__this->___type_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_6), (void*)L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_19 = ___node0;
		NullCheck(L_19);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_20;
		L_20 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_19, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_20, NULL);
		__this->___body_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_7), (void*)L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_22 = ___node0;
		NullCheck(L_22);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_23;
		L_23 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_22, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_23);
		__this->___confidence_9 = L_24;
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_25 = ___node0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_26, NULL);
		__this->___hasData_10 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		// value = OnParseValue(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_28 = ___node0;
		int32_t L_29;
		L_29 = VirtualFuncInvoker1< int32_t, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_28);
		__this->___value_8 = L_29;
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_30 = ___node0;
		NullCheck(L_30);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_31;
		L_31 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_30, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_31);
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_32;
		L_32 = VirtualFuncInvoker0< WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, L_31);
		__this->___entities_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_11), (void*)L_32);
		// return this;
		return __this;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_mCB7C582B850FD81F1546B9CE94A889AACC2D3AC2_gshared (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, const RuntimeMethod* method) 
{
	{
		// return value.ToString();
		int32_t* L_0 = (int32_t*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_gshared (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* WitEntityDataBase_1_FromEntityWitResponseNode_mA2434A6859F2D25D71070D839414E7E640D2DF2F_gshared (WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// responseNode = node;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___node0;
		NullCheck(L_1);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_2, NULL);
		__this->___id_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_1), (void*)L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4 = ___node0;
		NullCheck(L_4);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_5, NULL);
		__this->___name_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = ___node0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_8, NULL);
		__this->___role_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___role_3), (void*)L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10 = ___node0;
		NullCheck(L_10);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11;
		L_11 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_11);
		__this->___start_4 = L_12;
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_13 = ___node0;
		NullCheck(L_13);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_14;
		L_14 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_13, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_14);
		__this->___end_5 = L_15;
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_16 = ___node0;
		NullCheck(L_16);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_17;
		L_17 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_17, NULL);
		__this->___type_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_6), (void*)L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_19 = ___node0;
		NullCheck(L_19);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_20;
		L_20 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_19, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_20, NULL);
		__this->___body_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_7), (void*)L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_22 = ___node0;
		NullCheck(L_22);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_23;
		L_23 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_22, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_23);
		__this->___confidence_9 = L_24;
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_25 = ___node0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_26, NULL);
		__this->___hasData_10 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		// value = OnParseValue(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_28 = ___node0;
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker1< RuntimeObject*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_28);
		__this->___value_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_8), (void*)L_29);
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_30 = ___node0;
		NullCheck(L_30);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_31;
		L_31 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_30, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_31);
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_32;
		L_32 = VirtualFuncInvoker0< WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, L_31);
		__this->___entities_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_11), (void*)L_32);
		// return this;
		return __this;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m68BD3C398F74F88F7F8F0C451A719DE4835EA02D_gshared (WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* __this, const RuntimeMethod* method) 
{
	{
		// return value.ToString();
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___value_8);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_0));
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_mBE1172303D1D1230A11FF1B8EC38110688115B78_gshared (WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_gshared (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// responseNode = node;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___node0;
		NullCheck(L_1);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_2, NULL);
		__this->___id_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_1), (void*)L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4 = ___node0;
		NullCheck(L_4);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_5, NULL);
		__this->___name_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = ___node0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_8, NULL);
		__this->___role_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___role_3), (void*)L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10 = ___node0;
		NullCheck(L_10);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11;
		L_11 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_11);
		__this->___start_4 = L_12;
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_13 = ___node0;
		NullCheck(L_13);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_14;
		L_14 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_13, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_14);
		__this->___end_5 = L_15;
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_16 = ___node0;
		NullCheck(L_16);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_17;
		L_17 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_17, NULL);
		__this->___type_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_6), (void*)L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_19 = ___node0;
		NullCheck(L_19);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_20;
		L_20 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_19, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_20, NULL);
		__this->___body_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_7), (void*)L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_22 = ___node0;
		NullCheck(L_22);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_23;
		L_23 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_22, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_23);
		__this->___confidence_9 = L_24;
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_25 = ___node0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_26, NULL);
		__this->___hasData_10 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		// value = OnParseValue(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_28 = ___node0;
		float L_29;
		L_29 = VirtualFuncInvoker1< float, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_28);
		__this->___value_8 = L_29;
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_30 = ___node0;
		NullCheck(L_30);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_31;
		L_31 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_30, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_31);
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_32;
		L_32 = VirtualFuncInvoker0< WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, L_31);
		__this->___entities_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_11), (void*)L_32);
		// return this;
		return __this;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_mD165B39F3287E84182872AACCCB65C95EB8E0A54_gshared (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, const RuntimeMethod* method) 
{
	{
		// return value.ToString();
		float* L_0 = (float*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_gshared (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892* WitEntityDataBase_1_FromEntityWitResponseNode_mAA1B0165184A5D8A0B4114A980510288ABACA8F9_gshared (/*Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t12D603459BD34005B4B3D39DB6C69A9AE62AA811 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T_t12D603459BD34005B4B3D39DB6C69A9AE62AA811);
	{
		// responseNode = node;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		il2cpp_codegen_write_instance_field_data<WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___node0;
		NullCheck(L_1);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_2, NULL);
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4 = ___node0;
		NullCheck(L_4);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_5, NULL);
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2), L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = ___node0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_8, NULL);
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10 = ___node0;
		NullCheck(L_10);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11;
		L_11 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_11);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4), L_12);
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_13 = ___node0;
		NullCheck(L_13);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_14;
		L_14 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_13, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_14);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5), L_15);
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_16 = ___node0;
		NullCheck(L_16);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_17;
		L_17 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_17, NULL);
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6), L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_19 = ___node0;
		NullCheck(L_19);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_20;
		L_20 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_19, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m143C3C59FB868D3352C8B2A15B059A1A1DC6AE87(L_20, NULL);
		il2cpp_codegen_write_instance_field_data<String_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7), L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_22 = ___node0;
		NullCheck(L_22);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_23;
		L_23 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_22, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_23);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),9), L_24);
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_25 = ___node0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_26, NULL);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),10), (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0));
		// value = OnParseValue(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_28 = ___node0;
		VirtualActionInvoker2Invoker< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, Il2CppFullySharedGenericAny* >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_28, (Il2CppFullySharedGenericAny*)L_29);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8), L_29, SizeOf_T_t12D603459BD34005B4B3D39DB6C69A9AE62AA811);
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_30 = ___node0;
		NullCheck(L_30);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_31;
		L_31 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_30, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_31);
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_32;
		L_32 = VirtualFuncInvoker0< WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, L_31);
		il2cpp_codegen_write_instance_field_data<WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),11), L_32);
		// return this;
		return __this;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m920CA9052645C825D64CFEA6C2396F1ECF9F894F_gshared (/*Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
	{
		// return value.ToString();
		String_t* L_1;
		L_1 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 2), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_0, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8)))));
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_mAB3974CEC74AA09089791A9E53213737C4295317_gshared (/*Facebook.WitAi.Data.Entities.WitEntityDataBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WitEntityDataBase_1_t13F227BB76E377404CCB214F84B03BDE4A6C5892* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		// m_Data = src;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___compare0;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this, L_0, 0, L_1);
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		// m_Data = src;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// get => m_Data[m_Start + index];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___index0, il2cppRetVal, method);
	return;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// set => m_Data[m_Start + index] = value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___value1 : &___value1), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___compare0;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), NULL, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		// m_Data = src;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___compare0;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	NullCheck(___val0);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___val0, ___fieldValue1);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) 
{
	{
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_0 = (NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m858184794EB5168858FAC26769D630B0DB7B6748_gshared_inline (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF9633538D1853877BCEB7F4298FEA15AC4E80BB4_gshared_inline (Func_2_t41BDC921A98B73D5B63A9753B49F4E871DA04E73* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m726B5D759A9573CA3EB19FA49313A307C51D4B6C_gshared_inline (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mA8364FEB57F999A8B8FB5F86A92E43E386B1AC37_gshared_inline (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) 
{
	{
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_0 = (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC47A32134FE9D29EC4CB4F0748C0D9BC7308E4AE_gshared_inline (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m88325AFB18679FBA1B455264A293EAE1A4721412_gshared_inline (Func_2_tCD297D4975B6D46D7E7B74573EC718E8625E7AA8* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m91FF57814BC16A6CB6A522CF8FEE1F3F5EC0E01A_gshared_inline (Func_2_t1C38B6529269E35AB55EECABE9C14FF1F85C12BD* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m98BD0C55A1CD06D39C058CD5ECB1A06EBBC93838_gshared_inline (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mD8BFCFF2BFA3D8713A509AE0323C26367C105586_gshared_inline (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mA6225BE1AE5198A2C86105F57FA092C56E1E0CC8_gshared_inline (Func_2_t6B297EFD10BE2E9A879EEE5282D1B3B4E16EFE80* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8EC669DC5A67A9D04779DDF464082ED708D41F27_gshared_inline (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___arg0, const RuntimeMethod* method) 
{
	typedef Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m027ACE6CC33A250F9CEA92A5FF0F7763926E1FE8_gshared_inline (Func_2_tBB380EBEB575853FD109DD5A976D9BA3C3708CFA* __this, float ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA5D86F937B0DCE92D47F09F3DA6BE77592943035_gshared_inline (Func_2_tB0A053D611A12E64831578506F155296DD632944* __this, float ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mE5A176A3F4E921947F105D1F3704A79EA85F5D6E_gshared_inline (Func_2_t37F8DF9D71FF6CB7E3F8B8441F68F14129A71D51* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mDDAE5E08C41E5668036677ED209B850CC6547292_gshared_inline (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (Substring_t2E16755269E6716C22074D6BC0A9099915E67849)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m77C320974BB0E8AFA1A7C39B514DDD8C06942AC5_gshared_inline (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m117F754DB7EEBFB2304E0500AEA18DE502C85793_gshared_inline (Func_2_tC4147746078CF6AFAF12AB47BDF9F962F3C91D60* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mF4550AAF07822B89D9CEDD14EA0A726DC11B8487_gshared_inline (Func_2_t9CEA3E31C171BF402F9810DDA61E3269D41CC6BD* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mA098B5996B6AE11EADA0A2F2DE377135468CEBAC_gshared_inline (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3C9BCAF1F1F54BB85749F5001D1DFDBEAB600AC8_gshared_inline (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDD84F2861EF652091F30160CA40B99974FEAC377_gshared_inline (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2CA509071BD31C2422E3999170EDF0E34AA97231_gshared_inline (Func_2_t80EE4308914889B523F6C2F755648D3B300DC684* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_mDAACFCB2AD47713A2CB5328DB9DC5FF905F4DEBA_gshared_inline (Func_2_tBD04FFD1E515536B5AC806AE7C76F7765623D924* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) 
{
	{
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_0 = (SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m409D0EABC5311D8F44D337D750F513079158B4E7_gshared_inline (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 Func_2_Invoke_m01053F0315D799573D4A7B6F5B20A68EA171AD75_gshared_inline (Func_2_t750700353C53A433E575AA00157325AEC6A024D5* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m8A9E4C13D14B3CF7506CA9822CB42BF63C3C5884_gshared_inline (Func_2_tE165EC54DF0B4454284AF5B1555CB5697E6051DE* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m699F1C79E4158A8C2557FEA8C3C7AB3580235512_gshared_inline (Func_2_t939F1DD9D2474059229638D3BC3FCF56F867956F* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m180005BDC8C86597099C1C786711DBFCEE9CA5EA_gshared_inline (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* __this, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
