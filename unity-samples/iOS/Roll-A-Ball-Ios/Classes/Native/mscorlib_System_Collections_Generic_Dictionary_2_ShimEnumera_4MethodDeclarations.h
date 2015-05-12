﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
struct ShimEnumerator_t2938;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t56;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ShimEnumerator__ctor_m14435 (ShimEnumerator_t2938 * __this, Dictionary_2_t56 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::MoveNext()
 bool ShimEnumerator_MoveNext_m14436 (ShimEnumerator_t2938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Entry()
 DictionaryEntry_t1576  ShimEnumerator_get_Entry_m14437 (ShimEnumerator_t2938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Key()
 Object_t * ShimEnumerator_get_Key_m14438 (ShimEnumerator_t2938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Value()
 Object_t * ShimEnumerator_get_Value_m14439 (ShimEnumerator_t2938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Current()
 Object_t * ShimEnumerator_get_Current_m14440 (ShimEnumerator_t2938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;