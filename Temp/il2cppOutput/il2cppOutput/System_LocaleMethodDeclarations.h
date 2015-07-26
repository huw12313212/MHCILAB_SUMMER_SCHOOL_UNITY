#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Locale
struct Locale_t885;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t23;

// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m4290 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C" String_t* Locale_GetText_m4291 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t23* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
