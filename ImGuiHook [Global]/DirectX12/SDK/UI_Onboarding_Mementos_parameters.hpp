#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Mementos

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_Mementos.UI_Onboarding_Mementos_C.ExecuteUbergraph_UI_Onboarding_Mementos
// 0x00A0 (0x00A0 - 0x0000)
struct UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_Mementos_C*>                 CallFunc_GetAllOpenedWidgets_OutWidgets;           // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_Mementos_C*                         CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetToFocus_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos) == 0x000008, "Wrong alignment on UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos");
static_assert(sizeof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos) == 0x0000A0, "Wrong size on UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, EntryPoint) == 0x000000, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, Temp_int_Variable) == 0x000004, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, Temp_int_Array_Index_Variable) == 0x000018, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000028, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000030, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000038, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetAllOpenedWidgets_OutWidgets) == 0x000048, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetAllOpenedWidgets_OutWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Array_Get_Item) == 0x000058, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_IsValid_ReturnValue) == 0x000064, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetWidgetToFocus_ReturnValue) == 0x000068, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetWidgetToFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000070, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000078, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'UI_Onboarding_Mementos_C_ExecuteUbergraph_UI_Onboarding_Mementos::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}
