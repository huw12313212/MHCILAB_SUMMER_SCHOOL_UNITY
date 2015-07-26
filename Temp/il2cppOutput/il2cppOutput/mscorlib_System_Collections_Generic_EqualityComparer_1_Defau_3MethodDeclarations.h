#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t2048;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m14539_gshared (DefaultComparer_t2048 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14539(__this, method) (( void (*) (DefaultComparer_t2048 *, const MethodInfo*))DefaultComparer__ctor_m14539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14540_gshared (DefaultComparer_t2048 * __this, UICharInfo_t309  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14540(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2048 *, UICharInfo_t309 , const MethodInfo*))DefaultComparer_GetHashCode_m14540_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14541_gshared (DefaultComparer_t2048 * __this, UICharInfo_t309  ___x, UICharInfo_t309  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14541(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2048 *, UICharInfo_t309 , UICharInfo_t309 , const MethodInfo*))DefaultComparer_Equals_m14541_gshared)(__this, ___x, ___y, method)
