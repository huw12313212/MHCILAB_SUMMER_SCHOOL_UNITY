#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2329;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m17485_gshared (DefaultComparer_t2329 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17485(__this, method) (( void (*) (DefaultComparer_t2329 *, const MethodInfo*))DefaultComparer__ctor_m17485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17486_gshared (DefaultComparer_t2329 * __this, DateTimeOffset_t654  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17486(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2329 *, DateTimeOffset_t654 , const MethodInfo*))DefaultComparer_GetHashCode_m17486_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17487_gshared (DefaultComparer_t2329 * __this, DateTimeOffset_t654  ___x, DateTimeOffset_t654  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17487(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2329 *, DateTimeOffset_t654 , DateTimeOffset_t654 , const MethodInfo*))DefaultComparer_Equals_m17487_gshared)(__this, ___x, ___y, method)
