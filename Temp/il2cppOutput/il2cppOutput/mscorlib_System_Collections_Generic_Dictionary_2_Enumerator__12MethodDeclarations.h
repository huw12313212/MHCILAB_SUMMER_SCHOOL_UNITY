#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2070;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2064;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14833_gshared (Enumerator_t2070 * __this, Dictionary_2_t2064 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14833(__this, ___dictionary, method) (( void (*) (Enumerator_t2070 *, Dictionary_2_t2064 *, const MethodInfo*))Enumerator__ctor_m14833_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14834_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14834(__this, method) (( Object_t * (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14834_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14835_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14835(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14835_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14836_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14836(__this, method) (( Object_t * (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14836_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14837_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14837(__this, method) (( Object_t * (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14838_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14838(__this, method) (( bool (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_MoveNext_m14838_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2065  Enumerator_get_Current_m14839_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14839(__this, method) (( KeyValuePair_2_t2065  (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_get_Current_m14839_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14840_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14840(__this, method) (( Object_t * (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_get_CurrentKey_m14840_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m14841_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14841(__this, method) (( int64_t (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_get_CurrentValue_m14841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m14842_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14842(__this, method) (( void (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_VerifyState_m14842_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14843_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14843(__this, method) (( void (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_VerifyCurrent_m14843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m14844_gshared (Enumerator_t2070 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14844(__this, method) (( void (*) (Enumerator_t2070 *, const MethodInfo*))Enumerator_Dispose_m14844_gshared)(__this, method)
