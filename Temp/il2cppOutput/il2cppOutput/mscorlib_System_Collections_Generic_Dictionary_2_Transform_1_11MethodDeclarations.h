﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t1887;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t141;
// System.AsyncCallback
struct AsyncCallback_t142;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12146_gshared (Transform_1_t1887 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12146(__this, ___object, ___method, method) (( void (*) (Transform_1_t1887 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12146_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1879  Transform_1_Invoke_m12147_gshared (Transform_1_t1887 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12147(__this, ___key, ___value, method) (( KeyValuePair_2_t1879  (*) (Transform_1_t1887 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m12147_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12148_gshared (Transform_1_t1887 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t142 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12148(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1887 *, Object_t *, Object_t *, AsyncCallback_t142 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12148_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1879  Transform_1_EndInvoke_m12149_gshared (Transform_1_t1887 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12149(__this, ___result, method) (( KeyValuePair_2_t1879  (*) (Transform_1_t1887 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12149_gshared)(__this, ___result, method)