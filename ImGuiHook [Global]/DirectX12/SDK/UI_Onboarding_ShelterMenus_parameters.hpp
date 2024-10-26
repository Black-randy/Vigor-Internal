#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_ShelterMenus

#include "Basic.hpp"

#include "LoadingScreen_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Flame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_ShelterMenus.UI_Onboarding_ShelterMenus_C.ExecuteUbergraph_UI_Onboarding_ShelterMenus
// 0x04B0 (0x04B0 - 0x0000)
struct UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FUniqueNetIdRepl& Userid, EClientGroupState OldState, EClientGroupState NewState)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FUniqueNetIdRepl& Userid, const class FString& GroupId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue_1; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapsManager*                           CallFunc_GetMapsManager_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MapsManager_C*                      K2Node_DynamicCast_AsBP_Maps_Manager;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCloudMapRotationSlot>          CallFunc_GetMapRotationSlots_Slots;                // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasMapsRotationAvailable_Result;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Shelter_C*         K2Node_DynamicCast_AsBP_Player_Controller_Shelter; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapsManager*                           CallFunc_GetMapsManager_ReturnValue_1;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MapsManager_C*                      K2Node_DynamicCast_AsBP_Maps_Manager_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLevelDescriptionTableRow              CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A8(0x0050)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0118(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0168(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x01D0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Shelter_C*         K2Node_DynamicCast_AsBP_Player_Controller_Shelter_1; // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameMode_Shelter_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Shelter;         // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue_1;                // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Shelter_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Shelter_1;       // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapsManager*                           CallFunc_GetMapsManager_ReturnValue_2;             // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_MapsManager_C*                      K2Node_DynamicCast_AsBP_Maps_Manager_2;            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27A[0x6];                                      // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0280(0x0018)()
	class UEventSystem*                           CallFunc_GetEventSystem_ReturnValue;               // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x02A0(0x0018)()
	class UBP_EventSystem_C*                      K2Node_DynamicCast_AsBP_Event_System;              // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x02C8(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x02E0(0x0018)()
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UserId_1;                       // 0x0300(0x0028)(HasGetValueTypeHash)
	EClientGroupState                             K2Node_CustomEvent_OldState;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EClientGroupState                             K2Node_CustomEvent_NewState;                       // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32A[0x6];                                      // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGroupSystem*                           CallFunc_GetGroupSystem_ReturnValue;               // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_4;                              // 0x0338(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0350(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x0368(0x0018)()
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue_1;       // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FUniqueNetIdRepl& Userid, EClientGroupState OldState, EClientGroupState NewState)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0388(0x0010)(ZeroConstructor, NoDestructor)
	class UGroupSystem*                           CallFunc_GetGroupSystem_ReturnValue_1;             // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UserId;                         // 0x03A0(0x0028)(HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_GroupId;                        // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_7;                              // 0x03D8(0x0018)()
	class FText                                   Temp_text_Variable_8;                              // 0x03F0(0x0018)()
	EOnlineGameMode                               Temp_byte_Variable;                                // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409[0x3];                                      // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FUniqueNetIdRepl& Userid, const class FString& GroupId)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x040C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0420(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0438(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0478(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0488(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0498(0x0018)()
};
static_assert(alignof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus) == 0x000008, "Wrong alignment on UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus");
static_assert(sizeof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus) == 0x0004B0, "Wrong size on UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, EntryPoint) == 0x000000, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue) == 0x000004, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue_1) == 0x000038, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_IsMatchmakingAllowedForGameMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetMapsManager_ReturnValue) == 0x000040, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetMapsManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Maps_Manager) == 0x000048, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Maps_Manager' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetMapRotationSlots_Slots) == 0x000058, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetMapRotationSlots_Slots' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_HasMapsRotationAvailable_Result) == 0x000068, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_HasMapsRotationAvailable_Result' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetOwningPlayer_ReturnValue) == 0x000070, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Player_Controller_Shelter) == 0x000078, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Player_Controller_Shelter' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetMapsManager_ReturnValue_1) == 0x000088, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetMapsManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Maps_Manager_1) == 0x000090, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Maps_Manager_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Conv_StringToName_ReturnValue) == 0x00009C, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000F8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Conv_NameToText_ReturnValue) == 0x000100, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_MakeStruct_FormatArgumentData) == 0x000118, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_MakeArray_Array) == 0x000158, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_MakeStruct_FormatArgumentData_1) == 0x000168, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Conv_TextToString_ReturnValue) == 0x0001C0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_Event_MyGeometry) == 0x0001D0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_Event_InDeltaTime) == 0x000208, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00020C, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000210, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetGameMode_ReturnValue) == 0x000218, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Player_Controller_Shelter_1) == 0x000220, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Player_Controller_Shelter_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_3) == 0x000228, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Game_Mode_Shelter) == 0x000230, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Game_Mode_Shelter' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_4) == 0x000238, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetGameMode_ReturnValue_1) == 0x000240, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetGameMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Game_Mode_Shelter_1) == 0x000248, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Game_Mode_Shelter_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_5) == 0x000250, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetMapsManager_ReturnValue_2) == 0x000258, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetMapsManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_3) == 0x000260, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Maps_Manager_2) == 0x000270, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Maps_Manager_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_6) == 0x000278, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_IsVisible_ReturnValue) == 0x000279, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable) == 0x000280, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetEventSystem_ReturnValue) == 0x000298, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetEventSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_1) == 0x0002A0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_AsBP_Event_System) == 0x0002B8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_AsBP_Event_System' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_DynamicCast_bSuccess_7) == 0x0002C0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_2) == 0x0002C8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_3) == 0x0002E0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetFlameGameInstance_ReturnValue) == 0x0002F8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CustomEvent_UserId_1) == 0x000300, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CustomEvent_UserId_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CustomEvent_OldState) == 0x000328, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CustomEvent_OldState' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CustomEvent_NewState) == 0x000329, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetGroupSystem_ReturnValue) == 0x000330, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetGroupSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_4) == 0x000338, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_5) == 0x000350, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_6) == 0x000368, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetFlameGameInstance_ReturnValue_1) == 0x000380, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetFlameGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_4) == 0x000388, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_GetGroupSystem_ReturnValue_1) == 0x000398, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_GetGroupSystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CustomEvent_UserId) == 0x0003A0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CustomEvent_UserId' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CustomEvent_GroupId) == 0x0003C8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CustomEvent_GroupId' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_7) == 0x0003D8, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_text_Variable_8) == 0x0003F0, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, Temp_byte_Variable) == 0x000408, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_5) == 0x00040C, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_Select_Default) == 0x000420, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_MakeStruct_FormatArgumentData_2) == 0x000438, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_MakeArray_Array_1) == 0x000478, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, K2Node_CreateDelegate_OutputDelegate_6) == 0x000488, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus, CallFunc_Format_ReturnValue_1) == 0x000498, "Member 'UI_Onboarding_ShelterMenus_C_ExecuteUbergraph_UI_Onboarding_ShelterMenus::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function UI_Onboarding_ShelterMenus.UI_Onboarding_ShelterMenus_C.OnPlayerLeftOrJoinedTheGroup
// 0x0038 (0x0038 - 0x0000)
struct UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup final
{
public:
	struct FUniqueNetIdRepl                       Userid;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                 GroupId;                                           // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup) == 0x000008, "Wrong alignment on UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup");
static_assert(sizeof(UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup) == 0x000038, "Wrong size on UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup, Userid) == 0x000000, "Member 'UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup::Userid' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup, GroupId) == 0x000028, "Member 'UI_Onboarding_ShelterMenus_C_OnPlayerLeftOrJoinedTheGroup::GroupId' has a wrong offset!");

