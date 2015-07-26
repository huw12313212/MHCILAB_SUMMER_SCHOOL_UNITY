#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2157;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2148;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16025_gshared (ShimEnumerator_t2157 * __this, Dictionary_2_t2148 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16025(__this, ___host, method) (( void (*) (ShimEnumerator_t2157 *, Dictionary_2_t2148 *, const MethodInfo*))ShimEnumerator__ctor_m16025_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16026_gshared (ShimEnumerator_t2157 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16026(__this, method) (( bool (*) (ShimEnumerator_t2157 *, const MethodInfo*))ShimEnumerator_MoveNext_m16026_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m16027_gshared (ShimEnumerator_t2157 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16027(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t2157 *, const MethodInfo*))ShimEnumerator_get_Entry_m16027_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16028_gshared (ShimEnumerator_t2157 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16028(__this, method) (( Object_t * (*) (ShimEnumerator_t2157 *, const MethodInfo*))ShimEnumerator_get_Key_m16028_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16029_gshared (ShimEnumerator_t2157 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16029(__this, method) (( Object_t * (*) (ShimEnumerator_t2157 *, const MethodInfo*))ShimEnumerator_get_Value_m16029_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16030_gshared (ShimEnumerator_t2157 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16030(__this, method) (( Object_t * (*) (ShimEnumerator_t2157 *, const MethodInfo*))ShimEnumerator_get_Current_m16030_gshared)(__this, method)
