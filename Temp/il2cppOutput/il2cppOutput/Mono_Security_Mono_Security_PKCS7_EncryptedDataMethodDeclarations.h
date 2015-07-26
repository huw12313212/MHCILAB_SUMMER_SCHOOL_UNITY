#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t718;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t717;
// System.Byte[]
struct ByteU5BU5D_t408;
// Mono.Security.ASN1
struct ASN1_t714;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3403 (EncryptedData_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3404 (EncryptedData_t718 * __this, ASN1_t714 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t717 * EncryptedData_get_EncryptionAlgorithm_m3405 (EncryptedData_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t408* EncryptedData_get_EncryptedContent_m3406 (EncryptedData_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
