#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2268;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t976;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17130_gshared (ShimEnumerator_t2268 * __this, Dictionary_2_t976 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17130(__this, ___host, method) (( void (*) (ShimEnumerator_t2268 *, Dictionary_2_t976 *, const MethodInfo*))ShimEnumerator__ctor_m17130_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17131_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17131(__this, method) (( bool (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_MoveNext_m17131_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m17132_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17132(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Entry_m17132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17133_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17133(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Key_m17133_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17134_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17134(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Value_m17134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17135_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17135(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Current_m17135_gshared)(__this, method)
