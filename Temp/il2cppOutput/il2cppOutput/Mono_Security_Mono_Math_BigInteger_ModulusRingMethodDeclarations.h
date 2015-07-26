#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t707;
// Mono.Math.BigInteger
struct BigInteger_t706;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3296 (ModulusRing_t707 * __this, BigInteger_t706 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3297 (ModulusRing_t707 * __this, BigInteger_t706 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t706 * ModulusRing_Multiply_m3298 (ModulusRing_t707 * __this, BigInteger_t706 * ___a, BigInteger_t706 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t706 * ModulusRing_Difference_m3299 (ModulusRing_t707 * __this, BigInteger_t706 * ___a, BigInteger_t706 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t706 * ModulusRing_Pow_m3300 (ModulusRing_t707 * __this, BigInteger_t706 * ___a, BigInteger_t706 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t706 * ModulusRing_Pow_m3301 (ModulusRing_t707 * __this, uint32_t ___b, BigInteger_t706 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
