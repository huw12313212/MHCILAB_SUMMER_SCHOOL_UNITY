#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2196;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2184;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16420_gshared (ShimEnumerator_t2196 * __this, Dictionary_2_t2184 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16420(__this, ___host, method) (( void (*) (ShimEnumerator_t2196 *, Dictionary_2_t2184 *, const MethodInfo*))ShimEnumerator__ctor_m16420_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16421_gshared (ShimEnumerator_t2196 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16421(__this, method) (( bool (*) (ShimEnumerator_t2196 *, const MethodInfo*))ShimEnumerator_MoveNext_m16421_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m16422_gshared (ShimEnumerator_t2196 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16422(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t2196 *, const MethodInfo*))ShimEnumerator_get_Entry_m16422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16423_gshared (ShimEnumerator_t2196 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16423(__this, method) (( Object_t * (*) (ShimEnumerator_t2196 *, const MethodInfo*))ShimEnumerator_get_Key_m16423_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16424_gshared (ShimEnumerator_t2196 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16424(__this, method) (( Object_t * (*) (ShimEnumerator_t2196 *, const MethodInfo*))ShimEnumerator_get_Value_m16424_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16425_gshared (ShimEnumerator_t2196 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16425(__this, method) (( Object_t * (*) (ShimEnumerator_t2196 *, const MethodInfo*))ShimEnumerator_get_Current_m16425_gshared)(__this, method)
