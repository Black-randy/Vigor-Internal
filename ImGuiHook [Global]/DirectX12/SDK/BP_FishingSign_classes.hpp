#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingSign

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FishingSign.BP_FishingSign_C
// 0x0010 (0x0230 - 0x0220)
class ABP_FishingSign_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 SK_FlagExitArea;                                   // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_fishing_sign;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FishingSign_C">();
	}
	static class ABP_FishingSign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FishingSign_C>();
	}
};
static_assert(alignof(ABP_FishingSign_C) == 0x000008, "Wrong alignment on ABP_FishingSign_C");
static_assert(sizeof(ABP_FishingSign_C) == 0x000230, "Wrong size on ABP_FishingSign_C");
static_assert(offsetof(ABP_FishingSign_C, SK_FlagExitArea) == 0x000220, "Member 'ABP_FishingSign_C::SK_FlagExitArea' has a wrong offset!");
static_assert(offsetof(ABP_FishingSign_C, SM_fishing_sign) == 0x000228, "Member 'ABP_FishingSign_C::SM_fishing_sign' has a wrong offset!");

}
