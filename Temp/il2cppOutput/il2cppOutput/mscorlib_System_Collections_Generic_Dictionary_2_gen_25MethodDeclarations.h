#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2235;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2570;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2239;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2243;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1851;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t2574;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2575;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2576;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16745_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16745(__this, method) (( void (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2__ctor_m16745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16746_gshared (Dictionary_2_t2235 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16746(__this, ___comparer, method) (( void (*) (Dictionary_2_t2235 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16746_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m16748_gshared (Dictionary_2_t2235 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m16748(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2235 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16748_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16750_gshared (Dictionary_2_t2235 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16750(__this, ___capacity, method) (( void (*) (Dictionary_2_t2235 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16750_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16752_gshared (Dictionary_2_t2235 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16752(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2235 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16752_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16754_gshared (Dictionary_2_t2235 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16754(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2235 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m16754_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16756_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16756(__this, method) (( Object_t* (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16756_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16758_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16758(__this, method) (( Object_t* (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16758_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16760_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16760(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16760_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16762_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16764_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16764(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16764_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16766_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16766(__this, ___key, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16766_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16768_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16768(__this, ___key, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16768_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16770_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16770(__this, method) (( bool (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16772_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16772(__this, method) (( Object_t * (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16774_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16774(__this, method) (( bool (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16776_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2_t2236  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16776(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2235 *, KeyValuePair_2_t2236 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16776_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16778_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2_t2236  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16778(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2235 *, KeyValuePair_2_t2236 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16778_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16780_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2U5BU5D_t2575* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16780(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2235 *, KeyValuePair_2U5BU5D_t2575*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16780_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16782_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2_t2236  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16782(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2235 *, KeyValuePair_2_t2236 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16784_gshared (Dictionary_2_t2235 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16784(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2235 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16784_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16786_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16786(__this, method) (( Object_t * (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16786_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16788_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16788(__this, method) (( Object_t* (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16788_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16790_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16790(__this, method) (( Object_t * (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16790_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16792_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16792(__this, method) (( int32_t (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_get_Count_m16792_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16794_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16794(__this, ___key, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16794_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16796_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16796(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16796_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16798_gshared (Dictionary_2_t2235 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16798(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2235 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16798_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16800_gshared (Dictionary_2_t2235 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16800(__this, ___size, method) (( void (*) (Dictionary_2_t2235 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16800_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16802_gshared (Dictionary_2_t2235 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2235 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16802_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2236  Dictionary_2_make_pair_m16804_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16804(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2236  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16806_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16806(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m16806_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16808_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16808(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16808_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16810_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2U5BU5D_t2575* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2235 *, KeyValuePair_2U5BU5D_t2575*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16810_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16812_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16812(__this, method) (( void (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_Resize_m16812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16814_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16814_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16816_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16816(__this, method) (( void (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_Clear_m16816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16818_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16818(__this, ___key, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16820_gshared (Dictionary_2_t2235 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16820(__this, ___value, method) (( bool (*) (Dictionary_2_t2235 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16820_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16822_gshared (Dictionary_2_t2235 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16822(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2235 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m16822_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16824_gshared (Dictionary_2_t2235 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16824(__this, ___sender, method) (( void (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16824_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16826_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16826(__this, ___key, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16828_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16828(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16828_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2239 * Dictionary_2_get_Keys_m16830_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16830(__this, method) (( KeyCollection_t2239 * (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_get_Keys_m16830_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2243 * Dictionary_2_get_Values_m16832_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16832(__this, method) (( ValueCollection_t2243 * (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_get_Values_m16832_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16834_gshared (Dictionary_2_t2235 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16834(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16834_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16836_gshared (Dictionary_2_t2235 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16836(__this, ___value, method) (( bool (*) (Dictionary_2_t2235 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16836_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16838_gshared (Dictionary_2_t2235 * __this, KeyValuePair_2_t2236  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16838(__this, ___pair, method) (( bool (*) (Dictionary_2_t2235 *, KeyValuePair_2_t2236 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16838_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2241  Dictionary_2_GetEnumerator_m16840_gshared (Dictionary_2_t2235 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16840(__this, method) (( Enumerator_t2241  (*) (Dictionary_2_t2235 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16840_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m16842_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16842(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16842_gshared)(__this /* static, unused */, ___key, ___value, method)
