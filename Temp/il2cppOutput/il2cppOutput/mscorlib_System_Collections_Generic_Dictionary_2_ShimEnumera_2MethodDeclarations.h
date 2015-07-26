#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2076;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2064;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14880_gshared (ShimEnumerator_t2076 * __this, Dictionary_2_t2064 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14880(__this, ___host, method) (( void (*) (ShimEnumerator_t2076 *, Dictionary_2_t2064 *, const MethodInfo*))ShimEnumerator__ctor_m14880_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14881_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14881(__this, method) (( bool (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_MoveNext_m14881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m14882_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14882(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Entry_m14882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14883_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14883(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Key_m14883_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14884_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14884(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Value_m14884_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14885_gshared (ShimEnumerator_t2076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14885(__this, method) (( Object_t * (*) (ShimEnumerator_t2076 *, const MethodInfo*))ShimEnumerator_get_Current_m14885_gshared)(__this, method)