// Function UI_Onboarding_ShelterMenus.UI_Onboarding_ShelterMenus_C.OnGroupSystemStateChanged
// 0x0030 (0x0030 - 0x0000)
struct UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged final
{
public:
	struct FUniqueNetIdRepl                       Userid;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EClientGroupState                             OldState;                                          // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EClientGroupState                             NewState;                                          // 0x0029(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged) == 0x000008, "Wrong alignment on UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged");
static_assert(sizeof(UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged) == 0x000030, "Wrong size on UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged, Userid) == 0x000000, "Member 'UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged::Userid' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged, OldState) == 0x000028, "Member 'UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged, NewState) == 0x000029, "Member 'UI_Onboarding_ShelterMenus_C_OnGroupSystemStateChanged::NewState' has a wrong offset!");

// Function UI_Onboarding_ShelterMenus.UI_Onboarding_ShelterMenus_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Onboarding_ShelterMenus_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_ShelterMenus_C_Tick) == 0x000004, "Wrong alignment on UI_Onboarding_ShelterMenus_C_Tick");
static_assert(sizeof(UI_Onboarding_ShelterMenus_C_Tick) == 0x00003C, "Wrong size on UI_Onboarding_ShelterMenus_C_Tick");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Onboarding_ShelterMenus_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShelterMenus_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Onboarding_ShelterMenus_C_Tick::InDeltaTime' has a wrong offset!");

}

