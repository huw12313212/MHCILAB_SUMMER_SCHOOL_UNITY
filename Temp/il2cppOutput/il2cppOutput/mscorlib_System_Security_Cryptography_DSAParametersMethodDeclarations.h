#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t844;
struct DSAParameters_t844_marshaled;

void DSAParameters_t844_marshal(const DSAParameters_t844& unmarshaled, DSAParameters_t844_marshaled& marshaled);
void DSAParameters_t844_marshal_back(const DSAParameters_t844_marshaled& marshaled, DSAParameters_t844& unmarshaled);
void DSAParameters_t844_marshal_cleanup(DSAParameters_t844_marshaled& marshaled);
