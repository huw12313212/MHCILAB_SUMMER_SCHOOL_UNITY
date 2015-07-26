#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t976;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2363;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2261;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2265;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1817;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2580;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2581;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2582;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17007_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17007(__this, method) (( void (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2__ctor_m17007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17008_gshared (Dictionary_2_t976 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17008(__this, ___comparer, method) (( void (*) (Dictionary_2_t976 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17008_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17009_gshared (Dictionary_2_t976 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17009(__this, ___dictionary, method) (( void (*) (Dictionary_2_t976 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17009_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17010_gshared (Dictionary_2_t976 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17010(__this, ___capacity, method) (( void (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17010_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17011_gshared (Dictionary_2_t976 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17011(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t976 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17011_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17012_gshared (Dictionary_2_t976 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17012(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t976 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m17012_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17013_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17013(__this, method) (( Object_t* (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17013_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17014_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17014(__this, method) (( Object_t* (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17015_gshared (Dictionary_2_t976 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17015(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17015_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17016_gshared (Dictionary_2_t976 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t976 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17017_gshared (Dictionary_2_t976 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17017(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t976 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17017_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17018_gshared (Dictionary_2_t976 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17018(__this, ___key, method) (( bool (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17018_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17019_gshared (Dictionary_2_t976 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17019(__this, ___key, method) (( void (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17019_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17020_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17020(__this, method) (( bool (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17020_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17021_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17021(__this, method) (( Object_t * (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17021_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17022_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17022(__this, method) (( bool (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17023_gshared (Dictionary_2_t976 * __this, KeyValuePair_2_t2259  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17023(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t976 *, KeyValuePair_2_t2259 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17023_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17024_gshared (Dictionary_2_t976 * __this, KeyValuePair_2_t2259  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17024(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t976 *, KeyValuePair_2_t2259 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17024_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17025_gshared (Dictionary_2_t976 * __this, KeyValuePair_2U5BU5D_t2581* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17025(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t976 *, KeyValuePair_2U5BU5D_t2581*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17025_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17026_gshared (Dictionary_2_t976 * __this, KeyValuePair_2_t2259  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17026(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t976 *, KeyValuePair_2_t2259 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17026_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17027_gshared (Dictionary_2_t976 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17027(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t976 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17027_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17028_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17028(__this, method) (( Object_t * (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17028_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17029_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17029(__this, method) (( Object_t* (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17029_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17030_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17030(__this, method) (( Object_t * (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17030_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17031_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17031(__this, method) (( int32_t (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_get_Count_m17031_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17032_gshared (Dictionary_2_t976 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17032(__this, ___key, method) (( int32_t (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17032_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17033_gshared (Dictionary_2_t976 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17033(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t976 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17033_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17034_gshared (Dictionary_2_t976 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17034(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t976 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17034_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17035_gshared (Dictionary_2_t976 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17035(__this, ___size, method) (( void (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17035_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17036_gshared (Dictionary_2_t976 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17036(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t976 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17036_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2259  Dictionary_2_make_pair_m17037_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17037(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2259  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17037_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17038_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17038(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m17038_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17039_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17039(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17039_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17040_gshared (Dictionary_2_t976 * __this, KeyValuePair_2U5BU5D_t2581* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17040(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t976 *, KeyValuePair_2U5BU5D_t2581*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17040_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17041_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17041(__this, method) (( void (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_Resize_m17041_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17042_gshared (Dictionary_2_t976 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17042(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t976 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17042_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17043_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17043(__this, method) (( void (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_Clear_m17043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17044_gshared (Dictionary_2_t976 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17044(__this, ___key, method) (( bool (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17044_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17045_gshared (Dictionary_2_t976 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17045(__this, ___value, method) (( bool (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17045_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17046_gshared (Dictionary_2_t976 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17046(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t976 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m17046_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17047_gshared (Dictionary_2_t976 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17047(__this, ___sender, method) (( void (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17047_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17048_gshared (Dictionary_2_t976 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17048(__this, ___key, method) (( bool (*) (Dictionary_2_t976 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17048_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17049_gshared (Dictionary_2_t976 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17049(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t976 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17049_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2261 * Dictionary_2_get_Keys_m17050_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17050(__this, method) (( KeyCollection_t2261 * (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_get_Keys_m17050_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2265 * Dictionary_2_get_Values_m17051_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17051(__this, method) (( ValueCollection_t2265 * (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_get_Values_m17051_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17052_gshared (Dictionary_2_t976 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17052(__this, ___key, method) (( int32_t (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17052_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17053_gshared (Dictionary_2_t976 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17053(__this, ___value, method) (( int32_t (*) (Dictionary_2_t976 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17053_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17054_gshared (Dictionary_2_t976 * __this, KeyValuePair_2_t2259  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17054(__this, ___pair, method) (( bool (*) (Dictionary_2_t976 *, KeyValuePair_2_t2259 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17054_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2263  Dictionary_2_GetEnumerator_m17055_gshared (Dictionary_2_t976 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17055(__this, method) (( Enumerator_t2263  (*) (Dictionary_2_t976 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17055_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m17056_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17056(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17056_gshared)(__this /* static, unused */, ___key, ___value, method)
