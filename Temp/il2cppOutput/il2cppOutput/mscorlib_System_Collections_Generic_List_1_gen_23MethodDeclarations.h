#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t456;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2481;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2482;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2483;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2045;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t587;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2049;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2052;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m14414_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1__ctor_m14414(__this, method) (( void (*) (List_1_t456 *, const MethodInfo*))List_1__ctor_m14414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3118_gshared (List_1_t456 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3118(__this, ___capacity, method) (( void (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1__ctor_m3118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m14415_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14415(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14415_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14416_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14416(__this, method) (( Object_t* (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14416_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14417_gshared (List_1_t456 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14417(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t456 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14417_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14418_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14418(__this, method) (( Object_t * (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14418_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14419_gshared (List_1_t456 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14419(__this, ___item, method) (( int32_t (*) (List_1_t456 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14420_gshared (List_1_t456 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14420(__this, ___item, method) (( bool (*) (List_1_t456 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14421_gshared (List_1_t456 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14421(__this, ___item, method) (( int32_t (*) (List_1_t456 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14422_gshared (List_1_t456 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14422(__this, ___index, ___item, method) (( void (*) (List_1_t456 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14423_gshared (List_1_t456 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14423(__this, ___item, method) (( void (*) (List_1_t456 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14424_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14424(__this, method) (( bool (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14425_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14425(__this, method) (( bool (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14425_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14426_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14426(__this, method) (( Object_t * (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14426_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14427_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14427(__this, method) (( bool (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14428_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14428(__this, method) (( bool (*) (List_1_t456 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14428_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14429_gshared (List_1_t456 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14429(__this, ___index, method) (( Object_t * (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14430_gshared (List_1_t456 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14430(__this, ___index, ___value, method) (( void (*) (List_1_t456 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14430_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m14431_gshared (List_1_t456 * __this, UICharInfo_t309  ___item, const MethodInfo* method);
#define List_1_Add_m14431(__this, ___item, method) (( void (*) (List_1_t456 *, UICharInfo_t309 , const MethodInfo*))List_1_Add_m14431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14432_gshared (List_1_t456 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14432(__this, ___newCount, method) (( void (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14432_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14433_gshared (List_1_t456 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14433(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14433_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14434_gshared (List_1_t456 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14434(__this, ___enumerable, method) (( void (*) (List_1_t456 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14434_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14435_gshared (List_1_t456 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14435(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, const MethodInfo*))List_1_AddRange_m14435_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2045 * List_1_AsReadOnly_m14436_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14436(__this, method) (( ReadOnlyCollection_1_t2045 * (*) (List_1_t456 *, const MethodInfo*))List_1_AsReadOnly_m14436_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m14437_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_Clear_m14437(__this, method) (( void (*) (List_1_t456 *, const MethodInfo*))List_1_Clear_m14437_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m14438_gshared (List_1_t456 * __this, UICharInfo_t309  ___item, const MethodInfo* method);
#define List_1_Contains_m14438(__this, ___item, method) (( bool (*) (List_1_t456 *, UICharInfo_t309 , const MethodInfo*))List_1_Contains_m14438_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14439_gshared (List_1_t456 * __this, UICharInfoU5BU5D_t587* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14439(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t456 *, UICharInfoU5BU5D_t587*, int32_t, const MethodInfo*))List_1_CopyTo_m14439_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t309  List_1_Find_m14440_gshared (List_1_t456 * __this, Predicate_1_t2049 * ___match, const MethodInfo* method);
#define List_1_Find_m14440(__this, ___match, method) (( UICharInfo_t309  (*) (List_1_t456 *, Predicate_1_t2049 *, const MethodInfo*))List_1_Find_m14440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14441_gshared (Object_t * __this /* static, unused */, Predicate_1_t2049 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14441(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2049 *, const MethodInfo*))List_1_CheckMatch_m14441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14442_gshared (List_1_t456 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2049 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14442(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t456 *, int32_t, int32_t, Predicate_1_t2049 *, const MethodInfo*))List_1_GetIndex_m14442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2044  List_1_GetEnumerator_m14443_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14443(__this, method) (( Enumerator_t2044  (*) (List_1_t456 *, const MethodInfo*))List_1_GetEnumerator_m14443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14444_gshared (List_1_t456 * __this, UICharInfo_t309  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14444(__this, ___item, method) (( int32_t (*) (List_1_t456 *, UICharInfo_t309 , const MethodInfo*))List_1_IndexOf_m14444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14445_gshared (List_1_t456 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14445(__this, ___start, ___delta, method) (( void (*) (List_1_t456 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14445_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14446_gshared (List_1_t456 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14446(__this, ___index, method) (( void (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14447_gshared (List_1_t456 * __this, int32_t ___index, UICharInfo_t309  ___item, const MethodInfo* method);
#define List_1_Insert_m14447(__this, ___index, ___item, method) (( void (*) (List_1_t456 *, int32_t, UICharInfo_t309 , const MethodInfo*))List_1_Insert_m14447_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14448_gshared (List_1_t456 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14448(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14448_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m14449_gshared (List_1_t456 * __this, UICharInfo_t309  ___item, const MethodInfo* method);
#define List_1_Remove_m14449(__this, ___item, method) (( bool (*) (List_1_t456 *, UICharInfo_t309 , const MethodInfo*))List_1_Remove_m14449_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14450_gshared (List_1_t456 * __this, Predicate_1_t2049 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14450(__this, ___match, method) (( int32_t (*) (List_1_t456 *, Predicate_1_t2049 *, const MethodInfo*))List_1_RemoveAll_m14450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14451_gshared (List_1_t456 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14451(__this, ___index, method) (( void (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14451_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m14452_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_Reverse_m14452(__this, method) (( void (*) (List_1_t456 *, const MethodInfo*))List_1_Reverse_m14452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m14453_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_Sort_m14453(__this, method) (( void (*) (List_1_t456 *, const MethodInfo*))List_1_Sort_m14453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14454_gshared (List_1_t456 * __this, Comparison_1_t2052 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14454(__this, ___comparison, method) (( void (*) (List_1_t456 *, Comparison_1_t2052 *, const MethodInfo*))List_1_Sort_m14454_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t587* List_1_ToArray_m14455_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_ToArray_m14455(__this, method) (( UICharInfoU5BU5D_t587* (*) (List_1_t456 *, const MethodInfo*))List_1_ToArray_m14455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14456_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14456(__this, method) (( void (*) (List_1_t456 *, const MethodInfo*))List_1_TrimExcess_m14456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14457_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14457(__this, method) (( int32_t (*) (List_1_t456 *, const MethodInfo*))List_1_get_Capacity_m14457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14458_gshared (List_1_t456 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14458(__this, ___value, method) (( void (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14458_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14459_gshared (List_1_t456 * __this, const MethodInfo* method);
#define List_1_get_Count_m14459(__this, method) (( int32_t (*) (List_1_t456 *, const MethodInfo*))List_1_get_Count_m14459_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t309  List_1_get_Item_m14460_gshared (List_1_t456 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14460(__this, ___index, method) (( UICharInfo_t309  (*) (List_1_t456 *, int32_t, const MethodInfo*))List_1_get_Item_m14460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14461_gshared (List_1_t456 * __this, int32_t ___index, UICharInfo_t309  ___value, const MethodInfo* method);
#define List_1_set_Item_m14461(__this, ___index, ___value, method) (( void (*) (List_1_t456 *, int32_t, UICharInfo_t309 , const MethodInfo*))List_1_set_Item_m14461_gshared)(__this, ___index, ___value, method)
