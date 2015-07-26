#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t1496;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
extern "C" void RNGCryptoServiceProvider__ctor_m8731 (RNGCryptoServiceProvider_t1496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
extern "C" void RNGCryptoServiceProvider__cctor_m8732 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
extern "C" void RNGCryptoServiceProvider_Check_m8733 (RNGCryptoServiceProvider_t1496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
extern "C" bool RNGCryptoServiceProvider_RngOpen_m8734 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngInitialize_m8735 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngGetBytes_m8736 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t408* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
extern "C" void RNGCryptoServiceProvider_RngClose_m8737 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetBytes_m8738 (RNGCryptoServiceProvider_t1496 * __this, ByteU5BU5D_t408* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetNonZeroBytes_m8739 (RNGCryptoServiceProvider_t1496 * __this, ByteU5BU5D_t408* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
extern "C" void RNGCryptoServiceProvider_Finalize_m8740 (RNGCryptoServiceProvider_t1496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
