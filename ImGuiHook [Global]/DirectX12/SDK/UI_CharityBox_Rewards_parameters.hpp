#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharityBox_Rewards

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.ExecuteUbergraph_UI_CharityBox_Rewards
// 0x00D0 (0x00D0 - 0x0000)
struct UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_InWidget;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentUserWidget_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentUserWidget_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_WeaponGridSlot_2_C*                 K2Node_DynamicCast_AsUI_Weapon_Grid_Slot_2;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IHasItemInterface>     CallFunc_GetItemType_self_CastInput;               // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TSubclassOf<class AItem>                      CallFunc_GetItemType_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCategoryName_ReturnValue;              // 0x0050(0x0018)()
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0068(0x0018)()
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0080(0x0028)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A8(0x0028)()
};
static_assert(alignof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards) == 0x000008, "Wrong alignment on UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards");
static_assert(sizeof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards) == 0x0000D0, "Wrong size on UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, EntryPoint) == 0x000000, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, K2Node_Event_InWidget) == 0x000008, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::K2Node_Event_InWidget' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetParentUserWidget_ReturnValue) == 0x000010, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetParentUserWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetParentUserWidget_ReturnValue_1) == 0x000018, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetParentUserWidget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, K2Node_DynamicCast_AsUI_Weapon_Grid_Slot_2) == 0x000020, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::K2Node_DynamicCast_AsUI_Weapon_Grid_Slot_2' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetItemType_self_CastInput) == 0x000030, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetItemType_self_CastInput' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetItemType_ReturnValue) == 0x000040, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000048, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetCategoryName_ReturnValue) == 0x000050, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetCategoryName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetItemName_ReturnValue) == 0x000068, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, CallFunc_GetItemRarity_ReturnValue) == 0x000080, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards, K2Node_MakeStruct_SlateColor) == 0x0000A8, "Member 'UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnChildFocusReceived
// 0x0008 (0x0008 - 0x0000)
struct UI_CharityBox_Rewards_C_OnChildFocusReceived final
{
public:
	class UWidget*                                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CharityBox_Rewards_C_OnChildFocusReceived) == 0x000008, "Wrong alignment on UI_CharityBox_Rewards_C_OnChildFocusReceived");
