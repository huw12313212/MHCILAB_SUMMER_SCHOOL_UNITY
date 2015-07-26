#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1702;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10206_gshared (Nullable_1_t1702 * __this, TimeSpan_t950  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10206(__this, ___value, method) (( void (*) (Nullable_1_t1702 *, TimeSpan_t950 , const MethodInfo*))Nullable_1__ctor_m10206_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10207_gshared (Nullable_1_t1702 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10207(__this, method) (( bool (*) (Nullable_1_t1702 *, const MethodInfo*))Nullable_1_get_HasValue_m10207_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t950  Nullable_1_get_Value_m10208_gshared (Nullable_1_t1702 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10208(__this, method) (( TimeSpan_t950  (*) (Nullable_1_t1702 *, const MethodInfo*))Nullable_1_get_Value_m10208_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17488_gshared (Nullable_1_t1702 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17488(__this, ___other, method) (( bool (*) (Nullable_1_t1702 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17488_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17489_gshared (Nullable_1_t1702 * __this, Nullable_1_t1702  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17489(__this, ___other, method) (( bool (*) (Nullable_1_t1702 *, Nullable_1_t1702 , const MethodInfo*))Nullable_1_Equals_m17489_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17490_gshared (Nullable_1_t1702 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17490(__this, method) (( int32_t (*) (Nullable_1_t1702 *, const MethodInfo*))Nullable_1_GetHashCode_m17490_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17491_gshared (Nullable_1_t1702 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17491(__this, method) (( String_t* (*) (Nullable_1_t1702 *, const MethodInfo*))Nullable_1_ToString_m17491_gshared)(__this, method)
