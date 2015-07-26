#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1150;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1149;
// System.Byte[]
struct ByteU5BU5D_t408;
// Mono.Security.ASN1
struct ASN1_t1137;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m6553 (EncryptedData_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m6554 (EncryptedData_t1150 * __this, ASN1_t1137 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1149 * EncryptedData_get_EncryptionAlgorithm_m6555 (EncryptedData_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t408* EncryptedData_get_EncryptedContent_m6556 (EncryptedData_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
