#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemInfo_Ammo

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemInfo_Ammo.UI_ItemInfo_Ammo_C
// 0x0018 (0x02D0 - 0x02B8)
class UUI_ItemInfo_Ammo_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         RichTextBlock_0;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CompatibleWeaponsList;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ItemInfo_Ammo(int32 EntryPoint);
	void Update(class UClass* AmmoClass);
	void MakeCompatibleWeaponsList(TArray<class UClass*>& CompatibleWeapons, class FText* WeaponListOutput);
	void FindCompatibleWeapons(class UClass* AmmoItem, TArray<class UClass*>* CompatibleWpnClasses);
	void SetTheCompatibleWeaponList(const class FText& CompatibleWeaponList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemInfo_Ammo_C">();
	}
	static class UUI_ItemInfo_Ammo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemInfo_Ammo_C>();
	}
};
static_assert(alignof(UUI_ItemInfo_Ammo_C) == 0x000008, "Wrong alignment on UUI_ItemInfo_Ammo_C");
static_assert(sizeof(UUI_ItemInfo_Ammo_C) == 0x0002D0, "Wrong size on UUI_ItemInfo_Ammo_C");
static_assert(offsetof(UUI_ItemInfo_Ammo_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_ItemInfo_Ammo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_Ammo_C, RichTextBlock_0) == 0x0002C0, "Member 'UUI_ItemInfo_Ammo_C::RichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_Ammo_C, Text_CompatibleWeaponsList) == 0x0002C8, "Member 'UUI_ItemInfo_Ammo_C::Text_CompatibleWeaponsList' has a wrong offset!");

}
