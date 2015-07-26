#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2113;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2101;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15314_gshared (ShimEnumerator_t2113 * __this, Dictionary_2_t2101 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15314(__this, ___host, method) (( void (*) (ShimEnumerator_t2113 *, Dictionary_2_t2101 *, const MethodInfo*))ShimEnumerator__ctor_m15314_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15315_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15315(__this, method) (( bool (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_MoveNext_m15315_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1041  ShimEnumerator_get_Entry_m15316_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15316(__this, method) (( DictionaryEntry_t1041  (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Entry_m15316_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15317_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15317(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Key_m15317_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15318_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15318(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Value_m15318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15319_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15319(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Current_m15319_gshared)(__this, method)
