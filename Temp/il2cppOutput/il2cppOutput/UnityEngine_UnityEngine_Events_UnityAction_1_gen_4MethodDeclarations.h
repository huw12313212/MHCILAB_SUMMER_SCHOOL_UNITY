﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t264;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m1789(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t222 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m10609_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Invoke(T0)
#define UnityAction_1_Invoke_m13436(__this, ___arg0, method) (( void (*) (UnityAction_1_t222 *, List_1_t264 *, const MethodInfo*))UnityAction_1_Invoke_m10610_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m13437(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t222 *, List_1_t264 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m10611_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m13438(__this, ___result, method) (( void (*) (UnityAction_1_t222 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m10612_gshared)(__this, ___result, method)