#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t364;
struct Gradient_t364_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m1929 (Gradient_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m1930 (Gradient_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m1931 (Gradient_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m1932 (Gradient_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t364_marshal(const Gradient_t364& unmarshaled, Gradient_t364_marshaled& marshaled);
void Gradient_t364_marshal_back(const Gradient_t364_marshaled& marshaled, Gradient_t364& unmarshaled);
void Gradient_t364_marshal_cleanup(Gradient_t364_marshaled& marshaled);
