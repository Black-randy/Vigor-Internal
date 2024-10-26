#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SI_BoxOfPlants

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SI_BoxOfPlants.BP_SI_BoxOfPlants_C.ExecuteUbergraph_BP_SI_BoxOfPlants
// 0x03A0 (0x03A0 - 0x0000)
struct BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00A4(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_NewVisualLevel;                       // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             K2Node_Event_SoftObject;                           // 0x0138(0x0028)(HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x018C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UObject*                                K2Node_Select_Default_1;                           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh_1;                // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x3];                                      // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x024C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x02D8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array_1;                          // 0x0378(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants) == 0x000008, "Wrong alignment on BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants");
static_assert(sizeof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants) == 0x0003A0, "Wrong size on BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, EntryPoint) == 0x000000, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_float_Variable) == 0x000004, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_float_Variable_1) == 0x000008, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_float_Variable_2) == 0x00000C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_float_Variable_3) == 0x000010, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_int_Variable) == 0x000020, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_bool_Variable) == 0x000024, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_bool_Variable_1) == 0x000025, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_int_Array_Index_Variable_1) == 0x000044, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Y) == 0x00004C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_X_1) == 0x000054, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Y_1) == 0x000058, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Z_1) == 0x00005C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_object_Variable) == 0x000060, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_X_2) == 0x000068, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Y_2) == 0x00006C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_BreakVector_Z_2) == 0x000070, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_RandomFloatInRange_ReturnValue) == 0x000074, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_MakeArray_Array) == 0x000078, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_MakeRotator_ReturnValue) == 0x000088, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000A4, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_Event_NewVisualLevel) == 0x000130, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_Event_NewVisualLevel' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_Event_SoftObject) == 0x000138, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_Event_SoftObject' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_Select_Default) == 0x000160, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000168, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_MakeVector_ReturnValue) == 0x000170, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_DynamicCast_AsStatic_Mesh) == 0x000180, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00018C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_Select_Default_1) == 0x000218, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_IsValid_ReturnValue) == 0x000220, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_DynamicCast_AsStatic_Mesh_1) == 0x000228, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_DynamicCast_AsStatic_Mesh_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_DynamicCast_bSuccess_1) == 0x000230, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_MakeVector_ReturnValue_1) == 0x000234, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_MakeVector_ReturnValue_2) == 0x000240, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x00024C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x0002D8, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000364, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, Temp_int_Loop_Counter_Variable_1) == 0x000368, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Less_IntInt_ReturnValue) == 0x00036C, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Add_IntInt_ReturnValue_1) == 0x000370, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, K2Node_MakeArray_Array_1) == 0x000378, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Array_Length_ReturnValue_1) == 0x000388, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Array_Get_Item_1) == 0x000390, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_Less_IntInt_ReturnValue_1) == 0x000398, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants, CallFunc_SetStaticMesh_ReturnValue) == 0x000399, "Member 'BP_SI_BoxOfPlants_C_ExecuteUbergraph_BP_SI_BoxOfPlants::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_SI_BoxOfPlants.BP_SI_BoxOfPlants_C.LoadProductionSoftMesh
// 0x0028 (0x0028 - 0x0000)
struct BP_SI_BoxOfPlants_C_LoadProductionSoftMesh final
{
public:
	TSoftObjectPtr<class UStaticMesh>             SoftObject;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_SI_BoxOfPlants_C_LoadProductionSoftMesh) == 0x000008, "Wrong alignment on BP_SI_BoxOfPlants_C_LoadProductionSoftMesh");
static_assert(sizeof(BP_SI_BoxOfPlants_C_LoadProductionSoftMesh) == 0x000028, "Wrong size on BP_SI_BoxOfPlants_C_LoadProductionSoftMesh");
static_assert(offsetof(BP_SI_BoxOfPlants_C_LoadProductionSoftMesh, SoftObject) == 0x000000, "Member 'BP_SI_BoxOfPlants_C_LoadProductionSoftMesh::SoftObject' has a wrong offset!");

// Function BP_SI_BoxOfPlants.BP_SI_BoxOfPlants_C.LoadAndShowVisualLevel
// 0x0004 (0x0004 - 0x0000)
struct BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel final
{
public:
	int32                                         NewVisualLevel;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel) == 0x000004, "Wrong alignment on BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel");
static_assert(sizeof(BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel) == 0x000004, "Wrong size on BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel");
static_assert(offsetof(BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel, NewVisualLevel) == 0x000000, "Member 'BP_SI_BoxOfPlants_C_LoadAndShowVisualLevel::NewVisualLevel' has a wrong offset!");

// Function BP_SI_BoxOfPlants.BP_SI_BoxOfPlants_C.OnLoaded_303A9E7341428F48F05BE78A9435E1E3
// 0x0008 (0x0008 - 0x0000)
struct BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3) == 0x000008, "Wrong alignment on BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3");
static_assert(sizeof(BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3) == 0x000008, "Wrong size on BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3");
static_assert(offsetof(BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3, Loaded) == 0x000000, "Member 'BP_SI_BoxOfPlants_C_OnLoaded_303A9E7341428F48F05BE78A9435E1E3::Loaded' has a wrong offset!");

// Function BP_SI_BoxOfPlants.BP_SI_BoxOfPlants_C.SetGeneratedItemMesh
// 0x0050 (0x0050 - 0x0000)
struct BP_SI_BoxOfPlants_C_SetGeneratedItemMesh final
{
public:
	int32                                         GeneratedMeshLevel;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaterialPercentage;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             CallFunc_Array_Get_Item;                           // 0x0010(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UStaticMesh>>     K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh) == 0x000008, "Wrong alignment on BP_SI_BoxOfPlants_C_SetGeneratedItemMesh");
static_assert(sizeof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh) == 0x000050, "Wrong size on BP_SI_BoxOfPlants_C_SetGeneratedItemMesh");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, GeneratedMeshLevel) == 0x000000, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::GeneratedMeshLevel' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, MaterialPercentage) == 0x000004, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::MaterialPercentage' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, K2Node_SwitchInteger_CmpSuccess) == 0x000038, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000039, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SI_BoxOfPlants_C_SetGeneratedItemMesh, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_SI_BoxOfPlants_C_SetGeneratedItemMesh::K2Node_MakeArray_Array' has a wrong offset!");

}

