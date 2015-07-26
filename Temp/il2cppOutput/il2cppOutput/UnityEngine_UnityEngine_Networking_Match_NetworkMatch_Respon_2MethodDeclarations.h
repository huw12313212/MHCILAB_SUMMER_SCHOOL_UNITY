#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t593;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t475;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m15399(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t593 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m15379_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m15400(__this, ___response, method) (( void (*) (ResponseDelegate_1_t593 *, ListMatchResponse_t475 *, const MethodInfo*))ResponseDelegate_1_Invoke_m15381_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m15401(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t593 *, ListMatchResponse_t475 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m15383_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m15402(__this, ___result, method) (( void (*) (ResponseDelegate_1_t593 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m15385_gshared)(__this, ___result, method)