static_assert(sizeof(UI_CharityBox_Rewards_C_OnChildFocusReceived) == 0x000008, "Wrong size on UI_CharityBox_Rewards_C_OnChildFocusReceived");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnChildFocusReceived, InWidget) == 0x000000, "Member 'UI_CharityBox_Rewards_C_OnChildFocusReceived::InWidget' has a wrong offset!");

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnFocusReceived
// 0x0298 (0x0298 - 0x0000)
struct UI_CharityBox_Rewards_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x00F8(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01B0(0x00B8)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CharityBox_Rewards_Row_C*           K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row;   // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_CharityBox_Rewards_C_OnFocusReceived) == 0x000008, "Wrong alignment on UI_CharityBox_Rewards_C_OnFocusReceived");
static_assert(sizeof(UI_CharityBox_Rewards_C_OnFocusReceived) == 0x000298, "Wrong size on UI_CharityBox_Rewards_C_OnFocusReceived");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_Unhandled_ReturnValue) == 0x0000F8, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0001B0, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_GetOwningPlayer_ReturnValue) == 0x000268, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_GetChildAt_ReturnValue) == 0x000270, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row) == 0x000278, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, K2Node_DynamicCast_bSuccess) == 0x000280, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_GetChildAt_ReturnValue_1) == 0x000288, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_OnFocusReceived, CallFunc_IsValid_ReturnValue) == 0x000290, "Member 'UI_CharityBox_Rewards_C_OnFocusReceived::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.FillData
// 0x00F8 (0x00F8 - 0x0000)
struct UI_CharityBox_Rewards_C_FillData final
{
public:
	TArray<struct FCloudCharityBoxSeasonMilestoneInfo> MilestoneInfo;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         DonatedFood;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FoodToNextMilestone;                               // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCloudCharityBoxSeasonMilestoneInfo> Milestone;                                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	bool                                          ThereIsUnfulfilled;                                // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextMilestone;                                     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCloudCharityBoxSeasonMilestoneRewardInfo> Rewards;                                           // 0x0030(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCloudCharityBoxSeasonMilestoneInfo    CallFunc_Array_Get_Item;                           // 0x0070(0x0028)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CharityBox_Rewards_Row_C*           K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row;   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CB[0x1];                                       // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CharityBox_Rewards_Row_C*           CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CharityBox_Rewards_C_FillData) == 0x000008, "Wrong alignment on UI_CharityBox_Rewards_C_FillData");
static_assert(sizeof(UI_CharityBox_Rewards_C_FillData) == 0x0000F8, "Wrong size on UI_CharityBox_Rewards_C_FillData");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, MilestoneInfo) == 0x000000, "Member 'UI_CharityBox_Rewards_C_FillData::MilestoneInfo' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, DonatedFood) == 0x000010, "Member 'UI_CharityBox_Rewards_C_FillData::DonatedFood' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, FoodToNextMilestone) == 0x000014, "Member 'UI_CharityBox_Rewards_C_FillData::FoodToNextMilestone' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Milestone) == 0x000018, "Member 'UI_CharityBox_Rewards_C_FillData::Milestone' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, ThereIsUnfulfilled) == 0x000028, "Member 'UI_CharityBox_Rewards_C_FillData::ThereIsUnfulfilled' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, NextMilestone) == 0x00002C, "Member 'UI_CharityBox_Rewards_C_FillData::NextMilestone' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Rewards) == 0x000030, "Member 'UI_CharityBox_Rewards_C_FillData::Rewards' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Temp_bool_Variable) == 0x000040, "Member 'UI_CharityBox_Rewards_C_FillData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'UI_CharityBox_Rewards_C_FillData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Max_ReturnValue) == 0x00005C, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'UI_CharityBox_Rewards_C_FillData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000064, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'UI_CharityBox_Rewards_C_FillData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Array_Get_Item) == 0x000070, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_GetChildAt_ReturnValue) == 0x000098, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row) == 0x0000A0, "Member 'UI_CharityBox_Rewards_C_FillData::K2Node_DynamicCast_AsUI_Charity_Box_Rewards_Row' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'UI_CharityBox_Rewards_C_FillData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000AC, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_GetChildAt_ReturnValue_1) == 0x0000B0, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B9, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_BooleanOR_ReturnValue) == 0x0000BA, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000BB, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C0, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Temp_byte_Variable) == 0x0000C8, "Member 'UI_CharityBox_Rewards_C_FillData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, Temp_byte_Variable_1) == 0x0000C9, "Member 'UI_CharityBox_Rewards_C_FillData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, K2Node_Select_Default) == 0x0000CA, "Member 'UI_CharityBox_Rewards_C_FillData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'UI_CharityBox_Rewards_C_FillData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000E0, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_FillData, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000F0, "Member 'UI_CharityBox_Rewards_C_FillData::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.InsertSort
// 0x0068 (0x0068 - 0x0000)
struct UI_CharityBox_Rewards_C_InsertSort final
{
public:
	TArray<struct FCloudCharityBoxSeasonMilestoneInfo> Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TestedIndex;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudCharityBoxSeasonMilestoneInfo    TestedItem;                                        // 0x0018(0x0028)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CharityBox_Rewards_C_InsertSort) == 0x000008, "Wrong alignment on UI_CharityBox_Rewards_C_InsertSort");
static_assert(sizeof(UI_CharityBox_Rewards_C_InsertSort) == 0x000068, "Wrong size on UI_CharityBox_Rewards_C_InsertSort");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, Array) == 0x000000, "Member 'UI_CharityBox_Rewards_C_InsertSort::Array' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, TestedIndex) == 0x000010, "Member 'UI_CharityBox_Rewards_C_InsertSort::TestedIndex' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, TestedItem) == 0x000018, "Member 'UI_CharityBox_Rewards_C_InsertSort::TestedItem' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_Array_LastIndex_ReturnValue) == 0x000040, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, Temp_int_Variable) == 0x000044, "Member 'UI_CharityBox_Rewards_C_InsertSort::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_Greater_IntInt_ReturnValue) == 0x000055, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'UI_CharityBox_Rewards_C_InsertSort::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CharityBox_Rewards_C_InsertSort, Temp_int_Variable_1) == 0x000060, "Member 'UI_CharityBox_Rewards_C_InsertSort::Temp_int_Variable_1' has a wrong offset!");

}

