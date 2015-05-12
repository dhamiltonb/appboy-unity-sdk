﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1559;
// System.Text.RegularExpressions.Match
struct Match_t1560;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1114;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
 void MatchCollection__ctor_m7207 (MatchCollection_t1559 * __this, Match_t1560 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
 int32_t MatchCollection_get_Count_m6744 (MatchCollection_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
 bool MatchCollection_get_IsSynchronized_m7208 (MatchCollection_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
 Match_t1560 * MatchCollection_get_Item_m6745 (MatchCollection_t1559 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
 Object_t * MatchCollection_get_SyncRoot_m7209 (MatchCollection_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
 void MatchCollection_CopyTo_m7210 (MatchCollection_t1559 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
 Object_t * MatchCollection_GetEnumerator_m7211 (MatchCollection_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
 bool MatchCollection_TryToGet_m7212 (MatchCollection_t1559 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
 Object_t * MatchCollection_get_FullList_m7213 (MatchCollection_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;