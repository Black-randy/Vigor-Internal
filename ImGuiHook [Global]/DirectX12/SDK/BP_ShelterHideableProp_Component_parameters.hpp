#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterHideableProp_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ShelterHideableProp_Component.BP_ShelterHideableProp_Component_C.ExecuteUbergraph_BP_ShelterHideableProp_Component
// 0x0038 (0x0038 - 0x0000)
struct BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Time;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component) == 0x000008, "Wrong alignment on BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component");
static_assert(sizeof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component) == 0x000038, "Wrong size on BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, EntryPoint) == 0x000000, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, K2Node_CustomEvent_Time) == 0x000018, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_ShelterHideableProp_Component_C_ExecuteUbergraph_BP_ShelterHideableProp_Component::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_ShelterHideableProp_Component.BP_ShelterHideableProp_Component_C.EnableOverlapsForTime
// 0x0004 (0x0004 - 0x0000)
struct BP_ShelterHideableProp_Component_C_EnableOverlapsForTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterHideableProp_Component_C_EnableOverlapsForTime) == 0x000004, "Wrong alignment on BP_ShelterHideableProp_Component_C_EnableOverlapsForTime");
static_assert(sizeof(BP_ShelterHideableProp_Component_C_EnableOverlapsForTime) == 0x000004, "Wrong size on BP_ShelterHideableProp_Component_C_EnableOverlapsForTime");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_EnableOverlapsForTime, Time) == 0x000000, "Member 'BP_ShelterHideableProp_Component_C_EnableOverlapsForTime::Time' has a wrong offset!");

// Function BP_ShelterHideableProp_Component.BP_ShelterHideableProp_Component_C.SetVisibility
// 0x0040 (0x0040 - 0x0000)
struct BP_ShelterHideableProp_Component_C_SetVisibility final
{
public:
	bool                                          bNewVisibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShelterHideableProp_Component_C_SetVisibility) == 0x000008, "Wrong alignment on BP_ShelterHideableProp_Component_C_SetVisibility");
static_assert(sizeof(BP_ShelterHideableProp_Component_C_SetVisibility) == 0x000040, "Wrong size on BP_ShelterHideableProp_Component_C_SetVisibility");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, bNewVisibility) == 0x000000, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::bNewVisibility' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000018, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_SetVisibility, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ShelterHideableProp_Component_C_SetVisibility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ShelterHideableProp_Component.BP_ShelterHideableProp_Component_C.Test Owner for Collisions with Posters
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters final
{
public:
	class UPrimitiveComponent*                    OptionalPrimitive;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Overlaps;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bChangedCollisions;                                // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TempBool;                                          // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             TempColisionBeforeCheck;                           // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             CallFunc_GetCollisionEnabled_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGenerateOverlapEvents_ReturnValue;     // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOverlappingComponent_ReturnValue;       // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         CallFunc_ComponentOverlapActors_OutActors;         // 0x0080(0x0010)(ReferenceParm)
	bool                                          CallFunc_ComponentOverlapActors_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters) == 0x000010, "Wrong alignment on BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters");
static_assert(sizeof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters) == 0x0000A0, "Wrong size on BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, OptionalPrimitive) == 0x000000, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::OptionalPrimitive' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, Overlaps) == 0x000008, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::Overlaps' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, bChangedCollisions) == 0x000009, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::bChangedCollisions' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, TempBool) == 0x00000A, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::TempBool' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, TempColisionBeforeCheck) == 0x00000B, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::TempColisionBeforeCheck' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, Temp_object_Variable) == 0x000010, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, K2Node_MakeArray_Array) == 0x000020, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_GetCollisionEnabled_ReturnValue) == 0x000048, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_GetCollisionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_GetGenerateOverlapEvents_ReturnValue) == 0x000049, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_GetGenerateOverlapEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_IsOverlappingComponent_ReturnValue) == 0x00004B, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_IsOverlappingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000050, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_ComponentOverlapActors_OutActors) == 0x000080, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_ComponentOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_ComponentOverlapActors_ReturnValue) == 0x000090, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_ComponentOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_Not_PreBool_ReturnValue) == 0x000099, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_Not_PreBool_ReturnValue_1) == 0x00009A, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters, CallFunc_BooleanOR_ReturnValue) == 0x00009B, "Member 'BP_ShelterHideableProp_Component_C_Test_Owner_for_Collisions_with_Posters::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
