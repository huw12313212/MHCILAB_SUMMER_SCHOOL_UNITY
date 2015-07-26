#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t908;
// System.Net.ServicePoint
struct ServicePoint_t870;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t813;
// System.Net.WebRequest
struct WebRequest_t874;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m4386 (DefaultCertificatePolicy_t908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m4387 (DefaultCertificatePolicy_t908 * __this, ServicePoint_t870 * ___point, X509Certificate_t813 * ___certificate, WebRequest_t874 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
