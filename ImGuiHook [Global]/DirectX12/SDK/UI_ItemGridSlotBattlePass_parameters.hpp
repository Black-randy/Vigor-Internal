#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemGridSlotBattlePass

#include "Basic.hpp"

#include "S_BattlePassLevelRewardFull_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.ExecuteUbergraph_UI_ItemGridSlotBattlePass
// 0x0100 (0x0100 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_4;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_3;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInvetoryItemDescriptor                K2Node_MakeStruct_InvetoryItemDescriptor;          // 0x0060(0x0030)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_BattlePassLevelRewardFull           K2Node_CustomEvent_Reward;                         // 0x00D8(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass) == 0x000100, "Wrong size on UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, EntryPoint) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_ComponentBoundEvent_Sender_4) == 0x000010, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_ComponentBoundEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_Event_MyGeometry) == 0x000018, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_Event_InDeltaTime) == 0x000050, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_ComponentBoundEvent_Sender_3) == 0x000058, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_ComponentBoundEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_MakeStruct_InvetoryItemDescriptor) == 0x000060, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_MakeStruct_InvetoryItemDescriptor' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, CallFunc_ClassIsChildOf_ReturnValue) == 0x000090, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_ComponentBoundEvent_Sender_2) == 0x000098, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_MakeStruct_Margin) == 0x0000A0, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_MakeStruct_Margin_1) == 0x0000B0, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_MakeStruct_Margin_2) == 0x0000C0, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000D0, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_CustomEvent_Reward) == 0x0000D8, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_CustomEvent_Reward' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass, K2Node_ComponentBoundEvent_Sender_1) == 0x0000F8, "Member 'UI_ItemGridSlotBattlePass_C_ExecuteUbergraph_UI_ItemGridSlotBattlePass::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_BndEvt__UI_ItemGridSlotBattlePass_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.SetReward
// 0x0020 (0x0020 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_SetReward final
{
public:
	struct FS_BattlePassLevelRewardFull           Reward;                                            // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_SetReward) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_SetReward");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_SetReward) == 0x000020, "Wrong size on UI_ItemGridSlotBattlePass_C_SetReward");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_SetReward, Reward) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_SetReward::Reward' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_ItemGridSlotBattlePass_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_Tick) == 0x000004, "Wrong alignment on UI_ItemGridSlotBattlePass_C_Tick");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_Tick) == 0x00003C, "Wrong size on UI_ItemGridSlotBattlePass_C_Tick");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_Tick, MyGeometry) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_ItemGridSlotBattlePass_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.UpdateItemCount
// 0x0010 (0x0010 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_UpdateItemCount final
{
public:
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCount_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_UpdateItemCount) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_UpdateItemCount");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_UpdateItemCount) == 0x000010, "Wrong size on UI_ItemGridSlotBattlePass_C_UpdateItemCount");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_UpdateItemCount, CallFunc_GetItemObsolete_ReturnValue) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_UpdateItemCount::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_UpdateItemCount, CallFunc_GetCount_ReturnValue) == 0x000008, "Member 'UI_ItemGridSlotBattlePass_C_UpdateItemCount::CallFunc_GetCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_UpdateItemCount, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'UI_ItemGridSlotBattlePass_C_UpdateItemCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.SetParentWidget
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_SetParentWidget final
{
public:
	class UUI_BattlePassTile_C*                   ParentWidget_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_SetParentWidget) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_SetParentWidget");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_SetParentWidget) == 0x000008, "Wrong size on UI_ItemGridSlotBattlePass_C_SetParentWidget");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_SetParentWidget, ParentWidget_0) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_SetParentWidget::ParentWidget_0' has a wrong offset!");

// Function UI_ItemGridSlotBattlePass.UI_ItemGridSlotBattlePass_C.GetLevelReward
// 0x0020 (0x0020 - 0x0000)
struct UI_ItemGridSlotBattlePass_C_GetLevelReward final
{
public:
	struct FS_BattlePassLevelRewardFull           LevelReward_0;                                     // 0x0000(0x0020)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemGridSlotBattlePass_C_GetLevelReward) == 0x000008, "Wrong alignment on UI_ItemGridSlotBattlePass_C_GetLevelReward");
static_assert(sizeof(UI_ItemGridSlotBattlePass_C_GetLevelReward) == 0x000020, "Wrong size on UI_ItemGridSlotBattlePass_C_GetLevelReward");
static_assert(offsetof(UI_ItemGridSlotBattlePass_C_GetLevelReward, LevelReward_0) == 0x000000, "Member 'UI_ItemGridSlotBattlePass_C_GetLevelReward::LevelReward_0' has a wrong offset!");

}
