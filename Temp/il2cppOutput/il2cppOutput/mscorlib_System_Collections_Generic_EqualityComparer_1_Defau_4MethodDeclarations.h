#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2057;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m14681_gshared (DefaultComparer_t2057 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14681(__this, method) (( void (*) (DefaultComparer_t2057 *, const MethodInfo*))DefaultComparer__ctor_m14681_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14682_gshared (DefaultComparer_t2057 * __this, UILineInfo_t307  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14682(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2057 *, UILineInfo_t307 , const MethodInfo*))DefaultComparer_GetHashCode_m14682_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14683_gshared (DefaultComparer_t2057 * __this, UILineInfo_t307  ___x, UILineInfo_t307  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14683(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2057 *, UILineInfo_t307 , UILineInfo_t307 , const MethodInfo*))DefaultComparer_Equals_m14683_gshared)(__this, ___x, ___y, method)
