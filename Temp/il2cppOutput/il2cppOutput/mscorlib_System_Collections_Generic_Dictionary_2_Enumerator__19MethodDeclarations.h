#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t2190;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2184;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16373_gshared (Enumerator_t2190 * __this, Dictionary_2_t2184 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16373(__this, ___dictionary, method) (( void (*) (Enumerator_t2190 *, Dictionary_2_t2184 *, const MethodInfo*))Enumerator__ctor_m16373_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16374_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16374(__this, method) (( Object_t * (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16374_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1041  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16375_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16375(__this, method) (( DictionaryEntry_t1041  (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16375_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16376_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16376(__this, method) (( Object_t * (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16377_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16377(__this, method) (( Object_t * (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16377_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16378_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16378(__this, method) (( bool (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_MoveNext_m16378_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2185  Enumerator_get_Current_m16379_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16379(__this, method) (( KeyValuePair_2_t2185  (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_get_Current_m16379_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16380_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16380(__this, method) (( Object_t * (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_get_CurrentKey_m16380_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16381_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16381(__this, method) (( int32_t (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_get_CurrentValue_m16381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16382_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16382(__this, method) (( void (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_VerifyState_m16382_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16383_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16383(__this, method) (( void (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_VerifyCurrent_m16383_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16384_gshared (Enumerator_t2190 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16384(__this, method) (( void (*) (Enumerator_t2190 *, const MethodInfo*))Enumerator_Dispose_m16384_gshared)(__this, method)
