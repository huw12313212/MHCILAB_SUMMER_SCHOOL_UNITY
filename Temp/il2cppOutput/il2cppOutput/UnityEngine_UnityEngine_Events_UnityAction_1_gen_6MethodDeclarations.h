#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1770;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m10609_gshared (UnityAction_1_t1770 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m10609(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1770 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m10609_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m10610_gshared (UnityAction_1_t1770 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m10610(__this, ___arg0, method) (( void (*) (UnityAction_1_t1770 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m10610_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m10611_gshared (UnityAction_1_t1770 * __this, Object_t * ___arg0, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m10611(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1770 *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m10611_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m10612_gshared (UnityAction_1_t1770 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m10612(__this, ___result, method) (( void (*) (UnityAction_1_t1770 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m10612_gshared)(__this, ___result, method)
