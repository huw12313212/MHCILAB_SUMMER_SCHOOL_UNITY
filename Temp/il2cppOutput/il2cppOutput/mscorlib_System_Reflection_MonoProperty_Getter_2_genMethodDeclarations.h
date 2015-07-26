#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2307;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m17314_gshared (Getter_2_t2307 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m17314(__this, ___object, ___method, method) (( void (*) (Getter_2_t2307 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m17314_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m17315_gshared (Getter_2_t2307 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m17315(__this, ____this, method) (( Object_t * (*) (Getter_2_t2307 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m17315_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m17316_gshared (Getter_2_t2307 * __this, Object_t * ____this, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m17316(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t2307 *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m17316_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m17317_gshared (Getter_2_t2307 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m17317(__this, ___result, method) (( Object_t * (*) (Getter_2_t2307 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m17317_gshared)(__this, ___result, method)
