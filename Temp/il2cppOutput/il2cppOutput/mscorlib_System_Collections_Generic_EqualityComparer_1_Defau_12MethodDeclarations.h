#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2333;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17506_gshared (DefaultComparer_t2333 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17506(__this, method) (( void (*) (DefaultComparer_t2333 *, const MethodInfo*))DefaultComparer__ctor_m17506_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17507_gshared (DefaultComparer_t2333 * __this, Guid_t655  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17507(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2333 *, Guid_t655 , const MethodInfo*))DefaultComparer_GetHashCode_m17507_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17508_gshared (DefaultComparer_t2333 * __this, Guid_t655  ___x, Guid_t655  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17508(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2333 *, Guid_t655 , Guid_t655 , const MethodInfo*))DefaultComparer_Equals_m17508_gshared)(__this, ___x, ___y, method)
