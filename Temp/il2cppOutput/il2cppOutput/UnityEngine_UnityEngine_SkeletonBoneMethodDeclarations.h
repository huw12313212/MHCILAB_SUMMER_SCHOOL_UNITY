#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t449;
struct SkeletonBone_t449_marshaled;

void SkeletonBone_t449_marshal(const SkeletonBone_t449& unmarshaled, SkeletonBone_t449_marshaled& marshaled);
void SkeletonBone_t449_marshal_back(const SkeletonBone_t449_marshaled& marshaled, SkeletonBone_t449& unmarshaled);
void SkeletonBone_t449_marshal_cleanup(SkeletonBone_t449_marshaled& marshaled);
