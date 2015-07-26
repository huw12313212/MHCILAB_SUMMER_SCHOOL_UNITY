#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t734;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t725;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t389;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t799  : public AsymmetricSignatureFormatter_t800
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t734 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t725 * ___hash_1;
};
struct RSASslSignatureFormatter_t799_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t389 * ___U3CU3Ef__switchU24map16_2;
};
