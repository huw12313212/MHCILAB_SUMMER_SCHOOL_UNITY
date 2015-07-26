#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t522;
struct GcAchievementData_t522_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t531;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t531 * GcAchievementData_ToAchievement_m2880 (GcAchievementData_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t522_marshal(const GcAchievementData_t522& unmarshaled, GcAchievementData_t522_marshaled& marshaled);
void GcAchievementData_t522_marshal_back(const GcAchievementData_t522_marshaled& marshaled, GcAchievementData_t522& unmarshaled);
void GcAchievementData_t522_marshal_cleanup(GcAchievementData_t522_marshaled& marshaled);
