﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int64
struct Int64_t637;
// System.IFormatProvider
struct IFormatProvider_t1687;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t273;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Int64_System_IConvertible_ToBoolean_m5316 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Int64_System_IConvertible_ToByte_m5317 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Int64_System_IConvertible_ToChar_m5318 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t368  Int64_System_IConvertible_ToDateTime_m5319 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t639  Int64_System_IConvertible_ToDecimal_m5320 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Int64_System_IConvertible_ToDouble_m5321 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Int64_System_IConvertible_ToInt16_m5322 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Int64_System_IConvertible_ToInt32_m5323 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Int64_System_IConvertible_ToInt64_m5324 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Int64_System_IConvertible_ToSByte_m5325 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Int64_System_IConvertible_ToSingle_m5326 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Int64_System_IConvertible_ToType_m5327 (int64_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Int64_System_IConvertible_ToUInt16_m5328 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Int64_System_IConvertible_ToUInt32_m5329 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Int64_System_IConvertible_ToUInt64_m5330 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Object)
extern "C" int32_t Int64_CompareTo_m5331 (int64_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Object)
extern "C" bool Int64_Equals_m5332 (int64_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::GetHashCode()
extern "C" int32_t Int64_GetHashCode_m5333 (int64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Int64)
extern "C" int32_t Int64_CompareTo_m5334 (int64_t* __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Int64)
extern "C" bool Int64_Equals_m5335 (int64_t* __this, int64_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Boolean,System.Int64&,System.Exception&)
extern "C" bool Int64_Parse_m5336 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int64_t* ___result, Exception_t273 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
extern "C" int64_t Int64_Parse_m5337 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int64&,System.Exception&)
extern "C" bool Int64_Parse_m5338 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int64_t* ___result, Exception_t273 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String)
extern "C" int64_t Int64_Parse_m5339 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int64_t Int64_Parse_m5340 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" bool Int64_TryParse_m5341 (Object_t * __this /* static, unused */, String_t* ___s, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" bool Int64_TryParse_m3161 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
extern "C" String_t* Int64_ToString_m5194 (int64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C" String_t* Int64_ToString_m3162 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String)
extern "C" String_t* Int64_ToString_m5342 (int64_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Int64_ToString_m5343 (int64_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;