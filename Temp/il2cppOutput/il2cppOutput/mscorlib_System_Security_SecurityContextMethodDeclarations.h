#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1530;
// System.Threading.CompressedStack
struct CompressedStack_t1529;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m8946 (SecurityContext_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m8947 (SecurityContext_t1530 * __this, SecurityContext_t1530 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1530 * SecurityContext_Capture_m8948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m8949 (SecurityContext_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1529 * SecurityContext_get_CompressedStack_m8950 (SecurityContext_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
