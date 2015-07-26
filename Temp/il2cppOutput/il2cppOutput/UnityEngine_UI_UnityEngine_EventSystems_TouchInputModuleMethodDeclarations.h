#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t82;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t72;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C" void TouchInputModule__ctor_m323 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C" bool TouchInputModule_get_allowActivationOnStandalone_m324 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C" void TouchInputModule_set_allowActivationOnStandalone_m325 (TouchInputModule_t82 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C" void TouchInputModule_UpdateModule_m326 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C" bool TouchInputModule_IsModuleSupported_m327 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C" bool TouchInputModule_ShouldActivateModule_m328 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C" bool TouchInputModule_UseFakeInput_m329 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C" void TouchInputModule_Process_m330 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C" void TouchInputModule_FakeTouches_m331 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C" void TouchInputModule_ProcessTouchEvents_m332 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C" void TouchInputModule_ProcessTouchPress_m333 (TouchInputModule_t82 * __this, PointerEventData_t72 * ___pointerEvent, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C" void TouchInputModule_DeactivateModule_m334 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C" String_t* TouchInputModule_ToString_m335 (TouchInputModule_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
