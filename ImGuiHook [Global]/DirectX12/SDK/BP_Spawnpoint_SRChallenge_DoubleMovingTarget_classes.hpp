#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spawnpoint_SRChallenge_DoubleMovingTarget

#include "Basic.hpp"

#include "BP_SRTarget_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Spawnpoint_SRChallenge_DoubleMovingTarget.BP_Spawnpoint_SRChallenge_DoubleMovingTarget_C
// 0x0018 (0x02E0 - 0x02C8)
class ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C final : public ABP_SRTarget_Base_C
{
public:
	class UDestructibleComponent*                 TargetFront;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleComponent*                 TargetBack;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Spawnpoint_SRChallenge_DoubleMovingTarget_C">();
	}
	static class ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C>();
	}
};
static_assert(alignof(ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C) == 0x000008, "Wrong alignment on ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C");
static_assert(sizeof(ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C) == 0x0002E0, "Wrong size on ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C");
static_assert(offsetof(ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C, TargetFront) == 0x0002C8, "Member 'ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C::TargetFront' has a wrong offset!");
static_assert(offsetof(ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C, TargetBack) == 0x0002D0, "Member 'ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C::TargetBack' has a wrong offset!");
static_assert(offsetof(ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C, Base) == 0x0002D8, "Member 'ABP_Spawnpoint_SRChallenge_DoubleMovingTarget_C::Base' has a wrong offset!");

}

