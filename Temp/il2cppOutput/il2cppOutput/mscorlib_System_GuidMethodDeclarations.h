#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid
struct Guid_t655;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t268;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1687;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
extern "C" void Guid__ctor_m9769 (Guid_t655 * __this, ByteU5BU5D_t408* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Guid__ctor_m9770 (Guid_t655 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
extern "C" void Guid__cctor_m9771 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
extern "C" void Guid_CheckNull_m9772 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern "C" void Guid_CheckLength_m9773 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern "C" void Guid_CheckArray_m9774 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C" int32_t Guid_Compare_m9775 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
extern "C" int32_t Guid_CompareTo_m9776 (Guid_t655 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
extern "C" bool Guid_Equals_m9777 (Guid_t655 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
extern "C" int32_t Guid_CompareTo_m9778 (Guid_t655 * __this, Guid_t655  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
extern "C" bool Guid_Equals_m9779 (Guid_t655 * __this, Guid_t655  ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
extern "C" int32_t Guid_GetHashCode_m9780 (Guid_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
extern "C" uint16_t Guid_ToHex_m9781 (Object_t * __this /* static, unused */, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C" Guid_t655  Guid_NewGuid_m9782 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern "C" void Guid_AppendInt_m9783 (Object_t * __this /* static, unused */, StringBuilder_t268 * ___builder, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern "C" void Guid_AppendShort_m9784 (Object_t * __this /* static, unused */, StringBuilder_t268 * ___builder, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern "C" void Guid_AppendByte_m9785 (Object_t * __this /* static, unused */, StringBuilder_t268 * ___builder, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Guid_BaseToString_m9786 (Guid_t655 * __this, bool ___h, bool ___p, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C" String_t* Guid_ToString_m9787 (Guid_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C" String_t* Guid_ToString_m3183 (Guid_t655 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Guid_ToString_m9788 (Guid_t655 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
