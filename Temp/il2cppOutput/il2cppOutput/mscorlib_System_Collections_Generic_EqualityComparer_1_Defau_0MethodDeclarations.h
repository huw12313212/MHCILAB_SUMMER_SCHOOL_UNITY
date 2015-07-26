#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1786;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m10850_gshared (DefaultComparer_t1786 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10850(__this, method) (( void (*) (DefaultComparer_t1786 *, const MethodInfo*))DefaultComparer__ctor_m10850_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10851_gshared (DefaultComparer_t1786 * __this, RaycastResult_t66  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10851(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1786 *, RaycastResult_t66 , const MethodInfo*))DefaultComparer_GetHashCode_m10851_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10852_gshared (DefaultComparer_t1786 * __this, RaycastResult_t66  ___x, RaycastResult_t66  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10852(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1786 *, RaycastResult_t66 , RaycastResult_t66 , const MethodInfo*))DefaultComparer_Equals_m10852_gshared)(__this, ___x, ___y, method)
