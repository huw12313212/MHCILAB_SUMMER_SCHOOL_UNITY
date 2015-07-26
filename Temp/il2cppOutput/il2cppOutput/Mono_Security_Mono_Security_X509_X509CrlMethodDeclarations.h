#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t748;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t741;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t747;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t742;
// System.Security.Cryptography.DSA
struct DSA_t740;
// System.Security.Cryptography.RSA
struct RSA_t734;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t832;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m3581 (X509Crl_t748 * __this, ByteU5BU5D_t408* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m3582 (X509Crl_t748 * __this, ByteU5BU5D_t408* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t741 * X509Crl_get_Extensions_m3583 (X509Crl_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t408* X509Crl_get_Hash_m3584 (X509Crl_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m3585 (X509Crl_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t368  X509Crl_get_NextUpdate_m3586 (X509Crl_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m3587 (X509Crl_t748 * __this, ByteU5BU5D_t408* ___array1, ByteU5BU5D_t408* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t747 * X509Crl_GetCrlEntry_m3588 (X509Crl_t748 * __this, X509Certificate_t742 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t747 * X509Crl_GetCrlEntry_m3589 (X509Crl_t748 * __this, ByteU5BU5D_t408* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m3590 (X509Crl_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m3591 (X509Crl_t748 * __this, DSA_t740 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m3592 (X509Crl_t748 * __this, RSA_t734 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m3593 (X509Crl_t748 * __this, AsymmetricAlgorithm_t832 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
