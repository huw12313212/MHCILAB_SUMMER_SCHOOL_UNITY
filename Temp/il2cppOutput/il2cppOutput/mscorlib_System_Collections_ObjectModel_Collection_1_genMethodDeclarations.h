#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1745;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Object[]
struct ObjectU5BU5D_t23;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1967;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1743;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10355_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10355(__this, method) (( void (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1__ctor_m10355_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356(__this, method) (( bool (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10357_gshared (Collection_1_t1745 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10357(__this, ___array, ___index, method) (( void (*) (Collection_1_t1745 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10357_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10358_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10358(__this, method) (( Object_t * (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10358_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10359_gshared (Collection_1_t1745 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10359(__this, ___value, method) (( int32_t (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10359_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10360_gshared (Collection_1_t1745 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10360(__this, ___value, method) (( bool (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10360_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10361_gshared (Collection_1_t1745 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10361(__this, ___value, method) (( int32_t (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10361_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10362_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10362(__this, ___index, ___value, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10362_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10363_gshared (Collection_1_t1745 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10363(__this, ___value, method) (( void (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10363_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10364_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10364(__this, method) (( bool (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10364_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10365_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10365(__this, method) (( Object_t * (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10365_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10366_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10366(__this, method) (( bool (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10366_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10367_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10367(__this, method) (( bool (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10367_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10368_gshared (Collection_1_t1745 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10368(__this, ___index, method) (( Object_t * (*) (Collection_1_t1745 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10368_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10369_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10369(__this, ___index, ___value, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10369_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10370_gshared (Collection_1_t1745 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10370(__this, ___item, method) (( void (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_Add_m10370_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10371_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10371(__this, method) (( void (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_Clear_m10371_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10372_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10372(__this, method) (( void (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_ClearItems_m10372_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10373_gshared (Collection_1_t1745 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10373(__this, ___item, method) (( bool (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10373_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10374_gshared (Collection_1_t1745 * __this, ObjectU5BU5D_t23* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10374(__this, ___array, ___index, method) (( void (*) (Collection_1_t1745 *, ObjectU5BU5D_t23*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10374_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10375_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10375(__this, method) (( Object_t* (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_GetEnumerator_m10375_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10376_gshared (Collection_1_t1745 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10376(__this, ___item, method) (( int32_t (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10376_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10377_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10377(__this, ___index, ___item, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10377_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10378_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10378(__this, ___index, ___item, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10378_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10379_gshared (Collection_1_t1745 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10379(__this, ___item, method) (( bool (*) (Collection_1_t1745 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10379_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10380_gshared (Collection_1_t1745 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10380(__this, ___index, method) (( void (*) (Collection_1_t1745 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10380_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10381_gshared (Collection_1_t1745 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10381(__this, ___index, method) (( void (*) (Collection_1_t1745 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10381_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10382_gshared (Collection_1_t1745 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10382(__this, method) (( int32_t (*) (Collection_1_t1745 *, const MethodInfo*))Collection_1_get_Count_m10382_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10383_gshared (Collection_1_t1745 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10383(__this, ___index, method) (( Object_t * (*) (Collection_1_t1745 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10383_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10384_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10384(__this, ___index, ___value, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10384_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10385_gshared (Collection_1_t1745 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10385(__this, ___index, ___item, method) (( void (*) (Collection_1_t1745 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10385_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10386_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10386(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10386_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10387_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10387(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10387_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10388_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10388(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10388_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10389_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10389(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10389_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10390_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10390(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10390_gshared)(__this /* static, unused */, ___list, method)
