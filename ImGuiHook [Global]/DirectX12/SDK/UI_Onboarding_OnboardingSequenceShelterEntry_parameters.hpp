#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_OnboardingSequenceShelterEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_OnboardingSequenceShelterEntry.UI_Onboarding_OnboardingSequenceShelterEntry_C.ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry
// 0x01E8 (0x01E8 - 0x0000)
struct UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue;             // 0x0008(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UUI_OutlandsOnboardingCounterLine_C*    CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Shelter_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Shelter;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x00BC(0x0008)(NoDestructor)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00C8(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x00E0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x00F8(0x0018)()
	float                                         CallFunc_Get_One_Frame_Skip_Time_skipTime;         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_One_Frame_Skip_Time_skipTime_1;       // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0128(0x0018)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMenuWidget*                            CallFunc_GetGameMenu_ReturnValue;                  // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_186[0x2];                                      // 0x0186(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue_1;           // 0x0188(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue_1;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01C0(0x0018)(ConstParm)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry) == 0x000008, "Wrong alignment on UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry");
static_assert(sizeof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry) == 0x0001E8, "Wrong size on UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, EntryPoint) == 0x000000, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_GetSoftReference_ReturnValue) == 0x000008, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_GetSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Create_ReturnValue) == 0x000030, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_LoadSoftReference_ReturnValue) == 0x000038, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000040, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_AsTexture_2D) == 0x000050, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000059, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, Temp_int_Variable) == 0x00005C, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_GetGameMode_ReturnValue) == 0x000070, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_AsBP_Game_Mode_Shelter) == 0x000078, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_AsBP_Game_Mode_Shelter' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000084, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000088, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00009C, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000A8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000AC, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000B0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000B8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_MakeStruct_SlateChildSize) == 0x0000BC, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_MakeLiteralText_ReturnValue) == 0x0000C8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0000E0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_MakeLiteralText_ReturnValue_2) == 0x0000F8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Get_One_Frame_Skip_Time_skipTime) == 0x000110, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Get_One_Frame_Skip_Time_skipTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Get_One_Frame_Skip_Time_skipTime_1) == 0x000114, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Get_One_Frame_Skip_Time_skipTime_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000118, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000120, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, Temp_text_Variable) == 0x000128, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000150, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_GetFlameController_ReturnValue) == 0x000158, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, Temp_int_Variable_1) == 0x000160, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_GetGameMenu_ReturnValue) == 0x000168, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_GetGameMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_IsValid_ReturnValue_1) == 0x000170, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_AddChild_ReturnValue) == 0x000178, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Add_FloatFloat_ReturnValue) == 0x000180, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_Event_IsDesignTime) == 0x000184, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_Less_FloatFloat_ReturnValue) == 0x000185, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_GetSoftReference_ReturnValue_1) == 0x000188, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_GetSoftReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_LoadSoftReference_ReturnValue_1) == 0x0001B0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_LoadSoftReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_IsValid_ReturnValue_2) == 0x0001B8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_Select_Default) == 0x0001C0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_AsTexture_2D_1) == 0x0001D8, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, K2Node_DynamicCast_bSuccess_2) == 0x0001E0, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0001E1, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_ExecuteUbergraph_UI_Onboarding_OnboardingSequenceShelterEntry::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");

// Function UI_Onboarding_OnboardingSequenceShelterEntry.UI_Onboarding_OnboardingSequenceShelterEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct");
static_assert(sizeof(UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct) == 0x000001, "Wrong size on UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct");
static_assert(offsetof(UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Onboarding_OnboardingSequenceShelterEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
