﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t498;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m2825 (SetDelegate_t498 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m2826 (SetDelegate_t498 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t498(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m2827 (SetDelegate_t498 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m2828 (SetDelegate_t498 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;