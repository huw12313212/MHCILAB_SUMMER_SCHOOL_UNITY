#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t22;
// UnityEngine.GUISkin
struct GUISkin_t366;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t305;
// UnityEngine.GUIStyle
struct GUIStyle_t373;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t21;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m1937 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m1938 (Object_t * __this /* static, unused */, DateTime_t368  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m1939 (Object_t * __this /* static, unused */, GUISkin_t366 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t366 * GUI_get_skin_m1940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m1941 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m62 (Object_t * __this /* static, unused */, Rect_t20  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m1942 (Object_t * __this /* static, unused */, Rect_t20  ___position, GUIContent_t305 * ___content, GUIStyle_t373 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m1943 (Object_t * __this /* static, unused */, Rect_t20  ___position, GUIContent_t305 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m1944 (Object_t * __this /* static, unused */, Rect_t20 * ___position, GUIContent_t305 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t20  GUI_Window_m57 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t20  ___clientRect, WindowFunction_t21 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m1945 (Object_t * __this /* static, unused */, WindowFunction_t21 * ___func, int32_t ___id, GUISkin_t366 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t373 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t20  GUI_DoWindow_m1946 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t20  ___clientRect, WindowFunction_t21 * ___func, GUIContent_t305 * ___title, GUIStyle_t373 * ___style, GUISkin_t366 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t20  GUI_INTERNAL_CALL_DoWindow_m1947 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t20 * ___clientRect, WindowFunction_t21 * ___func, GUIContent_t305 * ___title, GUIStyle_t373 * ___style, GUISkin_t366 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
