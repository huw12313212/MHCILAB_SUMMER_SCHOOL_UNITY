#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Byte[]>
struct Comparison_1_t2031;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m14288(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2031 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m10429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Byte[]>::Invoke(T,T)
#define Comparison_1_Invoke_m14289(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2031 *, ByteU5BU5D_t408*, ByteU5BU5D_t408*, const MethodInfo*))Comparison_1_Invoke_m10430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Byte[]>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m14290(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2031 *, ByteU5BU5D_t408*, ByteU5BU5D_t408*, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m14291(__this, ___result, method) (( int32_t (*) (Comparison_1_t2031 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10432_gshared)(__this, ___result, method)
