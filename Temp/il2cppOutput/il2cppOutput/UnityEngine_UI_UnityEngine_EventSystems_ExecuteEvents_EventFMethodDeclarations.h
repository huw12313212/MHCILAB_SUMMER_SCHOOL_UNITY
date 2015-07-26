#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t54;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDeselectHandler
struct IDeselectHandler_t244;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t31;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1307(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t54 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m10480_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m10481(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t54 *, Object_t *, BaseEventData_t31 *, const MethodInfo*))EventFunction_1_Invoke_m10482_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m10483(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t54 *, Object_t *, BaseEventData_t31 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m10484_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m10485(__this, ___result, method) (( void (*) (EventFunction_1_t54 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m10486_gshared)(__this, ___result, method)
