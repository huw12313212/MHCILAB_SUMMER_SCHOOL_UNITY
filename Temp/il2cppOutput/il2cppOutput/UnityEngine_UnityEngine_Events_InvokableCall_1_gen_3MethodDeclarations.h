#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t1961;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t1960;
// System.Object[]
struct ObjectU5BU5D_t23;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13213_gshared (InvokableCall_1_t1961 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13213(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1961 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13213_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13214_gshared (InvokableCall_1_t1961 * __this, UnityAction_1_t1960 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m13214(__this, ___callback, method) (( void (*) (InvokableCall_1_t1961 *, UnityAction_1_t1960 *, const MethodInfo*))InvokableCall_1__ctor_m13214_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13215_gshared (InvokableCall_1_t1961 * __this, ObjectU5BU5D_t23* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13215(__this, ___args, method) (( void (*) (InvokableCall_1_t1961 *, ObjectU5BU5D_t23*, const MethodInfo*))InvokableCall_1_Invoke_m13215_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13216_gshared (InvokableCall_1_t1961 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13216(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1961 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13216_gshared)(__this, ___targetObj, ___method, method)
