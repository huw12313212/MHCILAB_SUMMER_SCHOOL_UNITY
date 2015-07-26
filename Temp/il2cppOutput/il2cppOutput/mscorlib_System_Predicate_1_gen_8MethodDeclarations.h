#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t1799;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t37;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m11033(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1799 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10404_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
#define Predicate_1_Invoke_m11034(__this, ___obj, method) (( bool (*) (Predicate_1_t1799 *, Entry_t37 *, const MethodInfo*))Predicate_1_Invoke_m10405_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m11035(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1799 *, Entry_t37 *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10406_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m11036(__this, ___result, method) (( bool (*) (Predicate_1_t1799 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10407_gshared)(__this, ___result, method)
