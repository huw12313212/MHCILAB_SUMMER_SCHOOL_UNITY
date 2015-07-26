#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t629;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m15379_gshared (ResponseDelegate_1_t629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m15379(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t629 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m15379_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m15381_gshared (ResponseDelegate_1_t629 * __this, Object_t * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m15381(__this, ___response, method) (( void (*) (ResponseDelegate_1_t629 *, Object_t *, const MethodInfo*))ResponseDelegate_1_Invoke_m15381_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m15383_gshared (ResponseDelegate_1_t629 * __this, Object_t * ___response, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m15383(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t629 *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m15383_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m15385_gshared (ResponseDelegate_1_t629 * __this, Object_t * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m15385(__this, ___result, method) (( void (*) (ResponseDelegate_1_t629 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m15385_gshared)(__this, ___result, method)
