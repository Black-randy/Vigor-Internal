#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_ProSplineActor

#include "Basic.hpp"

#include "S_SmartSpline_Segment_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function bp_ProSplineActor.bp_ProSplineActor_C.UserConstructionScript
// 0x0240 (0x0240 - 0x0000)
struct bp_ProSplineActor_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue_1;               // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue_2;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_2;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0xF];                                      // 0x0111(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue_3;               // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtSplinePoint_ReturnValue;     // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_3;              // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_SmartSpline_Segment                 CallFunc_Array_Get_Item;                           // 0x0170(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtSplinePoint_ReturnValue_1;   // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1ED[0x3];                                      // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_2; // 0x021C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2; // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bp_ProSplineActor_C_UserConstructionScript) == 0x000010, "Wrong alignment on bp_ProSplineActor_C_UserConstructionScript");
static_assert(sizeof(bp_ProSplineActor_C_UserConstructionScript) == 0x000240, "Wrong size on bp_ProSplineActor_C_UserConstructionScript");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000000, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, Temp_struct_Variable) == 0x000010, "Member 'bp_ProSplineActor_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000040, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, Temp_int_Variable) == 0x000048, "Member 'bp_ProSplineActor_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x000054, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x000060, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x00006C, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x00007C, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_1) == 0x0000C0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x0000C8, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue_1) == 0x0000C9, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_1) == 0x0000D0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_3) == 0x000100, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_2) == 0x000108, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue_2) == 0x000110, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_2) == 0x000120, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_3) == 0x000150, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetRotationAtSplinePoint_ReturnValue) == 0x000158, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetRotationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue_3) == 0x000164, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000168, "Member 'bp_ProSplineActor_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x00016C, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000170, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x0001A0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001AC, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetRotationAtSplinePoint_ReturnValue_1) == 0x0001B8, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetRotationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x0001C4, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0001D0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001DC, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001E0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x0001E4, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x0001E8, "Member 'bp_ProSplineActor_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x0001EC, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001F0, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001F4, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x0001F8, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000204, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000210, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_2) == 0x00021C, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2) == 0x000228, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2' has a wrong offset!");
static_assert(offsetof(bp_ProSplineActor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000234, "Member 'bp_ProSplineActor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");

}
