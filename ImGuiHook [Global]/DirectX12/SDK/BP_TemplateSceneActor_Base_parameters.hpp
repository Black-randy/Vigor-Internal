#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TemplateSceneActor_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TemplateSceneActor_Base.BP_TemplateSceneActor_Base_C.GetCameraPosition
// 0x0060 (0x0060 - 0x0000)
struct BP_TemplateSceneActor_Base_C_GetCameraPosition final
{
public:
	struct FTransform                             CameraTransform;                                   // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TemplateSceneActor_Base_C_GetCameraPosition) == 0x000010, "Wrong alignment on BP_TemplateSceneActor_Base_C_GetCameraPosition");
static_assert(sizeof(BP_TemplateSceneActor_Base_C_GetCameraPosition) == 0x000060, "Wrong size on BP_TemplateSceneActor_Base_C_GetCameraPosition");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetCameraPosition, CameraTransform) == 0x000000, "Member 'BP_TemplateSceneActor_Base_C_GetCameraPosition::CameraTransform' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetCameraPosition, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_TemplateSceneActor_Base_C_GetCameraPosition::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_TemplateSceneActor_Base.BP_TemplateSceneActor_Base_C.GetScenePrimitives
// 0x0090 (0x0090 - 0x0000)
struct BP_TemplateSceneActor_Base_C_GetScenePrimitives final
{
public:
	TArray<class UPrimitiveComponent*>            Primitives;                                        // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            PrimitivesTemp;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllChildActors_ChildActors;            // 0x0030(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkinnedMeshComponent*>          CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USkinnedMeshComponent*>          CallFunc_K2_GetComponentsByClass_ReturnValue_2;    // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue_3;    // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TemplateSceneActor_Base_C_GetScenePrimitives) == 0x000008, "Wrong alignment on BP_TemplateSceneActor_Base_C_GetScenePrimitives");
static_assert(sizeof(BP_TemplateSceneActor_Base_C_GetScenePrimitives) == 0x000090, "Wrong size on BP_TemplateSceneActor_Base_C_GetScenePrimitives");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, Primitives) == 0x000000, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::Primitives' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, PrimitivesTemp) == 0x000010, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::PrimitivesTemp' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_GetAllChildActors_ChildActors) == 0x000030, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_GetAllChildActors_ChildActors' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000048, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000058, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_K2_GetComponentsByClass_ReturnValue_2) == 0x000068, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_K2_GetComponentsByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_K2_GetComponentsByClass_ReturnValue_3) == 0x000078, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_K2_GetComponentsByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_GetScenePrimitives, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'BP_TemplateSceneActor_Base_C_GetScenePrimitives::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_TemplateSceneActor_Base.BP_TemplateSceneActor_Base_C.ApplyCustomizationsToMannequin
// 0x0078 (0x0078 - 0x0000)
struct BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin final
{
public:
	class FName                                   MannequinTag;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomizationContainer                Customizations;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllChildActors_ChildActors;            // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PremiumPackMannequin_C*             K2Node_DynamicCast_AsBP_Premium_Pack_Mannequin;    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplyCustomizationOnMannequin_ReturnValue; // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin) == 0x000008, "Wrong alignment on BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin");
static_assert(sizeof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin) == 0x000078, "Wrong size on BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, MannequinTag) == 0x000000, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::MannequinTag' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, Customizations) == 0x000008, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::Customizations' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_GetUserControllerId_ReturnValue) == 0x000028, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000030, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_GetAllChildActors_ChildActors) == 0x000040, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_GetAllChildActors_ChildActors' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, K2Node_DynamicCast_AsBP_Premium_Pack_Mannequin) == 0x000068, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::K2Node_DynamicCast_AsBP_Premium_Pack_Mannequin' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_ApplyCustomizationOnMannequin_ReturnValue) == 0x000072, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_ApplyCustomizationOnMannequin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin, CallFunc_Array_Contains_ReturnValue) == 0x000073, "Member 'BP_TemplateSceneActor_Base_C_ApplyCustomizationsToMannequin::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

}

