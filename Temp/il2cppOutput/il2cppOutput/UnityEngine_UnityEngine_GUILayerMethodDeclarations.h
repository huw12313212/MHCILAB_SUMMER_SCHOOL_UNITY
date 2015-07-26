#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t361;
// UnityEngine.GUIElement
struct GUIElement_t360;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t360 * GUILayer_HitTest_m1925 (GUILayer_t361 * __this, Vector3_t6  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t360 * GUILayer_INTERNAL_CALL_HitTest_m1926 (Object_t * __this /* static, unused */, GUILayer_t361 * ___self, Vector3_t6 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
