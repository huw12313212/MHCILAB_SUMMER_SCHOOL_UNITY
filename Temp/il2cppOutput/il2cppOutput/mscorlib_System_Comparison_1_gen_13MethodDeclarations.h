#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1898;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12304_gshared (Comparison_1_t1898 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12304(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1898 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12304_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12305_gshared (Comparison_1_t1898 * __this, UIVertex_t152  ___x, UIVertex_t152  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12305(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1898 *, UIVertex_t152 , UIVertex_t152 , const MethodInfo*))Comparison_1_Invoke_m12305_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12306_gshared (Comparison_1_t1898 * __this, UIVertex_t152  ___x, UIVertex_t152  ___y, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12306(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1898 *, UIVertex_t152 , UIVertex_t152 , AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12306_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12307_gshared (Comparison_1_t1898 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12307(__this, ___result, method) (( int32_t (*) (Comparison_1_t1898 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12307_gshared)(__this, ___result, method)
