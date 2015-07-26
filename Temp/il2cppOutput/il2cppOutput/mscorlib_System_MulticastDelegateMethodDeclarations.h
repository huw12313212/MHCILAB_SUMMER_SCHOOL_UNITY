#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t144;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1689;
// System.Delegate
struct Delegate_t295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5819 (MulticastDelegate_t144 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5820 (MulticastDelegate_t144 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5821 (MulticastDelegate_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1689* MulticastDelegate_GetInvocationList_m5822 (MulticastDelegate_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t295 * MulticastDelegate_CombineImpl_m5823 (MulticastDelegate_t144 * __this, Delegate_t295 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5824 (MulticastDelegate_t144 * __this, MulticastDelegate_t144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t144 * MulticastDelegate_KPM_m5825 (Object_t * __this /* static, unused */, MulticastDelegate_t144 * ___needle, MulticastDelegate_t144 * ___haystack, MulticastDelegate_t144 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t295 * MulticastDelegate_RemoveImpl_m5826 (MulticastDelegate_t144 * __this, Delegate_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
