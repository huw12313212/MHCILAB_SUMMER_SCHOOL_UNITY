#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t457;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2484;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t311;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2485;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2054;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t588;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2058;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2061;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m14556_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1__ctor_m14556(__this, method) (( void (*) (List_1_t457 *, const MethodInfo*))List_1__ctor_m14556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3119_gshared (List_1_t457 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3119(__this, ___capacity, method) (( void (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m14557_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14557(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14557_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14558_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14558(__this, method) (( Object_t* (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14558_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14559_gshared (List_1_t457 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14559(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t457 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14559_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14560_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14560(__this, method) (( Object_t * (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14560_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14561_gshared (List_1_t457 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14561(__this, ___item, method) (( int32_t (*) (List_1_t457 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14561_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14562_gshared (List_1_t457 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14562(__this, ___item, method) (( bool (*) (List_1_t457 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14562_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14563_gshared (List_1_t457 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14563(__this, ___item, method) (( int32_t (*) (List_1_t457 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14564_gshared (List_1_t457 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14564(__this, ___index, ___item, method) (( void (*) (List_1_t457 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14564_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14565_gshared (List_1_t457 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14565(__this, ___item, method) (( void (*) (List_1_t457 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14565_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14566_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14566(__this, method) (( bool (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14566_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14567_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14567(__this, method) (( bool (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14568_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14568(__this, method) (( Object_t * (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14569_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14569(__this, method) (( bool (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14570_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14570(__this, method) (( bool (*) (List_1_t457 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14570_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14571_gshared (List_1_t457 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14571(__this, ___index, method) (( Object_t * (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14571_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14572_gshared (List_1_t457 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14572(__this, ___index, ___value, method) (( void (*) (List_1_t457 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14572_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m14573_gshared (List_1_t457 * __this, UILineInfo_t307  ___item, const MethodInfo* method);
#define List_1_Add_m14573(__this, ___item, method) (( void (*) (List_1_t457 *, UILineInfo_t307 , const MethodInfo*))List_1_Add_m14573_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14574_gshared (List_1_t457 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14574(__this, ___newCount, method) (( void (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14574_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14575_gshared (List_1_t457 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14575(__this, ___collection, method) (( void (*) (List_1_t457 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14575_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14576_gshared (List_1_t457 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14576(__this, ___enumerable, method) (( void (*) (List_1_t457 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14576_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14577_gshared (List_1_t457 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14577(__this, ___collection, method) (( void (*) (List_1_t457 *, Object_t*, const MethodInfo*))List_1_AddRange_m14577_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2054 * List_1_AsReadOnly_m14578_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14578(__this, method) (( ReadOnlyCollection_1_t2054 * (*) (List_1_t457 *, const MethodInfo*))List_1_AsReadOnly_m14578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m14579_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_Clear_m14579(__this, method) (( void (*) (List_1_t457 *, const MethodInfo*))List_1_Clear_m14579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m14580_gshared (List_1_t457 * __this, UILineInfo_t307  ___item, const MethodInfo* method);
#define List_1_Contains_m14580(__this, ___item, method) (( bool (*) (List_1_t457 *, UILineInfo_t307 , const MethodInfo*))List_1_Contains_m14580_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14581_gshared (List_1_t457 * __this, UILineInfoU5BU5D_t588* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14581(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t457 *, UILineInfoU5BU5D_t588*, int32_t, const MethodInfo*))List_1_CopyTo_m14581_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t307  List_1_Find_m14582_gshared (List_1_t457 * __this, Predicate_1_t2058 * ___match, const MethodInfo* method);
#define List_1_Find_m14582(__this, ___match, method) (( UILineInfo_t307  (*) (List_1_t457 *, Predicate_1_t2058 *, const MethodInfo*))List_1_Find_m14582_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14583_gshared (Object_t * __this /* static, unused */, Predicate_1_t2058 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14583(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2058 *, const MethodInfo*))List_1_CheckMatch_m14583_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14584_gshared (List_1_t457 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2058 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14584(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t457 *, int32_t, int32_t, Predicate_1_t2058 *, const MethodInfo*))List_1_GetIndex_m14584_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2053  List_1_GetEnumerator_m14585_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14585(__this, method) (( Enumerator_t2053  (*) (List_1_t457 *, const MethodInfo*))List_1_GetEnumerator_m14585_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14586_gshared (List_1_t457 * __this, UILineInfo_t307  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14586(__this, ___item, method) (( int32_t (*) (List_1_t457 *, UILineInfo_t307 , const MethodInfo*))List_1_IndexOf_m14586_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14587_gshared (List_1_t457 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14587(__this, ___start, ___delta, method) (( void (*) (List_1_t457 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14587_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14588_gshared (List_1_t457 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14588(__this, ___index, method) (( void (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14588_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14589_gshared (List_1_t457 * __this, int32_t ___index, UILineInfo_t307  ___item, const MethodInfo* method);
#define List_1_Insert_m14589(__this, ___index, ___item, method) (( void (*) (List_1_t457 *, int32_t, UILineInfo_t307 , const MethodInfo*))List_1_Insert_m14589_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14590_gshared (List_1_t457 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14590(__this, ___collection, method) (( void (*) (List_1_t457 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14590_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m14591_gshared (List_1_t457 * __this, UILineInfo_t307  ___item, const MethodInfo* method);
#define List_1_Remove_m14591(__this, ___item, method) (( bool (*) (List_1_t457 *, UILineInfo_t307 , const MethodInfo*))List_1_Remove_m14591_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14592_gshared (List_1_t457 * __this, Predicate_1_t2058 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14592(__this, ___match, method) (( int32_t (*) (List_1_t457 *, Predicate_1_t2058 *, const MethodInfo*))List_1_RemoveAll_m14592_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14593_gshared (List_1_t457 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14593(__this, ___index, method) (( void (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14593_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m14594_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_Reverse_m14594(__this, method) (( void (*) (List_1_t457 *, const MethodInfo*))List_1_Reverse_m14594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m14595_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_Sort_m14595(__this, method) (( void (*) (List_1_t457 *, const MethodInfo*))List_1_Sort_m14595_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14596_gshared (List_1_t457 * __this, Comparison_1_t2061 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14596(__this, ___comparison, method) (( void (*) (List_1_t457 *, Comparison_1_t2061 *, const MethodInfo*))List_1_Sort_m14596_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t588* List_1_ToArray_m14597_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_ToArray_m14597(__this, method) (( UILineInfoU5BU5D_t588* (*) (List_1_t457 *, const MethodInfo*))List_1_ToArray_m14597_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14598_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14598(__this, method) (( void (*) (List_1_t457 *, const MethodInfo*))List_1_TrimExcess_m14598_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14599_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14599(__this, method) (( int32_t (*) (List_1_t457 *, const MethodInfo*))List_1_get_Capacity_m14599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14600_gshared (List_1_t457 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14600(__this, ___value, method) (( void (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14600_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14601_gshared (List_1_t457 * __this, const MethodInfo* method);
#define List_1_get_Count_m14601(__this, method) (( int32_t (*) (List_1_t457 *, const MethodInfo*))List_1_get_Count_m14601_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t307  List_1_get_Item_m14602_gshared (List_1_t457 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14602(__this, ___index, method) (( UILineInfo_t307  (*) (List_1_t457 *, int32_t, const MethodInfo*))List_1_get_Item_m14602_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14603_gshared (List_1_t457 * __this, int32_t ___index, UILineInfo_t307  ___value, const MethodInfo* method);
#define List_1_set_Item_m14603(__this, ___index, ___value, method) (( void (*) (List_1_t457 *, int32_t, UILineInfo_t307 , const MethodInfo*))List_1_set_Item_m14603_gshared)(__this, ___index, ___value, method)
