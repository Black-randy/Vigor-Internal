#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Clocks_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Clocks_01.BP_Clocks_01_C
// 0x0030 (0x0250 - 0x0220)
class ABP_Clocks_01_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Clock_01_minute;                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Minute;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Clock_01_hour;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Hour;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Clocks_01;                                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Clocks_01(int32 EntryPoint);
	void UpdateClock();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Clocks_01_C">();
	}
	static class ABP_Clocks_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Clocks_01_C>();
	}
};
static_assert(alignof(ABP_Clocks_01_C) == 0x000008, "Wrong alignment on ABP_Clocks_01_C");
static_assert(sizeof(ABP_Clocks_01_C) == 0x000250, "Wrong size on ABP_Clocks_01_C");
static_assert(offsetof(ABP_Clocks_01_C, UberGraphFrame) == 0x000220, "Member 'ABP_Clocks_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Clocks_01_C, SM_Clock_01_minute) == 0x000228, "Member 'ABP_Clocks_01_C::SM_Clock_01_minute' has a wrong offset!");
static_assert(offsetof(ABP_Clocks_01_C, Minute) == 0x000230, "Member 'ABP_Clocks_01_C::Minute' has a wrong offset!");
static_assert(offsetof(ABP_Clocks_01_C, SM_Clock_01_hour) == 0x000238, "Member 'ABP_Clocks_01_C::SM_Clock_01_hour' has a wrong offset!");
static_assert(offsetof(ABP_Clocks_01_C, Hour) == 0x000240, "Member 'ABP_Clocks_01_C::Hour' has a wrong offset!");
static_assert(offsetof(ABP_Clocks_01_C, SM_Clocks_01) == 0x000248, "Member 'ABP_Clocks_01_C::SM_Clocks_01' has a wrong offset!");

}
