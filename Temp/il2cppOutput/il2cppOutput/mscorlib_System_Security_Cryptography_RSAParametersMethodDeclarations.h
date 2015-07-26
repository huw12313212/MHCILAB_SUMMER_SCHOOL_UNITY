﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t816;
struct RSAParameters_t816_marshaled;

void RSAParameters_t816_marshal(const RSAParameters_t816& unmarshaled, RSAParameters_t816_marshaled& marshaled);
void RSAParameters_t816_marshal_back(const RSAParameters_t816_marshaled& marshaled, RSAParameters_t816& unmarshaled);
void RSAParameters_t816_marshal_cleanup(RSAParameters_t816_marshaled& marshaled);