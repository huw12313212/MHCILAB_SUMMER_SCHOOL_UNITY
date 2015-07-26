#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t224;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t225;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t261;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1794(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t224 *, UnityAction_1_t225 *, UnityAction_1_t225 *, const MethodInfo*))ObjectPool_1__ctor_m10580_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m13439(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countAll_m10582_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13440(__this, ___value, method) (( void (*) (ObjectPool_1_t224 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10584_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m13441(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countActive_m10586_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13442(__this, method) (( int32_t (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10588_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m1795(__this, method) (( List_1_t261 * (*) (ObjectPool_1_t224 *, const MethodInfo*))ObjectPool_1_Get_m10590_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m1796(__this, ___element, method) (( void (*) (ObjectPool_1_t224 *, List_1_t261 *, const MethodInfo*))ObjectPool_1_Release_m10592_gshared)(__this, ___element, method)
