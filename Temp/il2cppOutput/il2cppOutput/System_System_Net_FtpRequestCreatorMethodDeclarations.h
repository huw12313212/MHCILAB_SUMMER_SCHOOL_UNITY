#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t913;
// System.Net.WebRequest
struct WebRequest_t874;
// System.Uri
struct Uri_t484;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4394 (FtpRequestCreator_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t874 * FtpRequestCreator_Create_m4395 (FtpRequestCreator_t913 * __this, Uri_t484 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
