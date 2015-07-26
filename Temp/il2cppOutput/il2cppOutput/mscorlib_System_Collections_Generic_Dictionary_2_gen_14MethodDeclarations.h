#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1820;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2363;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1825;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1829;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1817;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2368;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2369;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2370;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11296_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11296(__this, method) (( void (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2__ctor_m11296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11298_gshared (Dictionary_2_t1820 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11298(__this, ___comparer, method) (( void (*) (Dictionary_2_t1820 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11298_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11300_gshared (Dictionary_2_t1820 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11300(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1820 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11300_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11302_gshared (Dictionary_2_t1820 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11302(__this, ___capacity, method) (( void (*) (Dictionary_2_t1820 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11302_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11304_gshared (Dictionary_2_t1820 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11304(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1820 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11304_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11306_gshared (Dictionary_2_t1820 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11306(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1820 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m11306_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11308_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11308(__this, method) (( Object_t* (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11308_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11310_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11310(__this, method) (( Object_t* (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11312_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11312(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11312_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11314_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1820 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11316_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11316(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1820 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11316_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11318_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11318(__this, ___key, method) (( bool (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11318_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11320_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11320(__this, ___key, method) (( void (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11320_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11322_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11322(__this, method) (( bool (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11324_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11324(__this, method) (( Object_t * (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11326_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11326(__this, method) (( bool (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11328_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2_t1821  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11328(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1820 *, KeyValuePair_2_t1821 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11328_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11330_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2_t1821  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11330(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1820 *, KeyValuePair_2_t1821 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11330_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11332_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2U5BU5D_t2369* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1820 *, KeyValuePair_2U5BU5D_t2369*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11334_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2_t1821  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11334(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1820 *, KeyValuePair_2_t1821 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11334_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11336_gshared (Dictionary_2_t1820 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11336(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1820 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11336_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11338_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11338(__this, method) (( Object_t * (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11338_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11340_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11340(__this, method) (( Object_t* (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11340_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11342_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11342(__this, method) (( Object_t * (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11342_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11344_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11344(__this, method) (( int32_t (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_get_Count_m11344_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11346_gshared (Dictionary_2_t1820 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11346(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1820 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11346_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11348_gshared (Dictionary_2_t1820 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11348(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1820 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11348_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11350_gshared (Dictionary_2_t1820 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11350(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1820 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11350_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11352_gshared (Dictionary_2_t1820 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11352(__this, ___size, method) (( void (*) (Dictionary_2_t1820 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11352_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11354_gshared (Dictionary_2_t1820 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11354(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1820 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11354_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1821  Dictionary_2_make_pair_m11356_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11356(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1821  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11356_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m11358_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11358(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m11358_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11360_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11360(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11360_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11362_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2U5BU5D_t2369* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1820 *, KeyValuePair_2U5BU5D_t2369*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11362_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11364_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11364(__this, method) (( void (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_Resize_m11364_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11366_gshared (Dictionary_2_t1820 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11366(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1820 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11366_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11368_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11368(__this, method) (( void (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_Clear_m11368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11370_gshared (Dictionary_2_t1820 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11370(__this, ___key, method) (( bool (*) (Dictionary_2_t1820 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11370_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11372_gshared (Dictionary_2_t1820 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11372(__this, ___value, method) (( bool (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11372_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11374_gshared (Dictionary_2_t1820 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11374(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1820 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m11374_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11376_gshared (Dictionary_2_t1820 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11376(__this, ___sender, method) (( void (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11376_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11378_gshared (Dictionary_2_t1820 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11378(__this, ___key, method) (( bool (*) (Dictionary_2_t1820 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11378_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11380_gshared (Dictionary_2_t1820 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11380(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1820 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11380_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1825 * Dictionary_2_get_Keys_m11382_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11382(__this, method) (( KeyCollection_t1825 * (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_get_Keys_m11382_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1829 * Dictionary_2_get_Values_m11383_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11383(__this, method) (( ValueCollection_t1829 * (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_get_Values_m11383_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11385_gshared (Dictionary_2_t1820 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11385(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11385_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11387_gshared (Dictionary_2_t1820 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11387(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1820 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11387_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11389_gshared (Dictionary_2_t1820 * __this, KeyValuePair_2_t1821  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11389(__this, ___pair, method) (( bool (*) (Dictionary_2_t1820 *, KeyValuePair_2_t1821 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11389_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1827  Dictionary_2_GetEnumerator_m11390_gshared (Dictionary_2_t1820 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11390(__this, method) (( Enumerator_t1827  (*) (Dictionary_2_t1820 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11390_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m11392_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11392(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11392_gshared)(__this /* static, unused */, ___key, ___value, method)
