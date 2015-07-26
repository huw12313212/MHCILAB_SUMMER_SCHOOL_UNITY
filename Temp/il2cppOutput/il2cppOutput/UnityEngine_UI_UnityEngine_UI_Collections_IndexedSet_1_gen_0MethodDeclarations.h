#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t299;
// UnityEngine.UI.Graphic
struct Graphic_t115;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2409;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t1912;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t1914;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t118;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1492(__this, method) (( void (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1__ctor_m11665_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12709(__this, method) (( Object_t * (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11667_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m12710(__this, ___item, method) (( void (*) (IndexedSet_1_t299 *, Graphic_t115 *, const MethodInfo*))IndexedSet_1_Add_m11669_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m12711(__this, ___item, method) (( bool (*) (IndexedSet_1_t299 *, Graphic_t115 *, const MethodInfo*))IndexedSet_1_Remove_m11671_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m12712(__this, method) (( Object_t* (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11673_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m12713(__this, method) (( void (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1_Clear_m11675_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m12714(__this, ___item, method) (( bool (*) (IndexedSet_1_t299 *, Graphic_t115 *, const MethodInfo*))IndexedSet_1_Contains_m11677_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m12715(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t299 *, GraphicU5BU5D_t1912*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m12716(__this, method) (( int32_t (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1_get_Count_m11681_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m12717(__this, method) (( bool (*) (IndexedSet_1_t299 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11683_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m12718(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t299 *, Graphic_t115 *, const MethodInfo*))IndexedSet_1_IndexOf_m11685_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m12719(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t299 *, int32_t, Graphic_t115 *, const MethodInfo*))IndexedSet_1_Insert_m11687_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m12720(__this, ___index, method) (( void (*) (IndexedSet_1_t299 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11689_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m12721(__this, ___index, method) (( Graphic_t115 * (*) (IndexedSet_1_t299 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11691_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m12722(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t299 *, int32_t, Graphic_t115 *, const MethodInfo*))IndexedSet_1_set_Item_m11693_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m12723(__this, ___match, method) (( void (*) (IndexedSet_1_t299 *, Predicate_1_t1914 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11694_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m12724(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t299 *, Comparison_1_t118 *, const MethodInfo*))IndexedSet_1_Sort_m11695_gshared)(__this, ___sortLayoutFunction, method)
