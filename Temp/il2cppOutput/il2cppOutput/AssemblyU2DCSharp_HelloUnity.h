#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t8;
// UnityEngine.Rigidbody
struct Rigidbody_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// HelloUnity
struct  HelloUnity_t11  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject HelloUnity::cube
	GameObject_t8 * ___cube_2;
	// UnityEngine.Rigidbody HelloUnity::cubeBody
	Rigidbody_t10 * ___cubeBody_3;
	// System.Single HelloUnity::speed
	float ___speed_4;
	// UnityEngine.Color HelloUnity::color
	Color_t12  ___color_5;
	// System.Single HelloUnity::jumpVelocity
	float ___jumpVelocity_6;
	// UnityEngine.GameObject HelloUnity::boomPrefab
	GameObject_t8 * ___boomPrefab_7;
};
