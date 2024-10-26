#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_WaterBarell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SRTarget_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SRTarget_WaterBarell.BP_SRTarget_WaterBarell_C
// 0x0020 (0x02E8 - 0x02C8)
class ABP_SRTarget_WaterBarell_C final : public ABP_SRTarget_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SRTarget_WaterBarell_C;          // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   barrelWater;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpillingWater_C*>            SpillingWaters;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_SRTarget_WaterBarell(int32 EntryPoint);
	void MulticastedDestroySpillWater();
	void MulticastedSpillWater(const struct FVector& Location, const struct FVector& Normal);
	void ResetTargetServer();
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SRTarget_WaterBarell_C">();
	}
	static class ABP_SRTarget_WaterBarell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SRTarget_WaterBarell_C>();
	}
};
static_assert(alignof(ABP_SRTarget_WaterBarell_C) == 0x000008, "Wrong alignment on ABP_SRTarget_WaterBarell_C");
static_assert(sizeof(ABP_SRTarget_WaterBarell_C) == 0x0002E8, "Wrong size on ABP_SRTarget_WaterBarell_C");
static_assert(offsetof(ABP_SRTarget_WaterBarell_C, UberGraphFrame_BP_SRTarget_WaterBarell_C) == 0x0002C8, "Member 'ABP_SRTarget_WaterBarell_C::UberGraphFrame_BP_SRTarget_WaterBarell_C' has a wrong offset!");
static_assert(offsetof(ABP_SRTarget_WaterBarell_C, barrelWater) == 0x0002D0, "Member 'ABP_SRTarget_WaterBarell_C::barrelWater' has a wrong offset!");
static_assert(offsetof(ABP_SRTarget_WaterBarell_C, SpillingWaters) == 0x0002D8, "Member 'ABP_SRTarget_WaterBarell_C::SpillingWaters' has a wrong offset!");

}

