#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2064;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2486;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2068;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2072;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1851;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2490;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2491;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2492;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m14699_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14699(__this, method) (( void (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2__ctor_m14699_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14701_gshared (Dictionary_2_t2064 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14701(__this, ___comparer, method) (( void (*) (Dictionary_2_t2064 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14701_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14703_gshared (Dictionary_2_t2064 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m14703(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2064 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14703_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14705_gshared (Dictionary_2_t2064 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14705(__this, ___capacity, method) (( void (*) (Dictionary_2_t2064 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14705_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14707_gshared (Dictionary_2_t2064 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14707(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2064 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14707_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14709_gshared (Dictionary_2_t2064 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14709(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2064 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m14709_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14711_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14711(__this, method) (( Object_t* (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14711_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14713_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14713(__this, method) (( Object_t* (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14715_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14715(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14715_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14717_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14719_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14719(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14719_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14721_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14721(__this, ___key, method) (( bool (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14721_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14723_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14723(__this, ___key, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14723_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14725_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14725(__this, method) (( bool (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14725_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14727_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14727(__this, method) (( Object_t * (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14729_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14729(__this, method) (( bool (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14729_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14731_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14731(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2064 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14731_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14733_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14733(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2064 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14733_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14735_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2U5BU5D_t2491* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14735(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2064 *, KeyValuePair_2U5BU5D_t2491*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14735_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14737_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2_t2065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14737(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2064 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14737_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14739_gshared (Dictionary_2_t2064 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14739(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2064 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14739_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14741_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14741(__this, method) (( Object_t * (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14741_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14743_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14743(__this, method) (( Object_t* (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14743_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14745_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14745(__this, method) (( Object_t * (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14745_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14747_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14747(__this, method) (( int32_t (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_get_Count_m14747_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m14749_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14749(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14749_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14751_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m14751_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14753_gshared (Dictionary_2_t2064 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14753(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2064 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14753_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14755_gshared (Dictionary_2_t2064 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14755(__this, ___size, method) (( void (*) (Dictionary_2_t2064 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14755_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14757_gshared (Dictionary_2_t2064 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14757(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2064 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14757_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2065  Dictionary_2_make_pair_m14759_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14759(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2065  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m14759_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14761_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14761(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m14761_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m14763_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14763(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m14763_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14765_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2U5BU5D_t2491* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14765(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2064 *, KeyValuePair_2U5BU5D_t2491*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14765_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m14767_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14767(__this, method) (( void (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_Resize_m14767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14769_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14769(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m14769_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m14771_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14771(__this, method) (( void (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_Clear_m14771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14773_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14773(__this, ___key, method) (( bool (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14773_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14775_gshared (Dictionary_2_t2064 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14775(__this, ___value, method) (( bool (*) (Dictionary_2_t2064 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m14775_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14777_gshared (Dictionary_2_t2064 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14777(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2064 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m14777_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14779_gshared (Dictionary_2_t2064 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14779(__this, ___sender, method) (( void (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14779_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14781_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14781(__this, ___key, method) (( bool (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14781_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14783_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14783(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2064 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14783_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2068 * Dictionary_2_get_Keys_m14785_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14785(__this, method) (( KeyCollection_t2068 * (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_get_Keys_m14785_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2072 * Dictionary_2_get_Values_m14787_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14787(__this, method) (( ValueCollection_t2072 * (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_get_Values_m14787_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14789_gshared (Dictionary_2_t2064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14789(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14789_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m14791_gshared (Dictionary_2_t2064 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14791(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2064 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14791_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14793_gshared (Dictionary_2_t2064 * __this, KeyValuePair_2_t2065  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14793(__this, ___pair, method) (( bool (*) (Dictionary_2_t2064 *, KeyValuePair_2_t2065 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14793_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2070  Dictionary_2_GetEnumerator_m14795_gshared (Dictionary_2_t2064 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14795(__this, method) (( Enumerator_t2070  (*) (Dictionary_2_t2064 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14795_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m14797_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14797(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14797_gshared)(__this /* static, unused */, ___key, ___value, method)
