#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OnboardingLoginRewardsInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_BattlePassLevelRewardFull_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_OnboardingLoginRewardsInfo.UI_OnboardingLoginRewardsInfo_C
// 0x0038 (0x0298 - 0x0260)
class UUI_OnboardingLoginRewardsInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        ItemLabel;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemGridSlotBattlePass_C*           UI_ItemGridSlotBattlePass;                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_BattlePassLevelRewardFull           Reward;                                            // 0x0278(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_OnboardingLoginRewardsInfo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_OnboardingLoginRewardsInfo_C">();
	}
	static class UUI_OnboardingLoginRewardsInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_OnboardingLoginRewardsInfo_C>();
	}
};
static_assert(alignof(UUI_OnboardingLoginRewardsInfo_C) == 0x000008, "Wrong alignment on UUI_OnboardingLoginRewardsInfo_C");
static_assert(sizeof(UUI_OnboardingLoginRewardsInfo_C) == 0x000298, "Wrong size on UUI_OnboardingLoginRewardsInfo_C");
static_assert(offsetof(UUI_OnboardingLoginRewardsInfo_C, UberGraphFrame) == 0x000260, "Member 'UUI_OnboardingLoginRewardsInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsInfo_C, ItemLabel) == 0x000268, "Member 'UUI_OnboardingLoginRewardsInfo_C::ItemLabel' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsInfo_C, UI_ItemGridSlotBattlePass) == 0x000270, "Member 'UUI_OnboardingLoginRewardsInfo_C::UI_ItemGridSlotBattlePass' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsInfo_C, Reward) == 0x000278, "Member 'UUI_OnboardingLoginRewardsInfo_C::Reward' has a wrong offset!");

}
