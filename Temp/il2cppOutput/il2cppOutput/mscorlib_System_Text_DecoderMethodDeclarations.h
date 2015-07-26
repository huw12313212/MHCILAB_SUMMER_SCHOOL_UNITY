#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1209;
// System.Text.DecoderFallback
struct DecoderFallback_t1543;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1544;
// System.Byte[]
struct ByteU5BU5D_t408;
// System.Char[]
struct CharU5BU5D_t149;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m9013 (Decoder_t1209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m9014 (Decoder_t1209 * __this, DecoderFallback_t1543 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1544 * Decoder_get_FallbackBuffer_m9015 (Decoder_t1209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
