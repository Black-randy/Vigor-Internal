#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SeasonalChallenges_PartialProgressBar

#include "Basic.hpp"

#include "Struct_SeasonalChallengesSubGoalInfo_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar
// 0x0080 (0x0080 - 0x0000)
struct UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_DoneChallenges;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_SeasonalChallengesSubGoalInfo  K2Node_CustomEvent_SubGoalInfo;                    // 0x0010(0x0038)(HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentlyDoneChallengesCount;   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar) == 0x000008, "Wrong alignment on UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar");
static_assert(sizeof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar) == 0x000080, "Wrong size on UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, EntryPoint) == 0x000000, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_float_Variable) == 0x000004, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_bool_Has_Been_Initd_Variable) == 0x000008, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_bool_IsClosed_Variable) == 0x000009, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, K2Node_CustomEvent_DoneChallenges) == 0x00000C, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::K2Node_CustomEvent_DoneChallenges' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, K2Node_CustomEvent_SubGoalInfo) == 0x000010, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::K2Node_CustomEvent_SubGoalInfo' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, K2Node_CustomEvent_CurrentlyDoneChallengesCount) == 0x000048, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::K2Node_CustomEvent_CurrentlyDoneChallengesCount' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00004C, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000058, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Max_ReturnValue) == 0x00005C, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000060, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000064, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_bool_Variable) == 0x000068, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_byte_Variable) == 0x000069, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, K2Node_Select_Default) == 0x00006C, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_byte_Variable_1) == 0x000074, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000075, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, Temp_bool_Variable_1) == 0x000076, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, K2Node_Select_Default_1) == 0x000077, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.UpdateProgressBar
// 0x0004 (0x0004 - 0x0000)
struct UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar final
{
public:
	int32                                         CurrentlyDoneChallengesCount;                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar) == 0x000004, "Wrong alignment on UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar");
static_assert(sizeof(UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar) == 0x000004, "Wrong size on UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar, CurrentlyDoneChallengesCount) == 0x000000, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar::CurrentlyDoneChallengesCount' has a wrong offset!");

// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.InitializePartialProgressBar
// 0x0040 (0x0040 - 0x0000)
struct UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar final
{
public:
	int32                                         DoneChallenges;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_SeasonalChallengesSubGoalInfo  SubGoalInfo_0;                                     // 0x0008(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar) == 0x000008, "Wrong alignment on UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar");
static_assert(sizeof(UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar) == 0x000040, "Wrong size on UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar, DoneChallenges) == 0x000000, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar::DoneChallenges' has a wrong offset!");
static_assert(offsetof(UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar, SubGoalInfo_0) == 0x000008, "Member 'UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar::SubGoalInfo_0' has a wrong offset!");

}
