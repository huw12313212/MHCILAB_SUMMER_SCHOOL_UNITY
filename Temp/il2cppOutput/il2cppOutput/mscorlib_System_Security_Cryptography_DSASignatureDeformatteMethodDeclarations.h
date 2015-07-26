#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t857;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t832;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t408;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m8619 (DSASignatureDeformatter_t857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m4214 (DSASignatureDeformatter_t857 * __this, AsymmetricAlgorithm_t832 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m8620 (DSASignatureDeformatter_t857 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m8621 (DSASignatureDeformatter_t857 * __this, AsymmetricAlgorithm_t832 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m8622 (DSASignatureDeformatter_t857 * __this, ByteU5BU5D_t408* ___rgbHash, ByteU5BU5D_t408* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
