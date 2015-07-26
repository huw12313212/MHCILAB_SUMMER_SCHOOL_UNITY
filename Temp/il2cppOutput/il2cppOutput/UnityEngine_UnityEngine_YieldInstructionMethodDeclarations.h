#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t341;
struct YieldInstruction_t341_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2462 (YieldInstruction_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t341_marshal(const YieldInstruction_t341& unmarshaled, YieldInstruction_t341_marshaled& marshaled);
void YieldInstruction_t341_marshal_back(const YieldInstruction_t341_marshaled& marshaled, YieldInstruction_t341& unmarshaled);
void YieldInstruction_t341_marshal_cleanup(YieldInstruction_t341_marshaled& marshaled);
