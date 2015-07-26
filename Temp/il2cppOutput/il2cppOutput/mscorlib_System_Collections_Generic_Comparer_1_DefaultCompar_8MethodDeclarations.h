#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2335;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m17514_gshared (DefaultComparer_t2335 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17514(__this, method) (( void (*) (DefaultComparer_t2335 *, const MethodInfo*))DefaultComparer__ctor_m17514_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17515_gshared (DefaultComparer_t2335 * __this, TimeSpan_t950  ___x, TimeSpan_t950  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17515(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2335 *, TimeSpan_t950 , TimeSpan_t950 , const MethodInfo*))DefaultComparer_Compare_m17515_gshared)(__this, ___x, ___y, method)
