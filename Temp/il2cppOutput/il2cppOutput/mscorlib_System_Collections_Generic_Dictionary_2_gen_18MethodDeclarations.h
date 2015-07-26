#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2101;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t2502;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t595;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2105;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2109;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2098;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t2507;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t607;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t2508;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t253;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t2509;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1040;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15133_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15133(__this, method) (( void (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2__ctor_m15133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15135_gshared (Dictionary_2_t2101 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15135(__this, ___comparer, method) (( void (*) (Dictionary_2_t2101 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15135_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15137_gshared (Dictionary_2_t2101 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m15137(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2101 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15137_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15139_gshared (Dictionary_2_t2101 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15139(__this, ___capacity, method) (( void (*) (Dictionary_2_t2101 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15139_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15141_gshared (Dictionary_2_t2101 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15141(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2101 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15141_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15143_gshared (Dictionary_2_t2101 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15143(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2101 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2__ctor_m15143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15145_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15145(__this, method) (( Object_t* (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15145_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15147_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15147(__this, method) (( Object_t* (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15147_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15149_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15149(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15149_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15151_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15151(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2101 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15151_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15153_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15153(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2101 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15153_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15155_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15155(__this, ___key, method) (( bool (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15155_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15157_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15157(__this, ___key, method) (( void (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15157_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15159_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15159(__this, method) (( bool (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15159_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15161_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15161(__this, method) (( Object_t * (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15163_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15163(__this, method) (( bool (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15165_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2_t2102  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15165(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2101 *, KeyValuePair_2_t2102 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15165_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15167_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2_t2102  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15167(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2101 *, KeyValuePair_2_t2102 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15167_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15169_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2U5BU5D_t2508* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2101 *, KeyValuePair_2U5BU5D_t2508*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15169_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15171_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2_t2102  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15171(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2101 *, KeyValuePair_2_t2102 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15171_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15173_gshared (Dictionary_2_t2101 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2101 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15173_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15175_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15175(__this, method) (( Object_t * (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15175_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15177_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15177(__this, method) (( Object_t* (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15177_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15179_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15179(__this, method) (( Object_t * (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15179_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15181_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15181(__this, method) (( int32_t (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_get_Count_m15181_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15183_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15183(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2101 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m15183_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15185_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15185(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2101 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15185_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15187_gshared (Dictionary_2_t2101 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15187(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2101 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15187_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15189_gshared (Dictionary_2_t2101 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15189(__this, ___size, method) (( void (*) (Dictionary_2_t2101 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15189_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15191_gshared (Dictionary_2_t2101 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15191(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2101 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15191_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2102  Dictionary_2_make_pair_m15193_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15193(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2102  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15193_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m15195_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15195(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15195_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15197_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15197(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15197_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15199_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2U5BU5D_t2508* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2101 *, KeyValuePair_2U5BU5D_t2508*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15199_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15201_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15201(__this, method) (( void (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_Resize_m15201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15203_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2101 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15203_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15205_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15205(__this, method) (( void (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_Clear_m15205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15207_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15207(__this, ___key, method) (( bool (*) (Dictionary_2_t2101 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m15207_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15209_gshared (Dictionary_2_t2101 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15209(__this, ___value, method) (( bool (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15209_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15211_gshared (Dictionary_2_t2101 * __this, SerializationInfo_t607 * ___info, StreamingContext_t608  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15211(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2101 *, SerializationInfo_t607 *, StreamingContext_t608 , const MethodInfo*))Dictionary_2_GetObjectData_m15211_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15213_gshared (Dictionary_2_t2101 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15213(__this, ___sender, method) (( void (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15213_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15215_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15215(__this, ___key, method) (( bool (*) (Dictionary_2_t2101 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m15215_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15217_gshared (Dictionary_2_t2101 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15217(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2101 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15217_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2105 * Dictionary_2_get_Keys_m15219_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15219(__this, method) (( KeyCollection_t2105 * (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_get_Keys_m15219_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2109 * Dictionary_2_get_Values_m15221_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15221(__this, method) (( ValueCollection_t2109 * (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_get_Values_m15221_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m15223_gshared (Dictionary_2_t2101 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15223(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15223_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15225_gshared (Dictionary_2_t2101 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15225(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2101 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15225_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15227_gshared (Dictionary_2_t2101 * __this, KeyValuePair_2_t2102  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15227(__this, ___pair, method) (( bool (*) (Dictionary_2_t2101 *, KeyValuePair_2_t2102 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15227_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2107  Dictionary_2_GetEnumerator_m15229_gshared (Dictionary_2_t2101 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15229(__this, method) (( Enumerator_t2107  (*) (Dictionary_2_t2101 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15229_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1041  Dictionary_2_U3CCopyToU3Em__0_m15231_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15231(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1041  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15231_gshared)(__this /* static, unused */, ___key, ___value, method)
