﻿#pragma once
#include <stdint.h>
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t370;
// UnityEngineInternal.GenericStack
struct GenericStack_t367;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t371  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t370 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t367 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t370 * ___windows_2;
};