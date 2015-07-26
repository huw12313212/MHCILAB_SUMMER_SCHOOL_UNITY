#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t2314;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17347_gshared (InternalEnumerator_1_t2314 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17347(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2314 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17347_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17348_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17348(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2314 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17348_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17349_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17349(__this, method) (( void (*) (InternalEnumerator_1_t2314 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17349_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17350_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17350(__this, method) (( bool (*) (InternalEnumerator_1_t2314 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17350_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t950  InternalEnumerator_1_get_Current_m17351_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17351(__this, method) (( TimeSpan_t950  (*) (InternalEnumerator_1_t2314 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17351_gshared)(__this, method)
