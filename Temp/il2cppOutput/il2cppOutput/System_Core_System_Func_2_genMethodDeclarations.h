#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t195;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t192;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"
#define Func_2__ctor_m1745(__this, ___object, ___method, method) (( void (*) (Func_2_t195 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m13307_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m13308(__this, ___arg1, method) (( bool (*) (Func_2_t195 *, Toggle_t192 *, const MethodInfo*))Func_2_Invoke_m13309_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m13310(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t195 *, Toggle_t192 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m13311_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m13312(__this, ___result, method) (( bool (*) (Func_2_t195 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m13313_gshared)(__this, ___result, method)
