#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t500;
// System.Object
#include "mscorlib_System_Object.h"
// System.MonoTypeInfo
struct  MonoTypeInfo_t1636  : public Object_t
{
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t500 * ___default_ctor_1;
};
