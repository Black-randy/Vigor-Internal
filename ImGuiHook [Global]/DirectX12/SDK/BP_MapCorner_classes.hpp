#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapCorner

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapCorner.BP_MapCorner_C
// 0x0010 (0x0230 - 0x0220)
class ABP_MapCorner_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapCorner_C">();
	}
	static class ABP_MapCorner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapCorner_C>();
	}
};
static_assert(alignof(ABP_MapCorner_C) == 0x000008, "Wrong alignment on ABP_MapCorner_C");
static_assert(sizeof(ABP_MapCorner_C) == 0x000230, "Wrong size on ABP_MapCorner_C");
static_assert(offsetof(ABP_MapCorner_C, StaticMesh) == 0x000220, "Member 'ABP_MapCorner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MapCorner_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_MapCorner_C::DefaultSceneRoot' has a wrong offset!");

}
