#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NetworkIssuesNotification

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_NetworkIssuesNotification.UI_NetworkIssuesNotification_C.ExecuteUbergraph_UI_NetworkIssuesNotification
// 0x0028 (0x0028 - 0x0000)
struct UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification) == 0x000008, "Wrong alignment on UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification");
static_assert(sizeof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification) == 0x000028, "Wrong size on UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification, EntryPoint) == 0x000000, "Member 'UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UI_NetworkIssuesNotification_C_ExecuteUbergraph_UI_NetworkIssuesNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function UI_NetworkIssuesNotification.UI_NetworkIssuesNotification_C.ToString
// 0x0038 (0x0038 - 0x0000)
struct UI_NetworkIssuesNotification_C_ToString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_NetworkIssuesNotification_C_ToString) == 0x000008, "Wrong alignment on UI_NetworkIssuesNotification_C_ToString");
static_assert(sizeof(UI_NetworkIssuesNotification_C_ToString) == 0x000038, "Wrong size on UI_NetworkIssuesNotification_C_ToString");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ToString, ReturnValue) == 0x000000, "Member 'UI_NetworkIssuesNotification_C_ToString::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ToString, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'UI_NetworkIssuesNotification_C_ToString::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NetworkIssuesNotification_C_ToString, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'UI_NetworkIssuesNotification_C_ToString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}
