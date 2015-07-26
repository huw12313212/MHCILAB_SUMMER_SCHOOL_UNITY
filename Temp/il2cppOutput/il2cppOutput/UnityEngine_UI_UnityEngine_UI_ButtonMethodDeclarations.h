#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t94;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t93;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t72;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t31;
// System.Collections.IEnumerator
struct IEnumerator_t253;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m384 (Button_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t93 * Button_get_onClick_m385 (Button_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m386 (Button_t94 * __this, ButtonClickedEvent_t93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m387 (Button_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m388 (Button_t94 * __this, PointerEventData_t72 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m389 (Button_t94 * __this, BaseEventData_t31 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m390 (Button_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
