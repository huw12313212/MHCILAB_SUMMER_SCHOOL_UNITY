#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t912;
// System.Net.WebRequest
struct WebRequest_t874;
// System.Uri
struct Uri_t484;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4392 (FileWebRequestCreator_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t874 * FileWebRequestCreator_Create_m4393 (FileWebRequestCreator_t912 * __this, Uri_t484 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
