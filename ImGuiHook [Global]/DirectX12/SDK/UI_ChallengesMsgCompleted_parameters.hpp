#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesMsgCompleted

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.ExecuteUbergraph_UI_ChallengesMsgCompleted
// 0x0080 (0x0080 - 0x0000)
struct UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ChallengesListItemWithReward_C*     CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float AxisValue)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_AxisValue;                      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted) == 0x000008, "Wrong alignment on UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted");
static_assert(sizeof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted) == 0x000080, "Wrong size on UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, EntryPoint) == 0x000000, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Create_ReturnValue) == 0x000020, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, Temp_int_Loop_Counter_Variable_1) == 0x00003C, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Less_IntInt_ReturnValue_1) == 0x000064, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000068, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_GetScrollOffset_ReturnValue) == 0x00006C, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, K2Node_CustomEvent_AxisValue) == 0x000070, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::K2Node_CustomEvent_AxisValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000074, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_Add_FloatFloat_ReturnValue) == 0x000078, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted, CallFunc_FClamp_ReturnValue) == 0x00007C, "Member 'UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.Scroll List
// 0x0004 (0x0004 - 0x0000)
struct UI_ChallengesMsgCompleted_C_Scroll_List final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesMsgCompleted_C_Scroll_List) == 0x000004, "Wrong alignment on UI_ChallengesMsgCompleted_C_Scroll_List");
static_assert(sizeof(UI_ChallengesMsgCompleted_C_Scroll_List) == 0x000004, "Wrong size on UI_ChallengesMsgCompleted_C_Scroll_List");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_Scroll_List, AxisValue) == 0x000000, "Member 'UI_ChallengesMsgCompleted_C_Scroll_List::AxisValue' has a wrong offset!");

// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.GetWidgetToFocus
// 0x0008 (0x0008 - 0x0000)
struct UI_ChallengesMsgCompleted_C_GetWidgetToFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesMsgCompleted_C_GetWidgetToFocus) == 0x000008, "Wrong alignment on UI_ChallengesMsgCompleted_C_GetWidgetToFocus");
static_assert(sizeof(UI_ChallengesMsgCompleted_C_GetWidgetToFocus) == 0x000008, "Wrong size on UI_ChallengesMsgCompleted_C_GetWidgetToFocus");
static_assert(offsetof(UI_ChallengesMsgCompleted_C_GetWidgetToFocus, ReturnValue) == 0x000000, "Member 'UI_ChallengesMsgCompleted_C_GetWidgetToFocus::ReturnValue' has a wrong offset!");

}
