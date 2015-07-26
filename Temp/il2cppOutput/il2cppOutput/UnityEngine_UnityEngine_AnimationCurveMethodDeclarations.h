#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t446;
struct AnimationCurve_t446_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t586;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2534 (AnimationCurve_t446 * __this, KeyframeU5BU5D_t586* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2535 (AnimationCurve_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2536 (AnimationCurve_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2537 (AnimationCurve_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2538 (AnimationCurve_t446 * __this, KeyframeU5BU5D_t586* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t446_marshal(const AnimationCurve_t446& unmarshaled, AnimationCurve_t446_marshaled& marshaled);
void AnimationCurve_t446_marshal_back(const AnimationCurve_t446_marshaled& marshaled, AnimationCurve_t446& unmarshaled);
void AnimationCurve_t446_marshal_cleanup(AnimationCurve_t446_marshaled& marshaled);
