#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallBushStaticMeshComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmallBushStaticMeshComponent.BP_SmallBushStaticMeshComponent_C
// 0x0000 (0x06D0 - 0x06D0)
class UBP_SmallBushStaticMeshComponent_C final : public UExtendedFoliageStaticMeshComp
{
public:
	void GetFoleySoundProperties(float DeltaTime, class AActor* Actor, bool bIsOverlapping, float PreviousVolume, float PreviousPitch, float* Volume, float* Pitch);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmallBushStaticMeshComponent_C">();
	}
	static class UBP_SmallBushStaticMeshComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SmallBushStaticMeshComponent_C>();
	}
};
static_assert(alignof(UBP_SmallBushStaticMeshComponent_C) == 0x000010, "Wrong alignment on UBP_SmallBushStaticMeshComponent_C");
static_assert(sizeof(UBP_SmallBushStaticMeshComponent_C) == 0x0006D0, "Wrong size on UBP_SmallBushStaticMeshComponent_C");

}
