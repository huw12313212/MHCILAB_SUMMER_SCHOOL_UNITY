#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1896;
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

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12294_gshared (Predicate_1_t1896 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12294(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1896 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12294_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12295_gshared (Predicate_1_t1896 * __this, UIVertex_t152  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12295(__this, ___obj, method) (( bool (*) (Predicate_1_t1896 *, UIVertex_t152 , const MethodInfo*))Predicate_1_Invoke_m12295_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12296_gshared (Predicate_1_t1896 * __this, UIVertex_t152  ___obj, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12296(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1896 *, UIVertex_t152 , AsyncCallback_t142 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12296_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12297_gshared (Predicate_1_t1896 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12297(__this, ___result, method) (( bool (*) (Predicate_1_t1896 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12297_gshared)(__this, ___result, method)
