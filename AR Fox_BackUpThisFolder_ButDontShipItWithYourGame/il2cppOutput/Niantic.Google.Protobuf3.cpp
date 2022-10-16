#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3;
// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E;
// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A;
// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_t3AC8EDAA3534EAD575A781DBE8DA0EE613092041;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>
struct IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t84C8A49192C28AB437FEED7702F93A88C4E5CB82;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tCE6AA5DEDB905A2700425D6966094A8CF99A95F0;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t0214714A2E9C634FC012B6BFCEC97457898A3EEA;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_t55A30289941AF367820CD58D6C2D671C0B44551A;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t70BFB880195CB2BE07E0E2ED1D520BD2D60C2360;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t02D79538F803F63949CCCF3EB1C14E50D5E28B6E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct KeyCollection_tC3C0FA62091C0E1CEAB752AEF78A9CA519128049;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct ValueCollection_tB253B8AC8A6BEA2DAEA28578041BC3D3BE37D298;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.MessageDescriptor>[]
struct EntryU5BU5D_t29C5FE1F993F8927990B9BA0903479FF16433032;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE;
// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_tB1E0CB59DF507DF5A27982B5707E6B5FA1D3ABDC;
// Google.Protobuf.IMessage
struct IMessage_t900533804F0866E5187D751ACBBBF2B8B6E83497;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7;
// Google.Protobuf.MessageParser
struct MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t42A462AFDBA58940E69540531D66D4501FFF5795;
// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF;
// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B;

IL2CPP_EXTERN_C RuntimeClass* Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_mEF289D30BB85E5342D96595DF5AA0A7195453A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_mF6EEEBEB88677C6445026C27EF92DD4349A9B1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m7D0FE3B6C8159980EB78ECB2EE5EDC06B30C92C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE;
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t29C5FE1F993F8927990B9BA0903479FF16433032* ____entries_1;
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
	KeyCollection_tC3C0FA62091C0E1CEAB752AEF78A9CA519128049* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB253B8AC8A6BEA2DAEA28578041BC3D3BE37D298* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};
struct Il2CppArrayBounds;

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::file
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___file_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::fullName
	String_t* ___fullName_1;
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::index
	int32_t ___index_2;
};

// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.FieldAccessorBase::getValueDelegate
	Func_2_t785BD751BA3D84313491F6396FF210AC08198B2A* ___getValueDelegate_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::descriptor
	FieldDescriptor_t1E8491F3FDBD62DB5664AC096B2902B68699B2AA* ___descriptor_1;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_tB1E0CB59DF507DF5A27982B5707E6B5FA1D3ABDC* ___U3CProtoU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_5;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t4A1A07472B660CAD55E9617F846C7530EC5E5BB9* ___U3CSerializedDataU3Ek__BackingField_6;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t447E4754299FA35724760599E4BD0994578BE5D0* ___U3CDescriptorPoolU3Ek__BackingField_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.Compatibility.PropertyInfoExtensions
struct PropertyInfoExtensions_t8A5F3820E41FA6B2CDACD20B4972DBEB93122BC1  : public RuntimeObject
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

// Google.Protobuf.Compatibility.TypeExtensions
struct TypeExtensions_tFB73851601FF70AD61E458C4682130E2F1CE5B86  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry::fullNameToMessageMap
	Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap_1;
};

struct TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::<Empty>k__BackingField
	TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* ___U3CEmptyU3Ek__BackingField_0;
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

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t42A462AFDBA58940E69540531D66D4501FFF5795  : public RuntimeObject
{
	// System.Object Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::defaultValue
	RuntimeObject* ___defaultValue_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::<>4__this
	SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF  : public RuntimeObject
{
};

struct U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry/<>c Google.Protobuf.Reflection.TypeRegistry/<>c::<>9
	U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.TypeRegistry/<>c::<>9__9_0
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* ___U3CU3E9__9_0_1;
};

// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry/Builder::types
	Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___types_0;
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.TypeRegistry/Builder::fileDescriptorNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___fileDescriptorNames_1;
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

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7  : public DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_tA8CB68A7FBB19FB45BE79827999694B270A98DFE* ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_t95128A28B8EBBA834933DD2BEFA96FE4D957C3FE* ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_tACE2522E4650ACB597A30B14FC73F54E51ED1A43* ___U3CFieldsU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_14;
};

