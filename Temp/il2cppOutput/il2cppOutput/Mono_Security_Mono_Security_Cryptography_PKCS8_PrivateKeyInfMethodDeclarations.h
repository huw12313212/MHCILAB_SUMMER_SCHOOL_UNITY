#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t728;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Security.Cryptography.RSA
struct RSA_t734;
// System.Security.Cryptography.DSA
struct DSA_t740;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m3445 (PrivateKeyInfo_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m3446 (PrivateKeyInfo_t728 * __this, ByteU5BU5D_t408* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t408* PrivateKeyInfo_get_PrivateKey_m3447 (PrivateKeyInfo_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m3448 (PrivateKeyInfo_t728 * __this, ByteU5BU5D_t408* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t408* PrivateKeyInfo_RemoveLeadingZero_m3449 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t408* PrivateKeyInfo_Normalize_m3450 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t734 * PrivateKeyInfo_DecodeRSA_m3451 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t740 * PrivateKeyInfo_DecodeDSA_m3452 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___privateKey, DSAParameters_t844  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
