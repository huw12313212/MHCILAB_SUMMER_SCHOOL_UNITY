#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t916;
// System.Net.WebRequest
struct WebRequest_t874;
// System.Uri
struct Uri_t484;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4400 (HttpRequestCreator_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t874 * HttpRequestCreator_Create_m4401 (HttpRequestCreator_t916 * __this, Uri_t484 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
