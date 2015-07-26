#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t90;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t252;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t560;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m1405_gshared (UnityEvent_1_t90 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1405(__this, method) (( void (*) (UnityEvent_1_t90 *, const MethodInfo*))UnityEvent_1__ctor_m1405_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1408_gshared (UnityEvent_1_t90 * __this, UnityAction_1_t252 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1408(__this, ___call, method) (( void (*) (UnityEvent_1_t90 *, UnityAction_1_t252 *, const MethodInfo*))UnityEvent_1_AddListener_m1408_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m11654_gshared (UnityEvent_1_t90 * __this, UnityAction_1_t252 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m11654(__this, ___call, method) (( void (*) (UnityEvent_1_t90 *, UnityAction_1_t252 *, const MethodInfo*))UnityEvent_1_RemoveListener_m11654_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11655_gshared (UnityEvent_1_t90 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m11655(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t90 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11655_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t560 * UnityEvent_1_GetDelegate_m11656_gshared (UnityEvent_1_t90 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11656(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t560 * (*) (UnityEvent_1_t90 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11656_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t560 * UnityEvent_1_GetDelegate_m11657_gshared (Object_t * __this /* static, unused */, UnityAction_1_t252 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11657(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t560 * (*) (Object_t * /* static, unused */, UnityAction_1_t252 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11657_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1407_gshared (UnityEvent_1_t90 * __this, Color_t12  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1407(__this, ___arg0, method) (( void (*) (UnityEvent_1_t90 *, Color_t12 , const MethodInfo*))UnityEvent_1_Invoke_m1407_gshared)(__this, ___arg0, method)
