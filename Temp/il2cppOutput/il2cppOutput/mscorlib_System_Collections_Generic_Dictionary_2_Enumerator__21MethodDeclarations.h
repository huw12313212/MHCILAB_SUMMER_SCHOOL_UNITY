#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2241;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2235;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16878_gshared (Enumerator_t2241 * __this, Dictionary_2_t2235 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16878(__this, ___dictionary, method) (( void (*) (Enumerator_t2241 *, Dictionary_2_t2235 *, const MethodInfo*))Enumerator__ctor_m16878_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16879_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16879(__this, method) (( Object_t * (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16879_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16880_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16880(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16880_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16881_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16881(__this, method) (( Object_t * (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16882_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16882(__this, method) (( Object_t * (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16883_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16883(__this, method) (( bool (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_MoveNext_m16883_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2236  Enumerator_get_Current_m16884_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16884(__this, method) (( KeyValuePair_2_t2236  (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_get_Current_m16884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16885_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16885(__this, method) (( Object_t * (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_get_CurrentKey_m16885_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m16886_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16886(__this, method) (( bool (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_get_CurrentValue_m16886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m16887_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16887(__this, method) (( void (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_VerifyState_m16887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16888_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16888(__this, method) (( void (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_VerifyCurrent_m16888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m16889_gshared (Enumerator_t2241 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16889(__this, method) (( void (*) (Enumerator_t2241 *, const MethodInfo*))Enumerator_Dispose_m16889_gshared)(__this, method)
