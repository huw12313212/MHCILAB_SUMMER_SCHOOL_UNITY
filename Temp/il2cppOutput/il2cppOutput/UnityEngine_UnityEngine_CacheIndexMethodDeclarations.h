#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t411;
struct CacheIndex_t411_marshaled;

void CacheIndex_t411_marshal(const CacheIndex_t411& unmarshaled, CacheIndex_t411_marshaled& marshaled);
void CacheIndex_t411_marshal_back(const CacheIndex_t411_marshaled& marshaled, CacheIndex_t411& unmarshaled);
void CacheIndex_t411_marshal_cleanup(CacheIndex_t411_marshaled& marshaled);
