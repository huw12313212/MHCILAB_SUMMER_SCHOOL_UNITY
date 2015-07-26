#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t487;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t594;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t631;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t632;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2008;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t589;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t596;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t598;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m3145(__this, method) (( void (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2__ctor_m11934_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15407(__this, ___comparer, method) (( void (*) (Dictionary_2_t487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11936_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15408(__this, ___dictionary, method) (( void (*) (Dictionary_2_t487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11938_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15409(__this, ___capacity, method) (( void (*) (Dictionary_2_t487 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11940_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15410(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t487 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11942_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15411(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t487 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m11944_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15412(__this, method) (( Object_t* (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11946_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15413(__this, method) (( Object_t* (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11948_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15414(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11950_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15415(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11952_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15416(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11954_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15417(__this, ___key, method) (( bool (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11956_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15418(__this, ___key, method) (( void (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11958_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15419(__this, method) (( bool (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15420(__this, method) (( Object_t * (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15421(__this, method) (( bool (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15422(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t487 *, KeyValuePair_2_t597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11966_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15423(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t487 *, KeyValuePair_2_t597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11968_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15424(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t487 *, KeyValuePair_2U5BU5D_t596*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11970_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15425(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t487 *, KeyValuePair_2_t597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11972_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11974_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15427(__this, method) (( Object_t * (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11976_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15428(__this, method) (( Object_t* (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11978_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15429(__this, method) (( Object_t * (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11980_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m15430(__this, method) (( int32_t (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_get_Count_m11982_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m15431(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t487 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m11984_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15432(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t487 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11986_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15433(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t487 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11988_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15434(__this, ___size, method) (( void (*) (Dictionary_2_t487 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11990_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15435(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11992_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15436(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t597  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11994_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15437(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m11996_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15438(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11998_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15439(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t487 *, KeyValuePair_2U5BU5D_t596*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12000_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m15440(__this, method) (( void (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_Resize_m12002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m15441(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t487 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m12004_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m15442(__this, method) (( void (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_Clear_m12006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m15443(__this, ___key, method) (( bool (*) (Dictionary_2_t487 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m12008_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m15444(__this, ___value, method) (( bool (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12010_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m15445(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t487 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m12012_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m15446(__this, ___sender, method) (( void (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12014_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m15447(__this, ___key, method) (( bool (*) (Dictionary_2_t487 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m12016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m15448(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t487 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12018_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m3147(__this, method) (( KeyCollection_t631 * (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_get_Keys_m12020_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m3148(__this, method) (( ValueCollection_t632 * (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_get_Values_m12022_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m15449(__this, ___key, method) (( String_t* (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12024_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m15450(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12026_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m15451(__this, ___pair, method) (( bool (*) (Dictionary_2_t487 *, KeyValuePair_2_t597 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12028_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3146(__this, method) (( Enumerator_t630  (*) (Dictionary_2_t487 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12030_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m15452(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12032_gshared)(__this /* static, unused */, ___key, ___value, method)
