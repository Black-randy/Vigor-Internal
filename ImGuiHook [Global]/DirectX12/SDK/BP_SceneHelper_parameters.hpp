#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneHelper

#include "Basic.hpp"

#include "FlameUI_structs.hpp"
#include "S_FavoriteOutfiteSet_structs.hpp"
#include "Flame_structs.hpp"
#include "S_FavoriteOutfitePosterRenderSettings_structs.hpp"


namespace SDK::Params
{

// Function BP_SceneHelper.BP_SceneHelper_C.ExecuteUbergraph_BP_SceneHelper
// 0x0D80 (0x0D80 - 0x0000)
struct BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCustomizationSlotVariant>      K2Node_CustomEvent_Outfit_Set_Used_Customization_Variants; // 0x0018(0x0010)(ReferenceParm)
	class USaveGame*                              CallFunc_SafeSyncLoadGameFromSlot_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomizationContainer                K2Node_MakeStruct_CustomizationContainer;          // 0x0030(0x0010)()
	class UBP_FavOutfitSets_SaveGame_C*           K2Node_DynamicCast_AsBP_Fav_Outfit_Sets_Save_Game; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_FavoriteOutfitePosterRenderSettings CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0640)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShowTemplateSceneActor_bSuccess;          // 0x06B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x06B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFlamePlatform                                CallFunc_GetCurrentPlatform_ReturnValue;           // 0x06B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x06B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x06B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B6[0x2];                                      // 0x06B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneCaptureComponent2D*               CallFunc_GetSceneCaptureCamera_SceneCapture;       // 0x06B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C4[0x4];                                      // 0x06C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x06C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FavoriteOutfitePosterRenderSettings CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x06E0(0x0640)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0D20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D21[0x7];                                      // 0x0D21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0D28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0D30(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0D38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0D39(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D3A[0x6];                                      // 0x0D3A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_FavoriteOutfiteSet>          CallFunc_GetAllOufits_OutfitSets;                  // 0x0D40(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0D50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D51[0x7];                                      // 0x0D51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_FavoriteOutfiteSet                  CallFunc_Array_Get_Item;                           // 0x0D58(0x0028)(ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper) == 0x000010, "Wrong alignment on BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper");
static_assert(sizeof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper) == 0x000D80, "Wrong size on BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, EntryPoint) == 0x000000, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000008, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetUserControllerId_ReturnValue) == 0x000010, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_CustomEvent_Outfit_Set_Used_Customization_Variants) == 0x000018, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_CustomEvent_Outfit_Set_Used_Customization_Variants' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_SafeSyncLoadGameFromSlot_ReturnValue) == 0x000028, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_SafeSyncLoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_MakeStruct_CustomizationContainer) == 0x000030, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_MakeStruct_CustomizationContainer' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_DynamicCast_AsBP_Fav_Outfit_Sets_Save_Game) == 0x000040, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_DynamicCast_AsBP_Fav_Outfit_Sets_Save_Game' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_Conv_StringToName_ReturnValue) == 0x000060, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0006B0, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_ShowTemplateSceneActor_bSuccess) == 0x0006B1, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_ShowTemplateSceneActor_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x0006B2, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetCurrentPlatform_ReturnValue) == 0x0006B3, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetCurrentPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0006B4, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_IsValid_ReturnValue) == 0x0006B5, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetSceneCaptureCamera_SceneCapture) == 0x0006B8, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetSceneCaptureCamera_SceneCapture' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_Event_DeltaSeconds) == 0x0006C0, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0006C8, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0006D8, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0006E0, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000D20, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000D28, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_DynamicCast_AsTexture_2D) == 0x000D30, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, K2Node_DynamicCast_bSuccess_1) == 0x000D38, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000D39, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_GetAllOufits_OutfitSets) == 0x000D40, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_GetAllOufits_OutfitSets' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_IsValid_ReturnValue_1) == 0x000D50, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper, CallFunc_Array_Get_Item) == 0x000D58, "Member 'BP_SceneHelper_C_ExecuteUbergraph_BP_SceneHelper::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.ChangeOutfit
// 0x0010 (0x0010 - 0x0000)
struct BP_SceneHelper_C_ChangeOutfit final
{
public:
	TArray<struct FCustomizationSlotVariant>      Outfit_Set_Used_Customization_Variants;            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_SceneHelper_C_ChangeOutfit) == 0x000008, "Wrong alignment on BP_SceneHelper_C_ChangeOutfit");
