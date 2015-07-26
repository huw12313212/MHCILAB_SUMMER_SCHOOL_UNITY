#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1863;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11823_gshared (ShimEnumerator_t1863 * __this, Dictionary_2_t1849 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11823(__this, ___host, method) (( void (*) (ShimEnumerator_t1863 *, Dictionary_2_t1849 *, const MethodInfo*))ShimEnumerator__ctor_m11823_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11824_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11824(__this, method) (( bool (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_MoveNext_m11824_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m11825_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11825(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Entry_m11825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11826_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11826(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Key_m11826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11827_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11827(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Value_m11827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11828_gshared (ShimEnumerator_t1863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11828(__this, method) (( Object_t * (*) (ShimEnumerator_t1863 *, const MethodInfo*))ShimEnumerator_get_Current_m11828_gshared)(__this, method)
