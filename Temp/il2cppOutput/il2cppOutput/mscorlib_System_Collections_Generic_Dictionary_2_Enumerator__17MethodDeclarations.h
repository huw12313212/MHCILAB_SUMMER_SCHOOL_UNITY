#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2151;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2148;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15978_gshared (Enumerator_t2151 * __this, Dictionary_2_t2148 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15978(__this, ___dictionary, method) (( void (*) (Enumerator_t2151 *, Dictionary_2_t2148 *, const MethodInfo*))Enumerator__ctor_m15978_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15979_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15979(__this, method) (( Object_t * (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15979_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15980_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15980(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15980_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15981_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15981(__this, method) (( Object_t * (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15981_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15982_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15982(__this, method) (( Object_t * (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15982_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15983_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15983(__this, method) (( bool (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_MoveNext_m15983_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2122  Enumerator_get_Current_m15984_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15984(__this, method) (( KeyValuePair_2_t2122  (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_get_Current_m15984_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15985_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15985(__this, method) (( Object_t * (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_get_CurrentKey_m15985_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1879  Enumerator_get_CurrentValue_m15986_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15986(__this, method) (( KeyValuePair_2_t1879  (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_get_CurrentValue_m15986_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m15987_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15987(__this, method) (( void (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_VerifyState_m15987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15988_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15988(__this, method) (( void (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_VerifyCurrent_m15988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m15989_gshared (Enumerator_t2151 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15989(__this, method) (( void (*) (Enumerator_t2151 *, const MethodInfo*))Enumerator_Dispose_m15989_gshared)(__this, method)
