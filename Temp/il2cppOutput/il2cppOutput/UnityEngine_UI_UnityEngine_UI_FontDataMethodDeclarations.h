﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontData
struct FontData_t104;
// UnityEngine.Font
struct Font_t103;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"

// System.Void UnityEngine.UI.FontData::.ctor()
extern "C" void FontData__ctor_m422 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m423 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m424 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.FontData UnityEngine.UI.FontData::get_defaultFontData()
extern "C" FontData_t104 * FontData_get_defaultFontData_m425 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.FontData::get_font()
extern "C" Font_t103 * FontData_get_font_m426 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_font(UnityEngine.Font)
extern "C" void FontData_set_font_m427 (FontData_t104 * __this, Font_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_fontSize()
extern "C" int32_t FontData_get_fontSize_m428 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontSize(System.Int32)
extern "C" void FontData_set_fontSize_m429 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.FontData::get_fontStyle()
extern "C" int32_t FontData_get_fontStyle_m430 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontStyle(UnityEngine.FontStyle)
extern "C" void FontData_set_fontStyle_m431 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_bestFit()
extern "C" bool FontData_get_bestFit_m432 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_bestFit(System.Boolean)
extern "C" void FontData_set_bestFit_m433 (FontData_t104 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_minSize()
extern "C" int32_t FontData_get_minSize_m434 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_minSize(System.Int32)
extern "C" void FontData_set_minSize_m435 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_maxSize()
extern "C" int32_t FontData_get_maxSize_m436 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_maxSize(System.Int32)
extern "C" void FontData_set_maxSize_m437 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.FontData::get_alignment()
extern "C" int32_t FontData_get_alignment_m438 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_alignment(UnityEngine.TextAnchor)
extern "C" void FontData_set_alignment_m439 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_richText()
extern "C" bool FontData_get_richText_m440 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_richText(System.Boolean)
extern "C" void FontData_set_richText_m441 (FontData_t104 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::get_horizontalOverflow()
extern "C" int32_t FontData_get_horizontalOverflow_m442 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void FontData_set_horizontalOverflow_m443 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::get_verticalOverflow()
extern "C" int32_t FontData_get_verticalOverflow_m444 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void FontData_set_verticalOverflow_m445 (FontData_t104 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.FontData::get_lineSpacing()
extern "C" float FontData_get_lineSpacing_m446 (FontData_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_lineSpacing(System.Single)
extern "C" void FontData_set_lineSpacing_m447 (FontData_t104 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;