﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t472;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t471;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct IEnumerator_1_t2496;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct ICollection_1_t2497;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct IEnumerable_1_t2498;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct ReadOnlyCollection_1_t2086;
// UnityEngine.Networking.Match.MatchDirectConnectInfo[]
struct MatchDirectConnectInfoU5BU5D_t2084;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct Predicate_1_t2087;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct Comparison_1_t2089;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m14947(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1__ctor_m3144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
#define List_1__ctor_m14948(__this, ___capacity, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1__ctor_m10224_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
#define List_1__cctor_m14949(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10226_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14950(__this, method) (( Object_t* (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14951(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t472 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10230_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14952(__this, method) (( Object_t * (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14953(__this, ___item, method) (( int32_t (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10234_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14954(__this, ___item, method) (( bool (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10236_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14955(__this, ___item, method) (( int32_t (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14956(__this, ___index, ___item, method) (( void (*) (List_1_t472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10240_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14957(__this, ___item, method) (( void (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10242_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14958(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14959(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10246_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14960(__this, method) (( Object_t * (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14961(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14962(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10252_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14963(__this, ___index, method) (( Object_t * (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10254_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14964(__this, ___index, ___value, method) (( void (*) (List_1_t472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10256_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
#define List_1_Add_m14965(__this, ___item, method) (( void (*) (List_1_t472 *, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_Add_m10258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14966(__this, ___newCount, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10260_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14967(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10262_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14968(__this, ___enumerable, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10264_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14969(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddRange_m10266_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
#define List_1_AsReadOnly_m14970(__this, method) (( ReadOnlyCollection_1_t2086 * (*) (List_1_t472 *, const MethodInfo*))List_1_AsReadOnly_m10268_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
#define List_1_Clear_m14971(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Clear_m10270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
#define List_1_Contains_m14972(__this, ___item, method) (( bool (*) (List_1_t472 *, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_Contains_m10272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14973(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t472 *, MatchDirectConnectInfoU5BU5D_t2084*, int32_t, const MethodInfo*))List_1_CopyTo_m10274_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m14974(__this, ___match, method) (( MatchDirectConnectInfo_t471 * (*) (List_1_t472 *, Predicate_1_t2087 *, const MethodInfo*))List_1_Find_m10276_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14975(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2087 *, const MethodInfo*))List_1_CheckMatch_m10278_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14976(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t472 *, int32_t, int32_t, Predicate_1_t2087 *, const MethodInfo*))List_1_GetIndex_m10280_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#define List_1_GetEnumerator_m14977(__this, method) (( Enumerator_t2088  (*) (List_1_t472 *, const MethodInfo*))List_1_GetEnumerator_m10282_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
#define List_1_IndexOf_m14978(__this, ___item, method) (( int32_t (*) (List_1_t472 *, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_IndexOf_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14979(__this, ___start, ___delta, method) (( void (*) (List_1_t472 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10286_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14980(__this, ___index, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10288_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
#define List_1_Insert_m14981(__this, ___index, ___item, method) (( void (*) (List_1_t472 *, int32_t, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_Insert_m10290_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14982(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10292_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#define List_1_Remove_m14983(__this, ___item, method) (( bool (*) (List_1_t472 *, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_Remove_m10294_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14984(__this, ___match, method) (( int32_t (*) (List_1_t472 *, Predicate_1_t2087 *, const MethodInfo*))List_1_RemoveAll_m10296_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14985(__this, ___index, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10298_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
#define List_1_Reverse_m14986(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Reverse_m10300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
#define List_1_Sort_m14987(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Sort_m10302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14988(__this, ___comparison, method) (( void (*) (List_1_t472 *, Comparison_1_t2089 *, const MethodInfo*))List_1_Sort_m10304_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
#define List_1_ToArray_m14989(__this, method) (( MatchDirectConnectInfoU5BU5D_t2084* (*) (List_1_t472 *, const MethodInfo*))List_1_ToArray_m10306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
#define List_1_TrimExcess_m14990(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_TrimExcess_m10308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
#define List_1_get_Capacity_m14991(__this, method) (( int32_t (*) (List_1_t472 *, const MethodInfo*))List_1_get_Capacity_m10310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14992(__this, ___value, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10312_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
#define List_1_get_Count_m14993(__this, method) (( int32_t (*) (List_1_t472 *, const MethodInfo*))List_1_get_Count_m10314_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
#define List_1_get_Item_m14994(__this, ___index, method) (( MatchDirectConnectInfo_t471 * (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_get_Item_m10316_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m14995(__this, ___index, ___value, method) (( void (*) (List_1_t472 *, int32_t, MatchDirectConnectInfo_t471 *, const MethodInfo*))List_1_set_Item_m10318_gshared)(__this, ___index, ___value, method)