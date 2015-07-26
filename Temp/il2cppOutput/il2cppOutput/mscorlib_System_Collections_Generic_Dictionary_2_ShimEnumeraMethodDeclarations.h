#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1834;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1820;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11485_gshared (ShimEnumerator_t1834 * __this, Dictionary_2_t1820 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11485(__this, ___host, method) (( void (*) (ShimEnumerator_t1834 *, Dictionary_2_t1820 *, const MethodInfo*))ShimEnumerator__ctor_m11485_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11486_gshared (ShimEnumerator_t1834 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11486(__this, method) (( bool (*) (ShimEnumerator_t1834 *, const MethodInfo*))ShimEnumerator_MoveNext_m11486_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m11487_gshared (ShimEnumerator_t1834 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11487(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t1834 *, const MethodInfo*))ShimEnumerator_get_Entry_m11487_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11488_gshared (ShimEnumerator_t1834 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11488(__this, method) (( Object_t * (*) (ShimEnumerator_t1834 *, const MethodInfo*))ShimEnumerator_get_Key_m11488_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11489_gshared (ShimEnumerator_t1834 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11489(__this, method) (( Object_t * (*) (ShimEnumerator_t1834 *, const MethodInfo*))ShimEnumerator_get_Value_m11489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11490_gshared (ShimEnumerator_t1834 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11490(__this, method) (( Object_t * (*) (ShimEnumerator_t1834 *, const MethodInfo*))ShimEnumerator_get_Current_m11490_gshared)(__this, method)
