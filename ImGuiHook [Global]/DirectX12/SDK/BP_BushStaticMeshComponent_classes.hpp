#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BushStaticMeshComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BushStaticMeshComponent.BP_BushStaticMeshComponent_C
// 0x0000 (0x06D0 - 0x06D0)
class UBP_BushStaticMeshComponent_C final : public UExtendedFoliageStaticMeshComp
{
public:
	void GetFoleySoundProperties(float DeltaTime, class AActor* Actor, bool bIsOverlapping, float PreviousVolume, float PreviousPitch, float* Volume, float* Pitch);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BushStaticMeshComponent_C">();
	}
	static class UBP_BushStaticMeshComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BushStaticMeshComponent_C>();
	}
};
static_assert(alignof(UBP_BushStaticMeshComponent_C) == 0x000010, "Wrong alignment on UBP_BushStaticMeshComponent_C");
static_assert(sizeof(UBP_BushStaticMeshComponent_C) == 0x0006D0, "Wrong size on UBP_BushStaticMeshComponent_C");

}
