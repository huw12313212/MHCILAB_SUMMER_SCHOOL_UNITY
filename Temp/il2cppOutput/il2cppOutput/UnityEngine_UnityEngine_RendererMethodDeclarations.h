#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t25;
// UnityEngine.Material
struct Material_t26;

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t26 * Renderer_get_material_m71 (Renderer_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1392 (Renderer_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1393 (Renderer_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
