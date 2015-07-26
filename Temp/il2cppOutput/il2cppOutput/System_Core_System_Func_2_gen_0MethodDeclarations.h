#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t217;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t263;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m1784(__this, ___object, ___method, method) (( void (*) (Func_2_t217 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m13415_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
#define Func_2_Invoke_m1785(__this, ___arg1, method) (( float (*) (Func_2_t217 *, Object_t *, const MethodInfo*))Func_2_Invoke_m13416_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m13417(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t217 *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m13418_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m13419(__this, ___result, method) (( float (*) (Func_2_t217 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m13420_gshared)(__this, ___result, method)
