#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_Debug

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_GunFight_Debug.UI_GunFight_Debug_C.ExecuteUbergraph_UI_GunFight_Debug
// 0x00B0 (0x00B0 - 0x0000)
struct UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_GunFight_C*        K2Node_DynamicCast_AsBP_Player_Controller_Gun_Fight; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0048(0x0018)()
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	class ABP_GameState_GunFight_C*               K2Node_DynamicCast_AsBP_Game_State_Gun_Fight;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0098(0x0018)()
};
static_assert(alignof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug) == 0x000008, "Wrong alignment on UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug");
static_assert(sizeof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug) == 0x0000B0, "Wrong size on UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, EntryPoint) == 0x000000, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, CallFunc_GetUserControllerId_ReturnValue) == 0x000004, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, Temp_bool_Variable) == 0x000008, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000010, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, Temp_text_Variable) == 0x000018, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_DynamicCast_AsBP_Player_Controller_Gun_Fight) == 0x000038, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_DynamicCast_AsBP_Player_Controller_Gun_Fight' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, Temp_text_Variable_1) == 0x000048, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_ComponentBoundEvent_Sender) == 0x000060, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, CallFunc_GetGameState_ReturnValue) == 0x000068, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_DynamicCast_AsBP_Game_State_Gun_Fight) == 0x000080, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_DynamicCast_AsBP_Game_State_Gun_Fight' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000090, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug, K2Node_Select_Default) == 0x000098, "Member 'UI_GunFight_Debug_C_ExecuteUbergraph_UI_GunFight_Debug::K2Node_Select_Default' has a wrong offset!");

// Function UI_GunFight_Debug.UI_GunFight_Debug_C.BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_GunFight_Debug_C_BndEvt__FlameButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

}
