#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_ResultScreen_Success

#include "Basic.hpp"

#include "E_ShootingChallengeResult_structs.hpp"
#include "S_ShootingChallenge_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_SRChallenge_ResultScreen_Success.UI_SRChallenge_ResultScreen_Success_C.ResultScreenClosed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature final
{
public:
	bool                                          RetryChallenge;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature) == 0x000001, "Wrong alignment on UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature");
static_assert(sizeof(UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature) == 0x000001, "Wrong size on UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature, RetryChallenge) == 0x000000, "Member 'UI_SRChallenge_ResultScreen_Success_C_ResultScreenClosed__DelegateSignature::RetryChallenge' has a wrong offset!");

// Function UI_SRChallenge_ResultScreen_Success.UI_SRChallenge_ResultScreen_Success_C.ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success
// 0x0028 (0x0028 - 0x0000)
struct UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success) == 0x000008, "Wrong alignment on UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success");
static_assert(sizeof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success) == 0x000028, "Wrong size on UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, EntryPoint) == 0x000000, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000004, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, CallFunc_GetFlameController_ReturnValue) == 0x000010, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x000018, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success, CallFunc_GetFlameController_ReturnValue_1) == 0x000020, "Member 'UI_SRChallenge_ResultScreen_Success_C_ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success::CallFunc_GetFlameController_ReturnValue_1' has a wrong offset!");

// Function UI_SRChallenge_ResultScreen_Success.UI_SRChallenge_ResultScreen_Success_C.FillData
// 0x03B8 (0x03B8 - 0x0000)
struct UI_SRChallenge_ResultScreen_Success_C_FillData final
{
public:
	struct FS_ShootingChallenge                   Challenge;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	float                                         ActualTime;                                        // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousTime;                                      // 0x0094(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ShootingChallengeResult                     Rank_0;                                            // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OldBestTimeVariable;                               // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_FormatTimeFloatMMSSmm_ReturnValue;        // 0x00B0(0x0018)()
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_FormatTimeFloatMMSSmm_ReturnValue_1;      // 0x00D8(0x0018)()
	class FText                                   CallFunc_FormatTimeFloatMMSSmm_ReturnValue_2;      // 0x00F0(0x0018)()
	class FText                                   CallFunc_FormatTimeFloatMMSSmm_ReturnValue_3;      // 0x0108(0x0018)()
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ShootingChallengeResult                     Temp_byte_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0140(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0158(0x0018)()
	E_ShootingChallengeResult                     Temp_byte_Variable_1;                              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0178(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0190(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x01A8(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x01E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0210(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0238(0x0028)()
	class UEventSystem*                           CallFunc_GetEventSystem_ReturnValue;               // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EventSystem_C*                      K2Node_DynamicCast_AsBP_Event_System;              // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_5;                            // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0288(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x02A0(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x02B8(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x02D0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x02E8(0x0018)()
	E_ShootingChallengeResult                     Temp_byte_Variable_2;                              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x0310(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_3;            // 0x0328(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_2;                // 0x0340(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_3;                // 0x0358(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_4;            // 0x0370(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_4;                // 0x0388(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x03A0(0x0018)()
};
static_assert(alignof(UI_SRChallenge_ResultScreen_Success_C_FillData) == 0x000008, "Wrong alignment on UI_SRChallenge_ResultScreen_Success_C_FillData");
static_assert(sizeof(UI_SRChallenge_ResultScreen_Success_C_FillData) == 0x0003B8, "Wrong size on UI_SRChallenge_ResultScreen_Success_C_FillData");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Challenge) == 0x000000, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Challenge' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, ActualTime) == 0x000090, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::ActualTime' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, PreviousTime) == 0x000094, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::PreviousTime' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Rank_0) == 0x000098, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Rank_0' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, OldBestTimeVariable) == 0x00009C, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::OldBestTimeVariable' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable) == 0x0000A0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000A8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_FormatTimeFloatMMSSmm_ReturnValue) == 0x0000B0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_FormatTimeFloatMMSSmm_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x0000C8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000CC, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_Abs_ReturnValue) == 0x0000D0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_FormatTimeFloatMMSSmm_ReturnValue_1) == 0x0000D8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_FormatTimeFloatMMSSmm_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_FormatTimeFloatMMSSmm_ReturnValue_2) == 0x0000F0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_FormatTimeFloatMMSSmm_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_FormatTimeFloatMMSSmm_ReturnValue_3) == 0x000108, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_FormatTimeFloatMMSSmm_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable_1) == 0x000120, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable_2) == 0x000128, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable_3) == 0x000130, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_byte_Variable) == 0x000138, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_text_Variable) == 0x000140, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_text_Variable_1) == 0x000158, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_byte_Variable_1) == 0x000170, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_text_Variable_2) == 0x000178, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_text_Variable_3) == 0x000190, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_text_Variable_4) == 0x0001A8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_MakeStruct_SlateColor) == 0x0001C0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_MakeStruct_SlateColor_1) == 0x0001E8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_MakeStruct_SlateColor_2) == 0x000210, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_MakeStruct_SlateColor_3) == 0x000238, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_GetEventSystem_ReturnValue) == 0x000260, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_GetEventSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable_4) == 0x000268, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_DynamicCast_AsBP_Event_System) == 0x000270, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_DynamicCast_AsBP_Event_System' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_DynamicCast_bSuccess) == 0x000278, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_object_Variable_5) == 0x000280, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_MakeLiteralText_ReturnValue) == 0x000288, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0002A0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_TextToUpper_ReturnValue) == 0x0002B8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_TextToUpper_ReturnValue_1) == 0x0002D0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_Select_Default) == 0x0002E8, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, Temp_byte_Variable_2) == 0x000300, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_Select_Default_1) == 0x000308, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000310, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_MakeLiteralText_ReturnValue_3) == 0x000328, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_MakeLiteralText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_TextToUpper_ReturnValue_2) == 0x000340, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_TextToUpper_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_TextToUpper_ReturnValue_3) == 0x000358, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_TextToUpper_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_MakeLiteralText_ReturnValue_4) == 0x000370, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_MakeLiteralText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, CallFunc_TextToUpper_ReturnValue_4) == 0x000388, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::CallFunc_TextToUpper_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_ResultScreen_Success_C_FillData, K2Node_Select_Default_2) == 0x0003A0, "Member 'UI_SRChallenge_ResultScreen_Success_C_FillData::K2Node_Select_Default_2' has a wrong offset!");

}

