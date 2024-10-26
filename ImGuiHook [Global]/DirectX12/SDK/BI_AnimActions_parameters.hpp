#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AnimActions

#include "Basic.hpp"

#include "E_ParticleTriggerConditions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_Actions_structs.hpp"


namespace SDK::Params
{

// Function BI_AnimActions.BI_AnimActions_C.AnimInteraction
// 0x0002 (0x0002 - 0x0000)
struct BI_AnimActions_C_AnimInteraction final
{
public:
	E_Actions                                     Action;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Interrupt;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_AnimActions_C_AnimInteraction) == 0x000001, "Wrong alignment on BI_AnimActions_C_AnimInteraction");
static_assert(sizeof(BI_AnimActions_C_AnimInteraction) == 0x000002, "Wrong size on BI_AnimActions_C_AnimInteraction");
static_assert(offsetof(BI_AnimActions_C_AnimInteraction, Action) == 0x000000, "Member 'BI_AnimActions_C_AnimInteraction::Action' has a wrong offset!");
static_assert(offsetof(BI_AnimActions_C_AnimInteraction, Interrupt) == 0x000001, "Member 'BI_AnimActions_C_AnimInteraction::Interrupt' has a wrong offset!");

// Function BI_AnimActions.BI_AnimActions_C.AnimHitReaction
// 0x0018 (0x0018 - 0x0000)
struct BI_AnimActions_C_AnimHitReaction final
{
public:
	class FName                                   BoneName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Impact;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_AnimActions_C_AnimHitReaction) == 0x000004, "Wrong alignment on BI_AnimActions_C_AnimHitReaction");
static_assert(sizeof(BI_AnimActions_C_AnimHitReaction) == 0x000018, "Wrong size on BI_AnimActions_C_AnimHitReaction");
static_assert(offsetof(BI_AnimActions_C_AnimHitReaction, BoneName) == 0x000000, "Member 'BI_AnimActions_C_AnimHitReaction::BoneName' has a wrong offset!");
static_assert(offsetof(BI_AnimActions_C_AnimHitReaction, HitNormal) == 0x000008, "Member 'BI_AnimActions_C_AnimHitReaction::HitNormal' has a wrong offset!");
static_assert(offsetof(BI_AnimActions_C_AnimHitReaction, Impact) == 0x000014, "Member 'BI_AnimActions_C_AnimHitReaction::Impact' has a wrong offset!");

// Function BI_AnimActions.BI_AnimActions_C.TriggerMeshSpecificParticle
// 0x0002 (0x0002 - 0x0000)
struct BI_AnimActions_C_TriggerMeshSpecificParticle final
{
public:
	E_ParticleTriggerConditions                   TriggerType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HandleReplicationYourself;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_AnimActions_C_TriggerMeshSpecificParticle) == 0x000001, "Wrong alignment on BI_AnimActions_C_TriggerMeshSpecificParticle");
static_assert(sizeof(BI_AnimActions_C_TriggerMeshSpecificParticle) == 0x000002, "Wrong size on BI_AnimActions_C_TriggerMeshSpecificParticle");
static_assert(offsetof(BI_AnimActions_C_TriggerMeshSpecificParticle, TriggerType) == 0x000000, "Member 'BI_AnimActions_C_TriggerMeshSpecificParticle::TriggerType' has a wrong offset!");
static_assert(offsetof(BI_AnimActions_C_TriggerMeshSpecificParticle, HandleReplicationYourself) == 0x000001, "Member 'BI_AnimActions_C_TriggerMeshSpecificParticle::HandleReplicationYourself' has a wrong offset!");

}

