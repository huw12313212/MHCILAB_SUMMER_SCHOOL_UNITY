#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1902;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12407_gshared (DefaultComparer_t1902 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12407(__this, method) (( void (*) (DefaultComparer_t1902 *, const MethodInfo*))DefaultComparer__ctor_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12408_gshared (DefaultComparer_t1902 * __this, UIVertex_t152  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12408(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1902 *, UIVertex_t152 , const MethodInfo*))DefaultComparer_GetHashCode_m12408_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12409_gshared (DefaultComparer_t1902 * __this, UIVertex_t152  ___x, UIVertex_t152  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12409(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1902 *, UIVertex_t152 , UIVertex_t152 , const MethodInfo*))DefaultComparer_Equals_m12409_gshared)(__this, ___x, ___y, method)
