#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t108;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t114;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t154;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1438(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t108 *, UnityAction_1_t114 *, UnityAction_1_t114 *, const MethodInfo*))ObjectPool_1__ctor_m10580_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m12260(__this, method) (( int32_t (*) (ObjectPool_1_t108 *, const MethodInfo*))ObjectPool_1_get_countAll_m10582_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12261(__this, ___value, method) (( void (*) (ObjectPool_1_t108 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10584_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m12262(__this, method) (( int32_t (*) (ObjectPool_1_t108 *, const MethodInfo*))ObjectPool_1_get_countActive_m10586_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12263(__this, method) (( int32_t (*) (ObjectPool_1_t108 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10588_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m1446(__this, method) (( List_1_t154 * (*) (ObjectPool_1_t108 *, const MethodInfo*))ObjectPool_1_Get_m10590_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m1451(__this, ___element, method) (( void (*) (ObjectPool_1_t108 *, List_1_t154 *, const MethodInfo*))ObjectPool_1_Release_m10592_gshared)(__this, ___element, method)
