#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fireplace_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_levels_3_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fireplace_0.BP_Fireplace_0_C
// 0x0050 (0x0270 - 0x0220)
class ABP_Fireplace_0_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FirePlace_LV0;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_bucket_rusty;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Invisible;                                         // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_levels_3                                 Level;                                             // 0x025A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25B[0x5];                                      // 0x025B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NewVar_0;                                          // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Fireplace_0(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fireplace_0_C">();
	}
	static class ABP_Fireplace_0_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fireplace_0_C>();
	}
};
static_assert(alignof(ABP_Fireplace_0_C) == 0x000008, "Wrong alignment on ABP_Fireplace_0_C");
static_assert(sizeof(ABP_Fireplace_0_C) == 0x000270, "Wrong size on ABP_Fireplace_0_C");
static_assert(offsetof(ABP_Fireplace_0_C, UberGraphFrame) == 0x000220, "Member 'ABP_Fireplace_0_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, StaticMesh2) == 0x000228, "Member 'ABP_Fireplace_0_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, StaticMesh1) == 0x000230, "Member 'ABP_Fireplace_0_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, StaticMesh) == 0x000238, "Member 'ABP_Fireplace_0_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, SM_FirePlace_LV0) == 0x000240, "Member 'ABP_Fireplace_0_C::SM_FirePlace_LV0' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, SM_bucket_rusty) == 0x000248, "Member 'ABP_Fireplace_0_C::SM_bucket_rusty' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_Fireplace_0_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, Visible) == 0x000258, "Member 'ABP_Fireplace_0_C::Visible' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, Invisible) == 0x000259, "Member 'ABP_Fireplace_0_C::Invisible' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, Level) == 0x00025A, "Member 'ABP_Fireplace_0_C::Level' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_0_C, NewVar_0) == 0x000260, "Member 'ABP_Fireplace_0_C::NewVar_0' has a wrong offset!");

}
