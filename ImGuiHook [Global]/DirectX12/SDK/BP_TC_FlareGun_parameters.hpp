#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_FlareGun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_DiscoverPoint_structs.hpp"


namespace SDK::Params
{

// Function BP_TC_FlareGun.BP_TC_FlareGun_C.ExecuteUbergraph_BP_TC_FlareGun
// 0x0078 (0x0078 - 0x0000)
struct BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FogOfWarComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  K2Node_ComponentBoundEvent_Item;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_ComponentBoundEvent_ItemOwner;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_TargetActor;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_DiscoverPoint                  K2Node_MakeStruct_Struct_DiscoverPoint;            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun) == 0x000008, "Wrong alignment on BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun");
static_assert(sizeof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun) == 0x000078, "Wrong size on BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, EntryPoint) == 0x000000, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, K2Node_ComponentBoundEvent_Item) == 0x000028, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, K2Node_ComponentBoundEvent_ItemOwner) == 0x000030, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::K2Node_ComponentBoundEvent_ItemOwner' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, K2Node_ComponentBoundEvent_TargetActor) == 0x000038, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::K2Node_ComponentBoundEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, K2Node_MakeStruct_Struct_DiscoverPoint) == 0x000044, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::K2Node_MakeStruct_Struct_DiscoverPoint' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000054, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000070, "Member 'BP_TC_FlareGun_C_ExecuteUbergraph_BP_TC_FlareGun::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

// Function BP_TC_FlareGun.BP_TC_FlareGun_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        ItemOwner;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature) == 0x000008, "Wrong alignment on BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature");
static_assert(sizeof(BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature) == 0x000018, "Wrong size on BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature");
static_assert(offsetof(BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature, Item) == 0x000000, "Member 'BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature, ItemOwner) == 0x000008, "Member 'BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature::ItemOwner' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature, TargetActor) == 0x000010, "Member 'BP_TC_FlareGun_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature::TargetActor' has a wrong offset!");

// Function BP_TC_FlareGun.BP_TC_FlareGun_C.CanBeUsedImpl
// 0x0030 (0x0030 - 0x0000)
struct BP_TC_FlareGun_C_CanBeUsedImpl final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBeUsedImpl_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInsideBuilding_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TC_FlareGun_C_CanBeUsedImpl) == 0x000008, "Wrong alignment on BP_TC_FlareGun_C_CanBeUsedImpl");
static_assert(sizeof(BP_TC_FlareGun_C_CanBeUsedImpl) == 0x000030, "Wrong size on BP_TC_FlareGun_C_CanBeUsedImpl");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, ReturnValue) == 0x000000, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, CallFunc_CanBeUsedImpl_ReturnValue) == 0x000018, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::CallFunc_CanBeUsedImpl_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000020, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TC_FlareGun_C_CanBeUsedImpl, CallFunc_IsInsideBuilding_ReturnValue) == 0x000029, "Member 'BP_TC_FlareGun_C_CanBeUsedImpl::CallFunc_IsInsideBuilding_ReturnValue' has a wrong offset!");

}
