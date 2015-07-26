﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t2222;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t560;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m16697(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2222 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m10429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m16698(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2222 *, BaseInvokableCall_t560 *, BaseInvokableCall_t560 *, const MethodInfo*))Comparison_1_Invoke_m10430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m16699(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2222 *, BaseInvokableCall_t560 *, BaseInvokableCall_t560 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m16700(__this, ___result, method) (( int32_t (*) (Comparison_1_t2222 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10432_gshared)(__this, ___result, method)