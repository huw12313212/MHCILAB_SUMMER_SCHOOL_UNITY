#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1275_gshared (Comparison_1_t32 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1275(__this, ___object, ___method, method) (( void (*) (Comparison_1_t32 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1275_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m10477_gshared (Comparison_1_t32 * __this, RaycastResult_t66  ___x, RaycastResult_t66  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m10477(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t32 *, RaycastResult_t66 , RaycastResult_t66 , const MethodInfo*))Comparison_1_Invoke_m10477_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m10478_gshared (Comparison_1_t32 * __this, RaycastResult_t66  ___x, RaycastResult_t66  ___y, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m10478(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t32 *, RaycastResult_t66 , RaycastResult_t66 , AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10478_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m10479_gshared (Comparison_1_t32 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m10479(__this, ___result, method) (( int32_t (*) (Comparison_1_t32 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10479_gshared)(__this, ___result, method)
