#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t673;
// UnityEngine.Object
struct Object_t16;
struct Object_t16_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t23;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3214_gshared (CachedInvokableCall_1_t673 * __this, Object_t16 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3214(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t673 *, Object_t16 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3214_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16508_gshared (CachedInvokableCall_1_t673 * __this, ObjectU5BU5D_t23* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16508(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t673 *, ObjectU5BU5D_t23*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16508_gshared)(__this, ___args, method)