static_assert(sizeof(BP_SceneHelper_C_ChangeOutfit) == 0x000010, "Wrong size on BP_SceneHelper_C_ChangeOutfit");
static_assert(offsetof(BP_SceneHelper_C_ChangeOutfit, Outfit_Set_Used_Customization_Variants) == 0x000000, "Member 'BP_SceneHelper_C_ChangeOutfit::Outfit_Set_Used_Customization_Variants' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.EF_ChangeTemplate
// 0x0018 (0x0018 - 0x0000)
struct BP_SceneHelper_C_EF_ChangeTemplate final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTemplateCount_Count;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_EF_ChangeTemplate) == 0x000004, "Wrong alignment on BP_SceneHelper_C_EF_ChangeTemplate");
static_assert(sizeof(BP_SceneHelper_C_EF_ChangeTemplate) == 0x000018, "Wrong size on BP_SceneHelper_C_EF_ChangeTemplate");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, Temp_bool_Variable) == 0x000000, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, CallFunc_GetTemplateCount_Count) == 0x000004, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::CallFunc_GetTemplateCount_Count' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, CallFunc_Percent_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ChangeTemplate, K2Node_Select_Default) == 0x000014, "Member 'BP_SceneHelper_C_EF_ChangeTemplate::K2Node_Select_Default' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.GetTemplateCount
// 0x0020 (0x0020 - 0x0000)
struct BP_SceneHelper_C_GetTemplateCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_GetTemplateCount) == 0x000008, "Wrong alignment on BP_SceneHelper_C_GetTemplateCount");
static_assert(sizeof(BP_SceneHelper_C_GetTemplateCount) == 0x000020, "Wrong size on BP_SceneHelper_C_GetTemplateCount");
static_assert(offsetof(BP_SceneHelper_C_GetTemplateCount, Count) == 0x000000, "Member 'BP_SceneHelper_C_GetTemplateCount::Count' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_GetTemplateCount, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000008, "Member 'BP_SceneHelper_C_GetTemplateCount::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_GetTemplateCount, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_SceneHelper_C_GetTemplateCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.EF Cycle Saved Loadouts
// 0x0048 (0x0048 - 0x0000)
struct BP_SceneHelper_C_EF_Cycle_Saved_Loadouts final
{
public:
	TArray<struct FS_FavoriteOutfiteSet>          CallFunc_GetAllOufits_OutfitSets;                  // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_FavoriteOutfiteSet                  CallFunc_Array_Get_Item;                           // 0x0018(0x0028)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts) == 0x000008, "Wrong alignment on BP_SceneHelper_C_EF_Cycle_Saved_Loadouts");
static_assert(sizeof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts) == 0x000048, "Wrong size on BP_SceneHelper_C_EF_Cycle_Saved_Loadouts");
static_assert(offsetof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts, CallFunc_GetAllOufits_OutfitSets) == 0x000000, "Member 'BP_SceneHelper_C_EF_Cycle_Saved_Loadouts::CallFunc_GetAllOufits_OutfitSets' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SceneHelper_C_EF_Cycle_Saved_Loadouts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SceneHelper_C_EF_Cycle_Saved_Loadouts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_SceneHelper_C_EF_Cycle_Saved_Loadouts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_Cycle_Saved_Loadouts, CallFunc_Percent_IntInt_ReturnValue) == 0x000044, "Member 'BP_SceneHelper_C_EF_Cycle_Saved_Loadouts::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.EF_ExportImageToRoot
// 0x0048 (0x0048 - 0x0000)
struct BP_SceneHelper_C_EF_ExportImageToRoot final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetProjectDirectory_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_EF_ExportImageToRoot) == 0x000008, "Wrong alignment on BP_SceneHelper_C_EF_ExportImageToRoot");
static_assert(sizeof(BP_SceneHelper_C_EF_ExportImageToRoot) == 0x000048, "Wrong size on BP_SceneHelper_C_EF_ExportImageToRoot");
static_assert(offsetof(BP_SceneHelper_C_EF_ExportImageToRoot, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'BP_SceneHelper_C_EF_ExportImageToRoot::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ExportImageToRoot, CallFunc_GetProjectDirectory_ReturnValue) == 0x000008, "Member 'BP_SceneHelper_C_EF_ExportImageToRoot::CallFunc_GetProjectDirectory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ExportImageToRoot, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_SceneHelper_C_EF_ExportImageToRoot::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ExportImageToRoot, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_SceneHelper_C_EF_ExportImageToRoot::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ExportImageToRoot, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'BP_SceneHelper_C_EF_ExportImageToRoot::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.EF_ToggleRenderEveryFrame
// 0x0010 (0x0010 - 0x0000)
struct BP_SceneHelper_C_EF_ToggleRenderEveryFrame final
{
public:
	class USceneCaptureComponent2D*               CallFunc_GetSceneCaptureCamera_SceneCapture;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SceneHelper_C_EF_ToggleRenderEveryFrame) == 0x000008, "Wrong alignment on BP_SceneHelper_C_EF_ToggleRenderEveryFrame");
static_assert(sizeof(BP_SceneHelper_C_EF_ToggleRenderEveryFrame) == 0x000010, "Wrong size on BP_SceneHelper_C_EF_ToggleRenderEveryFrame");
static_assert(offsetof(BP_SceneHelper_C_EF_ToggleRenderEveryFrame, CallFunc_GetSceneCaptureCamera_SceneCapture) == 0x000000, "Member 'BP_SceneHelper_C_EF_ToggleRenderEveryFrame::CallFunc_GetSceneCaptureCamera_SceneCapture' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_ToggleRenderEveryFrame, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_SceneHelper_C_EF_ToggleRenderEveryFrame::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.EF_AUTO_RefreshData
// 0x0040 (0x0040 - 0x0000)
struct BP_SceneHelper_C_EF_AUTO_RefreshData final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_EF_AUTO_RefreshData) == 0x000008, "Wrong alignment on BP_SceneHelper_C_EF_AUTO_RefreshData");
static_assert(sizeof(BP_SceneHelper_C_EF_AUTO_RefreshData) == 0x000040, "Wrong size on BP_SceneHelper_C_EF_AUTO_RefreshData");
static_assert(offsetof(BP_SceneHelper_C_EF_AUTO_RefreshData, Temp_bool_Variable) == 0x000000, "Member 'BP_SceneHelper_C_EF_AUTO_RefreshData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_AUTO_RefreshData, Temp_string_Variable) == 0x000008, "Member 'BP_SceneHelper_C_EF_AUTO_RefreshData::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_AUTO_RefreshData, Temp_string_Variable_1) == 0x000018, "Member 'BP_SceneHelper_C_EF_AUTO_RefreshData::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_AUTO_RefreshData, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_SceneHelper_C_EF_AUTO_RefreshData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_EF_AUTO_RefreshData, K2Node_Select_Default) == 0x000030, "Member 'BP_SceneHelper_C_EF_AUTO_RefreshData::K2Node_Select_Default' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SceneHelper_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SceneHelper_C_ReceiveTick");
static_assert(sizeof(BP_SceneHelper_C_ReceiveTick) == 0x000004, "Wrong size on BP_SceneHelper_C_ReceiveTick");
static_assert(offsetof(BP_SceneHelper_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SceneHelper_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_SceneHelper_C_UserConstructionScript final
{
public:
	class USceneCaptureComponent2D*               CallFunc_GetSceneCaptureCamera_SceneCapture;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class USceneCaptureComponent2D*               CallFunc_GetSceneCaptureCamera_SceneCapture_1;     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SceneHelper_C_UserConstructionScript");
static_assert(sizeof(BP_SceneHelper_C_UserConstructionScript) == 0x000038, "Wrong size on BP_SceneHelper_C_UserConstructionScript");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, CallFunc_GetSceneCaptureCamera_SceneCapture) == 0x000000, "Member 'BP_SceneHelper_C_UserConstructionScript::CallFunc_GetSceneCaptureCamera_SceneCapture' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_SceneHelper_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, CallFunc_GetSceneCaptureCamera_SceneCapture_1) == 0x000018, "Member 'BP_SceneHelper_C_UserConstructionScript::CallFunc_GetSceneCaptureCamera_SceneCapture_1' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000020, "Member 'BP_SceneHelper_C_UserConstructionScript::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_SceneHelper_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SceneHelper_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000030, "Member 'BP_SceneHelper_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function BP_SceneHelper.BP_SceneHelper_C.GetSceneCaptureCamera
// 0x0008 (0x0008 - 0x0000)
struct BP_SceneHelper_C_GetSceneCaptureCamera final
{
public:
	class USceneCaptureComponent2D*               SceneCapture;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SceneHelper_C_GetSceneCaptureCamera) == 0x000008, "Wrong alignment on BP_SceneHelper_C_GetSceneCaptureCamera");
static_assert(sizeof(BP_SceneHelper_C_GetSceneCaptureCamera) == 0x000008, "Wrong size on BP_SceneHelper_C_GetSceneCaptureCamera");
static_assert(offsetof(BP_SceneHelper_C_GetSceneCaptureCamera, SceneCapture) == 0x000000, "Member 'BP_SceneHelper_C_GetSceneCaptureCamera::SceneCapture' has a wrong offset!");

}
