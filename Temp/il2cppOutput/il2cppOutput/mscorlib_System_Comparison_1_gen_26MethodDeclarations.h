#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2061;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14694_gshared (Comparison_1_t2061 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14694(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2061 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14694_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14695_gshared (Comparison_1_t2061 * __this, UILineInfo_t307  ___x, UILineInfo_t307  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14695(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2061 *, UILineInfo_t307 , UILineInfo_t307 , const MethodInfo*))Comparison_1_Invoke_m14695_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14696_gshared (Comparison_1_t2061 * __this, UILineInfo_t307  ___x, UILineInfo_t307  ___y, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14696(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2061 *, UILineInfo_t307 , UILineInfo_t307 , AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14696_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14697_gshared (Comparison_1_t2061 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14697(__this, ___result, method) (( int32_t (*) (Comparison_1_t2061 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14697_gshared)(__this, ___result, method)
