#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t333;
struct AsyncOperation_t333_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2335 (AsyncOperation_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2336 (AsyncOperation_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2337 (AsyncOperation_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t333_marshal(const AsyncOperation_t333& unmarshaled, AsyncOperation_t333_marshaled& marshaled);
void AsyncOperation_t333_marshal_back(const AsyncOperation_t333_marshaled& marshaled, AsyncOperation_t333& unmarshaled);
void AsyncOperation_t333_marshal_cleanup(AsyncOperation_t333_marshaled& marshaled);
