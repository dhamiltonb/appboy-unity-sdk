﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.String>
struct Predicate_1_t2769;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m13235(__this, ___object, ___method, method) (void)Predicate_1__ctor_m13085_gshared((Predicate_1_t2771 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// System.Boolean System.Predicate`1<System.String>::Invoke(T)
#define Predicate_1_Invoke_m13236(__this, ___obj, method) (bool)Predicate_1_Invoke_m13086_gshared((Predicate_1_t2771 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13237(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m13087_gshared((Predicate_1_t2771 *)__this, (Object_t *)___obj, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.String>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13238(__this, ___result, method) (bool)Predicate_1_EndInvoke_m13088_gshared((Predicate_1_t2771 *)__this, (Object_t *)___result, method)