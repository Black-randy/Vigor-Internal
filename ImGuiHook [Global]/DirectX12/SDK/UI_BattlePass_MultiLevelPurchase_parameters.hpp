#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePass_MultiLevelPurchase

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase
// 0x0100 (0x0100 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePassSystem*                      CallFunc_GetBattlePassSystem_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BattlePassSystem_C*                 K2Node_DynamicCast_AsBP_Battle_Pass_System;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name;       // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Increment;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name_1;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name_2;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerState*                      K2Node_DynamicCast_AsHuman_Player_State;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHardCurrency_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name_3;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GetCrownsMessageBox_C*              CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFlameWidget* FlameWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	class UFlameWidget*                           K2Node_CustomEvent_FlameWidget;                    // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GetCrownsMessageBox_C*              K2Node_DynamicCast_AsUI_Get_Crowns_Message_Box;    // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x00B8(0x0018)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUpdatedLevel_UpdatedLevel;             // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUpdatedLevel_UpdatedLevel_1;           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price; // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price_1; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E6[0x2];                                       // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase) == 0x000008, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase) == 0x000100, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, EntryPoint) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetBattlePassSystem_ReturnValue) == 0x000008, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetBattlePassSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_AsBP_Battle_Pass_System) == 0x000010, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_AsBP_Battle_Pass_System' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Get_Season_Name_Active_Season_Name) == 0x00001C, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Get_Season_Name_Active_Season_Name' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_CustomEvent_Increment) == 0x000024, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_CustomEvent_Increment' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Get_Season_Name_Active_Season_Name_1) == 0x000028, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Get_Season_Name_Active_Season_Name_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Get_Season_Name_Active_Season_Name_2) == 0x000030, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Get_Season_Name_Active_Season_Name_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_AsHuman_Player_State) == 0x000048, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_AsHuman_Player_State' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetStash_ReturnValue) == 0x000058, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetHardCurrency_ReturnValue) == 0x000064, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetHardCurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsValid_ReturnValue_3) == 0x000068, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetUserControllerId_ReturnValue) == 0x00006C, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Get_Season_Name_Active_Season_Name_3) == 0x000070, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Get_Season_Name_Active_Season_Name_3' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000078, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetZOrder_ReturnValue) == 0x000080, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Create_ReturnValue) == 0x000088, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_CustomEvent_FlameWidget) == 0x0000A0, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_CustomEvent_FlameWidget' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_AsUI_Get_Crowns_Message_Box) == 0x0000A8, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_AsUI_Get_Crowns_Message_Box' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, Temp_text_Variable) == 0x0000B8, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetUpdatedLevel_UpdatedLevel) == 0x0000D4, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetUpdatedLevel_UpdatedLevel' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetUpdatedLevel_UpdatedLevel_1) == 0x0000D8, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetUpdatedLevel_UpdatedLevel_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price) == 0x0000DC, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price_1) == 0x0000E0, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GetLevelsPurchasePrice_Level_Purchase_Price_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsValid_ReturnValue_4) == 0x0000E5, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_ComponentBoundEvent_Sender_1) == 0x0000E8, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, K2Node_ComponentBoundEvent_Sender) == 0x0000F0, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x0000F8, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x0000F9, "Member 'UI_BattlePass_MultiLevelPurchase_C_ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.OnClosedDelegate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0 final
{
public:
	class UFlameWidget*                           FlameWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0) == 0x000008, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0) == 0x000008, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0, FlameWidget) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_OnClosedDelegate_Event_0::FlameWidget' has a wrong offset!");

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.Update Levels To Buy
// 0x0004 (0x0004 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy final
{
public:
	int32                                         Increment;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy) == 0x000004, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy) == 0x000004, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy, Increment) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_Update_Levels_To_Buy::Increment' has a wrong offset!");

// Function UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C.CustomLeft&RightNavigation
// 0x0018 (0x0018 - 0x0000)
struct UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Direction;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation) == 0x000008, "Wrong alignment on UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation");
static_assert(sizeof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation) == 0x000018, "Wrong size on UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation, Navigation_0) == 0x000000, "Member 'UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation, ReturnValue) == 0x000008, "Member 'UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation, Direction) == 0x000010, "Member 'UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation::Direction' has a wrong offset!");
static_assert(offsetof(UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'UI_BattlePass_MultiLevelPurchase_C_CustomLeft_RightNavigation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
