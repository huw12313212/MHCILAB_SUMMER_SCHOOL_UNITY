#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t523;
struct GcScoreData_t523_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t533;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t533 * GcScoreData_ToScore_m2881 (GcScoreData_t523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t523_marshal(const GcScoreData_t523& unmarshaled, GcScoreData_t523_marshaled& marshaled);
void GcScoreData_t523_marshal_back(const GcScoreData_t523_marshaled& marshaled, GcScoreData_t523& unmarshaled);
void GcScoreData_t523_marshal_cleanup(GcScoreData_t523_marshaled& marshaled);
