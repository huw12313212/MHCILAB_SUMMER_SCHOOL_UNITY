#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t1893;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m12254_gshared (Action_1_t1893 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m12254(__this, ___object, ___method, method) (( void (*) (Action_1_t1893 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m12254_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m12255_gshared (Action_1_t1893 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m12255(__this, ___obj, method) (( void (*) (Action_1_t1893 *, Object_t *, const MethodInfo*))Action_1_Invoke_m12255_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m12257_gshared (Action_1_t1893 * __this, Object_t * ___obj, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m12257(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1893 *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m12257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m12259_gshared (Action_1_t1893 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m12259(__this, ___result, method) (( void (*) (Action_1_t1893 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m12259_gshared)(__this, ___result, method)
