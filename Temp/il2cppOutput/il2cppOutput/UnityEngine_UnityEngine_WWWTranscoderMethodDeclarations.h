#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t410;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t584;

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" void WWWTranscoder__cctor_m2326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" ByteU5BU5D_t408* WWWTranscoder_Byte2Hex_m2327 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t408* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" ByteU5BU5D_t408* WWWTranscoder_URLEncode_m2328 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___toEncode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_QPEncode_m2329 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t584 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C" ByteU5BU5D_t408* WWWTranscoder_Encode_m2330 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t408* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m2331 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" bool WWWTranscoder_SevenBitClean_m2332 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t584 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m2333 (Object_t * __this /* static, unused */, ByteU5BU5D_t408* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