struct MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA  : public FieldAccessorBase_t2F576BC70373A60FFC8AF59443AD5DEE1A7D98EE
{
	// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.SingleFieldAccessor::setValueDelegate
	Action_2_t477380176C6A04FBF9397695B4476085E4DDA6F2* ___setValueDelegate_2;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.SingleFieldAccessor::clearDelegate
	Action_1_t2CB34EE93E9BC0E5742D3EEEBFFACEBE5CB17AF3* ___clearDelegate_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF4AD1452FF29CE9241494F9FD7103CF3AFAE3426  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF4AD1452FF29CE9241494F9FD7103CF3AFAE3426_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::CA6D43393CCBD523D8BC1CAC86DE8DC9F018B896
	__StaticArrayInitTypeSizeU3D44_tE751EAE5DE75366B1D7948FE11EC39804BFA95DA ___CA6D43393CCBD523D8BC1CAC86DE8DC9F018B896_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B  : public MulticastDelegate_t
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* m_Items[1];

	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B  : public RuntimeArray
{
	ALIGN_FIELD (8) MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* m_Items[1];

	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_m504DEBC35A7E4822CCFD6E0F0239DCE9FC3D1B95_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, String_t* ___key0, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, String_t*, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_mFA39A0A27C63BF4A2087709E9536D93B795EA949 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_mF6EEEBEB88677C6445026C27EF92DD4349A9B1D5 (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m504DEBC35A7E4822CCFD6E0F0239DCE9FC3D1B95_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___fileDescriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_m3C7C1FFE7296C9F7C61F7ABFCA4CCC56600137C6 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m7D0FE3B6C8159980EB78ECB2EE5EDC06B30C92C2 (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m504DEBC35A7E4822CCFD6E0F0239DCE9FC3D1B95_gshared)(___value0, ___name1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m49855A789BB529C4C47361A2114B8C28F9F5BAFB (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_mEF289D30BB85E5342D96595DF5AA0A7195453A64 (RuntimeObject* ___source0, Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::.ctor()
inline void Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3 (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorBase::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36 (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* __this, String_t* ___key0, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*, String_t*, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::get_File()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m8A353BE0A34D8D5342C6096CC68D10A31AC348B2 (U3CU3Ec__DisplayClass2_0_t42A462AFDBA58940E69540531D66D4501FFF5795* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mFF6552760BEDF1C1E46662D3C4DBE43D90E1F592 (U3CU3Ec__DisplayClass2_0_t42A462AFDBA58940E69540531D66D4501FFF5795* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_t4B1EC1784D34BB2C7D3818568B32001FE640D1DA* L_0 = __this->___U3CU3E4__this_1;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = __this->___defaultValue_0;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_0, L_1, L_2);
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
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_get_Empty_m1A605E01B5A2FE9959F305F49203D50728809B76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_0 = ((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* ___fullNameToMessageMap0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = ___fullNameToMessageMap0;
		__this->___fullNameToMessageMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullNameToMessageMap_1), (void*)L_0);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.TypeRegistry::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* TypeRegistry_Find_m434D19CDAE5EDF3BA1FA1088950991FA7CEB6135 (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* __this, String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_0 = NULL;
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = __this->___fullNameToMessageMap_1;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m73A3175F25082E991509A6DA6424A811DC8B93AB_RuntimeMethod_var);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_m766EADEC0875BD237C9486A2C8CFC2A948399459 (FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptorU5BU5D_tD48ED2901616C9AF1E603D24A24F54B680AF37CE* L_0 = ___fileDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1;
		L_1 = TypeRegistry_FromFiles_mFA39A0A27C63BF4A2087709E9536D93B795EA949((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromFiles_mFA39A0A27C63BF4A2087709E9536D93B795EA949 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_mF6EEEBEB88677C6445026C27EF92DD4349A9B1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565);
		s_Il2CppMethodInitialized = true;
	}
	Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___fileDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_mF6EEEBEB88677C6445026C27EF92DD4349A9B1D5(L_0, _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_mF6EEEBEB88677C6445026C27EF92DD4349A9B1D5_RuntimeMethod_var);
		Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_2 = (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B*)il2cpp_codegen_object_new(Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17(L_2, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___fileDescriptors0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_8;
				L_8 = InterfaceFuncInvoker0< FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_9 = V_0;
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_10 = V_2;
				NullCheck(L_9);
				Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929(L_9, L_10, NULL);
			}

IL_0029_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* L_13 = V_0;
		NullCheck(L_13);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_14;
		L_14 = Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54(L_13, NULL);
		return L_14;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(Google.Protobuf.Reflection.MessageDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_mF602AD740BFEBFC3B6A3A5031666E25BA327B26A (MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageDescriptorU5BU5D_tBA8066E24FFCFFAFBF55F27B25DC945C09C1A66B* L_0 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1;
		L_1 = TypeRegistry_FromMessages_m3C7C1FFE7296C9F7C61F7ABFCA4CCC56600137C6((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* TypeRegistry_FromMessages_m3C7C1FFE7296C9F7C61F7ABFCA4CCC56600137C6 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_mEF289D30BB85E5342D96595DF5AA0A7195453A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m7D0FE3B6C8159980EB78ECB2EE5EDC06B30C92C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___messageDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m7D0FE3B6C8159980EB78ECB2EE5EDC06B30C92C2(L_0, _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_m7D0FE3B6C8159980EB78ECB2EE5EDC06B30C92C2_RuntimeMethod_var);
		RuntimeObject* L_2 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_3 = ((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* L_5 = ((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_6 = (Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B*)il2cpp_codegen_object_new(Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m49855A789BB529C4C47361A2114B8C28F9F5BAFB(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F_RuntimeMethod_var), NULL);
		Func_2_tA60BE878F80FF9410CCB8740111DA6F45384257B* L_7 = L_6;
		((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_mEF289D30BB85E5342D96595DF5AA0A7195453A64(G_B2_1, G_B2_0, Enumerable_Select_TisMessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7_TisFileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE_mEF289D30BB85E5342D96595DF5AA0A7195453A64_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_9;
		L_9 = TypeRegistry_FromFiles_mFA39A0A27C63BF4A2087709E9536D93B795EA949(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__cctor_m25B5250EC4226F030765F601A2CDD4CFC27593BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*)il2cpp_codegen_object_new(Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3(L_0, Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1 = (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A*)il2cpp_codegen_object_new(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E(L_1, L_0, NULL);
		((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7165B754797FC65E699CFD4F4B777D45D2BAEB17 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = (Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E*)il2cpp_codegen_object_new(Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3(L_0, Dictionary_2__ctor_m5B81D8719A9F9837CD7E94F5C918CEE12A6A6FB3_RuntimeMethod_var);
		__this->___types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___fileDescriptorNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDescriptorNames_1), (void*)L_1);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* ___fileDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___fileDescriptorNames_1;
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1 = ___fileDescriptor0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FileDescriptor_get_Name_m2F4F4DA47CD49256D7D89B1A38CCA603E980BAED(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_4 = ___fileDescriptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t05BD34BF18CD17E7EDED271AD8BBD288191AEB1A_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0022_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_10;
				L_10 = InterfaceFuncInvoker0< FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_t9A0515F9E13124086834122A01FFB4026D21848E_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_11 = V_1;
				Builder_AddFile_mADCCE3975DF455013A6A7E7D5ABCEB1E29D00929(__this, L_11, NULL);
			}

IL_0030_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_14 = ___fileDescriptor0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_17 = V_2;
					if (!L_17)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_18 = V_2;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0052_1:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_20;
				L_20 = InterfaceFuncInvoker0< MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var, L_19);
				V_3 = L_20;
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_21 = V_3;
				Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539(__this, L_21, NULL);
			}

IL_0060_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___messageDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* V_1 = NULL;
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = ___messageDescriptor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tC3CA71EDCB4C7BF11A7A9CBA0CE90A72DA138180_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_6;
				L_6 = InterfaceFuncInvoker0< MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_tC2CE1FDB30B0F7ABBE7543D1DB985F462B0DD6D8_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_7 = V_1;
				Builder_AddMessage_m6A84E14AB68E7EA71A1DE49F083C2CFBC3B6B539(__this, L_7, NULL);
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_10 = __this->___types_0;
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_11 = ___messageDescriptor0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline(L_11, NULL);
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_13 = ___messageDescriptor0;
		NullCheck(L_10);
		Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36(L_10, L_12, L_13, Dictionary_2_set_Item_mC04C734B5567E1C10A5DE6091F5C61375560BC36_RuntimeMethod_var);
		return;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* Builder_Build_m96CC4C57E23687C7D9042F1C92C6A440C43D2D54 (Builder_tACCA454BBEFBAB294E3AFC6B37ED9D510BE81F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6D435F147562DD0ADADCC414D0A505BAFF3D249E* L_0 = __this->___types_0;
		TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A* L_1 = (TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A*)il2cpp_codegen_object_new(TypeRegistry_t8B155298FF24F43224C14015035A7238AA90007A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_m3DEB8D11E04868E6C87FBD93E9A3CCF175BB253E(L_1, L_0, NULL);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC296C58E98CE80E8BBECF13E455C06A328A5FE91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* L_0 = (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF*)il2cpp_codegen_object_new(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA(L_0, NULL);
		((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4EBCE714174204D9848246FEA77D6EB8D044DA (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.TypeRegistry/<>c::<FromMessages>b__9_0(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m4FD7D15DA46916627C40437264BFD4E4D6B5BA6F (U3CU3Ec_t738B6585B9337AF88B397381C85FA6CACC8CBEAF* __this, MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* ___md0, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* L_0 = ___md0;
		NullCheck(L_0);
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_1;
		L_1 = DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline(L_0, NULL);
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
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetGetMethod_mF8FD07542347FF9FF4A30A31D4CE6DE04244A790 (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetSetMethod_mD3BE4B278CDD2AB38E26B2FD7BDC3373B8AE6ABE (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
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
// System.Boolean Google.Protobuf.Compatibility.TypeExtensions::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAssignableFrom_m836BF463E752E6C7D9005C8AA0E4BC781577F745 (Type_t* ___target0, Type_t* ___c1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		Type_t* L_2 = ___c1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(130 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_1, L_3);
		return L_4;
	}
}
// System.Reflection.PropertyInfo Google.Protobuf.Compatibility.TypeExtensions::GetProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* TypeExtensions_GetProperty_m6F921DE59EA22B1ABE3E56F1666A7303F391F999 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		goto IL_004e;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		PropertyInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfo_t*, String_t* >::Invoke(127 /* System.Reflection.PropertyInfo System.Reflection.TypeInfo::GetDeclaredProperty(System.String) */, L_2, L_3);
		V_1 = L_4;
		PropertyInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_5, (PropertyInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t* L_9 = V_1;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_9);
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_002f:
	{
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_12);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_14 = V_1;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_14);
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_15, NULL);
		if (!L_16)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		PropertyInfo_t* L_17 = V_1;
		return L_17;
	}

IL_0046:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(107 /* System.Type System.Type::get_BaseType() */, L_18);
		___target0 = L_19;
	}

IL_004e:
	{
		Type_t* L_20 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, (Type_t*)NULL, NULL);
		if (L_21)
		{
			goto IL_0002;
		}
	}
	{
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.TypeExtensions::GetMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetMethod_m424E94EF7E1A61FBD9083070230558CE6697646F (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		goto IL_002c;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		MethodInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< MethodInfo_t*, String_t* >::Invoke(126 /* System.Reflection.MethodInfo System.Reflection.TypeInfo::GetDeclaredMethod(System.String) */, L_2, L_3);
		V_1 = L_4;
		MethodInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_5, (MethodInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_9 = V_1;
		return L_9;
	}

IL_0024:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10 = V_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(107 /* System.Type System.Type::get_BaseType() */, L_10);
		___target0 = L_11;
	}

IL_002c:
	{
		Type_t* L_12 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, (Type_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0002;
		}
	}
	{
		return (MethodInfo_t*)NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m8F571581AE1B9FF48742D22B123C2AA7E5A9070C_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m9F4E1F38494136104D840DA82C5D7DBA5F95C2C2_inline (FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m7460FCCAA3046A491D3AC7B5333C11338EB54759_inline (MessageDescriptor_t8FA1F1245EAFCC26177100D387EEA20F9E15C1F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m59AD10AAEF942073FC8A4EBCA740707D79D392C4_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___fullName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* DescriptorBase_get_File_m3932FAB1732AFA28FC5A571ECAB73AB368D99F71_inline (DescriptorBase_tAEC2F5C45B9A7AB00A466556A3EF87DDE1A559FA* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tCC24422590BA688504DE283B0B0923B33B3609AE* L_0 = __this->___file_0;
		return L_0;
	}
}
