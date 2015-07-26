#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t155;
struct Coroutine_t155_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m1814 (Coroutine_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m1815 (Coroutine_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m1816 (Coroutine_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t155_marshal(const Coroutine_t155& unmarshaled, Coroutine_t155_marshaled& marshaled);
void Coroutine_t155_marshal_back(const Coroutine_t155_marshaled& marshaled, Coroutine_t155& unmarshaled);
void Coroutine_t155_marshal_cleanup(Coroutine_t155_marshaled& marshaled);
