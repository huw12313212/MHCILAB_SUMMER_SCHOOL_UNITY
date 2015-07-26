#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// OrbitCamera
struct  OrbitCamera_t5  : public MonoBehaviour_t3
{
	// UnityEngine.Transform OrbitCamera::TargetLookAt
	Transform_t4 * ___TargetLookAt_2;
	// System.Single OrbitCamera::Distance
	float ___Distance_3;
	// System.Single OrbitCamera::DistanceMin
	float ___DistanceMin_4;
	// System.Single OrbitCamera::DistanceMax
	float ___DistanceMax_5;
	// System.Single OrbitCamera::startingDistance
	float ___startingDistance_6;
	// System.Single OrbitCamera::desiredDistance
	float ___desiredDistance_7;
	// System.Single OrbitCamera::mouseX
	float ___mouseX_8;
	// System.Single OrbitCamera::mouseY
	float ___mouseY_9;
	// System.Single OrbitCamera::X_MouseSensitivity
	float ___X_MouseSensitivity_10;
	// System.Single OrbitCamera::Y_MouseSensitivity
	float ___Y_MouseSensitivity_11;
	// System.Single OrbitCamera::MouseWheelSensitivity
	float ___MouseWheelSensitivity_12;
	// System.Single OrbitCamera::Y_MinLimit
	float ___Y_MinLimit_13;
	// System.Single OrbitCamera::Y_MaxLimit
	float ___Y_MaxLimit_14;
	// System.Single OrbitCamera::DistanceSmooth
	float ___DistanceSmooth_15;
	// System.Single OrbitCamera::velocityDistance
	float ___velocityDistance_16;
	// UnityEngine.Vector3 OrbitCamera::desiredPosition
	Vector3_t6  ___desiredPosition_17;
	// System.Single OrbitCamera::X_Smooth
	float ___X_Smooth_18;
	// System.Single OrbitCamera::Y_Smooth
	float ___Y_Smooth_19;
	// System.Single OrbitCamera::velX
	float ___velX_20;
	// System.Single OrbitCamera::velY
	float ___velY_21;
	// System.Single OrbitCamera::velZ
	float ___velZ_22;
	// UnityEngine.Vector3 OrbitCamera::position
	Vector3_t6  ___position_23;
};
