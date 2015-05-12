﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t2189;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
 void EvidenceEnumerator__ctor_m10981 (EvidenceEnumerator_t2189 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
 bool EvidenceEnumerator_MoveNext_m10982 (EvidenceEnumerator_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
 Object_t * EvidenceEnumerator_get_Current_m10983 (EvidenceEnumerator_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;