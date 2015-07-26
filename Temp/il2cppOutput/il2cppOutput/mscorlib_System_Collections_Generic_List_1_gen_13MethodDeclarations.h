#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t178;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t292;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t2428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t2429;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t2430;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t1950;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t1948;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t1951;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t1953;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1701(__this, method) (( void (*) (List_1_t178 *, const MethodInfo*))List_1__ctor_m3144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m13020(__this, ___capacity, method) (( void (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1__ctor_m10224_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m13021(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10226_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13022(__this, method) (( Object_t* (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13023(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t178 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10230_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13024(__this, method) (( Object_t * (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13025(__this, ___item, method) (( int32_t (*) (List_1_t178 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10234_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13026(__this, ___item, method) (( bool (*) (List_1_t178 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10236_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13027(__this, ___item, method) (( int32_t (*) (List_1_t178 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13028(__this, ___index, ___item, method) (( void (*) (List_1_t178 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10240_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13029(__this, ___item, method) (( void (*) (List_1_t178 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10242_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13030(__this, method) (( bool (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13031(__this, method) (( bool (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10246_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13032(__this, method) (( Object_t * (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13033(__this, method) (( bool (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13034(__this, method) (( bool (*) (List_1_t178 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10252_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13035(__this, ___index, method) (( Object_t * (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10254_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13036(__this, ___index, ___value, method) (( void (*) (List_1_t178 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10256_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m13037(__this, ___item, method) (( void (*) (List_1_t178 *, CanvasGroup_t292 *, const MethodInfo*))List_1_Add_m10258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13038(__this, ___newCount, method) (( void (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10260_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13039(__this, ___collection, method) (( void (*) (List_1_t178 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10262_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13040(__this, ___enumerable, method) (( void (*) (List_1_t178 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10264_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13041(__this, ___collection, method) (( void (*) (List_1_t178 *, Object_t*, const MethodInfo*))List_1_AddRange_m10266_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m13042(__this, method) (( ReadOnlyCollection_1_t1950 * (*) (List_1_t178 *, const MethodInfo*))List_1_AsReadOnly_m10268_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m13043(__this, method) (( void (*) (List_1_t178 *, const MethodInfo*))List_1_Clear_m10270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m13044(__this, ___item, method) (( bool (*) (List_1_t178 *, CanvasGroup_t292 *, const MethodInfo*))List_1_Contains_m10272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13045(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t178 *, CanvasGroupU5BU5D_t1948*, int32_t, const MethodInfo*))List_1_CopyTo_m10274_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m13046(__this, ___match, method) (( CanvasGroup_t292 * (*) (List_1_t178 *, Predicate_1_t1951 *, const MethodInfo*))List_1_Find_m10276_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13047(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1951 *, const MethodInfo*))List_1_CheckMatch_m10278_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13048(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t178 *, int32_t, int32_t, Predicate_1_t1951 *, const MethodInfo*))List_1_GetIndex_m10280_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m13049(__this, method) (( Enumerator_t1952  (*) (List_1_t178 *, const MethodInfo*))List_1_GetEnumerator_m10282_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m13050(__this, ___item, method) (( int32_t (*) (List_1_t178 *, CanvasGroup_t292 *, const MethodInfo*))List_1_IndexOf_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13051(__this, ___start, ___delta, method) (( void (*) (List_1_t178 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10286_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13052(__this, ___index, method) (( void (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10288_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m13053(__this, ___index, ___item, method) (( void (*) (List_1_t178 *, int32_t, CanvasGroup_t292 *, const MethodInfo*))List_1_Insert_m10290_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13054(__this, ___collection, method) (( void (*) (List_1_t178 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10292_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m13055(__this, ___item, method) (( bool (*) (List_1_t178 *, CanvasGroup_t292 *, const MethodInfo*))List_1_Remove_m10294_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13056(__this, ___match, method) (( int32_t (*) (List_1_t178 *, Predicate_1_t1951 *, const MethodInfo*))List_1_RemoveAll_m10296_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13057(__this, ___index, method) (( void (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10298_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m13058(__this, method) (( void (*) (List_1_t178 *, const MethodInfo*))List_1_Reverse_m10300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m13059(__this, method) (( void (*) (List_1_t178 *, const MethodInfo*))List_1_Sort_m10302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13060(__this, ___comparison, method) (( void (*) (List_1_t178 *, Comparison_1_t1953 *, const MethodInfo*))List_1_Sort_m10304_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m13061(__this, method) (( CanvasGroupU5BU5D_t1948* (*) (List_1_t178 *, const MethodInfo*))List_1_ToArray_m10306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m13062(__this, method) (( void (*) (List_1_t178 *, const MethodInfo*))List_1_TrimExcess_m10308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m13063(__this, method) (( int32_t (*) (List_1_t178 *, const MethodInfo*))List_1_get_Capacity_m10310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13064(__this, ___value, method) (( void (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10312_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m13065(__this, method) (( int32_t (*) (List_1_t178 *, const MethodInfo*))List_1_get_Count_m10314_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m13066(__this, ___index, method) (( CanvasGroup_t292 * (*) (List_1_t178 *, int32_t, const MethodInfo*))List_1_get_Item_m10316_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m13067(__this, ___index, ___value, method) (( void (*) (List_1_t178 *, int32_t, CanvasGroup_t292 *, const MethodInfo*))List_1_set_Item_m10318_gshared)(__this, ___index, ___value, method)
