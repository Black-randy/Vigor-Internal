#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mutators_AllThreat_Debug

#include "Basic.hpp"

#include "E_Mutator_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Mutators_AllThreat_Debug.UI_Mutators_AllThreat_Debug_C.ExecuteUbergraph_UI_Mutators_AllThreat_Debug
// 0x0050 (0x0050 - 0x0000)
struct UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0038(0x0018)()
};
static_assert(alignof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug) == 0x000008, "Wrong alignment on UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug");
static_assert(sizeof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug) == 0x000050, "Wrong size on UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug, EntryPoint) == 0x000000, "Member 'UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug, CallFunc_Conv_FloatToText_ReturnValue) == 0x000038, "Member 'UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function UI_Mutators_AllThreat_Debug.UI_Mutators_AllThreat_Debug_C.AddMutator
// 0x00B8 (0x00B8 - 0x0000)
struct UI_Mutators_AllThreat_Debug_C_AddMutator final
{
public:
	E_Mutator                                     Mutator;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class UUI_FlameTextWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mutators_AllThreat_Debug_C_AddMutator) == 0x000008, "Wrong alignment on UI_Mutators_AllThreat_Debug_C_AddMutator");
static_assert(sizeof(UI_Mutators_AllThreat_Debug_C_AddMutator) == 0x0000B8, "Wrong size on UI_Mutators_AllThreat_Debug_C_AddMutator");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, Mutator) == 0x000000, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::Mutator' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_Array_Find_ReturnValue) == 0x00001C, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_Create_ReturnValue) == 0x000090, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_Format_ReturnValue) == 0x000098, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mutators_AllThreat_Debug_C_AddMutator, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000B0, "Member 'UI_Mutators_AllThreat_Debug_C_AddMutator::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}
