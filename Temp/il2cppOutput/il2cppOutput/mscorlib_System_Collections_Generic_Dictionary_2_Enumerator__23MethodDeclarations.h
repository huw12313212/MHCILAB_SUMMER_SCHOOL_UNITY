#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2263;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t976;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17087_gshared (Enumerator_t2263 * __this, Dictionary_2_t976 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17087(__this, ___dictionary, method) (( void (*) (Enumerator_t2263 *, Dictionary_2_t976 *, const MethodInfo*))Enumerator__ctor_m17087_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17088_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17088(__this, method) (( Object_t * (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17088_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17089_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17089(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17089_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17090_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17090(__this, method) (( Object_t * (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17090_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17091_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17091(__this, method) (( Object_t * (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17092_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17092(__this, method) (( bool (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_MoveNext_m17092_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2259  Enumerator_get_Current_m17093_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17093(__this, method) (( KeyValuePair_2_t2259  (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_get_Current_m17093_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17094_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17094(__this, method) (( int32_t (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_get_CurrentKey_m17094_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17095_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17095(__this, method) (( int32_t (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_get_CurrentValue_m17095_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m17096_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17096(__this, method) (( void (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_VerifyState_m17096_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17097_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17097(__this, method) (( void (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_VerifyCurrent_m17097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m17098_gshared (Enumerator_t2263 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17098(__this, method) (( void (*) (Enumerator_t2263 *, const MethodInfo*))Enumerator_Dispose_m17098_gshared)(__this, method)
