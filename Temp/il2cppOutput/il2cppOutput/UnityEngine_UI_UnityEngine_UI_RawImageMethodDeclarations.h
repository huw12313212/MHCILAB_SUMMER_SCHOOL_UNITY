#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.RawImage
struct RawImage_t161;
// UnityEngine.Texture
struct Texture_t160;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t154;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m738 (RawImage_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t160 * RawImage_get_mainTexture_m739 (RawImage_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t160 * RawImage_get_texture_m740 (RawImage_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m741 (RawImage_t161 * __this, Texture_t160 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t20  RawImage_get_uvRect_m742 (RawImage_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m743 (RawImage_t161 * __this, Rect_t20  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m744 (RawImage_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void RawImage_OnFillVBO_m745 (RawImage_t161 * __this, List_1_t154 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
