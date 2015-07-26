#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1849;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2363;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1855;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1859;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1851;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2378;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2379;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2380;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11696_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11696(__this, method) (( void (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2__ctor_m11696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11697_gshared (Dictionary_2_t1849 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11697(__this, ___comparer, method) (( void (*) (Dictionary_2_t1849 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11697_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11698_gshared (Dictionary_2_t1849 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11698(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1849 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11698_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11699_gshared (Dictionary_2_t1849 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11699(__this, ___capacity, method) (( void (*) (Dictionary_2_t1849 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11699_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11700_gshared (Dictionary_2_t1849 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11700(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1849 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11700_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11701_gshared (Dictionary_2_t1849 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11701(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1849 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m11701_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11702_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11702(__this, method) (( Object_t* (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11702_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11703_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11703(__this, method) (( Object_t* (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11703_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11704_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11704(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11704_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11705_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11706_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11706_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11707_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11707(__this, ___key, method) (( bool (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11707_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11708_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11708(__this, ___key, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11708_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11709_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11709(__this, method) (( bool (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11710_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11710(__this, method) (( Object_t * (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11710_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11711_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11711(__this, method) (( bool (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11712_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2_t1853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11712(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1849 *, KeyValuePair_2_t1853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11712_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11713_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2_t1853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11713(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1849 *, KeyValuePair_2_t1853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11713_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11714_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2U5BU5D_t2379* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11714(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1849 *, KeyValuePair_2U5BU5D_t2379*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11714_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11715_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2_t1853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11715(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1849 *, KeyValuePair_2_t1853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11715_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11716_gshared (Dictionary_2_t1849 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1849 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11716_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11717_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11717(__this, method) (( Object_t * (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11717_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11718_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11718(__this, method) (( Object_t* (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11718_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11719_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11719(__this, method) (( Object_t * (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11719_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11720_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11720(__this, method) (( int32_t (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_get_Count_m11720_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11721_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11721(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11721_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11722_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11722(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11723_gshared (Dictionary_2_t1849 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11723(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1849 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11723_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11724_gshared (Dictionary_2_t1849 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11724(__this, ___size, method) (( void (*) (Dictionary_2_t1849 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11724_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11725_gshared (Dictionary_2_t1849 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11725(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1849 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11725_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1853  Dictionary_2_make_pair_m11726_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11726(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1853  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11726_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11727_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11727(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11727_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11728_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11728(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11728_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11729_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2U5BU5D_t2379* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11729(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1849 *, KeyValuePair_2U5BU5D_t2379*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11729_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11730_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11730(__this, method) (( void (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_Resize_m11730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11731_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11731(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11731_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11732_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11732(__this, method) (( void (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_Clear_m11732_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11733_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11733(__this, ___key, method) (( bool (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11733_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11734_gshared (Dictionary_2_t1849 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11734(__this, ___value, method) (( bool (*) (Dictionary_2_t1849 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11734_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11735_gshared (Dictionary_2_t1849 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11735(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1849 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m11735_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11736_gshared (Dictionary_2_t1849 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11736(__this, ___sender, method) (( void (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11736_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11737_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11737(__this, ___key, method) (( bool (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11737_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11738_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11738(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1849 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11738_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1855 * Dictionary_2_get_Keys_m11739_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11739(__this, method) (( KeyCollection_t1855 * (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_get_Keys_m11739_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1859 * Dictionary_2_get_Values_m11740_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11740(__this, method) (( ValueCollection_t1859 * (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_get_Values_m11740_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11741_gshared (Dictionary_2_t1849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11741(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11741_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11742_gshared (Dictionary_2_t1849 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11742(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1849 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11742_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11743_gshared (Dictionary_2_t1849 * __this, KeyValuePair_2_t1853  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11743(__this, ___pair, method) (( bool (*) (Dictionary_2_t1849 *, KeyValuePair_2_t1853 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11743_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1857  Dictionary_2_GetEnumerator_m11744_gshared (Dictionary_2_t1849 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11744(__this, method) (( Enumerator_t1857  (*) (Dictionary_2_t1849 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11744_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m11745_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11745(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11745_gshared)(__this /* static, unused */, ___key, ___value, method)
