#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2402;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t318;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2405;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t1895;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t151;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1896;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1898;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m1561_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1__ctor_m1561(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1__ctor_m1561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3117_gshared (List_1_t154 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3117(__this, ___capacity, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1__ctor_m3117_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m12319_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12319(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12319_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12320_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12320(__this, method) (( Object_t* (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12320_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12321_gshared (List_1_t154 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12321(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12321_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12322_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12322(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12323_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12323(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12323_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12324_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12324(__this, ___item, method) (( bool (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12324_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12325_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12325(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12325_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12326_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12326(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12326_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12327_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12327(__this, ___item, method) (( void (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12327_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12328_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12328(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12328_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12329_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12329(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12329_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12330_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12330(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12331_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12331(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12331_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12332_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12332(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12333_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12333(__this, ___index, method) (( Object_t * (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12333_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12334_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12334(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12334_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m12335_gshared (List_1_t154 * __this, UIVertex_t152  ___item, const MethodInfo* method);
#define List_1_Add_m12335(__this, ___item, method) (( void (*) (List_1_t154 *, UIVertex_t152 , const MethodInfo*))List_1_Add_m12335_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12336_gshared (List_1_t154 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12336(__this, ___newCount, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12336_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12337_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12337(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12337_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12338_gshared (List_1_t154 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12338(__this, ___enumerable, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12338_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12339_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12339(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_AddRange_m12339_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1895 * List_1_AsReadOnly_m12340_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12340(__this, method) (( ReadOnlyCollection_1_t1895 * (*) (List_1_t154 *, const MethodInfo*))List_1_AsReadOnly_m12340_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m12341_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Clear_m12341(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Clear_m12341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m12342_gshared (List_1_t154 * __this, UIVertex_t152  ___item, const MethodInfo* method);
#define List_1_Contains_m12342(__this, ___item, method) (( bool (*) (List_1_t154 *, UIVertex_t152 , const MethodInfo*))List_1_Contains_m12342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12343_gshared (List_1_t154 * __this, UIVertexU5BU5D_t151* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12343(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, UIVertexU5BU5D_t151*, int32_t, const MethodInfo*))List_1_CopyTo_m12343_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t152  List_1_Find_m12344_gshared (List_1_t154 * __this, Predicate_1_t1896 * ___match, const MethodInfo* method);
#define List_1_Find_m12344(__this, ___match, method) (( UIVertex_t152  (*) (List_1_t154 *, Predicate_1_t1896 *, const MethodInfo*))List_1_Find_m12344_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12345_gshared (Object_t * __this /* static, unused */, Predicate_1_t1896 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12345(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1896 *, const MethodInfo*))List_1_CheckMatch_m12345_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12346_gshared (List_1_t154 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1896 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12346(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t154 *, int32_t, int32_t, Predicate_1_t1896 *, const MethodInfo*))List_1_GetIndex_m12346_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1897  List_1_GetEnumerator_m12347_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12347(__this, method) (( Enumerator_t1897  (*) (List_1_t154 *, const MethodInfo*))List_1_GetEnumerator_m12347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12348_gshared (List_1_t154 * __this, UIVertex_t152  ___item, const MethodInfo* method);
#define List_1_IndexOf_m12348(__this, ___item, method) (( int32_t (*) (List_1_t154 *, UIVertex_t152 , const MethodInfo*))List_1_IndexOf_m12348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12349_gshared (List_1_t154 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12349(__this, ___start, ___delta, method) (( void (*) (List_1_t154 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12349_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12350_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12350(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12350_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12351_gshared (List_1_t154 * __this, int32_t ___index, UIVertex_t152  ___item, const MethodInfo* method);
#define List_1_Insert_m12351(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, UIVertex_t152 , const MethodInfo*))List_1_Insert_m12351_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12352_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12352(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12352_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m12353_gshared (List_1_t154 * __this, UIVertex_t152  ___item, const MethodInfo* method);
#define List_1_Remove_m12353(__this, ___item, method) (( bool (*) (List_1_t154 *, UIVertex_t152 , const MethodInfo*))List_1_Remove_m12353_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12354_gshared (List_1_t154 * __this, Predicate_1_t1896 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12354(__this, ___match, method) (( int32_t (*) (List_1_t154 *, Predicate_1_t1896 *, const MethodInfo*))List_1_RemoveAll_m12354_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12355_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12355(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m12356_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Reverse_m12356(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Reverse_m12356_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m12357_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Sort_m12357(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Sort_m12357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12358_gshared (List_1_t154 * __this, Comparison_1_t1898 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12358(__this, ___comparison, method) (( void (*) (List_1_t154 *, Comparison_1_t1898 *, const MethodInfo*))List_1_Sort_m12358_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t151* List_1_ToArray_m1621_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_ToArray_m1621(__this, method) (( UIVertexU5BU5D_t151* (*) (List_1_t154 *, const MethodInfo*))List_1_ToArray_m1621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m12359_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12359(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_TrimExcess_m12359_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1470_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1470(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Capacity_m1470_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1471_gshared (List_1_t154 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1471(__this, ___value, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m12360_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Count_m12360(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Count_m12360_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t152  List_1_get_Item_m12361_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12361(__this, ___index, method) (( UIVertex_t152  (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_get_Item_m12361_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12362_gshared (List_1_t154 * __this, int32_t ___index, UIVertex_t152  ___value, const MethodInfo* method);
#define List_1_set_Item_m12362(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, UIVertex_t152 , const MethodInfo*))List_1_set_Item_m12362_gshared)(__this, ___index, ___value, method)
