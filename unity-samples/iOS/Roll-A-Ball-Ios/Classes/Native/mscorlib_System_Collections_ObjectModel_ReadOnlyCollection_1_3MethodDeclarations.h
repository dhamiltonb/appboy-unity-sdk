﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>
struct ReadOnlyCollection_1_t2826;
// Appboy.Models.Cards.Card
struct Card_t47;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<Appboy.Models.Cards.Card>
struct IList_1_t2830;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// Appboy.Models.Cards.Card[]
struct CardU5BU5D_t2822;
// System.Collections.Generic.IEnumerator`1<Appboy.Models.Cards.Card>
struct IEnumerator_1_t2824;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m13463(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m12981_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13464(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12982_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13465(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12983_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13466(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12984_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13467(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12985_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13468(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12986_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13469(__this, ___index, method) (Card_t47 *)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12987_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13470(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12988_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13471(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12989_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13472(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12990_gshared((ReadOnlyCollection_1_t2773 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13473(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12991_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m13474(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m12992_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m13475(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m12993_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m13476(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m12994_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13477(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12995_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m13478(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m12996_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m13479(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m12997_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13480(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12998_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13481(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12999_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13482(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13000_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13483(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13001_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13484(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13002_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m13485(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m13003_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m13486(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m13004_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::Contains(T)
#define ReadOnlyCollection_1_Contains_m13487(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m13005_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m13488(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m13006_gshared((ReadOnlyCollection_1_t2773 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m13489(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m13007_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m13490(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m13008_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::get_Count()
#define ReadOnlyCollection_1_get_Count_m13491(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m13009_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m13492(__this, ___index, method) (Card_t47 *)ReadOnlyCollection_1_get_Item_m13010_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)