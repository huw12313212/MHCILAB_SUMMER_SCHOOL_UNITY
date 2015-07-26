#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t58;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t60;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t249;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1312(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t58 *, UnityAction_1_t60 *, UnityAction_1_t60 *, const MethodInfo*))ObjectPool_1__ctor_m10580_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m10581(__this, method) (( int32_t (*) (ObjectPool_1_t58 *, const MethodInfo*))ObjectPool_1_get_countAll_m10582_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m10583(__this, ___value, method) (( void (*) (ObjectPool_1_t58 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10584_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m10585(__this, method) (( int32_t (*) (ObjectPool_1_t58 *, const MethodInfo*))ObjectPool_1_get_countActive_m10586_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m10587(__this, method) (( int32_t (*) (ObjectPool_1_t58 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10588_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m10589(__this, method) (( List_1_t249 * (*) (ObjectPool_1_t58 *, const MethodInfo*))ObjectPool_1_Get_m10590_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m10591(__this, ___element, method) (( void (*) (ObjectPool_1_t58 *, List_1_t249 *, const MethodInfo*))ObjectPool_1_Release_m10592_gshared)(__this, ___element, method)
