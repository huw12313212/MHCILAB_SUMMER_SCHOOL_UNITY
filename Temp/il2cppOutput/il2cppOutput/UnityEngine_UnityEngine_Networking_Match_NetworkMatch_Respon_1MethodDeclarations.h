#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t592;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t462;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m15395(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t592 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m15379_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m15396(__this, ___response, method) (( void (*) (ResponseDelegate_1_t592 *, BasicResponse_t462 *, const MethodInfo*))ResponseDelegate_1_Invoke_m15381_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m15397(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t592 *, BasicResponse_t462 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m15383_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m15398(__this, ___result, method) (( void (*) (ResponseDelegate_1_t592 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m15385_gshared)(__this, ___result, method)
