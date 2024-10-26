#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharityBox_ClaimRewards

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CharityBox_ClaimRewards.UI_CharityBox_ClaimRewards_C
// 0x0070 (0x0360 - 0x02F0)
class UUI_CharityBox_ClaimRewards_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        FlameTextBlock_Fulfilled;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_76;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_143;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCloudCharityBoxSeasonMilestoneInfo> MilestoneInfo;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         DonatedFood;                                       // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Milestones;                                        // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharityBox_C*                       Actor;                                             // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 SeasonName;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CharityBox_ClaimRewards(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void FillData(TArray<struct FCloudCharityBoxSeasonMilestoneInfo>& MilestoneInfo_0, int32 DonatedFood_0, int32* FulfilledMilestones);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CharityBox_ClaimRewards_C">();
	}
	static class UUI_CharityBox_ClaimRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CharityBox_ClaimRewards_C>();
	}
};
static_assert(alignof(UUI_CharityBox_ClaimRewards_C) == 0x000008, "Wrong alignment on UUI_CharityBox_ClaimRewards_C");
static_assert(sizeof(UUI_CharityBox_ClaimRewards_C) == 0x000360, "Wrong size on UUI_CharityBox_ClaimRewards_C");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_CharityBox_ClaimRewards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, FlameTextBlock_Fulfilled) == 0x0002F8, "Member 'UUI_CharityBox_ClaimRewards_C::FlameTextBlock_Fulfilled' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, Image_76) == 0x000300, "Member 'UUI_CharityBox_ClaimRewards_C::Image_76' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, Image_143) == 0x000308, "Member 'UUI_CharityBox_ClaimRewards_C::Image_143' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, Overlay_0) == 0x000310, "Member 'UUI_CharityBox_ClaimRewards_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, UI_FlameSafezone) == 0x000318, "Member 'UUI_CharityBox_ClaimRewards_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, UI_GamepadActionWidget) == 0x000320, "Member 'UUI_CharityBox_ClaimRewards_C::UI_GamepadActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, VerticalBox_Content) == 0x000328, "Member 'UUI_CharityBox_ClaimRewards_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, MilestoneInfo) == 0x000330, "Member 'UUI_CharityBox_ClaimRewards_C::MilestoneInfo' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, DonatedFood) == 0x000340, "Member 'UUI_CharityBox_ClaimRewards_C::DonatedFood' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, Milestones) == 0x000344, "Member 'UUI_CharityBox_ClaimRewards_C::Milestones' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, Actor) == 0x000348, "Member 'UUI_CharityBox_ClaimRewards_C::Actor' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_ClaimRewards_C, SeasonName) == 0x000350, "Member 'UUI_CharityBox_ClaimRewards_C::SeasonName' has a wrong offset!");

}

