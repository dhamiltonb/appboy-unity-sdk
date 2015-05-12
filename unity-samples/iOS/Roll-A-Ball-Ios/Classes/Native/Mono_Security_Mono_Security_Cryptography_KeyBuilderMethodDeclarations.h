﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t1394;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1377;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
 RandomNumberGenerator_t1377 * KeyBuilder_get_Rng_m5736 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
 ByteU5BU5D_t112* KeyBuilder_Key_m5737 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;