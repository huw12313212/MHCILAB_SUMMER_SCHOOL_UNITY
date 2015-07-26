#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t2217;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t563;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m16608(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2217 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m10429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m16609(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2217 *, PersistentCall_t563 *, PersistentCall_t563 *, const MethodInfo*))Comparison_1_Invoke_m10430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m16610(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2217 *, PersistentCall_t563 *, PersistentCall_t563 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m16611(__this, ___result, method) (( int32_t (*) (Comparison_1_t2217 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10432_gshared)(__this, ___result, method)
