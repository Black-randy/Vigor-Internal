#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlacableTrap_Hologram_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.ExecuteUbergraph_BP_PlacableTrap_Hologram_Base
// 0x0060 (0x0060 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh_1;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base) == 0x000008, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base) == 0x000060, "Wrong size on BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, EntryPoint) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, Temp_bool_Variable) == 0x000004, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, Temp_object_Variable) == 0x000008, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_CustomEvent_Loaded) == 0x000010, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, Temp_bool_Variable_1) == 0x000018, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000030, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_DynamicCast_AsStatic_Mesh) == 0x000038, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000041, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_Select_Default) == 0x000048, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_DynamicCast_AsStatic_Mesh_1) == 0x000050, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_DynamicCast_AsStatic_Mesh_1' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, CallFunc_SetStaticMesh_ReturnValue) == 0x00005A, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base, CallFunc_SetStaticMesh_ReturnValue_1) == 0x00005B, "Member 'BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.OnLoaded_303A9E7341428F48F05BE78A04090D6B
// 0x0008 (0x0008 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B) == 0x000008, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B) == 0x000008, "Wrong size on BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B, Loaded) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B::Loaded' has a wrong offset!");

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_UserConstructionScript");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript) == 0x000028, "Wrong size on BP_PlacableTrap_Hologram_Base_C_UserConstructionScript");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000001, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'BP_PlacableTrap_Hologram_Base_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_ChangeVisuals
// 0x0058 (0x0058 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals final
{
public:
	bool                                          CanBePlaced;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals) == 0x000008, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals) == 0x000058, "Wrong size on BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CanBePlaced) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CanBePlaced' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, Temp_bool_Variable) == 0x000001, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, Temp_struct_Variable) == 0x000004, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, Temp_int_Variable) == 0x000014, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CallFunc_GetNumMaterials_ReturnValue) == 0x00001C, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, Temp_bool_Variable_1) == 0x000020, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, Temp_struct_Variable_1) == 0x00002C, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, K2Node_Select_Default) == 0x000040, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals, K2Node_Select_Default_1) == 0x000048, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_SetVariablesFromTool
// 0x0040 (0x0040 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool final
{
public:
	float                                         Trap_Range_Trigger_0;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hologram_DisplayRangeDecal_0;                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             Hologram_Mesh_0;                                   // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UMaterialInterface*                     Hologram_Material_InvalidPlacement_0;              // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Hologram_Material_ValidPlacement_0;                // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool) == 0x000008, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool) == 0x000040, "Wrong size on BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool, Trap_Range_Trigger_0) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool::Trap_Range_Trigger_0' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool, Hologram_DisplayRangeDecal_0) == 0x000004, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool::Hologram_DisplayRangeDecal_0' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool, Hologram_Mesh_0) == 0x000008, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool::Hologram_Mesh_0' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool, Hologram_Material_InvalidPlacement_0) == 0x000030, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool::Hologram_Material_InvalidPlacement_0' has a wrong offset!");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool, Hologram_Material_ValidPlacement_0) == 0x000038, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool::Hologram_Material_ValidPlacement_0' has a wrong offset!");

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_CanBePlaced
// 0x0001 (0x0001 - 0x0000)
struct BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced final
{
public:
	bool                                          CanBePlaced;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced) == 0x000001, "Wrong alignment on BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced");
static_assert(sizeof(BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced) == 0x000001, "Wrong size on BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced");
static_assert(offsetof(BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced, CanBePlaced) == 0x000000, "Member 'BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced::CanBePlaced' has a wrong offset!");

}
