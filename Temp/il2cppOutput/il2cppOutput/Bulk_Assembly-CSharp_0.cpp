#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// CollisionEventTrigger
#include "AssemblyU2DCSharp_CollisionEventTrigger.h"
#ifndef _MSC_VER
#else
#endif
// CollisionEventTrigger
#include "AssemblyU2DCSharp_CollisionEventTriggerMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"


// System.Void CollisionEventTrigger::.ctor()
extern "C" void CollisionEventTrigger__ctor_m0 (CollisionEventTrigger_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CollisionEventTrigger::OnCollisionEnter(UnityEngine.Collision)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void CollisionEventTrigger_OnCollisionEnter_m1 (CollisionEventTrigger_t2 * __this, Collision_t14 * ___collision, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t14 * L_0 = ___collision;
		NullCheck(L_0);
		Collider_t15 * L_1 = Collision_get_collider_m29(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t8 * L_2 = Component_get_gameObject_m30(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m31(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m32(NULL /*static, unused*/, _stringLiteral0, L_3, /*hidden argument*/NULL);
		Debug_Log_m33(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		UnityEvent_t1 * L_5 = (__this->___OnCollisionEnterEvent_2);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		UnityEvent_t1 * L_6 = (__this->___OnCollisionEnterEvent_2);
		NullCheck(L_6);
		UnityEvent_Invoke_m34(L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void CollisionEventTrigger::OnCollisionExit(UnityEngine.Collision)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void CollisionEventTrigger_OnCollisionExit_m2 (CollisionEventTrigger_t2 * __this, Collision_t14 * ___collision, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t14 * L_0 = ___collision;
		NullCheck(L_0);
		Collider_t15 * L_1 = Collision_get_collider_m29(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t8 * L_2 = Component_get_gameObject_m30(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m31(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m32(NULL /*static, unused*/, _stringLiteral1, L_3, /*hidden argument*/NULL);
		Debug_Log_m33(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		UnityEvent_t1 * L_5 = (__this->___OnCollisionExitEvent_3);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		UnityEvent_t1 * L_6 = (__this->___OnCollisionExitEvent_3);
		NullCheck(L_6);
		UnityEvent_Invoke_m34(L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// OrbitCamera
#include "AssemblyU2DCSharp_OrbitCamera.h"
#ifndef _MSC_VER
#else
#endif
// OrbitCamera
#include "AssemblyU2DCSharp_OrbitCameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void OrbitCamera::.ctor()
extern "C" void OrbitCamera__ctor_m3 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	{
		__this->___Distance_3 = (10.0f);
		__this->___DistanceMin_4 = (5.0f);
		__this->___DistanceMax_5 = (15.0f);
		__this->___X_MouseSensitivity_10 = (5.0f);
		__this->___Y_MouseSensitivity_11 = (5.0f);
		__this->___MouseWheelSensitivity_12 = (5.0f);
		__this->___Y_MinLimit_13 = (15.0f);
		__this->___Y_MaxLimit_14 = (70.0f);
		__this->___DistanceSmooth_15 = (0.025f);
		Vector3_t6  L_0 = Vector3_get_zero_m35(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___desiredPosition_17 = L_0;
		__this->___X_Smooth_18 = (0.05f);
		__this->___Y_Smooth_19 = (0.1f);
		Vector3_t6  L_1 = Vector3_get_zero_m35(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___position_23 = L_1;
		MonoBehaviour__ctor_m28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OrbitCamera::Start()
extern "C" void OrbitCamera_Start_m4 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	{
		Transform_t4 * L_0 = (__this->___TargetLookAt_2);
		NullCheck(L_0);
		Transform_t4 * L_1 = Component_get_transform_m36(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t6  L_2 = Transform_get_position_m37(L_1, /*hidden argument*/NULL);
		GameObject_t8 * L_3 = Component_get_gameObject_m30(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t4 * L_4 = GameObject_get_transform_m38(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t6  L_5 = Transform_get_position_m37(L_4, /*hidden argument*/NULL);
		float L_6 = Vector3_Distance_m39(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->___Distance_3 = L_6;
		float L_7 = (__this->___Distance_3);
		float L_8 = (__this->___DistanceMax_5);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0048;
		}
	}
	{
		float L_9 = (__this->___Distance_3);
		__this->___DistanceMax_5 = L_9;
	}

IL_0048:
	{
		float L_10 = (__this->___Distance_3);
		__this->___startingDistance_6 = L_10;
		OrbitCamera_Reset_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OrbitCamera::Update()
extern "C" void OrbitCamera_Update_m5 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OrbitCamera::LateUpdate()
extern "C" void OrbitCamera_LateUpdate_m6 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	{
		Transform_t4 * L_0 = (__this->___TargetLookAt_2);
		bool L_1 = Object_op_Equality_m40(NULL /*static, unused*/, L_0, (Object_t16 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		OrbitCamera_HandlePlayerInput_m7(__this, /*hidden argument*/NULL);
		OrbitCamera_CalculateDesiredPosition_m8(__this, /*hidden argument*/NULL);
		OrbitCamera_UpdatePosition_m10(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OrbitCamera::HandlePlayerInput()
extern TypeInfo* Input_t17_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t18_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void OrbitCamera_HandlePlayerInput_m7 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Mathf_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (0.01f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m41(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		float L_1 = (__this->___mouseX_8);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m42(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		float L_3 = (__this->___X_MouseSensitivity_10);
		__this->___mouseX_8 = ((float)((float)L_1+(float)((float)((float)L_2*(float)L_3))));
		float L_4 = (__this->___mouseY_9);
		float L_5 = Input_GetAxis_m42(NULL /*static, unused*/, _stringLiteral3, /*hidden argument*/NULL);
		float L_6 = (__this->___Y_MouseSensitivity_11);
		__this->___mouseY_9 = ((float)((float)L_4-(float)((float)((float)L_5*(float)L_6))));
	}

IL_004d:
	{
		float L_7 = (__this->___mouseY_9);
		float L_8 = (__this->___Y_MinLimit_13);
		float L_9 = (__this->___Y_MaxLimit_14);
		float L_10 = OrbitCamera_ClampAngle_m12(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->___mouseY_9 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		float L_11 = Input_GetAxis_m42(NULL /*static, unused*/, _stringLiteral4, /*hidden argument*/NULL);
		float L_12 = V_0;
		if ((((float)L_11) < ((float)((-L_12)))))
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		float L_13 = Input_GetAxis_m42(NULL /*static, unused*/, _stringLiteral4, /*hidden argument*/NULL);
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00bb;
		}
	}

IL_008c:
	{
		float L_15 = (__this->___Distance_3);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		float L_16 = Input_GetAxis_m42(NULL /*static, unused*/, _stringLiteral4, /*hidden argument*/NULL);
		float L_17 = (__this->___MouseWheelSensitivity_12);
		float L_18 = (__this->___DistanceMin_4);
		float L_19 = (__this->___DistanceMax_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t18_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Clamp_m43(NULL /*static, unused*/, ((float)((float)L_15-(float)((float)((float)L_16*(float)L_17)))), L_18, L_19, /*hidden argument*/NULL);
		__this->___desiredDistance_7 = L_20;
	}

IL_00bb:
	{
		return;
	}
}
// System.Void OrbitCamera::CalculateDesiredPosition()
extern TypeInfo* Mathf_t18_il2cpp_TypeInfo_var;
extern "C" void OrbitCamera_CalculateDesiredPosition_m8 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___Distance_3);
		float L_1 = (__this->___desiredDistance_7);
		float* L_2 = &(__this->___velocityDistance_16);
		float L_3 = (__this->___DistanceSmooth_15);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t18_il2cpp_TypeInfo_var);
		float L_4 = Mathf_SmoothDamp_m44(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___Distance_3 = L_4;
		float L_5 = (__this->___mouseY_9);
		float L_6 = (__this->___mouseX_8);
		float L_7 = (__this->___Distance_3);
		Vector3_t6  L_8 = OrbitCamera_CalculatePosition_m9(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___desiredPosition_17 = L_8;
		return;
	}
}
// UnityEngine.Vector3 OrbitCamera::CalculatePosition(System.Single,System.Single,System.Single)
extern "C" Vector3_t6  OrbitCamera_CalculatePosition_m9 (OrbitCamera_t5 * __this, float ___rotationX, float ___rotationY, float ___distance, const MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	Quaternion_t19  V_1 = {0};
	{
		float L_0 = ___distance;
		Vector3__ctor_m45((&V_0), (0.0f), (0.0f), ((-L_0)), /*hidden argument*/NULL);
		float L_1 = ___rotationX;
		float L_2 = ___rotationY;
		Quaternion_t19  L_3 = Quaternion_Euler_m46(NULL /*static, unused*/, L_1, L_2, (0.0f), /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t4 * L_4 = (__this->___TargetLookAt_2);
		NullCheck(L_4);
		Vector3_t6  L_5 = Transform_get_position_m37(L_4, /*hidden argument*/NULL);
		Quaternion_t19  L_6 = V_1;
		Vector3_t6  L_7 = V_0;
		Vector3_t6  L_8 = Quaternion_op_Multiply_m47(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t6  L_9 = Vector3_op_Addition_m48(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void OrbitCamera::UpdatePosition()
extern TypeInfo* Mathf_t18_il2cpp_TypeInfo_var;
extern "C" void OrbitCamera_UpdatePosition_m10 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t6 * L_0 = &(__this->___position_23);
		float L_1 = (L_0->___x_1);
		Vector3_t6 * L_2 = &(__this->___desiredPosition_17);
		float L_3 = (L_2->___x_1);
		float* L_4 = &(__this->___velX_20);
		float L_5 = (__this->___X_Smooth_18);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t18_il2cpp_TypeInfo_var);
		float L_6 = Mathf_SmoothDamp_m44(NULL /*static, unused*/, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_t6 * L_7 = &(__this->___position_23);
		float L_8 = (L_7->___y_2);
		Vector3_t6 * L_9 = &(__this->___desiredPosition_17);
		float L_10 = (L_9->___y_2);
		float* L_11 = &(__this->___velY_21);
		float L_12 = (__this->___Y_Smooth_19);
		float L_13 = Mathf_SmoothDamp_m44(NULL /*static, unused*/, L_8, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		Vector3_t6 * L_14 = &(__this->___position_23);
		float L_15 = (L_14->___z_3);
		Vector3_t6 * L_16 = &(__this->___desiredPosition_17);
		float L_17 = (L_16->___z_3);
		float* L_18 = &(__this->___velZ_22);
		float L_19 = (__this->___X_Smooth_18);
		float L_20 = Mathf_SmoothDamp_m44(NULL /*static, unused*/, L_15, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23 = V_2;
		Vector3_t6  L_24 = {0};
		Vector3__ctor_m45(&L_24, L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->___position_23 = L_24;
		Transform_t4 * L_25 = Component_get_transform_m36(__this, /*hidden argument*/NULL);
		Vector3_t6  L_26 = (__this->___position_23);
		NullCheck(L_25);
		Transform_set_position_m49(L_25, L_26, /*hidden argument*/NULL);
		Transform_t4 * L_27 = Component_get_transform_m36(__this, /*hidden argument*/NULL);
		Transform_t4 * L_28 = (__this->___TargetLookAt_2);
		NullCheck(L_27);
		Transform_LookAt_m50(L_27, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OrbitCamera::Reset()
extern "C" void OrbitCamera_Reset_m11 (OrbitCamera_t5 * __this, const MethodInfo* method)
{
	{
		__this->___mouseX_8 = (0.0f);
		__this->___mouseY_9 = (0.0f);
		float L_0 = (__this->___startingDistance_6);
		__this->___Distance_3 = L_0;
		float L_1 = (__this->___Distance_3);
		__this->___desiredDistance_7 = L_1;
		return;
	}
}
// System.Single OrbitCamera::ClampAngle(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t18_il2cpp_TypeInfo_var;
extern "C" float OrbitCamera_ClampAngle_m12 (OrbitCamera_t5 * __this, float ___angle, float ___min, float ___max, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_002d;
	}

IL_0005:
	{
		float L_0 = ___angle;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		float L_1 = ___angle;
		___angle = ((float)((float)L_1+(float)(360.0f)));
	}

IL_0019:
	{
		float L_2 = ___angle;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ___angle;
		___angle = ((float)((float)L_3-(float)(360.0f)));
	}

IL_002d:
	{
		float L_4 = ___angle;
		if ((((float)L_4) < ((float)(-360.0f))))
		{
			goto IL_0005;
		}
	}
	{
		float L_5 = ___angle;
		if ((((float)L_5) > ((float)(360.0f))))
		{
			goto IL_0005;
		}
	}
	{
		float L_6 = ___angle;
		float L_7 = ___min;
		float L_8 = ___max;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t18_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m43(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// TestParticles
#include "AssemblyU2DCSharp_TestParticles.h"
#ifndef _MSC_VER
#else
#endif
// TestParticles
#include "AssemblyU2DCSharp_TestParticlesMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
struct Object_t16;
struct GameObject_t8;
struct Object_t16;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m52_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m52(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m52_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t8_m51(__this /* static, unused */, p0, method) (( GameObject_t8 * (*) (Object_t * /* static, unused */, GameObject_t8 *, const MethodInfo*))Object_Instantiate_TisObject_t_m52_gshared)(__this /* static, unused */, p0, method)


// System.Void TestParticles::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TestParticles__ctor_m13 (TestParticles_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CurrentElementIndex_10 = (-1);
		__this->___m_CurrentParticleIndex_11 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_ElementName_12 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_ParticleName_13 = L_1;
		MonoBehaviour__ctor_m28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestParticles::Start()
extern "C" void TestParticles_Start_m14 (TestParticles_t9 * __this, const MethodInfo* method)
{
	{
		GameObjectU5BU5D_t7* L_0 = (__this->___m_PrefabListFire_2);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_1 = (__this->___m_PrefabListWind_3);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_2 = (__this->___m_PrefabListWater_4);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_3 = (__this->___m_PrefabListEarth_5);
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_4 = (__this->___m_PrefabListIce_6);
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_5 = (__this->___m_PrefabListThunder_7);
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_6 = (__this->___m_PrefabListLight_8);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GameObjectU5BU5D_t7* L_7 = (__this->___m_PrefabListDarkness_9);
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}

IL_0070:
	{
		__this->___m_CurrentElementIndex_10 = 0;
		__this->___m_CurrentParticleIndex_11 = 0;
		TestParticles_ShowParticle_m17(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		return;
	}
}
// System.Void TestParticles::Update()
extern TypeInfo* Input_t17_il2cpp_TypeInfo_var;
extern "C" void TestParticles_Update_m15 (TestParticles_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___m_CurrentElementIndex_10);
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_1 = (__this->___m_CurrentParticleIndex_11);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m53(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_3 = (__this->___m_CurrentElementIndex_10);
		__this->___m_CurrentElementIndex_10 = ((int32_t)((int32_t)L_3+(int32_t)1));
		__this->___m_CurrentParticleIndex_11 = 0;
		TestParticles_ShowParticle_m17(__this, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyUp_m53(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_5 = (__this->___m_CurrentElementIndex_10);
		__this->___m_CurrentElementIndex_10 = ((int32_t)((int32_t)L_5-(int32_t)1));
		__this->___m_CurrentParticleIndex_11 = 0;
		TestParticles_ShowParticle_m17(__this, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyUp_m53(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_7 = (__this->___m_CurrentParticleIndex_11);
		__this->___m_CurrentParticleIndex_11 = ((int32_t)((int32_t)L_7-(int32_t)1));
		TestParticles_ShowParticle_m17(__this, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKeyUp_m53(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_9 = (__this->___m_CurrentParticleIndex_11);
		__this->___m_CurrentParticleIndex_11 = ((int32_t)((int32_t)L_9+(int32_t)1));
		TestParticles_ShowParticle_m17(__this, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void TestParticles::OnGUI()
extern TypeInfo* WindowFunction_t21_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t22_il2cpp_TypeInfo_var;
extern const MethodInfo* TestParticles_InfoWindow_m19_MethodInfo_var;
extern const MethodInfo* TestParticles_ParticleInformationWindow_m18_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void TestParticles_OnGUI_m16 (TestParticles_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WindowFunction_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GUI_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		TestParticles_InfoWindow_m19_MethodInfo_var = il2cpp_codegen_method_info_from_index(1);
		TestParticles_ParticleInformationWindow_m18_MethodInfo_var = il2cpp_codegen_method_info_from_index(2);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m54(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t20  L_1 = {0};
		Rect__ctor_m55(&L_1, (((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)260))))), (5.0f), (250.0f), (80.0f), /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TestParticles_InfoWindow_m19_MethodInfo_var };
		WindowFunction_t21 * L_3 = (WindowFunction_t21 *)il2cpp_codegen_object_new (WindowFunction_t21_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m56(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t22_il2cpp_TypeInfo_var);
		GUI_Window_m57(NULL /*static, unused*/, 1, L_1, L_3, _stringLiteral5, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m54(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t20  L_6 = {0};
		Rect__ctor_m55(&L_6, (((float)((int32_t)((int32_t)L_4-(int32_t)((int32_t)260))))), (((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)85))))), (250.0f), (80.0f), /*hidden argument*/NULL);
		IntPtr_t L_7 = { (void*)TestParticles_ParticleInformationWindow_m18_MethodInfo_var };
		WindowFunction_t21 * L_8 = (WindowFunction_t21 *)il2cpp_codegen_object_new (WindowFunction_t21_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m56(L_8, __this, L_7, /*hidden argument*/NULL);
		GUI_Window_m57(NULL /*static, unused*/, 2, L_6, L_8, _stringLiteral6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestParticles::ShowParticle()
extern const MethodInfo* Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void TestParticles_ShowParticle_m17 (TestParticles_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___m_CurrentElementIndex_10);
		if ((((int32_t)L_0) <= ((int32_t)7)))
		{
			goto IL_0018;
		}
	}
	{
		__this->___m_CurrentElementIndex_10 = 0;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_1 = (__this->___m_CurrentElementIndex_10);
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		__this->___m_CurrentElementIndex_10 = 7;
	}

IL_002b:
	{
		int32_t L_2 = (__this->___m_CurrentElementIndex_10);
		if (L_2)
		{
			goto IL_0052;
		}
	}
	{
		GameObjectU5BU5D_t7* L_3 = (__this->___m_PrefabListFire_2);
		__this->___m_CurrentElementList_14 = L_3;
		__this->___m_ElementName_12 = _stringLiteral7;
		goto IL_0165;
	}

IL_0052:
	{
		int32_t L_4 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		GameObjectU5BU5D_t7* L_5 = (__this->___m_PrefabListWater_4);
		__this->___m_CurrentElementList_14 = L_5;
		__this->___m_ElementName_12 = _stringLiteral8;
		goto IL_0165;
	}

IL_007a:
	{
		int32_t L_6 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_00a2;
		}
	}
	{
		GameObjectU5BU5D_t7* L_7 = (__this->___m_PrefabListWind_3);
		__this->___m_CurrentElementList_14 = L_7;
		__this->___m_ElementName_12 = _stringLiteral9;
		goto IL_0165;
	}

IL_00a2:
	{
		int32_t L_8 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_00ca;
		}
	}
	{
		GameObjectU5BU5D_t7* L_9 = (__this->___m_PrefabListEarth_5);
		__this->___m_CurrentElementList_14 = L_9;
		__this->___m_ElementName_12 = _stringLiteral10;
		goto IL_0165;
	}

IL_00ca:
	{
		int32_t L_10 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_00f2;
		}
	}
	{
		GameObjectU5BU5D_t7* L_11 = (__this->___m_PrefabListThunder_7);
		__this->___m_CurrentElementList_14 = L_11;
		__this->___m_ElementName_12 = _stringLiteral11;
		goto IL_0165;
	}

IL_00f2:
	{
		int32_t L_12 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			goto IL_011a;
		}
	}
	{
		GameObjectU5BU5D_t7* L_13 = (__this->___m_PrefabListIce_6);
		__this->___m_CurrentElementList_14 = L_13;
		__this->___m_ElementName_12 = _stringLiteral12;
		goto IL_0165;
	}

IL_011a:
	{
		int32_t L_14 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_14) == ((uint32_t)6))))
		{
			goto IL_0142;
		}
	}
	{
		GameObjectU5BU5D_t7* L_15 = (__this->___m_PrefabListLight_8);
		__this->___m_CurrentElementList_14 = L_15;
		__this->___m_ElementName_12 = _stringLiteral13;
		goto IL_0165;
	}

IL_0142:
	{
		int32_t L_16 = (__this->___m_CurrentElementIndex_10);
		if ((!(((uint32_t)L_16) == ((uint32_t)7))))
		{
			goto IL_0165;
		}
	}
	{
		GameObjectU5BU5D_t7* L_17 = (__this->___m_PrefabListDarkness_9);
		__this->___m_CurrentElementList_14 = L_17;
		__this->___m_ElementName_12 = _stringLiteral14;
	}

IL_0165:
	{
		int32_t L_18 = (__this->___m_CurrentParticleIndex_11);
		GameObjectU5BU5D_t7* L_19 = (__this->___m_CurrentElementList_14);
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0184;
		}
	}
	{
		__this->___m_CurrentParticleIndex_11 = 0;
		goto IL_01a0;
	}

IL_0184:
	{
		int32_t L_20 = (__this->___m_CurrentParticleIndex_11);
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_01a0;
		}
	}
	{
		GameObjectU5BU5D_t7* L_21 = (__this->___m_CurrentElementList_14);
		NullCheck(L_21);
		__this->___m_CurrentParticleIndex_11 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_21)->max_length)))-(int32_t)1));
	}

IL_01a0:
	{
		GameObjectU5BU5D_t7* L_22 = (__this->___m_CurrentElementList_14);
		int32_t L_23 = (__this->___m_CurrentParticleIndex_11);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		NullCheck((*(GameObject_t8 **)(GameObject_t8 **)SZArrayLdElema(L_22, L_24)));
		String_t* L_25 = Object_get_name_m31((*(GameObject_t8 **)(GameObject_t8 **)SZArrayLdElema(L_22, L_24)), /*hidden argument*/NULL);
		__this->___m_ParticleName_13 = L_25;
		GameObject_t8 * L_26 = (__this->___m_CurrentParticle_15);
		bool L_27 = Object_op_Inequality_m59(NULL /*static, unused*/, L_26, (Object_t16 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_01d4;
		}
	}
	{
		GameObject_t8 * L_28 = (__this->___m_CurrentParticle_15);
		Object_DestroyObject_m60(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		GameObjectU5BU5D_t7* L_29 = (__this->___m_CurrentElementList_14);
		int32_t L_30 = (__this->___m_CurrentParticleIndex_11);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		GameObject_t8 * L_32 = Object_Instantiate_TisGameObject_t8_m51(NULL /*static, unused*/, (*(GameObject_t8 **)(GameObject_t8 **)SZArrayLdElema(L_29, L_31)), /*hidden argument*/Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var);
		__this->___m_CurrentParticle_15 = L_32;
		return;
	}
}
// System.Void TestParticles::ParticleInformationWindow(System.Int32)
extern TypeInfo* ObjectU5BU5D_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t24_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t22_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void TestParticles_ParticleInformationWindow_m18 (TestParticles_t9 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUI_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t20  L_0 = {0};
		Rect__ctor_m55(&L_0, (12.0f), (25.0f), (280.0f), (20.0f), /*hidden argument*/NULL);
		ObjectU5BU5D_t23* L_1 = ((ObjectU5BU5D_t23*)SZArrayNew(ObjectU5BU5D_t23_il2cpp_TypeInfo_var, 7));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, _stringLiteral15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)_stringLiteral15;
		ObjectU5BU5D_t23* L_2 = L_1;
		String_t* L_3 = (__this->___m_ElementName_12);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t23* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)_stringLiteral16;
		ObjectU5BU5D_t23* L_5 = L_4;
		int32_t L_6 = (__this->___m_CurrentParticleIndex_11);
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		Object_t * L_8 = Box(Int32_t24_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)L_8;
		ObjectU5BU5D_t23* L_9 = L_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, _stringLiteral17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)_stringLiteral17;
		ObjectU5BU5D_t23* L_10 = L_9;
		GameObjectU5BU5D_t7* L_11 = (__this->___m_CurrentElementList_14);
		NullCheck(L_11);
		int32_t L_12 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Object_t * L_13 = Box(Int32_t24_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_13;
		ObjectU5BU5D_t23* L_14 = L_10;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 6);
		ArrayElementTypeCheck (L_14, _stringLiteral18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 6)) = (Object_t *)_stringLiteral18;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m61(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t22_il2cpp_TypeInfo_var);
		GUI_Label_m62(NULL /*static, unused*/, L_0, L_15, /*hidden argument*/NULL);
		Rect_t20  L_16 = {0};
		Rect__ctor_m55(&L_16, (12.0f), (50.0f), (280.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_17 = (__this->___m_ParticleName_13);
		NullCheck(L_17);
		String_t* L_18 = String_ToUpper_m63(L_17, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m32(NULL /*static, unused*/, _stringLiteral19, L_18, /*hidden argument*/NULL);
		GUI_Label_m62(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestParticles::InfoWindow(System.Int32)
extern TypeInfo* GUI_t22_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" void TestParticles_InfoWindow_m19 (TestParticles_t9 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t20  L_0 = {0};
		Rect__ctor_m55(&L_0, (15.0f), (25.0f), (240.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t22_il2cpp_TypeInfo_var);
		GUI_Label_m62(NULL /*static, unused*/, L_0, _stringLiteral20, /*hidden argument*/NULL);
		Rect_t20  L_1 = {0};
		Rect__ctor_m55(&L_1, (15.0f), (50.0f), (240.0f), (20.0f), /*hidden argument*/NULL);
		GUI_Label_m62(NULL /*static, unused*/, L_1, _stringLiteral21, /*hidden argument*/NULL);
		return;
	}
}
// HelloUnity
#include "AssemblyU2DCSharp_HelloUnity.h"
#ifndef _MSC_VER
#else
#endif
// HelloUnity
#include "AssemblyU2DCSharp_HelloUnityMethodDeclarations.h"

// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
struct GameObject_t8;
struct Rigidbody_t10;
struct GameObject_t8;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m65_gshared (GameObject_t8 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m65(__this, method) (( Object_t * (*) (GameObject_t8 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m65_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t10_m64(__this, method) (( Rigidbody_t10 * (*) (GameObject_t8 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m65_gshared)(__this, method)
struct GameObject_t8;
struct Renderer_t25;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t25_m66(__this, method) (( Renderer_t25 * (*) (GameObject_t8 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m65_gshared)(__this, method)


// System.Void HelloUnity::.ctor()
extern "C" void HelloUnity__ctor_m20 (HelloUnity_t11 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelloUnity::Start()
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t10_m64_MethodInfo_var;
extern "C" void HelloUnity_Start_m21 (HelloUnity_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRigidbody_t10_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t8 * L_0 = (__this->___cube_2);
		NullCheck(L_0);
		Rigidbody_t10 * L_1 = GameObject_GetComponent_TisRigidbody_t10_m64(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t10_m64_MethodInfo_var);
		__this->___cubeBody_3 = L_1;
		return;
	}
}
// System.Void HelloUnity::Boom(UnityEngine.Collider)
extern const MethodInfo* Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var;
extern "C" void HelloUnity_Boom_m22 (HelloUnity_t11 * __this, Collider_t15 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t8 * V_0 = {0};
	{
		GameObject_t8 * L_0 = (__this->___boomPrefab_7);
		GameObject_t8 * L_1 = Object_Instantiate_TisGameObject_t8_m51(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t8_m51_MethodInfo_var);
		V_0 = L_1;
		GameObject_t8 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t4 * L_3 = GameObject_get_transform_m38(L_2, /*hidden argument*/NULL);
		Collider_t15 * L_4 = ___target;
		NullCheck(L_4);
		Transform_t4 * L_5 = Component_get_transform_m36(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t6  L_6 = Transform_get_position_m37(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m49(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelloUnity::ChangeColor()
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void HelloUnity_ChangeColor_m23 (HelloUnity_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m33(NULL /*static, unused*/, _stringLiteral22, /*hidden argument*/NULL);
		float L_0 = Random_Range_m67(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m67(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_2 = Random_Range_m67(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		Color_t12  L_3 = {0};
		Color__ctor_m68(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___color_5 = L_3;
		return;
	}
}
// System.Void HelloUnity::Update()
extern TypeInfo* Input_t17_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t6_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t25_m66_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" void HelloUnity_Update_m24 (HelloUnity_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Vector3_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GameObject_GetComponent_TisRenderer_t25_m66_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m69(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		Rigidbody_t10 * L_1 = (__this->___cubeBody_3);
		float L_2 = (__this->___jumpVelocity_6);
		Vector3_t6  L_3 = {0};
		Vector3__ctor_m45(&L_3, (0.0f), L_2, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_m70(L_1, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		GameObject_t8 * L_4 = (__this->___cube_2);
		NullCheck(L_4);
		Renderer_t25 * L_5 = GameObject_GetComponent_TisRenderer_t25_m66(L_4, /*hidden argument*/GameObject_GetComponent_TisRenderer_t25_m66_MethodInfo_var);
		NullCheck(L_5);
		Material_t26 * L_6 = Renderer_get_material_m71(L_5, /*hidden argument*/NULL);
		Color_t12  L_7 = (__this->___color_5);
		NullCheck(L_6);
		Material_set_color_m72(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKey_m73(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		Debug_Log_m33(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
		GameObject_t8 * L_9 = (__this->___cube_2);
		NullCheck(L_9);
		Transform_t4 * L_10 = GameObject_get_transform_m38(L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___speed_4);
		float L_12 = Time_get_deltaTime_m74(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_13 = {0};
		Vector3__ctor_m45(&L_13, ((float)((float)((-L_11))*(float)L_12)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Translate_m75(L_10, L_13, /*hidden argument*/NULL);
	}

IL_008c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKey_m73(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00d0;
		}
	}
	{
		Debug_Log_m33(NULL /*static, unused*/, _stringLiteral24, /*hidden argument*/NULL);
		GameObject_t8 * L_15 = (__this->___cube_2);
		NullCheck(L_15);
		Transform_t4 * L_16 = GameObject_get_transform_m38(L_15, /*hidden argument*/NULL);
		float L_17 = (__this->___speed_4);
		float L_18 = Time_get_deltaTime_m74(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_19 = {0};
		Vector3__ctor_m45(&L_19, ((float)((float)L_17*(float)L_18)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m75(L_16, L_19, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		bool L_20 = Input_GetMouseButtonDown_m76(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00f4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t17_il2cpp_TypeInfo_var);
		Vector3_t6  L_21 = Input_get_mousePosition_m77(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_22 = L_21;
		Object_t * L_23 = Box(Vector3_t6_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m78(NULL /*static, unused*/, _stringLiteral25, L_23, /*hidden argument*/NULL);
		Debug_Log_m33(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		return;
	}
}
// KillMySelf
#include "AssemblyU2DCSharp_KillMySelf.h"
#ifndef _MSC_VER
#else
#endif
// KillMySelf
#include "AssemblyU2DCSharp_KillMySelfMethodDeclarations.h"



// System.Void KillMySelf::.ctor()
extern "C" void KillMySelf__ctor_m25 (KillMySelf_t13 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillMySelf::Start()
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" void KillMySelf_Start_m26 (KillMySelf_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___aliveTime_2);
		MonoBehaviour_Invoke_m79(__this, _stringLiteral26, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillMySelf::Kill()
extern "C" void KillMySelf_Kill_m27 (KillMySelf_t13 * __this, const MethodInfo* method)
{
	{
		GameObject_t8 * L_0 = Component_get_gameObject_m30(__this, /*hidden argument*/NULL);
		Object_Destroy_m80(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
