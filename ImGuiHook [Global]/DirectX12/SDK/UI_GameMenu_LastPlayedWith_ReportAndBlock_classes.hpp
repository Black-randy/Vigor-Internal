#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameMenu_LastPlayedWith_ReportAndBlock

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FlameUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameMenu_LastPlayedWith_ReportAndBlock.UI_GameMenu_LastPlayedWith_ReportAndBlock_C
// 0x0118 (0x03D0 - 0x02B8)
class UUI_GameMenu_LastPlayedWith_ReportAndBlock_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                Action_Back;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Action_Block;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Action_Report;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Action_Unblock;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RowButton_ReportPanel_C*            Button_AFK;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RowButton_ReportPanel_C*            Button_BlockPlayer;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RowButton_ReportPanel_C*            Button_Cheating;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RowButton_ReportPanel_C*            Button_Negative;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RowButton_ReportPanel_C*            Button_UnblockPlayer;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Description;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        DescriptionMinusHeadder;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescriptionMinusVerticalBox;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerNickname_C*                   UI_PlayerNickname;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 PlayerTrackingID;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 ReportReason;                                      // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, class UUI_RowButton_ReportPanel_C*> TMapReasonButton;                                  // 0x0358(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsReportSent;                                      // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Platform;                                          // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget*                                LastFocusedWidget;                                 // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoldActionTimerRunning;                          // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_GameMenu_LastPlayedWith_ReportAndBlock(int32 EntryPoint);
	void OnBlocklistUpdated(const class FString& Reason_For_Update);
	void OnBlocklistUpdated_Block(const class FString& Reason_For_Update);
	void OnBlocklistUpdate_Unblock(const class FString& Reason_For_Update);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Unblock_K2Node_ComponentBoundEvent_22_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Block_K2Node_ComponentBoundEvent_21_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Report_K2Node_ComponentBoundEvent_9_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Unblock_K2Node_ComponentBoundEvent_26_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Report_K2Node_ComponentBoundEvent_25_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Block_K2Node_ComponentBoundEvent_20_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_BlockPlayer_K2Node_ComponentBoundEvent_19_OnListButtonReleasedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_BlockPlayer_K2Node_ComponentBoundEvent_18_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_AFK_K2Node_ComponentBoundEvent_17_OnListButtonReleasedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_AFK_K2Node_ComponentBoundEvent_16_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Negative_K2Node_ComponentBoundEvent_15_OnListButtonReleasedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Negative_K2Node_ComponentBoundEvent_14_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Cheating_K2Node_ComponentBoundEvent_13_OnListButtonReleasedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Cheating_K2Node_ComponentBoundEvent_12_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_UnblockPlayer_K2Node_ComponentBoundEvent_11_OnListButtonReleasedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_UnblockPlayer_K2Node_ComponentBoundEvent_10_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Unblock_K2Node_ComponentBoundEvent_7_OnActionHoldEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_UnlockPlayer_K2Node_ComponentBoundEvent_5_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Block_K2Node_ComponentBoundEvent_8_OnActionHoldEvent__DelegateSignature();
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_BlockPlayer_K2Node_ComponentBoundEvent_6_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender);
	void Report_Recieved(const struct FCloudRequestResult& RequestResult);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Cheating_K2Node_ComponentBoundEvent_4_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_Negative_K2Node_ComponentBoundEvent_3_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Button_AFK_K2Node_ComponentBoundEvent_2_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ReportAndBlock_Action_Report_K2Node_ComponentBoundEvent_1_OnActionHoldEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void InitializeData(const struct FUniqueNetIdRepl& PlayerNetId, const class FString& PlayerName, EFlamePlatform PlayerPlatform, const class FString& PlayerTrakingID);
	void BndEvt__UI_GameMenu_LastPlayedWith_Blocklist_UI_InputActionWidget_183_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameMenu_LastPlayedWith_ReportAndBlock_C">();
	}
	static class UUI_GameMenu_LastPlayedWith_ReportAndBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameMenu_LastPlayedWith_ReportAndBlock_C>();
	}
};
static_assert(alignof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C) == 0x000008, "Wrong alignment on UUI_GameMenu_LastPlayedWith_ReportAndBlock_C");
static_assert(sizeof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C) == 0x0003D0, "Wrong size on UUI_GameMenu_LastPlayedWith_ReportAndBlock_C");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Action_Back) == 0x0002C0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Action_Back' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Action_Block) == 0x0002C8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Action_Block' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Action_Report) == 0x0002D0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Action_Report' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Action_Unblock) == 0x0002D8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Action_Unblock' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Button_AFK) == 0x0002E0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Button_AFK' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Button_BlockPlayer) == 0x0002E8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Button_BlockPlayer' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Button_Cheating) == 0x0002F0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Button_Cheating' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Button_Negative) == 0x0002F8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Button_Negative' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Button_UnblockPlayer) == 0x000300, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Button_UnblockPlayer' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Description) == 0x000308, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Description' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, DescriptionMinusHeadder) == 0x000310, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::DescriptionMinusHeadder' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, DescriptionMinusVerticalBox) == 0x000318, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::DescriptionMinusVerticalBox' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Image_Background) == 0x000320, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, UI_FlameSafezone) == 0x000328, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, UI_PlayerNickname) == 0x000330, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::UI_PlayerNickname' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, PlayerTrackingID) == 0x000338, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::PlayerTrackingID' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, ReportReason) == 0x000348, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::ReportReason' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, TMapReasonButton) == 0x000358, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::TMapReasonButton' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, IsReportSent) == 0x0003A8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::IsReportSent' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, Platform) == 0x0003B0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::Platform' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, LastFocusedWidget) == 0x0003C0, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::LastFocusedWidget' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ReportAndBlock_C, IsHoldActionTimerRunning) == 0x0003C8, "Member 'UUI_GameMenu_LastPlayedWith_ReportAndBlock_C::IsHoldActionTimerRunning' has a wrong offset!");

}

