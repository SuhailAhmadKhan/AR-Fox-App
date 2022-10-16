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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6;
// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Func`2<System.Guid,System.Object>
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF;
// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.ICollection`1<System.Guid>
struct ICollection_1_tE495E985AB31E847FBB473C8890051B215E2F918;
// System.Collections.Generic.ICollection`1<System.Int32Enum>
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
// System.Collections.Generic.ICollection`1<UnityEngine.Matrix4x4>
struct ICollection_1_t209EF5DCBBB093822250D6835841E0686275F198;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Object>
struct IDictionary_2_t77967A5C4235DD5F80D644F16C0E5C66C87B5FF2;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>
struct IDictionary_2_t763DF14FA49BA0BC35D7199BE917A9D774A383A5;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct IDictionary_2_t9FA3447E375CC8545FC5219DF6249D05C506DDA1;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IEnumerable`1<System.Guid>
struct IEnumerable_1_t6AD47CB8BEC813E15985AA93F7394F6ECE74088A;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Matrix4x4>
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>
struct IEnumerator_1_tC9CB00ADB39129F8F2CAD02626A4AF7BEBDF96EC;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>
struct IEnumerator_1_t2E6A7FE40D37ADBC48388AD4AF2E93B0214B1042;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.AR._CppAddressAndScale>
struct IEqualityComparer_1_tF58A69557E0D2F470FB6BB7472A27C75A9E0DEE6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.List`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.WeakReference>
struct Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference>
struct Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.WeakReference>
struct Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct _CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1;
// Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<System.Object,System.Object>
struct _EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4;
// Niantic.ARDK.Utilities._HttpResponse`1<System.Object>
struct _HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11;
// Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F;
// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F;
// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>
struct _NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E;
// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>
struct _NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>
struct _ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>
struct _ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct _ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>
struct _ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273;
// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>
struct _SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>
struct _SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A;
// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A;
// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs[]
struct ConnectionFailedArgsU5BU5D_tD0388C49E0852BECF2719732C56A5D4131198CB7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer
struct IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832;
IL2CPP_EXTERN_C String_t* _stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_m071ABE4484EEA5C3EE68D39B5B6B29108F447DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_m620282A3BFC37A8593CB90D8E02A2219F9789C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_mA4F2A0728AB3A7A3370FD50BDDE407E4712A5931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_mBF4B8A93AC22F31E7EA67AE24D0562D866CDB349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m73CBAFEE9EBF5EC68166D91AAD997AAD7BA3EE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m7CC6AAF5E0C01DBDFEFF49422DD6F059E18D3733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m85C6E2A6962502AB1A143BB96707177AA4DE14A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_mE30546C87DEA8BB49854DF598521BFE0A145325D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
struct KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Guid,System.Object>
struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0  : public RuntimeObject
{
};

struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.IntPtr,System.Object>
struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09  : public RuntimeObject
{
};

struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Object,System.Object>
struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16  : public RuntimeObject
{
};

struct U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2  : public RuntimeObject
{
};

struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Int16>>
struct BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Single>>
struct BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Byte>
struct BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Double>
struct BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Guid>
struct BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32>
struct BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32Enum>
struct BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int64>
struct BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.IntPtr>
struct BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Quaternion>
struct BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Resolution>
struct BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.SByte>
struct BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Single>
struct BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt16>
struct BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt64>
struct BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector2>
struct BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector4>
struct BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A  : public RuntimeObject
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tF448708F8EDE9C6AEE075168D8367BE3A8CD94DD* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF42853335CF1E1AE76B2047A4DDAD5C92789662A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct List_1_t43353BF6EF9639C6FCB0EE9EA63379CBEABA41A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t43353BF6EF9639C6FCB0EE9EA63379CBEABA41A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>
struct List_1_tA5ACD265E861D27522487544B89F64BFA27F375D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA5ACD265E861D27522487544B89F64BFA27F375D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>
struct List_1_t3AF7D880B515BC7B1D93D68AABE7E7A83D23B445  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3AF7D880B515BC7B1D93D68AABE7E7A83D23B445_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConnectionFailedArgsU5BU5D_tD0388C49E0852BECF2719732C56A5D4131198CB7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConnectionFailedArgsU5BU5D_tD0388C49E0852BECF2719732C56A5D4131198CB7* ___s_emptyArray_5;
};

// Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct _CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1  : public RuntimeObject
{
	// System.Object Niantic.ARDK.Utilities._CatchUpEvent`1::_lock
	RuntimeObject* ____lock_0;
	// System.Collections.Generic.List`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1::_values
	List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* ____values_1;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1::_handler
	ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* ____handler_2;
	// System.Boolean Niantic.ARDK.Utilities._CatchUpEvent`1::_isDisposed
	bool ____isDisposed_3;
};

// Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<System.Object,System.Object>
struct _EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4  : public RuntimeObject
{
};

struct _EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4_StaticFields
{
	// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2::Instance
	_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* ___Instance_0;
};

// Niantic.ARDK.Utilities._HttpResponse`1<System.Object>
struct _HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11  : public RuntimeObject
{
	// Niantic.ARDK.VPSCoverage.ResponseStatus Niantic.ARDK.Utilities._HttpResponse`1::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// TResponse Niantic.ARDK.Utilities._HttpResponse`1::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_1;
	// System.Int64 Niantic.ARDK.Utilities._HttpResponse`1::<HttpStatusCode>k__BackingField
	int64_t ___U3CHttpStatusCodeU3Ek__BackingField_2;
};

// Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F  : public RuntimeObject
{
	// System.Action`1<T> Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1::_action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____action_0;
	// Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1::<Source>k__BackingField
	uint16_t ___U3CSourceU3Ek__BackingField_1;
};

// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F  : public RuntimeObject
{
	// System.Action`1<T> Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1::_action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____action_0;
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>
struct _ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>
struct _ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct _ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>
struct _ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70  : public RuntimeObject
{
};

struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields
{
	// Niantic.ARDK.Utilities._ReferenceComparer`1<T> Niantic.ARDK.Utilities._ReferenceComparer`1::Instance
	_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* ___Instance_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* ____createWeakReference_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* ____createWeakReference_0;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248  : public RuntimeObject
{
	// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<IsKeyframe>k__BackingField
	bool ___U3CIsKeyframeU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_1;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_2;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>
struct KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>
struct KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Int16>
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

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

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3  : public BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE  : public BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1  : public BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47  : public BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651  : public BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6  : public BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178  : public BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6  : public BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E  : public BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB  : public BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29  : public BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6  : public BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491  : public BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B  : public BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630  : public BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB  : public BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001  : public BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13  : public BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633  : public BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94  : public BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171  : public BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF  : public BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89  : public BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A  : public BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57  : public BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer
struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
};

struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer::Instance
	BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* ___Instance_1;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer
struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
};

struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer::Instance
	CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* ___Instance_1;
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer
struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
};

struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer::Instance
	CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* ___Instance_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs
struct ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC 
{
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::<ErrorCode>k__BackingField
	uint32_t ___U3CErrorCodeU3Ek__BackingField_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer
struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
};

struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer::Instance
	Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* ___Instance_1;
};

// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId
struct NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 
{
	// System.UInt64 Niantic.ARDK.Networking.HLAPI.Routing.NetworkId::_id
	uint64_t ____id_0;
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

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
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

// Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B 
{
	// System.String Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_key
	String_t* ____key_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_pinvoke
{
	char* ____key_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_com
{
	Il2CppChar* ____key_0;
	Il2CppIUnknown* ____data_1;
};

// Niantic.ARDK.Utilities._CatchUpEvent`1/<>c__DisplayClass7_0<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A  : public RuntimeObject
{
	// Niantic.ARDK.Utilities._CatchUpEvent`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1/<>c__DisplayClass7_0::<>4__this
	_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* ___U3CU3E4__this_0;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1/<>c__DisplayClass7_0::handler
	ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* ___handler_1;
	// T Niantic.ARDK.Utilities._CatchUpEvent`1/<>c__DisplayClass7_0::value
	ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___value_2;
};

// System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>
struct KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>
struct KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>
struct KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// Niantic.ARDK.AR.Camera.CameraIntrinsics
struct CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 
{
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<FocalLength>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CFocalLengthU3Ek__BackingField_0;
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<PrincipalPoint>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPrincipalPointU3Ek__BackingField_1;
	// UnityEngine.Vector4 Niantic.ARDK.AR.Camera.CameraIntrinsics::_vector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____vector_2;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Niantic.ARDK.AR._CppAddressAndScale
struct _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 
{
	// System.IntPtr Niantic.ARDK.AR._CppAddressAndScale::_cppAddress
	intptr_t ____cppAddress_0;
	// System.Single Niantic.ARDK.AR._CppAddressAndScale::_scale
	float ____scale_1;
};

// Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 
{
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_networkId
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_pinvoke
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_com
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};

// Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage
struct SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 
{
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<PrefabId>k__BackingField
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CPrefabIdU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<NewId>k__BackingField
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CNewIdU3Ek__BackingField_1;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Location>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocationU3Ek__BackingField_2;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_3;
};

// Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform
struct PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 
{
	// Niantic.ARDK.Networking.HLAPI.Object.Unity.TransformPiece Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_dirtyPieces
	int32_t ____dirtyPieces_0;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_1;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation_2;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_localScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____localScale_3;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value_1;
};

// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___value_1;
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>
struct _SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_viewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____viewMatrix_3;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_disposed
	bool ____disposed_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_intrinsics
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ____intrinsics_6;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<Data>k__BackingField
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___U3CDataU3Ek__BackingField_7;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<IsRotatedToScreenOrientation>k__BackingField
	bool ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>
struct _SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_viewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____viewMatrix_3;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_disposed
	bool ____disposed_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_intrinsics
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ____intrinsics_6;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<Data>k__BackingField
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___U3CDataU3Ek__BackingField_7;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<IsRotatedToScreenOrientation>k__BackingField
	bool ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928  : public MulticastDelegate_t
{
};

// System.Func`2<System.Guid,System.Object>
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF  : public MulticastDelegate_t
{
};

// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.WeakReference>
struct Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>
struct _NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// System.Single Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_worldScale
	float ____worldScale_3;
	// System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_nativeHandle
	intptr_t ____nativeHandle_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// System.Nullable`1<UnityEngine.Matrix4x4> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cacheViewMatrix
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ____cacheViewMatrix_6;
	// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cachedIntrinsics
	Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE ____cachedIntrinsics_7;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_data
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ____data_8;
};

// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>
struct _NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// System.Single Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_worldScale
	float ____worldScale_3;
	// System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_nativeHandle
	intptr_t ____nativeHandle_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// System.Nullable`1<UnityEngine.Matrix4x4> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cacheViewMatrix
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ____cacheViewMatrix_6;
	// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cachedIntrinsics
	Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE ____cachedIntrinsics_7;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_data
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ____data_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 m_Items[1];

	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E m_Items[1];

	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F m_Items[1];

	inline KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m26B9B3AFBFE1051FC623BF7FC4E82DA3E3095608_gshared (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC Enumerator_get_Current_mAD0EFBCBA9ABF1223B3AAB33C23810C29D299CEF_gshared_inline (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB546385B198EC84AF56FD3AF27D3142F6666BE1D_gshared (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Single>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Matrix4x4>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_gshared (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_gshared_inline (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_gshared (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_gshared (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m1589AA18BC64ECF5AA79D95DCE5D7887E98B70AA_gshared (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m921D007BB17D47849CD74AB7FA825547CB828BBC_gshared (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;

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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___compare0, method);
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___compare0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::Dispose()
inline void Enumerator_Dispose_m26B9B3AFBFE1051FC623BF7FC4E82DA3E3095608 (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6*, const RuntimeMethod*))Enumerator_Dispose_m26B9B3AFBFE1051FC623BF7FC4E82DA3E3095608_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::get_Current()
inline ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC Enumerator_get_Current_mAD0EFBCBA9ABF1223B3AAB33C23810C29D299CEF_inline (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method)
{
	return ((  ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC (*) (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6*, const RuntimeMethod*))Enumerator_get_Current_mAD0EFBCBA9ABF1223B3AAB33C23810C29D299CEF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::MoveNext()
inline bool Enumerator_MoveNext_mB546385B198EC84AF56FD3AF27D3142F6666BE1D (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6*, const RuntimeMethod*))Enumerator_MoveNext_mB546385B198EC84AF56FD3AF27D3142F6666BE1D_gshared)(__this, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._CallbackQueue::QueueCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CallbackQueue_QueueCallback_m74894346EE03D54288820B568F6D2D277D86F923 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.Awareness._AwarenessBufferBase::.ctor(System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611 (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics3, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._NativeAccess::AssertNativeAccessValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAccess_AssertNativeAccessValid_mD9AA798851A39D83E7E042E1CA48830EEACA2481 (const RuntimeMethod* method) ;
// System.Void System.GC::AddMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_m6B1B48F81C8FB61E1E5E838BCAC7B91DFBAA690F (int64_t ___bytesAllocated0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Single>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_gshared)(__this, method);
}
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*, const RuntimeMethod*))Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline)(__this, method);
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR._Convert::InternalToMatrix4x4(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _Convert_InternalToMatrix4x4_m48F6FCAB8B8C75E4B05764D408342D65E0550717 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___internalArray0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromNARToUnity(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 NARConversions_FromNARToUnity_m56A014515B82A60C2E5AE1729648ECA8DD8C0190 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR._Convert::ApplyScale(UnityEngine.Matrix4x4&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Convert_ApplyScale_m3E7E938DFF4A04C872E68F3425EB8E8501CEFFD4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix0, float ___scale1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Matrix4x4>::.ctor(T)
inline void Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6 (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_gshared)(__this, ___value0, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_inline (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*, const RuntimeMethod*))Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_gshared_inline)(__this, method);
}
// System.Void Niantic.ARDK.AR.Camera.CameraIntrinsics::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraIntrinsics__ctor_mA21D7CEC1828B149AE598D23CB66B240AD82B23A (CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4* __this, float ___fx0, float ___fy1, float ___px2, float ___py3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(T)
inline void Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4, const RuntimeMethod*))Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_Value()
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 (*) (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*, const RuntimeMethod*))Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromUnityToNAR(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 NARConversions_FromUnityToNAR_m420D19C8906E98B96FA6E7DEC476E2844B29BE75 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Single[] Niantic.ARDK.AR._Convert::Matrix4x4ToInternalArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _Convert_Matrix4x4ToInternalArray_m27002DD60947AAE56D03CB486ACAC3E63A7D183D (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix4x40, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_m3EE41BF97E0111CE4A622AD1405D80AB2A13E9C9 (int64_t ___bytesAllocated0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m1589AA18BC64ECF5AA79D95DCE5D7887E98B70AA (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m1589AA18BC64ECF5AA79D95DCE5D7887E98B70AA_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::Dispose()
inline void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt32>::Dispose()
inline void NativeArray_1_Dispose_m921D007BB17D47849CD74AB7FA825547CB828BBC (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184*, const RuntimeMethod*))NativeArray_1_Dispose_m921D007BB17D47849CD74AB7FA825547CB828BBC_gshared)(__this, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, uint32_t, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_IsKeyframe()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, bool, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917 (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared)(__this, ___serializer0, ___item1, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10 (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared)(__this, ___deserializer0, method);
}
// System.Void Niantic.ARDK.Utilities._GcObserver::add__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::remove__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Key()
inline intptr_t KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Value()
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Key()
inline _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline)(__this, method);
}
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
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
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
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
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
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
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
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Dispose_m3361850303B4C806AA878FBA5C756DDEB63AFF39_gshared (_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lock)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____lock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// _handler = null;
			__this->____handler_2 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)NULL);
			// _isDisposed = true;
			__this->____isDisposed_3 = (bool)1;
			// }
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::Register(Niantic.ARDK.Utilities.ArdkEventHandler`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Register_mC35303EFD83DACD1E68A137A603C1AA23EDE24B2_gshared (_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* __this, ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* ___handler0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* V_2 = NULL;
	Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (handler == null)
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// lock (_lock)
		RuntimeObject* L_1 = (RuntimeObject*)__this->____lock_0;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_007e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// if (_isDisposed)
				bool L_5 = (bool)__this->____isDisposed_3;
				if (!L_5)
				{
					goto IL_001f_1;
				}
			}
			{
				// return;
				goto IL_007f;
			}

IL_001f_1:
			{
				// _handler += handler;
				ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_6 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)__this->____handler_2;
				ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_7 = ___handler0;
				Delegate_t* L_8;
				L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00((Delegate_t*)L_6, (Delegate_t*)L_7, NULL);
				__this->____handler_2 = ((ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
				Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)((ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
				// var values = _values;
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_9 = (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*)__this->____values_1;
				V_2 = L_9;
				// if (values != null)
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0073_1;
				}
			}
			{
				// foreach (var value in values)
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_11 = V_2;
				NullCheck(L_11);
				Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6 L_12;
				L_12 = ((  Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6 (*) (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				V_3 = L_12;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0065_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m26B9B3AFBFE1051FC623BF7FC4E82DA3E3095608((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_005a_2;
					}

IL_0049_2:
					{
						// foreach (var value in values)
						ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC L_13;
						L_13 = Enumerator_get_Current_mAD0EFBCBA9ABF1223B3AAB33C23810C29D299CEF_inline((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
						V_4 = L_13;
						// handler(value);
						ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_14 = ___handler0;
						ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC L_15 = V_4;
						NullCheck(L_14);
						((  void (*) (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
					}

IL_005a_2:
					{
						// foreach (var value in values)
						bool L_16;
						L_16 = Enumerator_MoveNext_mB546385B198EC84AF56FD3AF27D3142F6666BE1D((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
						if (L_16)
						{
							goto IL_0049_2;
						}
					}
					{
						goto IL_007f;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0073_1:
			{
				// }
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::Unregister(Niantic.ARDK.Utilities.ArdkEventHandler`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Unregister_m2579C56096AF43487D1C33E12595ADDDFCA8403A_gshared (_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* __this, ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* ___handler0, const RuntimeMethod* method) 
{
	{
		// _handler -= handler;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_0 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)__this->____handler_2;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_1 = ___handler0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3((Delegate_t*)L_0, (Delegate_t*)L_1, NULL);
		__this->____handler_2 = ((ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)((ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::InvokeUsingCallbackQueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_InvokeUsingCallbackQueue_m1EEC744AF13153DE995BA195CE4C0E46896B18C7_gshared (_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_0 = (U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_2 = V_0;
		ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC L_3 = ___value0;
		NullCheck(L_2);
		L_2->___value_2 = L_3;
		// lock (_lock)
		RuntimeObject* L_4 = (RuntimeObject*)__this->____lock_0;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				// if (_isDisposed)
				bool L_8 = (bool)__this->____isDisposed_3;
				if (!L_8)
				{
					goto IL_002f_1;
				}
			}
			{
				// return;
				goto IL_007c;
			}

IL_002f_1:
			{
				// if (_values == null)
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_9 = (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*)__this->____values_1;
				if (L_9)
				{
					goto IL_0042_1;
				}
			}
			{
				// _values = new List<T>();
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_10 = (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
				NullCheck(L_10);
				((  void (*) (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				__this->____values_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)L_10);
			}

IL_0042_1:
			{
				// _values.Add(value);
				List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99* L_11 = (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*)__this->____values_1;
				U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_12 = V_0;
				NullCheck(L_12);
				ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC L_13 = (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC)L_12->___value_2;
				NullCheck(L_11);
				((  void (*) (List_1_tA8FA22AF0F58A26C07118A9C42861CFEAE2CFD99*, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				// handler = _handler;
				U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_14 = V_0;
				ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_15 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)__this->____handler_2;
				NullCheck(L_14);
				L_14->___handler_1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&L_14->___handler_1), (void*)L_15);
				// }
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		// _CallbackQueue.QueueCallback
		// (
		//   () =>
		//   {
		//     if (_isDisposed)
		//       return;
		// 
		//     if (handler != null)
		//       handler(value);
		//   }
		// );
		U3CU3Ec__DisplayClass7_0_t32C58F4A1B6B94C20821A752376D8E195E8ABD1A* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var);
		_CallbackQueue_QueueCallback_m74894346EE03D54288820B568F6D2D277D86F923(L_17, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1__ctor_m0269BA65E732355853CA1EA11BD185F2B41FA7CC_gshared (_CatchUpEvent_1_t313D6D12C1E5F9FD775CDF057456E44D577675E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object _lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock_0), (void*)L_0);
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
// System.Void Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EmptyReadOnlyDictionary_2__ctor_m9E7F80B180B1F766D68BF54ABF405DB88403B0C4_gshared (_EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EmptyReadOnlyDictionary_2__cctor_m8EBC6986A879C4051BA88CEBDEBD7A40F9FE24F4_gshared (const RuntimeMethod* method) 
{
	{
		// public static readonly _ReadOnlyDictionary<TKey, TValue> Instance =
		//   new _ReadOnlyDictionary<TKey, TValue>(new Dictionary<TKey, TValue>());
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* L_1 = (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		NullCheck(L_1);
		((  void (*) (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((_EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___Instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_EmptyReadOnlyDictionary_2_tB3B3EF221793A5205B4986CF4695822D9AAF70C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___Instance_0), (void*)L_1);
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
// Niantic.ARDK.VPSCoverage.ResponseStatus Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _HttpResponse_1_get_Status_m64F8EDF5157E52A2F919D5DEA9358D4C51020EDA_gshared (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* __this, const RuntimeMethod* method) 
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = (int32_t)__this->___U3CStatusU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::set_Status(Niantic.ARDK.VPSCoverage.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1_set_Status_m324C1F6A46C961971BF3EE78BBB4C9BA89EDD455_gshared (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_0 = L_0;
		return;
	}
}
// TResponse Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _HttpResponse_1_get_Data_mE94D4DDF7CFA2418FE3F5634629CF45AB1EA3C57_gshared (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* __this, const RuntimeMethod* method) 
{
	{
		// public TResponse Data { get; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CDataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int64 Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::get_HttpStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _HttpResponse_1_get_HttpStatusCode_m9CF9BC057EBBE91B55D360C8BFC24B36E0602DFC_gshared (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* __this, const RuntimeMethod* method) 
{
	{
		// public long HttpStatusCode { get; }
		int64_t L_0 = (int64_t)__this->___U3CHttpStatusCodeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::.ctor(Niantic.ARDK.VPSCoverage.ResponseStatus,TResponse,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1__ctor_m9AF24D6AF9F5808D54B559599952D9178CB5839B_gshared (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* __this, int32_t ___status0, RuntimeObject* ___data1, int64_t ___httpStatusCode2, const RuntimeMethod* method) 
{
	{
		// public _HttpResponse(ResponseStatus status, TResponse data, long httpStatusCode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		((  void (*) (_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// Data = data;
		RuntimeObject* L_1 = ___data1;
		__this->___U3CDataU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_1);
		// HttpStatusCode = httpStatusCode;
		int64_t L_2 = ___httpStatusCode2;
		__this->___U3CHttpStatusCodeU3Ek__BackingField_2 = L_2;
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
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m040E34BC27F747A8D1858DE81D9FB525514E6375_gshared (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F* __this, const RuntimeMethod* method) 
{
	{
		// private _MessageExecutor()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::.ctor(System.Action`1<T>,Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m4019EF780AE97552976C106B14331F46766B39C2_gshared (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, uint16_t ___source1, const RuntimeMethod* method) 
{
	{
		// : this()
		((  void (*) (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _action = action;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___action0;
		__this->____action_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_0), (void*)L_0);
		// Source = source;
		uint16_t L_1 = ___source1;
		((  void (*) (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::Execute(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_Execute_mD34F1476F96702355C822CA37D317245D4F045CA_gshared (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// T typedMessage = (T)message;
		RuntimeObject* L_0 = ___message0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		// _action(typedMessage);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->____action_0;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_1);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// }
		return;
	}
}
// Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _MessageExecutor_1_get_Source_m821743E0E1A4CD96A199EC97DACA65E3D8989EBD_gshared (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F* __this, const RuntimeMethod* method) 
{
	{
		// get;
		uint16_t L_0 = (uint16_t)__this->___U3CSourceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::set_Source(Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_set_Source_m4AC3088C6AA3E36456E710DAB9A995A08679634A_gshared (_MessageExecutor_1_tBA16B3546C977243D8D3650465E48E5C4858189F* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		uint16_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_1 = L_0;
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
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>::.ctor(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m831D5361FD2A1B6A47CD79BB7FCE856984257057_gshared (_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) 
{
	{
		// internal _MessageExecutor(Action<T> action)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _action = action;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___action0;
		__this->____action_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>::Execute(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_Execute_m7B96B68AD2D697532554884064DCCE22C3C576B8_gshared (_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// T typedMessage = (T)message;
		RuntimeObject* L_0 = ___message0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		// _action(typedMessage);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->____action_0;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_1);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::.ctor(System.IntPtr,System.Single,System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1__ctor_m1D9C33491EAFF1B4CF5432E08629344E2164F04C_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, intptr_t ___handle0, float ___worldScale1, uint32_t ___width2, uint32_t ___height3, bool ___isKeyframe4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width2;
		uint32_t L_1 = ___height3;
		bool L_2 = ___isKeyframe4;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _NativeAccess.AssertNativeAccessValid();
		_NativeAccess_AssertNativeAccessValid_mD9AA798851A39D83E7E042E1CA48830EEACA2481(NULL);
		// _worldScale = worldScale;
		float L_4 = ___worldScale1;
		__this->____worldScale_3 = L_4;
		// _nativeHandle = handle;
		intptr_t L_5 = ___handle0;
		__this->____nativeHandle_4 = L_5;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_6;
		L_6 = ((  int64_t (*) (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____consumedUnmanagedMemory_5 = L_6;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_7 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m6B1B48F81C8FB61E1E5E838BCAC7B91DFBAA690F(L_7, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Finalize_mE7E0930E23A0185659AC1D6E805D845098C035AA_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			((  void (*) (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _NativeAwarenessBufferBase_1_get_Data_m08BA9C2CCA19E597BF1410E60C446494B3BEB5AF_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_data.IsCreated)
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____data_8);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// UInt32 size = Width * Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_2;
		L_2 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_3;
		L_3 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3));
		// _data =
		//   NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>
		//   (
		//     _GetDataAddress().ToPointer(),
		//     (int)size,
		//     Allocator.None
		//   );
		intptr_t L_4;
		L_4 = VirtualFuncInvoker0< intptr_t >::Invoke(19 /* System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetDataAddress() */, __this);
		V_1 = L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_1), NULL);
		uint32_t L_6 = V_0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7;
		L_7 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_5, (int32_t)L_6, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____data_8 = L_7;
	}

IL_0036:
	{
		// return _data;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_8 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF)__this->____data_8;
		return L_8;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _NativeAwarenessBufferBase_1_Sample_m4BD5990D9F641444C7C719187E635BF62C8A0A56_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_14;
		L_14 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		float L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&V_4))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))));
		return L_18;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _NativeAwarenessBufferBase_1_Sample_m423B5B268F9318DC8BA928700C48C246C63069BE_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_26;
		L_26 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		float L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&V_6))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))));
		return L_30;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _NativeAwarenessBufferBase_1_get_ViewMatrix_m4CD3D26678119571823EA00EBD04AB75B9A1AC85_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_cacheViewMatrix == null)
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* L_0 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*)(&__this->____cacheViewMatrix_6);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline(L_0, Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var nativeMatrix = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		// _GetViewMatrix(nativeMatrix);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(17 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetViewMatrix(System.Single[]) */, __this, L_3);
		// var viewMatrix = NARConversions.FromNARToUnity
		//   (_Convert.InternalToMatrix4x4(nativeMatrix));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = _Convert_InternalToMatrix4x4_m48F6FCAB8B8C75E4B05764D408342D65E0550717(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = NARConversions_FromNARToUnity_m56A014515B82A60C2E5AE1729648ECA8DD8C0190(L_5, NULL);
		V_1 = L_6;
		// _Convert.ApplyScale(ref viewMatrix, _worldScale);
		float L_7 = (float)__this->____worldScale_3;
		_Convert_ApplyScale_m3E7E938DFF4A04C872E68F3425EB8E8501CEFFD4((&V_1), L_7, NULL);
		// _cacheViewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = V_1;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		__this->____cacheViewMatrix_6 = L_9;
	}

IL_0041:
	{
		// return _cacheViewMatrix ?? Matrix4x4.identity;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_10 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA)__this->____cacheViewMatrix_6;
		V_2 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline((&V_2), Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		return L_12;
	}

IL_0057:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline((&V_2), Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		return L_13;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _NativeAwarenessBufferBase_1_get_Intrinsics_m8612ECB74EE0B50EA759CB3877150D28C3DCB3CF_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// if (!_cachedIntrinsics.HasValue)
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_0 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_inline(L_0, Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var nativeVector = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_2;
		// _GetIntrinsics(nativeVector);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(18 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetIntrinsics(System.Single[]) */, __this, L_3);
		// _cachedIntrinsics =
		//   new CameraIntrinsics
		//   (
		//     nativeVector[0],
		//     nativeVector[1],
		//     nativeVector[2],
		//     nativeVector[3]
		//   );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_16;
		memset((&L_16), 0, sizeof(L_16));
		CameraIntrinsics__ctor_mA21D7CEC1828B149AE598D23CB66B240AD82B23A((&L_16), L_6, L_9, L_12, L_15, /*hidden argument*/NULL);
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		__this->____cachedIntrinsics_7 = L_17;
	}

IL_0037:
	{
		// return _cachedIntrinsics.Value;
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_18 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A(L_18, Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		return L_19;
	}
}
// System.Single[] Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_UnityMatrixToNarArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _NativeAwarenessBufferBase_1__UnityMatrixToNarArray_m8C493E9F136F093921F3608C2D36D93527B02BE8_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _Convert.Matrix4x4ToInternalArray(NARConversions.FromUnityToNAR(matrix));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___matrix0;
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = NARConversions_FromUnityToNAR_m420D19C8906E98B96FA6E7DEC476E2844B29BE75(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = _Convert_Matrix4x4ToInternalArray_m27002DD60947AAE56D03CB486ACAC3E63A7D183D(L_1, NULL);
		return L_2;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Dispose_m98CE3F3A0D8AE5130807D42057D29F1CC7C4209F_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_nativeHandle != IntPtr.Zero)
		intptr_t L_0 = (intptr_t)__this->____nativeHandle_4;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// _OnRelease();
		VirtualActionInvoker0::Invoke(20 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_OnRelease() */, __this);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_3 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_m3EE41BF97E0111CE4A622AD1405D80AB2A13E9C9(L_3, NULL);
		// _nativeHandle = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____nativeHandle_4 = L_4;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _NativeAwarenessBufferBase_1__CalculateConsumedMemory_m5DD6A3F9334E39A95B7351380137163CE08ABC0C_gshared (_NativeAwarenessBufferBase_1_tEC3E041ADD96D8D492F0B913A59544CA768A6D1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
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
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::.ctor(System.IntPtr,System.Single,System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1__ctor_m39EC1F35045E34C10E1022B24BB774EA66B45B03_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, intptr_t ___handle0, float ___worldScale1, uint32_t ___width2, uint32_t ___height3, bool ___isKeyframe4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width2;
		uint32_t L_1 = ___height3;
		bool L_2 = ___isKeyframe4;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _NativeAccess.AssertNativeAccessValid();
		_NativeAccess_AssertNativeAccessValid_mD9AA798851A39D83E7E042E1CA48830EEACA2481(NULL);
		// _worldScale = worldScale;
		float L_4 = ___worldScale1;
		__this->____worldScale_3 = L_4;
		// _nativeHandle = handle;
		intptr_t L_5 = ___handle0;
		__this->____nativeHandle_4 = L_5;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_6;
		L_6 = ((  int64_t (*) (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____consumedUnmanagedMemory_5 = L_6;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_7 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m6B1B48F81C8FB61E1E5E838BCAC7B91DFBAA690F(L_7, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Finalize_mCA37DCD60C1D9D5DB3C5BDF7825D1DD8C552E8AC_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			((  void (*) (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 _NativeAwarenessBufferBase_1_get_Data_mC23872BF67B780600EE0A0CFE730EBFDAE9ED169_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_data.IsCreated)
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* L_0 = (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184*)(&__this->____data_8);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m1589AA18BC64ECF5AA79D95DCE5D7887E98B70AA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// UInt32 size = Width * Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_2;
		L_2 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_3;
		L_3 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3));
		// _data =
		//   NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>
		//   (
		//     _GetDataAddress().ToPointer(),
		//     (int)size,
		//     Allocator.None
		//   );
		intptr_t L_4;
		L_4 = VirtualFuncInvoker0< intptr_t >::Invoke(19 /* System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetDataAddress() */, __this);
		V_1 = L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_1), NULL);
		uint32_t L_6 = V_0;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_7;
		L_7 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_5, (int32_t)L_6, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____data_8 = L_7;
	}

IL_0036:
	{
		// return _data;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_8 = (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184)__this->____data_8;
		return L_8;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _NativeAwarenessBufferBase_1_Sample_mC597B1CB2B3A99DF25034227C793CA6241AA30AB_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_14;
		L_14 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		uint32_t L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(uint32_t, ((&V_4))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))));
		return L_18;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _NativeAwarenessBufferBase_1_Sample_mA5E30BF94C8AD0A966CB5DECD3D920FC24200447_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_26;
		L_26 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		uint32_t L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(uint32_t, ((&V_6))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))));
		return L_30;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _NativeAwarenessBufferBase_1_get_ViewMatrix_mFD5579025DAF4B43DCB4A806C69CF081FC514DFA_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_cacheViewMatrix == null)
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* L_0 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*)(&__this->____cacheViewMatrix_6);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline(L_0, Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var nativeMatrix = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		// _GetViewMatrix(nativeMatrix);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(17 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetViewMatrix(System.Single[]) */, __this, L_3);
		// var viewMatrix = NARConversions.FromNARToUnity
		//   (_Convert.InternalToMatrix4x4(nativeMatrix));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = _Convert_InternalToMatrix4x4_m48F6FCAB8B8C75E4B05764D408342D65E0550717(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = NARConversions_FromNARToUnity_m56A014515B82A60C2E5AE1729648ECA8DD8C0190(L_5, NULL);
		V_1 = L_6;
		// _Convert.ApplyScale(ref viewMatrix, _worldScale);
		float L_7 = (float)__this->____worldScale_3;
		_Convert_ApplyScale_m3E7E938DFF4A04C872E68F3425EB8E8501CEFFD4((&V_1), L_7, NULL);
		// _cacheViewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = V_1;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		__this->____cacheViewMatrix_6 = L_9;
	}

IL_0041:
	{
		// return _cacheViewMatrix ?? Matrix4x4.identity;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_10 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA)__this->____cacheViewMatrix_6;
		V_2 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline((&V_2), Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		return L_12;
	}

IL_0057:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline((&V_2), Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		return L_13;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _NativeAwarenessBufferBase_1_get_Intrinsics_mBDB6609A36B77DA14B127669543EFDB704C89C76_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// if (!_cachedIntrinsics.HasValue)
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_0 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_inline(L_0, Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var nativeVector = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_2;
		// _GetIntrinsics(nativeVector);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(18 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetIntrinsics(System.Single[]) */, __this, L_3);
		// _cachedIntrinsics =
		//   new CameraIntrinsics
		//   (
		//     nativeVector[0],
		//     nativeVector[1],
		//     nativeVector[2],
		//     nativeVector[3]
		//   );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_16;
		memset((&L_16), 0, sizeof(L_16));
		CameraIntrinsics__ctor_mA21D7CEC1828B149AE598D23CB66B240AD82B23A((&L_16), L_6, L_9, L_12, L_15, /*hidden argument*/NULL);
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		__this->____cachedIntrinsics_7 = L_17;
	}

IL_0037:
	{
		// return _cachedIntrinsics.Value;
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_18 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A(L_18, Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		return L_19;
	}
}
// System.Single[] Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_UnityMatrixToNarArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _NativeAwarenessBufferBase_1__UnityMatrixToNarArray_m0B5AF7F765D84130235A7C051C849C9037923F50_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _Convert.Matrix4x4ToInternalArray(NARConversions.FromUnityToNAR(matrix));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___matrix0;
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = NARConversions_FromUnityToNAR_m420D19C8906E98B96FA6E7DEC476E2844B29BE75(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = _Convert_Matrix4x4ToInternalArray_m27002DD60947AAE56D03CB486ACAC3E63A7D183D(L_1, NULL);
		return L_2;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Dispose_m97F0A8C8AA27DC1825BE7969BDDEECDC97A35A9A_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_nativeHandle != IntPtr.Zero)
		intptr_t L_0 = (intptr_t)__this->____nativeHandle_4;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// _OnRelease();
		VirtualActionInvoker0::Invoke(20 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_OnRelease() */, __this);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_3 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_m3EE41BF97E0111CE4A622AD1405D80AB2A13E9C9(L_3, NULL);
		// _nativeHandle = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____nativeHandle_4 = L_4;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _NativeAwarenessBufferBase_1__CalculateConsumedMemory_m7F8710CF61A560B64C605378C5AB75EABA4CC549_gshared (_NativeAwarenessBufferBase_1_tA052BBA5F80834174AEC5FF458DBA632E5D31C66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_mE30546C87DEA8BB49854DF598521BFE0A145325D_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method) 
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_mE30546C87DEA8BB49854DF598521BFE0A145325D_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->____source_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_mD71108552DAE6D1694518BF0AB563DABFD2CD2EF_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m113629BB1DF2A2CF5F0EB71509ACE91D2DCE6AA2_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Keys() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_mA6243756C5FA039D32DDEE2083DAE2EDFA38023D_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Values() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB48C1B1F2A2414382C8B6680D1E20A41EB7FBCC1_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m10ADF00303F34B432A0728FA34B2790AD30DBCFB_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_m1EB0F1293F7690C99E793E220A00A136BBFB948F_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____syncRoot_1;
		return L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____source_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		__this->____syncRoot_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot_1), (void*)L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____syncRoot_1);
		RuntimeObject* L_7 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_6, L_7, NULL, NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____syncRoot_1;
		return L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Item_m0E5D5AD991C053744F21EAB154DF28FCFA97A2D8_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		Guid_t L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Guid_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Item(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_m91305879B2940169677B91230E442D55DB78B482_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m383178A77557A1384AE0C21680AE2AA201531DB4_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m0ED41C35CBECBB9A4273D7DAAEB508EC6036E482_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		Guid_t L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Guid_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m27C57B2A3BDA785928BC05DBE06F1E1E9F6A07B2_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_m8F50D967A7BAF0EFD88E1032705B9634A13E5152_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, Guid_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		Guid_t L_1 = ___key0;
		RuntimeObject** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Guid_t, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCA205B5D645A5B2566A036BB4652AE70BC52F872_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m476F5B1983E86507C8A11CF4843A6A539CBFE2F6_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mDE4BDBFDA6DA8FD52446CDD04492AB13882D4F84_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___item0, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return collection.Contains(item);
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::Contains(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mCE6B2E2AE2DE5AD560D71D6448A90C0D1F97B92A_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCA06FCC6DD3DBEA10206E947E13710A6E19ECB2D_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEF9714F9A37478E41E58F750A630BB1B8E333AA7_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m3FAD8D901AE29FC8A841F4F1B579E72208A81C28_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m0DCE4C8A1B575254DC5AD4356B21B1B8F7B3E63F_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		List_1_t43353BF6EF9639C6FCB0EE9EA63379CBEABA41A3* L_1 = (List_1_t43353BF6EF9639C6FCB0EE9EA63379CBEABA41A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (List_1_t43353BF6EF9639C6FCB0EE9EA63379CBEABA41A3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// collection.CopyTo(array, index);
		RuntimeArray* L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m0519A5AA7C1A8C74F8C07164693B35FCE702C26D_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return Keys; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m23125C794444B92A447E22060A9A9DD09363926A_gshared (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206* __this, const RuntimeMethod* method) 
{
	{
		// get { return Values; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t1206A5FB86121D361B94F9E8DF99869402392206*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_mA4F2A0728AB3A7A3370FD50BDDE407E4712A5931_gshared (const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_mA4F2A0728AB3A7A3370FD50BDDE407E4712A5931_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m73CBAFEE9EBF5EC68166D91AAD997AAD7BA3EE83_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method) 
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m73CBAFEE9EBF5EC68166D91AAD997AAD7BA3EE83_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->____source_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_mD8995D1D963ED8449A444CEF8F85377267FC6804_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m64E9CC203C251D30285022B74BB565E48D251FF0_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Keys() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m27D66B99F4D56CC75653D9CE6C05824E284D3740_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Values() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m647CF83CED90CA3CA5E9FBF536BC73DB8EAF41BC_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m0A2553BB717F29153ACECF734A18C2F0EACEB277_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mC1D2FCB5F7D9A8F372388EC93EE24CDCAC8A54A6_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____syncRoot_1;
		return L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____source_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		__this->____syncRoot_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot_1), (void*)L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____syncRoot_1);
		RuntimeObject* L_7 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_6, L_7, NULL, NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____syncRoot_1;
		return L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Item_m933081CF77C21B776ACBD89903850CA8ED2771CC_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Item(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_mADDCDEDEC17293FDC8C5E982F14958AB6BAE332A_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m07E270FEAC41D134FE45192EDF356480FD5AEE5A_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m3F78FB2A6C3ACD103E346375AD4B5DF32DA2D1C4_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::ContainsKey(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m9C063BCF1C038EBDDB8E3FF16AF57A4A5B08128D_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_m00871EDCC9A03C261FE31D473BFA952726ED580D_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) 
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		int32_t* L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7B1CE2F64F3C6E143AEEAFA8E47B463C3216D898_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m3B8AEA9253F3B82D22C7D92C7CF122E8A8C7DA61_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m55DE367ACCA16147138BA845C99A19062AABD32C_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___item0, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return collection.Contains(item);
		KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::Contains(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mDEB01896DC2D4EF0197361074FDB32168BDFBC4B_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4CA13C5DEB6F1B9E0A2D7B157ADD077E92004563_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29B790411971C7534EF16D914D4AEECEBA4FFCAB_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mAD7B8F1EAC2D7FD251238768B9A90070B555C870_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mD98213F7346E7985DD15C6FB93BCDC53FEE5A5FB_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		List_1_tA5ACD265E861D27522487544B89F64BFA27F375D* L_1 = (List_1_tA5ACD265E861D27522487544B89F64BFA27F375D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (List_1_tA5ACD265E861D27522487544B89F64BFA27F375D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// collection.CopyTo(array, index);
		RuntimeArray* L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m92635A37C9BBF7271392E49608C1F42CCC9C1EF8_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return Keys; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m260A7CABCF777A1A9D3588753138304D21DA7BD4_gshared (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45* __this, const RuntimeMethod* method) 
{
	{
		// get { return Values; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tF96C170C710D431FDD8A7B830DC5B0061D32FF45*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_mBF4B8A93AC22F31E7EA67AE24D0562D866CDB349_gshared (const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_mBF4B8A93AC22F31E7EA67AE24D0562D866CDB349_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m7CC6AAF5E0C01DBDFEFF49422DD6F059E18D3733_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method) 
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m7CC6AAF5E0C01DBDFEFF49422DD6F059E18D3733_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->____source_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_mBF35D2A648F28202F59B3F38EABE2A18414BBEAD_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m793D08A287D7C7F7105641578D48023D4A941B6B_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Keys() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m7453FA2AACD4AB3AF4FCE62FC97532960DE4081F_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Values() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m84D55323888E930C44FA174575F4DCCB29C2E18C_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_mE51C2CC726B6CB536B81A44728388C091A89BA2C_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_m0CDBB7FCD44D532E8441438BC18078F73099C2BD_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____syncRoot_1;
		return L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____source_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		__this->____syncRoot_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot_1), (void*)L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____syncRoot_1);
		RuntimeObject* L_7 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_6, L_7, NULL, NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____syncRoot_1;
		return L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _ReadOnlyDictionary_2_get_Item_m76FB1245DF710B1A352563A54F3975376AF1CA85_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = InterfaceFuncInvoker1< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, RuntimeObject* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Item(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_mA6B460AF50D5029B2697801A35AAB368C0E3CFD9_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) 
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m0EEAA3AEA8BE6840C3BF9A152872FA9FF5679100_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m2082AA710457AA78F6FC18C3DC6668AF39D3F7B3_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::ContainsKey(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m4F928F758F1E88E7B76614158D8D24A0E871802C_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_m7EA94DFC02E9F089A7300AB424A4FFDBF74C5882_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeObject* ___key0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___value1, const RuntimeMethod* method) 
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1F11334D18D8CB3D3C7805679D7E87104B46164E_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mBE2253BCB2E58984A28969005B4456AF3C42F003_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9F219C6567786E233D260CF7048AEE53A02B2999_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F ___item0, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return collection.Contains(item);
		KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::Contains(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m763652CC67ABFF1905AB380E8910555D07FB5EFD_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t1593C7A475127287C6D334080E46DE62201A1192*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7113E36CA1729FF3FEE0C7F8088834C0AA4E7E14_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mC866A0FC8CA3D42E2FFE7D1CBA9E3FDB8FDDC66F_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m7CB764491F5DE201EBC3C4C618B1BCB907DB5F34_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m61F165501B6799C88C93E5FD1BEC7A30458F05BF_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		List_1_t3AF7D880B515BC7B1D93D68AABE7E7A83D23B445* L_1 = (List_1_t3AF7D880B515BC7B1D93D68AABE7E7A83D23B445*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (List_1_t3AF7D880B515BC7B1D93D68AABE7E7A83D23B445*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// collection.CopyTo(array, index);
		RuntimeArray* L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mFA9E10361E47C17A76DFA8B4FAD3EFCFD34FA87E_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return Keys; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m0E126551413BD7321D224D9836DC3D3121457ECF_gshared (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46* __this, const RuntimeMethod* method) 
{
	{
		// get { return Values; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t89BC77233105B58A1370C194AAC73AF2C6AFFE46*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_m071ABE4484EEA5C3EE68D39B5B6B29108F447DFD_gshared (const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_m071ABE4484EEA5C3EE68D39B5B6B29108F447DFD_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m85C6E2A6962502AB1A143BB96707177AA4DE14A9_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method) 
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m85C6E2A6962502AB1A143BB96707177AA4DE14A9_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->____source_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_m9C82B05FAA0DC38531614D7600F6250B1805043F_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m8DF525417B570259DF22FE9EB5E3E12B0000ADE8_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m28D9E1E4F40A4A0A474172C92ABA1E5C00971DAD_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB2DEBDD1D239B0FA3A202CE07AB50D6FDD4F5473_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m9A5B6311B45B81B291F235AD522536A716B16FE9_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_m0A239CA76C11E3431FDBC5B8165BE6C8BE63502A_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____syncRoot_1;
		return L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____source_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		__this->____syncRoot_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot_1), (void*)L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____syncRoot_1);
		RuntimeObject* L_7 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_6, L_7, NULL, NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____syncRoot_1;
		return L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Item_m96090AAF60FCA16D4A7A54BEF86DAB85521EA569_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_m8AE59B80D4247BEB8A63C30CFA51F3F32E7E2ED0_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_mB9A37D0E29204A05CA270716CC6ACF3AC48D418A_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_mC9897B8F16902465221AE2000F069061C3584A99_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1);
		return L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m2D9BB2DF3779FC8EB70010B1151AF19BC1C48F9A_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_mF217FFF15F31F10C85EF8200902575D5848159E4_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		RuntimeObject* L_1 = ___key0;
		RuntimeObject** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0CBC93BA0335252FCA52A3E8473A5D840274C877_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m8A3EEC4F37D2CA5415368F0328DFE52B22F687F5_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCF90F55CA8A97B1227D373D08123DEDAB4553C82_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return collection.Contains(item);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mFA594728EAF4275ECF7DCFCC94684CCBFA979A80_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47708FA6D143F53FE921D4B6352CF34DAA246391_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2C04E56F88CC3F4027E45C70D1DAEAA815DB1306_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m5BAB8D3CE15F8BB76B18FC308CCFBAAD0C596DF3_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m1A1BCA23CCEDD0822D925878A1D17B607967F01D_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_1 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// collection.CopyTo(array, index);
		RuntimeArray* L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7C6D2F5160C8E1B7FC6922FDE43B3BA1076C90EB_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return Keys; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mF0DDA2A8CDB98CBF7B9BC6E176ECB7F0EFEE3E80_gshared (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273* __this, const RuntimeMethod* method) 
{
	{
		// get { return Values; }
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tC9B31C360FD48DED6997E0A28E45054A2AC34273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_m620282A3BFC37A8593CB90D8E02A2219F9789C3E_gshared (const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_m620282A3BFC37A8593CB90D8E02A2219F9789C3E_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__ctor_m750442FEE41F938BF8EBE6389D21AE74BEEAC08F_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, const RuntimeMethod* method) 
{
	{
		// private _ReferenceComparer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::Equals(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReferenceComparer_1_Equals_mC8632A4E131713A9F65DA16451C2A1C4A473A54C_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// return object.ReferenceEquals(a, b);
		RuntimeObject* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::GetHashCode(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReferenceComparer_1_GetHashCode_mAAAABCE2335709203ED6ABAAF72E3857D38AAE30_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	{
		// return RuntimeHelpers.GetHashCode(instance);
		RuntimeObject* L_0 = ___instance0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_0, NULL);
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__cctor_m9C7D239C8E4A6CC9F5E45614519A3B4687441C99_gshared (const RuntimeMethod* method) 
{
	{
		// public static readonly _ReferenceComparer<T> Instance = new _ReferenceComparer<T>();
		_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* L_0 = (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		NullCheck(L_0);
		((  void (*) (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		((_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___Instance_0), (void*)L_0);
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::.ctor(System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Unity.Collections.NativeArray`1<T>,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1__ctor_mEBC76D9233A4D866BD90EAFC2C1F87E12B6128DE_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix3, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___data4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		bool L_2 = ___isKeyframe2;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _viewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___viewMatrix3;
		__this->____viewMatrix_3 = L_4;
		// _intrinsics = intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_5 = ___intrinsics5;
		__this->____intrinsics_6 = L_5;
		// Data = data;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_6 = ___data4;
		__this->___U3CDataU3Ek__BackingField_7 = L_6;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_7;
		L_7 = ((  int64_t (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____consumedUnmanagedMemory_5 = L_7;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_8 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m6B1B48F81C8FB61E1E5E838BCAC7B91DFBAA690F(L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Finalize_m14CD6CE3E534C9D609227D1E2C0C67741FA1EC83_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			((  void (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _SerializableAwarenessBufferBase_1_get_ViewMatrix_m35BA6023C414FF2614586D0326DB7D35D4910915_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	{
		// return _viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)__this->____viewMatrix_3;
		return L_0;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _SerializableAwarenessBufferBase_1_get_Intrinsics_m35FAD6CCEA838C9D2D4EABA813652FD4B67ACD59_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	{
		// return _intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_0 = (CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4)__this->____intrinsics_6;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _SerializableAwarenessBufferBase_1_get_Data_m858DB6FE6B074BB39914BF910EC0006DC6989BFC_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	{
		// public NativeArray<T> Data { get; }
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_0 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF)__this->___U3CDataU3Ek__BackingField_7;
		return L_0;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _SerializableAwarenessBufferBase_1_Sample_mC14C9B5D76A0E424A867CB39678A456992C78A8D_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_14;
		L_14 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		float L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&V_4))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))));
		return L_18;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _SerializableAwarenessBufferBase_1_Sample_m1C8E714C5C75DDAAF27E60009750089031BFC532_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_26;
		L_26 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		float L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&V_6))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))));
		return L_30;
	}
}
// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_IsRotatedToScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SerializableAwarenessBufferBase_1_get_IsRotatedToScreenOrientation_m0F936DA68CA379EAE7BA484078334AB2F6D620B4_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = (bool)__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::set_IsRotatedToScreenOrientation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_set_IsRotatedToScreenOrientation_m8FF03F3F6C6A62C827D0EA1B9CDF423F2E1DD952_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Dispose_m854823CFDAC178700F081D02F94AE36B792DEBE6_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_disposed)
		bool L_0 = (bool)__this->____disposed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Data.IsCreated)
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1;
		L_1 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Data.Dispose();
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3;
		L_3 = ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_3;
		NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_0027:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_4 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_m3EE41BF97E0111CE4A622AD1405D80AB2A13E9C9(L_4, NULL);
		// _disposed = true;
		__this->____disposed_4 = (bool)1;
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _SerializableAwarenessBufferBase_1__CalculateConsumedMemory_m4F2D92540D4880AC8C2A020F0D4E290211082690_gshared (_SerializableAwarenessBufferBase_1_tEC0CC019F109DDA65339268EE5CB8BC88FFF456F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::.ctor(System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Unity.Collections.NativeArray`1<T>,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1__ctor_m5CFCAA9E48ABD87B0F4CC674F18F364CEC9781BB_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix3, NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___data4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		bool L_2 = ___isKeyframe2;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _viewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___viewMatrix3;
		__this->____viewMatrix_3 = L_4;
		// _intrinsics = intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_5 = ___intrinsics5;
		__this->____intrinsics_6 = L_5;
		// Data = data;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_6 = ___data4;
		__this->___U3CDataU3Ek__BackingField_7 = L_6;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_7;
		L_7 = ((  int64_t (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____consumedUnmanagedMemory_5 = L_7;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_8 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m6B1B48F81C8FB61E1E5E838BCAC7B91DFBAA690F(L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Finalize_mA7FF8743D367E646CF02382B77ECAE9A604C441A_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			((  void (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _SerializableAwarenessBufferBase_1_get_ViewMatrix_m4134005C51E1EE7407C5E52BB284009510966030_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	{
		// return _viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)__this->____viewMatrix_3;
		return L_0;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _SerializableAwarenessBufferBase_1_get_Intrinsics_mFD0E1F489E3A782A2430F6D27CEE801E2166E306_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	{
		// return _intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_0 = (CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4)__this->____intrinsics_6;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 _SerializableAwarenessBufferBase_1_get_Data_mDB40A67C51CE425CE19A21EA52C8C85C07F83EAE_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	{
		// public NativeArray<T> Data { get; }
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_0 = (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184)__this->___U3CDataU3Ek__BackingField_7;
		return L_0;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _SerializableAwarenessBufferBase_1_Sample_mD22CC8E7D5F86779F67B56DD346C50040DFBAC61_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_14;
		L_14 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		uint32_t L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(uint32_t, ((&V_4))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))));
		return L_18;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _SerializableAwarenessBufferBase_1_Sample_m800C23E9B313504887DB1FD9906E2ADD64E9B034_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_26;
		L_26 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		uint32_t L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(uint32_t, ((&V_6))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))));
		return L_30;
	}
}
// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_IsRotatedToScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SerializableAwarenessBufferBase_1_get_IsRotatedToScreenOrientation_mE7235F94E5C5761312C8224CFEF45892342B5161_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = (bool)__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::set_IsRotatedToScreenOrientation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_set_IsRotatedToScreenOrientation_m1C2354AE0E09EFE882A4D665680588AAD3023853_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Dispose_mDCBB23913C6CC4CBDC01730676CB3AF27123E253_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_disposed)
		bool L_0 = (bool)__this->____disposed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Data.IsCreated)
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_1;
		L_1 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_1;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m1589AA18BC64ECF5AA79D95DCE5D7887E98B70AA((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Data.Dispose();
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_3;
		L_3 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = L_3;
		NativeArray_1_Dispose_m921D007BB17D47849CD74AB7FA825547CB828BBC((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_0027:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_4 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_m3EE41BF97E0111CE4A622AD1405D80AB2A13E9C9(L_4, NULL);
		// _disposed = true;
		__this->____disposed_4 = (bool)1;
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _SerializableAwarenessBufferBase_1__CalculateConsumedMemory_m66B9705D516774917288FE9213FD43F25FBAAD25_gshared (_SerializableAwarenessBufferBase_1_t534D3739BD7A8F57A2BFC10AA75F6416AEE81B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_mEE21BB557009A8E92D9F036D76EDDAC9B9F6860D_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___serializer0;
		RuntimeObject* L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___serializer0;
		RuntimeObject* L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___serializer0;
		RuntimeObject* L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___serializer0;
		RuntimeObject* L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___serializer0;
		RuntimeObject* L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_m50844E7F75F4AC3E16E79FE63197C822CE7AEFEB_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mE692757AF71C8B254663E7587CA65A3A96320851_gshared (_SerializableAwarenessBufferSerializer_2_t5BD90EF25AF0143036BDCD1D18DC510740CBC0C6* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_m494DBA8F7F4C54571444DBF6BFF2F44F8DF95D04_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___serializer0;
		RuntimeObject* L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___serializer0;
		RuntimeObject* L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___serializer0;
		RuntimeObject* L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___serializer0;
		RuntimeObject* L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___serializer0;
		RuntimeObject* L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_mADF08571A3B5EFCC53155015153FD58FF96FC7C1_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mBE54A00A7470601900097A49DA1EED78C0F2FC64_gshared (_SerializableAwarenessBufferSerializer_2_t3CD935E712091AC46E12C373AE80C95BB44B4ED5* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mBDF4E2E517CE45C50F220547D030CC153C50AA28_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mE70E6725DEB27C8EFE4A189387DE265211195CB6_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_2 = ___item1;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m251714F9A8BDB58C65CE81799DBC42A80A53A54C_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)((NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m00167614209D405B92BB9101B754EE98BF08C038_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m855897A9F427C6F1A1E141038D08268A639E3914_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_2 = ___item1;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _UntypedToTypedSerializerAdapter_1_DoDeserialize_m18D46F3531305069D9E2DD0FB88F97179B9AC299_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)((NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD50DD552AAB32B513FE8F678D796B5A3C3F82872_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m443D557918A99BC06E792AFCBFB7E2992A55A201_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		bool L_2 = ___item1;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0E7A938166759802F2ED6EF2EDBD62726719B490_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(bool*)((bool*)(bool*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC9EA7030283696A661A73B14CBD8615BC9DAAB45_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m04504C625111E959DF50524FB5588CAEE89B5872_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint8_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint8_t L_2 = ___item1;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m9C180618F9833EA7B06C217CED9D57DAD9FB7CB9_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC28354790B9626411923227DFF7D0BB4ADDBECDF_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m31A65ED22256F704FA71CBB09FACDEEF54C15489_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_2 = ___item1;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD4A2E29D56D74D63F0A3BAE8D32C28FF505B6B0C_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)((CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m75522AB56EC230A7C78B687A93C2F630A41E9565_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m8E8B8E4D327CACDF0DFF1D38DFBC53E07F21D484_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___item1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _UntypedToTypedSerializerAdapter_1_DoDeserialize_m1C192BB9AA2714FC79EDFDF9B0977F8FB70475A0_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E6444E4169CD41F777C6E1ABDDB2928DC295443_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB81708E2517CB07FE02B6A4740FDB3F2CD58D052_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, double ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		double L_2 = ___item1;
		double L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _UntypedToTypedSerializerAdapter_1_DoDeserialize_m375156175C007DEFE6B8110CE9198AB69DDD2FFF_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2BC515922FC6AA9C22CE1D030DE18394B3195FD2_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m9AC01E23D47461312002D98DBBE98233D7BBC01B_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Guid_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Guid_t L_2 = ___item1;
		Guid_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0974DA3DFA00BE9B72ED8EA0D6F596B708A85044_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3966D188A81A30B1783C5F6D7AB4A64C3EA50C0E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m2852FD8C607B3F7FE84BB1F655C10F487B4D59CE_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int16_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int16_t L_2 = ___item1;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF85AE30621EDDFA07019902442807728A0B892D4_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m0D228D851263BC7DAABD603CB7E84DC2A7A3A339_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m00753CF5D08414E3937AEA54D69C9B7C34963211_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7D8AF0BA657BE57804319C6C2BAC02F70C53438B_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6F3D35EB92C8BEB389020FAC912DC6D39CB92DAB_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1897B9FDF14BEB8051EE2C41C44BA98646EB97F1_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m80C2E125623148EF06711B58CCAF12E7332BE61A_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m11FB7F333E8C1E02A83F0C79D00476CCAEF5806A_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m46FBA6D2DBA942566E70E7B4CC009DC058DCB87E_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int64_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int64_t L_2 = ___item1;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m98E2C12FA9C8749EEE54066C1CF13FB7AA215135_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mACB06B7052713B8822709410E6B50C6EF6FC5E06_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mDB2D70A71A23C6921FC5E3D441E9E4BB146D410E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, intptr_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		intptr_t L_2 = ___item1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mBE2AEB6ACCF06577A4666CC43D14DD609DDE88D7_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(intptr_t*)((intptr_t*)(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m195C78A847189472293E0B4952BA406013F4CA08_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF65B944DA11370382441BA9B3A8EF638DF624AB4_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___item1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD5CB298EA7ADC41E47534A5EE6D39493DBF0A448_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6DA3862992716AB6275C436ABFE035C98FE29362_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m3C85C8144C44E0EBD706B6B3B05C0B5393ACB963_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_2 = ___item1;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m81CB23EC85B9F13F9739740432F4B4C92AFD6E8A_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)((NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m7E776D0205BE99ECAF6777330945A85581A3F7C7_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m0905EBAC67A23DC27E81345113CB87A28C226A11_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		RuntimeObject* L_2 = ___item1;
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0AA74943557C6D1C4231A41F98D2748D9CE97A7A_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE7EBE48A7FAB8D0CAF7BFC18E2DA9EA13DD0F0B3_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF1931852DB779A2C6ADCCEABA0AEB3FA72816212_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___item1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m5F670AE5F2E517EB0767DFDF5B0CE9C3E7663D3F_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m17C6211759D7F27282705229D95C8B90EE0D8B4A_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB693F089E1943AE4BC287B7C6CA1AF0A771661DB_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_2 = ___item1;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD747597CC97C2580B5B32F90E14E7B8E7223AC36_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)((Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m40EF817725B196E2165AB167B42DC7343F50DAD5_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m62CFC4489B85830BCACF434BDD633BBBE73063DB_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int8_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		int8_t L_2 = ___item1;
		int8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF9FB4D915158A8A3B19FAC7F071CA5D0CBD40460_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC5DE7EBED59736CF54C7B704574BA3C0721148DA_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mAE110FAEDA33607660A096378D4D8E18AC59D489_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, float ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		float L_2 = ___item1;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _UntypedToTypedSerializerAdapter_1_DoDeserialize_mB2A1357A5CF247A23AF0E3E2302CDF61ADF5A1B8_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(float*)((float*)(float*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3BCD322B5941CDB3E6C99CBE232F921A448C4832_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7E249E2C46420E746E9E6900FF2715AF8AD796A9_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint16_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint16_t L_2 = ___item1;
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA34BED71995379DD2DC6E10E83D29B8C24F79124_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m30BC2F47ECB3CC56FF5C7899AD9A9C5D1EA84843_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD5A637D6A0553BA4E9556916E740141E091F082D_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint32_t L_2 = ___item1;
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF152290FC1BA158DA226E91E955CE7CDCCF95531_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mF90B2C736C3CB25CFCE91612E82AD65DA27DE23B_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF2ACB20D2DDBDCF951EAE8248BDDC94F091AE3E6_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint64_t ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		uint64_t L_2 = ___item1;
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mC616FFAE2EDB33D4404AAFEC30D37BDAA6335F77_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m5F5C2EC6B2AA06F0CF70DE3E996F0AADE611CA26_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m30A1578177DA43601BA9E0FFF5B3C630620CC045_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___item1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2B27FDDE70371AF05B29B2D1E15804E5927B2378_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m4132C632F98BAA53B1C40D256CE79816EF28BA36_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C0FCF548B103A0675E39964C6F6D7EF27366206_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m3AD5EE78F88A78FCD3BB8959638D7B9CE7F6AFEE_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC1F8FD5AA4079FE38EDAEBA5B84DFC7B5E7D256C_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C95E879337A8C135FEAAD3D3BE901833B022A9A_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___item1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m29079523D15C432D6F59A44DAB219F59BA827A9E_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD861C009BF0F00D9A70FC78A91E1ED7DE1C26974_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m048AE2058AEC7D4D14CEBD12E201A5006BA1E06C_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_2 = ___item1;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2BBBB6AED989E7E8F6F1C6EA9C9A9B0A529AB4AE_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)((_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m77A1EEF2766B94FB22A5BBCDFB753BD583DBBB39_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD94B8575EF35B5B49C458D6F353FD794720CA2A1_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_2 = ___item1;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B _UntypedToTypedSerializerAdapter_1_DoDeserialize_m6CAFAD99D13B89697C59478FA9745B8E000297A0_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)((_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE98349301CA77557DEE78878BE31F58F5C75452B_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7B22F66A0CCC5EA1A38D75C6D0ECFBA55A37400E_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_2 = ___item1;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7AFE5495AC99FF528626738F3DC6E5E31E87DE0D_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)((SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E91DC75047209F5576B2BF3CF835123EB302643_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		((  void (*) (BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1BEA5281B3E0E6519B48BF0585610AED74D9EF85_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_2 = ___item1;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 2), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mCF7E3B78125498C93096086E4A1AB8B02BE0B441_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		return ((*(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)((PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m61A167D383B81B01D278B0A76921A5A5DED9A3D1_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m00968F5958BE0B30CF8B9A3F96DBCF115348E72C_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mD7F12D50CB567AE1DF1463D0587A98A31F7246BE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mC22F1CFF6AEA7B6772B63EE9F045892A907DE62E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m16DD08A8BC7652B518E4049409ACE23EED2AC881_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_15 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
						Guid_t L_16;
						L_16 = KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_4 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_16 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_21 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_4 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_18 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_25 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
				Guid_t L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* L_29 = ___createValue1;
				Guid_t L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_2 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)__this->____innerDictionary_1;
		Guid_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m112724480DC701709032C8E2C275D0A8AC7EE203_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* L_0 = ((U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_1 = (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m675BEDDDA063F89DA36E0F1C73B0806580A56807_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_mC66F5B04626B1DA359517178F991EE729B64705B_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m47ABFCA22E44B20981ED43EB241F064DA1814E41_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mEBD1A7C2B576B029889C0AC92AFE568CAF40E674_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m2686F8589A793F5FF59D6EE1DE09B68DD595FB43_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_15 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
						intptr_t L_16;
						L_16 = KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_16 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_21 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_4 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_18 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_25 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
				intptr_t L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* L_29 = ___createValue1;
				intptr_t L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_2 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)__this->____innerDictionary_1;
		intptr_t L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m9EA6E33BC18A7B0F4729E0BF70528FE8B1AEB6AD_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* L_0 = ((U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_1 = (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m4BDAC7514FDA165F95ECC205992F0A621CAD0A0B_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m269CFBFFA403967BEABA96FF8E7FE9C19881E6E0_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m6185A17A3347B159D1EFDE95912E68EE6D0AA0BE_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m4DEE27F7677694A5799195ECE2F32339F74AA3DC_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mE9B55552496CD5CEE9397C91B2ACA2E709FE29DB_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_0 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tAB80DF583D002228B26384C891EED95FE55B6FAA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m3BBF9C349091BDE161556E679D926964F8B0231E_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_15 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
						RuntimeObject* L_16;
						L_16 = KeyValuePair_2_get_Key_m5DE7A90A3EEF7EEA3B19CD617E7B6A83230CEB1D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m16A31C9BD564B98CB9B9C0A6DFB56B964F0B4ABF_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_16 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_21 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m48145082F9C37E0053A6143C4CF8DC9FCDB65178_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_4 = ((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_18 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_25 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
				RuntimeObject* L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_29 = ___createValue1;
				RuntimeObject* L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mE0926895C5638773FBA64ABA42189724436C10A4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m1784E240FA764D72AB99B8275EEB7CCE93D1AB4D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_gshared (_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_m57D925DF504DB0D5504C85F8CDA66C4E97F04979_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6* L_2 = (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*)__this->____innerDictionary_1;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t5A8296F992C4DDEF8BCB141A0FD0A053E738CDA6*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m7B035177977E170F1BBDC35077CDCB6F93A788C1_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16* L_0 = ((U3CU3Ec_t58531C0410B64773419ADC58E7B8C5A80FDC0D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2* L_1 = (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t35D95B52EDE2AC8745D9D6850A4F5888530B94D2*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t9BB33E0A9D5F2A5ED08BDDD8BA4F7961BE8551A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m46492AC8EAD3CE625B1B47E4977D6D7A97A82DD5_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m01146FC022A14ACF4258D99B7141DD941C1022A9_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mB9B8FE29FA130C19B725CE28E43B5048ABE440A0_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m3FCF7DBD4AC4FD7E5EC3748CDF907102743D7428_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mFFEB7FC4B57870050CBA30420CCD4956C534C1B6_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_15 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
						_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_16;
						L_16 = KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						NullCheck(L_15);
						bool L_17;
						L_17 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = V_0;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_10, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_11, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
				if (!L_13)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				RuntimeObject* L_15 = ___value1;
				NullCheck(L_14);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_14, L_15);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_16 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_17 = ___key0;
				NullCheck(L_16);
				bool L_18;
				L_18 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_16, L_17, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				if (!L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_21 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_22 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				NullCheck(L_21);
				bool L_24;
				L_24 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				V_4 = L_24;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* ___createValue1, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_4 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->____createWeakReference_0;
		NullCheck(L_2);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5;
		L_5 = ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		V_1 = L_7;
		// if (untypedResult != null)
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_9 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		V_2 = L_10;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_12, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_13, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
				V_1 = L_15;
				// if (untypedResult != null)
				RuntimeObject* L_16 = V_1;
				if (!L_16)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_17 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_18 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_19 = ___key0;
				NullCheck(L_18);
				bool L_20;
				L_20 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_18, L_19, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				V_0 = L_24;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_25 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_26 = ___key0;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_27 = V_0;
				NullCheck(L_25);
				bool L_28;
				L_28 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* L_29 = ___createValue1;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_30 = ___key0;
				NullCheck(L_29);
				RuntimeObject* L_31;
				L_31 = ((  RuntimeObject* (*) (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				V_5 = L_31;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_32 = V_0;
				RuntimeObject* L_33 = V_5;
				NullCheck(L_32);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_32, L_33);
				// return result;
				RuntimeObject* L_34 = V_5;
				V_6 = L_34;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 13)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key0, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_2 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)__this->____innerDictionary_1;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m907080B8043F6D51C78377D8DF2540CE0BCD7326_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* L_0 = ((U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19)))->___U3CU3E9_0;
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_1 = (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		NullCheck(L_1);
		((  void (*) (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->____createWeakReference_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Width { get; private set; }
		uint32_t L_0 = __this->___U3CWidthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Height { get; private set; }
		uint32_t L_0 = __this->___U3CHeightU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsKeyframe { get; private set; }
		bool L_0 = __this->___U3CIsKeyframeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC Enumerator_get_Current_mAD0EFBCBA9ABF1223B3AAB33C23810C29D299CEF_gshared_inline (Enumerator_tC18F87706C2530CC3D1F92131E7E4F00A6C00EA6* __this, const RuntimeMethod* method) 
{
	{
		ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC L_0 = (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_gshared_inline (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (intptr_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_0 = (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003)__this->___key_0;
		return L_0;
	}
}
