#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t250;
struct Touch_t250_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1337 (Touch_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t68  Touch_get_position_m1339 (Touch_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1338 (Touch_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t250_marshal(const Touch_t250& unmarshaled, Touch_t250_marshaled& marshaled);
void Touch_t250_marshal_back(const Touch_t250_marshaled& marshaled, Touch_t250& unmarshaled);
void Touch_t250_marshal_cleanup(Touch_t250_marshaled& marshaled);
