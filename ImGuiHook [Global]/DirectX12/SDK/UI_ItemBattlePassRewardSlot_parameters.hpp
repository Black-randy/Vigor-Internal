#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemBattlePassRewardSlot

#include "Basic.hpp"

#include "S_BattlePassLevelRewardFull_structs.hpp"
#include "Flame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.ExecuteUbergraph_UI_ItemBattlePassRewardSlot
// 0x0140 (0x0140 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_6;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInvetoryItemDescriptor                K2Node_MakeStruct_InvetoryItemDescriptor;          // 0x0020(0x0030)(NoDestructor, ContainsInstancedReference)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_5;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_4;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0060(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_3;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentUserWidget_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentUserWidget_ReturnValue_1;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_BattlePassRewards_C*                K2Node_DynamicCast_AsUI_Battle_Pass_Rewards;       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x00F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_2;     // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot) == 0x000140, "Wrong size on UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, EntryPoint) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, Temp_int_Variable) == 0x000004, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, Temp_int_Variable_1) == 0x000008, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_6) == 0x000018, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_6' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_MakeStruct_InvetoryItemDescriptor) == 0x000020, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_MakeStruct_InvetoryItemDescriptor' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_5) == 0x000050, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_5' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_4) == 0x000058, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_Event_MyGeometry) == 0x000060, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_Event_InDeltaTime) == 0x000098, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_3) == 0x0000A0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x0000A8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_GetParentUserWidget_ReturnValue) == 0x0000B0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_GetParentUserWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_GetParentUserWidget_ReturnValue_1) == 0x0000B8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_GetParentUserWidget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_DynamicCast_AsUI_Battle_Pass_Rewards) == 0x0000C0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_DynamicCast_AsUI_Battle_Pass_Rewards' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_2) == 0x0000D0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000D8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender_1) == 0x0000E0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, K2Node_ComponentBoundEvent_Sender) == 0x0000E8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x0000F0, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x0000F8, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Array_Get_Item) == 0x000108, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_2) == 0x000115, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000118, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Array_Length_ReturnValue_1) == 0x000128, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Array_Get_Item_1) == 0x000130, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x000138, "Member 'UI_ItemBattlePassRewardSlot_C_ExecuteUbergraph_UI_ItemBattlePassRewardSlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_FlameButton_402_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_Tick) == 0x000004, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_Tick");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_Tick) == 0x00003C, "Wrong size on UI_ItemBattlePassRewardSlot_C_Tick");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_Tick, MyGeometry) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_ItemBattlePassRewardSlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_BndEvt__UI_ItemBattlePassRewardSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.UpdateItemCount
// 0x0038 (0x0038 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_UpdateItemCount final
{
public:
	struct FInvetoryItemDescriptor                CallFunc_GetItemDescriptor_ReturnValue;            // 0x0000(0x0030)(ConstParm, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_UpdateItemCount) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_UpdateItemCount");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_UpdateItemCount) == 0x000038, "Wrong size on UI_ItemBattlePassRewardSlot_C_UpdateItemCount");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_UpdateItemCount, CallFunc_GetItemDescriptor_ReturnValue) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_UpdateItemCount::CallFunc_GetItemDescriptor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_UpdateItemCount, CallFunc_IsValidClass_ReturnValue) == 0x000030, "Member 'UI_ItemBattlePassRewardSlot_C_UpdateItemCount::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.SetSlotLocked
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_SetSlotLocked final
{
public:
	bool                                          IsLockedIn;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_SetSlotLocked) == 0x000001, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_SetSlotLocked");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_SetSlotLocked) == 0x000001, "Wrong size on UI_ItemBattlePassRewardSlot_C_SetSlotLocked");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_SetSlotLocked, IsLockedIn) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_SetSlotLocked::IsLockedIn' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.ShowFocus
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_ShowFocus final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_ShowFocus) == 0x000001, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_ShowFocus");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_ShowFocus) == 0x000001, "Wrong size on UI_ItemBattlePassRewardSlot_C_ShowFocus");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_ShowFocus, IsEnable) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_ShowFocus::IsEnable' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.GetSlotLocked
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_GetSlotLocked final
{
public:
	bool                                          IsSlotLocked_0;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_GetSlotLocked) == 0x000001, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_GetSlotLocked");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_GetSlotLocked) == 0x000001, "Wrong size on UI_ItemBattlePassRewardSlot_C_GetSlotLocked");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_GetSlotLocked, IsSlotLocked_0) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_GetSlotLocked::IsSlotLocked_0' has a wrong offset!");

// Function UI_ItemBattlePassRewardSlot.UI_ItemBattlePassRewardSlot_C.GetLevelReward
// 0x0020 (0x0020 - 0x0000)
struct UI_ItemBattlePassRewardSlot_C_GetLevelReward final
{
public:
	struct FS_BattlePassLevelRewardFull           LevelReward_0;                                     // 0x0000(0x0020)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemBattlePassRewardSlot_C_GetLevelReward) == 0x000008, "Wrong alignment on UI_ItemBattlePassRewardSlot_C_GetLevelReward");
static_assert(sizeof(UI_ItemBattlePassRewardSlot_C_GetLevelReward) == 0x000020, "Wrong size on UI_ItemBattlePassRewardSlot_C_GetLevelReward");
static_assert(offsetof(UI_ItemBattlePassRewardSlot_C_GetLevelReward, LevelReward_0) == 0x000000, "Member 'UI_ItemBattlePassRewardSlot_C_GetLevelReward::LevelReward_0' has a wrong offset!");

}
