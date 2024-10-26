#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TargetAim

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_TargetAim.UI_TargetAim_C.ExecuteUbergraph_UI_TargetAim
// 0x00D8 (0x00D8 - 0x0000)
struct UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyMenuOpen_ReturnValue;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRenderOpacity_ReturnValue_1;           // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue_1;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim) == 0x000008, "Wrong alignment on UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim");
static_assert(sizeof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim) == 0x0000D8, "Wrong size on UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, EntryPoint) == 0x000000, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_Event_IsDesignTime) == 0x000020, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000070, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_GetRenderOpacity_ReturnValue) == 0x000078, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_FInterpTo_ReturnValue) == 0x00007C, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_Event_MyGeometry) == 0x000080, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, K2Node_Event_InDeltaTime) == 0x0000B8, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C0, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_IsAnyMenuOpen_ReturnValue) == 0x0000C8, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_IsAnyMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_GetRenderOpacity_ReturnValue_1) == 0x0000CC, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_GetRenderOpacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim, CallFunc_FInterpTo_ReturnValue_1) == 0x0000D0, "Member 'UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim::CallFunc_FInterpTo_ReturnValue_1' has a wrong offset!");

// Function UI_TargetAim.UI_TargetAim_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_TargetAim_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TargetAim_C_Tick) == 0x000004, "Wrong alignment on UI_TargetAim_C_Tick");
static_assert(sizeof(UI_TargetAim_C_Tick) == 0x00003C, "Wrong size on UI_TargetAim_C_Tick");
static_assert(offsetof(UI_TargetAim_C_Tick, MyGeometry) == 0x000000, "Member 'UI_TargetAim_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_TargetAim_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_TargetAim_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_TargetAim.UI_TargetAim_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_TargetAim_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TargetAim_C_PreConstruct) == 0x000001, "Wrong alignment on UI_TargetAim_C_PreConstruct");
static_assert(sizeof(UI_TargetAim_C_PreConstruct) == 0x000001, "Wrong size on UI_TargetAim_C_PreConstruct");
static_assert(offsetof(UI_TargetAim_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_TargetAim_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

