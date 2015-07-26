#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1850;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1967;
// System.Object[]
struct ObjectU5BU5D_t23;
// System.Predicate`1<System.Object>
struct Predicate_1_t1749;
// System.Comparison`1<System.Object>
struct Comparison_1_t1755;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11665_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11665(__this, method) (( void (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1__ctor_m11665_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11667_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11667(__this, method) (( Object_t * (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11667_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11669_gshared (IndexedSet_1_t1850 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11669(__this, ___item, method) (( void (*) (IndexedSet_1_t1850 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11669_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11671_gshared (IndexedSet_1_t1850 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11671(__this, ___item, method) (( bool (*) (IndexedSet_1_t1850 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11671_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11673_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11673(__this, method) (( Object_t* (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11673_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11675_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11675(__this, method) (( void (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1_Clear_m11675_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11677_gshared (IndexedSet_1_t1850 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11677(__this, ___item, method) (( bool (*) (IndexedSet_1_t1850 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11677_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11679_gshared (IndexedSet_1_t1850 * __this, ObjectU5BU5D_t23* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11679(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1850 *, ObjectU5BU5D_t23*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11681_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11681(__this, method) (( int32_t (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1_get_Count_m11681_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11683_gshared (IndexedSet_1_t1850 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11683(__this, method) (( bool (*) (IndexedSet_1_t1850 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11683_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11685_gshared (IndexedSet_1_t1850 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11685(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1850 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11685_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11687_gshared (IndexedSet_1_t1850 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11687(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1850 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11687_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11689_gshared (IndexedSet_1_t1850 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11689(__this, ___index, method) (( void (*) (IndexedSet_1_t1850 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11689_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11691_gshared (IndexedSet_1_t1850 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11691(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1850 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11691_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11693_gshared (IndexedSet_1_t1850 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11693(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1850 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11693_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11694_gshared (IndexedSet_1_t1850 * __this, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11694(__this, ___match, method) (( void (*) (IndexedSet_1_t1850 *, Predicate_1_t1749 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11694_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11695_gshared (IndexedSet_1_t1850 * __this, Comparison_1_t1755 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11695(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1850 *, Comparison_1_t1755 *, const MethodInfo*))IndexedSet_1_Sort_m11695_gshared)(__this, ___sortLayoutFunction, method)
