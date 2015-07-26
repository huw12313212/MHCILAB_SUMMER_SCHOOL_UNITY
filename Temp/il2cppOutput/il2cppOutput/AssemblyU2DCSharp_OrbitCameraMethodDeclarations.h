#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OrbitCamera
struct OrbitCamera_t5;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void OrbitCamera::.ctor()
extern "C" void OrbitCamera__ctor_m3 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Start()
extern "C" void OrbitCamera_Start_m4 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Update()
extern "C" void OrbitCamera_Update_m5 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::LateUpdate()
extern "C" void OrbitCamera_LateUpdate_m6 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::HandlePlayerInput()
extern "C" void OrbitCamera_HandlePlayerInput_m7 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::CalculateDesiredPosition()
extern "C" void OrbitCamera_CalculateDesiredPosition_m8 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OrbitCamera::CalculatePosition(System.Single,System.Single,System.Single)
extern "C" Vector3_t6  OrbitCamera_CalculatePosition_m9 (OrbitCamera_t5 * __this, float ___rotationX, float ___rotationY, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::UpdatePosition()
extern "C" void OrbitCamera_UpdatePosition_m10 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrbitCamera::Reset()
extern "C" void OrbitCamera_Reset_m11 (OrbitCamera_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OrbitCamera::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float OrbitCamera_ClampAngle_m12 (OrbitCamera_t5 * __this, float ___angle, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
