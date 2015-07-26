#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t1857;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11776_gshared (Enumerator_t1857 * __this, Dictionary_2_t1849 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11776(__this, ___dictionary, method) (( void (*) (Enumerator_t1857 *, Dictionary_2_t1849 *, const MethodInfo*))Enumerator__ctor_m11776_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11777_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11777(__this, method) (( Object_t * (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11777_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11778_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11778(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11779_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11779(__this, method) (( Object_t * (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11779_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11780_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11780(__this, method) (( Object_t * (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11780_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11781_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11781(__this, method) (( bool (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_MoveNext_m11781_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1853  Enumerator_get_Current_m11782_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11782(__this, method) (( KeyValuePair_2_t1853  (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_get_Current_m11782_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11783_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11783(__this, method) (( Object_t * (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_get_CurrentKey_m11783_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11784_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11784(__this, method) (( int32_t (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_get_CurrentValue_m11784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11785_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11785(__this, method) (( void (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_VerifyState_m11785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11786_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11786(__this, method) (( void (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_VerifyCurrent_m11786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11787_gshared (Enumerator_t1857 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11787(__this, method) (( void (*) (Enumerator_t1857 *, const MethodInfo*))Enumerator_Dispose_m11787_gshared)(__this, method)
