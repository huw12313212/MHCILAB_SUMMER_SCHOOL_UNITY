#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CollisionEventTrigger
struct CollisionEventTrigger_t2;
// UnityEngine.Collision
struct Collision_t14;

// System.Void CollisionEventTrigger::.ctor()
extern "C" void CollisionEventTrigger__ctor_m0 (CollisionEventTrigger_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionEventTrigger::OnCollisionEnter(UnityEngine.Collision)
extern "C" void CollisionEventTrigger_OnCollisionEnter_m1 (CollisionEventTrigger_t2 * __this, Collision_t14 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionEventTrigger::OnCollisionExit(UnityEngine.Collision)
extern "C" void CollisionEventTrigger_OnCollisionExit_m2 (CollisionEventTrigger_t2 * __this, Collision_t14 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
