#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t1960;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13209_gshared (UnityAction_1_t1960 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13209(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1960 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13209_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13210_gshared (UnityAction_1_t1960 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13210(__this, ___arg0, method) (( void (*) (UnityAction_1_t1960 *, bool, const MethodInfo*))UnityAction_1_Invoke_m13210_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13211_gshared (UnityAction_1_t1960 * __this, bool ___arg0, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13211(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1960 *, bool, AsyncCallback_t142 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13211_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13212_gshared (UnityAction_1_t1960 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13212(__this, ___result, method) (( void (*) (UnityAction_1_t1960 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13212_gshared)(__this, ___result, method)
