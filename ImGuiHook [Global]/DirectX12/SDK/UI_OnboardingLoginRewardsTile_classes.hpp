#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OnboardingLoginRewardsTile

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_OnboardingLoginRewardTileState_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_OnboardingLoginRewardsTile.UI_OnboardingLoginRewardsTile_C
// 0x0090 (0x0348 - 0x02B8)
class UUI_OnboardingLoginRewardsTile_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_202;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OwnedOverlay;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrame;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrameSecondary;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrameShadow;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PremiumFlare;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardIconBox;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TileLabel;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShelterTile_C*                      UI_ShelterTile;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsTileClaimed;                                     // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RewardDay;                                         // 0x032C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FCloudItemInfo>                 Rewards;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_OnboardingLoginRewardTileState              RewardState;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_OnboardingLoginRewardsTile(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize_Reward(int32 SceneCaptureIndex, const TArray<struct FCloudItemInfo>& TierRewards);
	void Set_Tile_Claimed();
	void Set_As_Active_Reward();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_OnboardingLoginRewardsTile_C">();
	}
	static class UUI_OnboardingLoginRewardsTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_OnboardingLoginRewardsTile_C>();
	}
};
static_assert(alignof(UUI_OnboardingLoginRewardsTile_C) == 0x000008, "Wrong alignment on UUI_OnboardingLoginRewardsTile_C");
static_assert(sizeof(UUI_OnboardingLoginRewardsTile_C) == 0x000348, "Wrong size on UUI_OnboardingLoginRewardsTile_C");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_OnboardingLoginRewardsTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, FadeOut) == 0x0002C0, "Member 'UUI_OnboardingLoginRewardsTile_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, FadeIn) == 0x0002C8, "Member 'UUI_OnboardingLoginRewardsTile_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, Image_0) == 0x0002D0, "Member 'UUI_OnboardingLoginRewardsTile_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, Image_1) == 0x0002D8, "Member 'UUI_OnboardingLoginRewardsTile_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, Image_202) == 0x0002E0, "Member 'UUI_OnboardingLoginRewardsTile_C::Image_202' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, OwnedOverlay) == 0x0002E8, "Member 'UUI_OnboardingLoginRewardsTile_C::OwnedOverlay' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, PhotoFrame) == 0x0002F0, "Member 'UUI_OnboardingLoginRewardsTile_C::PhotoFrame' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, PhotoFrameSecondary) == 0x0002F8, "Member 'UUI_OnboardingLoginRewardsTile_C::PhotoFrameSecondary' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, PhotoFrameShadow) == 0x000300, "Member 'UUI_OnboardingLoginRewardsTile_C::PhotoFrameShadow' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, PremiumFlare) == 0x000308, "Member 'UUI_OnboardingLoginRewardsTile_C::PremiumFlare' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, RewardIconBox) == 0x000310, "Member 'UUI_OnboardingLoginRewardsTile_C::RewardIconBox' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, TileLabel) == 0x000318, "Member 'UUI_OnboardingLoginRewardsTile_C::TileLabel' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, UI_ShelterTile) == 0x000320, "Member 'UUI_OnboardingLoginRewardsTile_C::UI_ShelterTile' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, IsTileClaimed) == 0x000328, "Member 'UUI_OnboardingLoginRewardsTile_C::IsTileClaimed' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, RewardDay) == 0x00032C, "Member 'UUI_OnboardingLoginRewardsTile_C::RewardDay' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, Rewards) == 0x000330, "Member 'UUI_OnboardingLoginRewardsTile_C::Rewards' has a wrong offset!");
static_assert(offsetof(UUI_OnboardingLoginRewardsTile_C, RewardState) == 0x000340, "Member 'UUI_OnboardingLoginRewardsTile_C::RewardState' has a wrong offset!");

}
