﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4469;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m24327 (Transform_1_t4469 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1576  Transform_1_Invoke_m24328 (Transform_1_t4469 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m24329 (Transform_1_t4469 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1576  Transform_1_EndInvoke_m24330 (Transform_1_t4469 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;