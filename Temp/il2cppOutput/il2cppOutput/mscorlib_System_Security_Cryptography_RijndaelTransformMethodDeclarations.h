#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1499;
// System.Security.Cryptography.Rijndael
struct Rijndael_t867;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.UInt32[]
struct UInt32U5BU5D_t689;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m8775 (RijndaelTransform_t1499 * __this, Rijndael_t867 * ___algo, bool ___encryption, ByteU5BU5D_t408* ___key, ByteU5BU5D_t408* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m8776 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m8777 (RijndaelTransform_t1499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m8778 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___input, ByteU5BU5D_t408* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m8779 (RijndaelTransform_t1499 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m8780 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m8781 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m8782 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m8783 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m8784 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m8785 (RijndaelTransform_t1499 * __this, ByteU5BU5D_t408* ___indata, ByteU5BU5D_t408* ___outdata, UInt32U5BU5D_t689* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
