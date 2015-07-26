#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1888;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1878;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12150_gshared (ShimEnumerator_t1888 * __this, Dictionary_2_t1878 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12150(__this, ___host, method) (( void (*) (ShimEnumerator_t1888 *, Dictionary_2_t1878 *, const MethodInfo*))ShimEnumerator__ctor_m12150_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12151_gshared (ShimEnumerator_t1888 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12151(__this, method) (( bool (*) (ShimEnumerator_t1888 *, const MethodInfo*))ShimEnumerator_MoveNext_m12151_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m12152_gshared (ShimEnumerator_t1888 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12152(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t1888 *, const MethodInfo*))ShimEnumerator_get_Entry_m12152_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12153_gshared (ShimEnumerator_t1888 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12153(__this, method) (( Object_t * (*) (ShimEnumerator_t1888 *, const MethodInfo*))ShimEnumerator_get_Key_m12153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12154_gshared (ShimEnumerator_t1888 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12154(__this, method) (( Object_t * (*) (ShimEnumerator_t1888 *, const MethodInfo*))ShimEnumerator_get_Value_m12154_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12155_gshared (ShimEnumerator_t1888 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12155(__this, method) (( Object_t * (*) (ShimEnumerator_t1888 *, const MethodInfo*))ShimEnumerator_get_Current_m12155_gshared)(__this, method)
