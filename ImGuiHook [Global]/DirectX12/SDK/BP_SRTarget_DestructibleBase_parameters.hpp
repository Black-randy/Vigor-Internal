#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_DestructibleBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.ExecuteUbergraph_BP_SRTarget_DestructibleBase
// 0x0108 (0x0108 - 0x0000)
struct BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DamageAmount;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0008(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_ImpulseDir;                     // 0x0014(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ImpulseStrength;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Damage;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDamageType*                      K2Node_Event_DamageType;                           // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_HitComponent;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_BoneName;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_ShotFromDirection;                    // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x0078(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase) == 0x000008, "Wrong alignment on BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase");
static_assert(sizeof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase) == 0x000108, "Wrong size on BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, EntryPoint) == 0x000000, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_CustomEvent_DamageAmount) == 0x000004, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_CustomEvent_DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_CustomEvent_HitLocation) == 0x000008, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_CustomEvent_ImpulseDir) == 0x000014, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_CustomEvent_ImpulseDir' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_CustomEvent_ImpulseStrength) == 0x000020, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_CustomEvent_ImpulseStrength' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_Damage) == 0x000024, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_DamageType) == 0x000028, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_HitLocation) == 0x000030, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_HitNormal) == 0x00003C, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_HitComponent) == 0x000048, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_BoneName) == 0x000050, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_BoneName' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_ShotFromDirection) == 0x000058, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_ShotFromDirection' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_InstigatedBy) == 0x000068, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_DamageCauser) == 0x000070, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, K2Node_Event_HitInfo) == 0x000078, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000104, "Member 'BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");

// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.ReceivePointDamage
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SRTarget_DestructibleBase_C_ReceivePointDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShotFromDirection;                                 // 0x0038(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0058(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage) == 0x000008, "Wrong alignment on BP_SRTarget_DestructibleBase_C_ReceivePointDamage");
static_assert(sizeof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage) == 0x0000E8, "Wrong size on BP_SRTarget_DestructibleBase_C_ReceivePointDamage");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, Damage) == 0x000000, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::Damage' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, DamageType) == 0x000008, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::DamageType' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, HitLocation) == 0x000010, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, HitNormal) == 0x00001C, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, HitComponent) == 0x000028, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, BoneName) == 0x000030, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::BoneName' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, ShotFromDirection) == 0x000038, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::ShotFromDirection' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, InstigatedBy) == 0x000048, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, DamageCauser) == 0x000050, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_ReceivePointDamage, HitInfo) == 0x000058, "Member 'BP_SRTarget_DestructibleBase_C_ReceivePointDamage::HitInfo' has a wrong offset!");

// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.DestroyBottle
// 0x0020 (0x0020 - 0x0000)
struct BP_SRTarget_DestructibleBase_C_DestroyBottle final
{
public:
	float                                         DamageAmount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0004(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpulseDir;                                        // 0x0010(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ImpulseStrength;                                   // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRTarget_DestructibleBase_C_DestroyBottle) == 0x000004, "Wrong alignment on BP_SRTarget_DestructibleBase_C_DestroyBottle");
static_assert(sizeof(BP_SRTarget_DestructibleBase_C_DestroyBottle) == 0x000020, "Wrong size on BP_SRTarget_DestructibleBase_C_DestroyBottle");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_DestroyBottle, DamageAmount) == 0x000000, "Member 'BP_SRTarget_DestructibleBase_C_DestroyBottle::DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_DestroyBottle, HitLocation) == 0x000004, "Member 'BP_SRTarget_DestructibleBase_C_DestroyBottle::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_DestroyBottle, ImpulseDir) == 0x000010, "Member 'BP_SRTarget_DestructibleBase_C_DestroyBottle::ImpulseDir' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_DestructibleBase_C_DestroyBottle, ImpulseStrength) == 0x00001C, "Member 'BP_SRTarget_DestructibleBase_C_DestroyBottle::ImpulseStrength' has a wrong offset!");

}
