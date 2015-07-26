#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t1402  : public Attribute_t400
{
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	Object_t * ___ReflectInfo_2;
};
