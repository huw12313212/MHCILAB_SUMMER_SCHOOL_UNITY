#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1121;
// Mono.Math.BigInteger
struct BigInteger_t1120;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6240 (ModulusRing_t1121 * __this, BigInteger_t1120 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6241 (ModulusRing_t1121 * __this, BigInteger_t1120 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Multiply_m6242 (ModulusRing_t1121 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Difference_m6243 (ModulusRing_t1121 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Pow_m6244 (ModulusRing_t1121 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Pow_m6245 (ModulusRing_t1121 * __this, uint32_t ___b, BigInteger_t1120 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
