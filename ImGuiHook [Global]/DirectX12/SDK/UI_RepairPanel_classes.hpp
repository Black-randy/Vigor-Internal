#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RepairPanel

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RepairPanel.UI_RepairPanel_C
// 0x0088 (0x0340 - 0x02B8)
class UUI_RepairPanel_C final : public UFlameWidget
{
public:
	class UTextBlock*                             NeededImprovements;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RepairImage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RepairName;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TextRequiredImprovements;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleShelterLevel;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RepairToShelterLevel;                              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URichTextBlock*                         TextRequiredImprovements_0;                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, TSoftObjectPtr<class UTexture2D>> ShelterLevelToTexture;                             // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class AStash* GetStash();
	void UpdateUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RepairPanel_C">();
	}
	static class UUI_RepairPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RepairPanel_C>();
	}
};
static_assert(alignof(UUI_RepairPanel_C) == 0x000008, "Wrong alignment on UUI_RepairPanel_C");
static_assert(sizeof(UUI_RepairPanel_C) == 0x000340, "Wrong size on UUI_RepairPanel_C");
static_assert(offsetof(UUI_RepairPanel_C, NeededImprovements) == 0x0002B8, "Member 'UUI_RepairPanel_C::NeededImprovements' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, RepairImage) == 0x0002C0, "Member 'UUI_RepairPanel_C::RepairImage' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, RepairName) == 0x0002C8, "Member 'UUI_RepairPanel_C::RepairName' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, TextRequiredImprovements) == 0x0002D0, "Member 'UUI_RepairPanel_C::TextRequiredImprovements' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, TitleShelterLevel) == 0x0002D8, "Member 'UUI_RepairPanel_C::TitleShelterLevel' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, RepairToShelterLevel) == 0x0002E0, "Member 'UUI_RepairPanel_C::RepairToShelterLevel' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, TextRequiredImprovements_0) == 0x0002E8, "Member 'UUI_RepairPanel_C::TextRequiredImprovements_0' has a wrong offset!");
static_assert(offsetof(UUI_RepairPanel_C, ShelterLevelToTexture) == 0x0002F0, "Member 'UUI_RepairPanel_C::ShelterLevelToTexture' has a wrong offset!");

}

