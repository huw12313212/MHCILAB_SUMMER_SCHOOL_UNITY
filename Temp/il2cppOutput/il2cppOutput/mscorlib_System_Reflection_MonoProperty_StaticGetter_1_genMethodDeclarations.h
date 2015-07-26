#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2308;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m17318_gshared (StaticGetter_1_t2308 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m17318(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2308 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m17318_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m17319_gshared (StaticGetter_1_t2308 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m17319(__this, method) (( Object_t * (*) (StaticGetter_1_t2308 *, const MethodInfo*))StaticGetter_1_Invoke_m17319_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m17320_gshared (StaticGetter_1_t2308 * __this, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m17320(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2308 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m17320_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m17321_gshared (StaticGetter_1_t2308 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m17321(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2308 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m17321_gshared)(__this, ___result, method)
