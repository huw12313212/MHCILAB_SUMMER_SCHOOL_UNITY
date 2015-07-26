#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t932;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t930;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t832;
// System.Security.Cryptography.Oid
struct Oid_t931;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t742;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Security.Cryptography.DSA
struct DSA_t740;
// System.Security.Cryptography.RSA
struct RSA_t734;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4503 (PublicKey_t932 * __this, X509Certificate_t742 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t930 * PublicKey_get_EncodedKeyValue_m4504 (PublicKey_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t930 * PublicKey_get_EncodedParameters_m4505 (PublicKey_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t832 * PublicKey_get_Key_m4506 (PublicKey_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t931 * PublicKey_get_Oid_m4507 (PublicKey_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t408* PublicKey_GetUnsignedBigInteger_m4508 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t740 * PublicKey_DecodeDSA_m4509 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___rawPublicKey, ByteU5BU5D_t408* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t734 * PublicKey_DecodeRSA_m4510 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
