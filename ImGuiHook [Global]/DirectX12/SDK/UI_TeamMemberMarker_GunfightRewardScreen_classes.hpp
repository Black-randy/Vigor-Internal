#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TeamMemberMarker_GunfightRewardScreen

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "Struct_GunFightStatistics_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TeamMemberMarker_GunfightRewardScreen.UI_TeamMemberMarker_GunfightRewardScreen_C
// 0x0110 (0x03C8 - 0x02B8)
class UUI_TeamMemberMarker_GunfightRewardScreen_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WidgetFadeIn;                                      // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ProgressBarFill_1;                                 // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Crown;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Flare;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBackground;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_55;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_ScoreCounter;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Widgetcontainer;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCameraComponent*                       CameraThatSeesThis;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       WidgetComponent;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Update_rate;                                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_GunFightStatistics             Statistics;                                        // 0x0318(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         CurrentScorePercentDisplayed;                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasMVP;                                           // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_GunFight_C*        OwningGunfightController;                          // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ScorePresentationEnded;                            // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AnimActive;                                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CurrentAnimation;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToFill;                                        // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CurrentShownScoreChanged;                          // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ScoreBoostCount;                                   // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 ScoreBoostCountToScoreMultiplier;                  // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ScorePresentationEnded__DelegateSignature(class UUI_TeamMemberMarker_GunfightRewardScreen_C* Widget, bool Skipped);
	void CurrentShownScoreChanged__DelegateSignature(float Percent);
	void ExecuteUbergraph_UI_TeamMemberMarker_GunfightRewardScreen(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void InitializeValues(const struct FStruct_GunFightStatistics& Statistics_0, bool bWasMVP_0, int32 ScoreBoostCount_0);
	void SkipScoreAddition();
	void HideWidget(bool Instant);
	void ShowWidget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void EndScoreAddition();
	void StartScoreAddition(float TimeToFill_0);
	void Construct();
	void Finished_7F12FD714F5C9CFCC60574BFED5949E5();
	void UpdateScoreNumber(float Percent);
	void GetAnimationToPlay(class UWidgetAnimation** ProgressBarFill_1_0);
	void SetCorrectScoreCrown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TeamMemberMarker_GunfightRewardScreen_C">();
	}
	static class UUI_TeamMemberMarker_GunfightRewardScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TeamMemberMarker_GunfightRewardScreen_C>();
	}
};
static_assert(alignof(UUI_TeamMemberMarker_GunfightRewardScreen_C) == 0x000008, "Wrong alignment on UUI_TeamMemberMarker_GunfightRewardScreen_C");
static_assert(sizeof(UUI_TeamMemberMarker_GunfightRewardScreen_C) == 0x0003C8, "Wrong size on UUI_TeamMemberMarker_GunfightRewardScreen_C");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, WidgetFadeIn) == 0x0002C0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::WidgetFadeIn' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, ProgressBarFill_1) == 0x0002C8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::ProgressBarFill_1' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Image_Crown) == 0x0002D0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Image_Crown' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Image_Flare) == 0x0002D8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Image_Flare' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, PanelBackground) == 0x0002E0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::PanelBackground' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, ProgressBar_55) == 0x0002E8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::ProgressBar_55' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Text_ScoreCounter) == 0x0002F0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Text_ScoreCounter' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Widgetcontainer) == 0x0002F8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Widgetcontainer' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, CameraThatSeesThis) == 0x000300, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::CameraThatSeesThis' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, WidgetComponent) == 0x000308, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::WidgetComponent' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Update_rate) == 0x000310, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Update_rate' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, Statistics) == 0x000318, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::Statistics' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, CurrentScorePercentDisplayed) == 0x000368, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::CurrentScorePercentDisplayed' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, bWasMVP) == 0x00036C, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::bWasMVP' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, OwningGunfightController) == 0x000370, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::OwningGunfightController' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, ScorePresentationEnded) == 0x000378, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::ScorePresentationEnded' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, AnimActive) == 0x000388, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::AnimActive' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, CurrentAnimation) == 0x000390, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::CurrentAnimation' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, TimeToFill) == 0x000398, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::TimeToFill' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, CurrentShownScoreChanged) == 0x0003A0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::CurrentShownScoreChanged' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, ScoreBoostCount) == 0x0003B0, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::ScoreBoostCount' has a wrong offset!");
static_assert(offsetof(UUI_TeamMemberMarker_GunfightRewardScreen_C, ScoreBoostCountToScoreMultiplier) == 0x0003B8, "Member 'UUI_TeamMemberMarker_GunfightRewardScreen_C::ScoreBoostCountToScoreMultiplier' has a wrong offset!");

}
