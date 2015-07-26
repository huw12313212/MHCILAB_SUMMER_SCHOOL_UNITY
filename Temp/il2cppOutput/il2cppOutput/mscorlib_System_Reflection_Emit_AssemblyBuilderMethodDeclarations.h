#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1245;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1244;
// System.Type[]
struct TypeU5BU5D_t495;
// System.Exception
struct Exception_t273;
// System.Reflection.AssemblyName
struct AssemblyName_t1293;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m7410 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1244* AssemblyBuilder_GetModulesInternal_m7411 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t495* AssemblyBuilder_GetTypes_m7412 (AssemblyBuilder_t1245 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7413 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t273 * AssemblyBuilder_not_supported_m7414 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1293 * AssemblyBuilder_UnprotectedGetName_m7415 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
