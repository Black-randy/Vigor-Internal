#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesDetails

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_ChallengeManagerState_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "E_ChallengeSlotState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChallengesDetails.UI_ChallengesDetails_C
// 0x0078 (0x0368 - 0x02F0)
class UUI_ChallengesDetails_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionB;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionRemove;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ChallengesList;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeTip;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_TableColumnChallenges;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_TableColumnRewards;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_ChallengesListItemFocusable_C*> ChallengeWidgets;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UAudioComponent*                        StoryChallengeSound;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    FocusedSlot;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HoldSound;                                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              NextResetTimestamp;                                // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ChallengeDetailsFocused;                           // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_ChallengesDetails(int32 EntryPoint);
	void OnDailyReset(const struct FDateTime& Next_Reset_Timestamp);
	void OnTimer();
	void OnStateChanged(class ABP_ChallengeSlot_C* Slot_0);
	void BndEvt__ActionRemove_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__ActionRemove_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__ActionA_K2Node_ComponentBoundEvent_1_OnActionHoldEvent__DelegateSignature();
	void EventChallengeSlotCancelled(class ABP_ChallengeSlot_C* BP_ChallengeSlot);
	void EventChallengeManagerReady();
	void EventSlotFocused(class UListButtonWidget* Sender);
	void BndEvt__UI_GamepadActionWidget_0_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void UpdateActionRemoveState(class ABP_ChallengeSlot_C* ChallengeSlotIn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChallengesDetails_C">();
	}
	static class UUI_ChallengesDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChallengesDetails_C>();
	}
};
static_assert(alignof(UUI_ChallengesDetails_C) == 0x000008, "Wrong alignment on UUI_ChallengesDetails_C");
static_assert(sizeof(UUI_ChallengesDetails_C) == 0x000368, "Wrong size on UUI_ChallengesDetails_C");
static_assert(offsetof(UUI_ChallengesDetails_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_ChallengesDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ActionB) == 0x0002F8, "Member 'UUI_ChallengesDetails_C::ActionB' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ActionRemove) == 0x000300, "Member 'UUI_ChallengesDetails_C::ActionRemove' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ChallengesList) == 0x000308, "Member 'UUI_ChallengesDetails_C::ChallengesList' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ChallengeTip) == 0x000310, "Member 'UUI_ChallengesDetails_C::ChallengeTip' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, Text_TableColumnChallenges) == 0x000318, "Member 'UUI_ChallengesDetails_C::Text_TableColumnChallenges' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, Text_TableColumnRewards) == 0x000320, "Member 'UUI_ChallengesDetails_C::Text_TableColumnRewards' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, UI_FlameSafezone) == 0x000328, "Member 'UUI_ChallengesDetails_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ChallengeWidgets) == 0x000330, "Member 'UUI_ChallengesDetails_C::ChallengeWidgets' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, StoryChallengeSound) == 0x000340, "Member 'UUI_ChallengesDetails_C::StoryChallengeSound' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, FocusedSlot) == 0x000348, "Member 'UUI_ChallengesDetails_C::FocusedSlot' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, HoldSound) == 0x000350, "Member 'UUI_ChallengesDetails_C::HoldSound' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, NextResetTimestamp) == 0x000358, "Member 'UUI_ChallengesDetails_C::NextResetTimestamp' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesDetails_C, ChallengeDetailsFocused) == 0x000360, "Member 'UUI_ChallengesDetails_C::ChallengeDetailsFocused' has a wrong offset!");

}

