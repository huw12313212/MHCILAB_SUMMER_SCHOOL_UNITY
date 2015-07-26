#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2349;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2350;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2351;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t1783;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1779;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1787;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m1328_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1__ctor_m1328(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1__ctor_m1328_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10721_gshared (List_1_t73 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10721(__this, ___capacity, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1__ctor_m10721_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m10722_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10722(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10723_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10723(__this, method) (( Object_t* (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10723_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10724_gshared (List_1_t73 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10724(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10724_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10725_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10725(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10726_gshared (List_1_t73 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10726(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10726_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10727_gshared (List_1_t73 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10727(__this, ___item, method) (( bool (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10727_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10728_gshared (List_1_t73 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10728(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10728_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10729_gshared (List_1_t73 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10729(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10729_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10730_gshared (List_1_t73 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10730(__this, ___item, method) (( void (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10730_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10731_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10731(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10732_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10732(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10732_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10733_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10733(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10733_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10734_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10734(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10734_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10735_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10735(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10735_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10736_gshared (List_1_t73 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10736(__this, ___index, method) (( Object_t * (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10736_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10737_gshared (List_1_t73 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10737(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10737_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m10738_gshared (List_1_t73 * __this, RaycastResult_t66  ___item, const MethodInfo* method);
#define List_1_Add_m10738(__this, ___item, method) (( void (*) (List_1_t73 *, RaycastResult_t66 , const MethodInfo*))List_1_Add_m10738_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10739_gshared (List_1_t73 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10739(__this, ___newCount, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10739_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10740_gshared (List_1_t73 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10740(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10740_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10741_gshared (List_1_t73 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10741(__this, ___enumerable, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10741_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10742_gshared (List_1_t73 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10742(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddRange_m10742_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1783 * List_1_AsReadOnly_m10743_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10743(__this, method) (( ReadOnlyCollection_1_t1783 * (*) (List_1_t73 *, const MethodInfo*))List_1_AsReadOnly_m10743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m10744_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_Clear_m10744(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Clear_m10744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m10745_gshared (List_1_t73 * __this, RaycastResult_t66  ___item, const MethodInfo* method);
#define List_1_Contains_m10745(__this, ___item, method) (( bool (*) (List_1_t73 *, RaycastResult_t66 , const MethodInfo*))List_1_Contains_m10745_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10746_gshared (List_1_t73 * __this, RaycastResultU5BU5D_t1779* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10746(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, RaycastResultU5BU5D_t1779*, int32_t, const MethodInfo*))List_1_CopyTo_m10746_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t66  List_1_Find_m10747_gshared (List_1_t73 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_Find_m10747(__this, ___match, method) (( RaycastResult_t66  (*) (List_1_t73 *, Predicate_1_t1787 *, const MethodInfo*))List_1_Find_m10747_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10748_gshared (Object_t * __this /* static, unused */, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10748(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1787 *, const MethodInfo*))List_1_CheckMatch_m10748_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10749_gshared (List_1_t73 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10749(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t73 *, int32_t, int32_t, Predicate_1_t1787 *, const MethodInfo*))List_1_GetIndex_m10749_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t1781  List_1_GetEnumerator_m10750_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10750(__this, method) (( Enumerator_t1781  (*) (List_1_t73 *, const MethodInfo*))List_1_GetEnumerator_m10750_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10751_gshared (List_1_t73 * __this, RaycastResult_t66  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10751(__this, ___item, method) (( int32_t (*) (List_1_t73 *, RaycastResult_t66 , const MethodInfo*))List_1_IndexOf_m10751_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10752_gshared (List_1_t73 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10752(__this, ___start, ___delta, method) (( void (*) (List_1_t73 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10752_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10753_gshared (List_1_t73 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10753(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10753_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10754_gshared (List_1_t73 * __this, int32_t ___index, RaycastResult_t66  ___item, const MethodInfo* method);
#define List_1_Insert_m10754(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, RaycastResult_t66 , const MethodInfo*))List_1_Insert_m10754_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10755_gshared (List_1_t73 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10755(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10755_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m10756_gshared (List_1_t73 * __this, RaycastResult_t66  ___item, const MethodInfo* method);
#define List_1_Remove_m10756(__this, ___item, method) (( bool (*) (List_1_t73 *, RaycastResult_t66 , const MethodInfo*))List_1_Remove_m10756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10757_gshared (List_1_t73 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10757(__this, ___match, method) (( int32_t (*) (List_1_t73 *, Predicate_1_t1787 *, const MethodInfo*))List_1_RemoveAll_m10757_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10758_gshared (List_1_t73 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10758(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10758_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m10759_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_Reverse_m10759(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Reverse_m10759_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m10760_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_Sort_m10760(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Sort_m10760_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1282_gshared (List_1_t73 * __this, Comparison_1_t32 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1282(__this, ___comparison, method) (( void (*) (List_1_t73 *, Comparison_1_t32 *, const MethodInfo*))List_1_Sort_m1282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t1779* List_1_ToArray_m10761_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_ToArray_m10761(__this, method) (( RaycastResultU5BU5D_t1779* (*) (List_1_t73 *, const MethodInfo*))List_1_ToArray_m10761_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m10762_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10762(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_TrimExcess_m10762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10763_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10763(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Capacity_m10763_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10764_gshared (List_1_t73 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10764(__this, ___value, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10764_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m10765_gshared (List_1_t73 * __this, const MethodInfo* method);
#define List_1_get_Count_m10765(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Count_m10765_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t66  List_1_get_Item_m10766_gshared (List_1_t73 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10766(__this, ___index, method) (( RaycastResult_t66  (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_get_Item_m10766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10767_gshared (List_1_t73 * __this, int32_t ___index, RaycastResult_t66  ___value, const MethodInfo* method);
#define List_1_set_Item_m10767(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, RaycastResult_t66 , const MethodInfo*))List_1_set_Item_m10767_gshared)(__this, ___index, ___value, method)
