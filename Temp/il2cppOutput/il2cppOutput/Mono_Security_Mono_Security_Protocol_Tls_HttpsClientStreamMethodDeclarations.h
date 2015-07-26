#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t791;
// System.IO.Stream
struct Stream_t793;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t812;
// System.Net.HttpWebRequest
struct HttpWebRequest_t788;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t813;
// System.Int32[]
struct Int32U5BU5D_t831;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t832;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m3830 (HttpsClientStream_t791 * __this, Stream_t793 * ___stream, X509CertificateCollection_t812 * ___clientCertificates, HttpWebRequest_t788 * ___request, ByteU5BU5D_t408* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m3831 (HttpsClientStream_t791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m3832 (HttpsClientStream_t791 * __this, X509Certificate_t813 * ___certificate, Int32U5BU5D_t831* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t813 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3833 (Object_t * __this /* static, unused */, X509CertificateCollection_t812 * ___clientCerts, X509Certificate_t813 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t812 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t832 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3834 (Object_t * __this /* static, unused */, X509Certificate_t813 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
