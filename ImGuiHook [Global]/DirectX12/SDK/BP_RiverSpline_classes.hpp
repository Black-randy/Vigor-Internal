#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RiverSpline

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "RiverSplineSegmentDetails_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RiverSpline.BP_RiverSpline_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_RiverSpline_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URiverSplineComponent*                  Spline;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         NumSplinePoints;                                   // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            RiverMesh;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              RiverMaterial;                                     // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRiverSplineSegmentDetails>     RiverSegmentDetails;                               // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TraceMaxWidth;                                     // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      RiverInstancedMaterial;                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseDynamicCalculations;                           // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bReverseRiver;                                     // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionHeightAddition;                           // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRiverSplinePointDimensions>    SplinePointDimensions;                             // 0x0278(0x0010)(Edit, BlueprintVisible)
	float                                         DistanceStep;                                      // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WidthStep;                                         // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              DepthMaterial;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMaximumDepth;                                  // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxMovementDepthBuffer;                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRiverSurface;                                  // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultRiverFlowSpeed;                             // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 SegmentFlowSpeed;                                  // 0x02A8(0x0010)(Edit, BlueprintVisible)
	bool                                          ShouldUpdateMesh;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_RiverSpline(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void BuildRiverSegment(int32 CurrentIndex, class UStaticMesh* InputMesh);
	void GetRiverDimensions(const struct FVector& Location, const struct FVector& RightVector, int32 Index_0, float* RightOffset, float* BankDistance, float* RiverDepth);
	void GetTraceDistance(const struct FVector& Start, const struct FVector& Direction, float* Distance);
	void BuildSpline();
	void InverseSpline();
	void Max(const struct FVector& First, const struct FVector& Second, struct FVector* Largest);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RiverSpline_C">();
	}
	static class ABP_RiverSpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RiverSpline_C>();
	}
};
static_assert(alignof(ABP_RiverSpline_C) == 0x000008, "Wrong alignment on ABP_RiverSpline_C");
static_assert(sizeof(ABP_RiverSpline_C) == 0x0002C0, "Wrong size on ABP_RiverSpline_C");
static_assert(offsetof(ABP_RiverSpline_C, UberGraphFrame) == 0x000220, "Member 'ABP_RiverSpline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, Spline) == 0x000228, "Member 'ABP_RiverSpline_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_RiverSpline_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, NumSplinePoints) == 0x000238, "Member 'ABP_RiverSpline_C::NumSplinePoints' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, RiverMesh) == 0x000240, "Member 'ABP_RiverSpline_C::RiverMesh' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, RiverMaterial) == 0x000248, "Member 'ABP_RiverSpline_C::RiverMaterial' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, RiverSegmentDetails) == 0x000250, "Member 'ABP_RiverSpline_C::RiverSegmentDetails' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, TraceMaxWidth) == 0x000260, "Member 'ABP_RiverSpline_C::TraceMaxWidth' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, RiverInstancedMaterial) == 0x000268, "Member 'ABP_RiverSpline_C::RiverInstancedMaterial' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, bUseDynamicCalculations) == 0x000270, "Member 'ABP_RiverSpline_C::bUseDynamicCalculations' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, bReverseRiver) == 0x000271, "Member 'ABP_RiverSpline_C::bReverseRiver' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, CollisionHeightAddition) == 0x000274, "Member 'ABP_RiverSpline_C::CollisionHeightAddition' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, SplinePointDimensions) == 0x000278, "Member 'ABP_RiverSpline_C::SplinePointDimensions' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, DistanceStep) == 0x000288, "Member 'ABP_RiverSpline_C::DistanceStep' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, WidthStep) == 0x00028C, "Member 'ABP_RiverSpline_C::WidthStep' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, DepthMaterial) == 0x000290, "Member 'ABP_RiverSpline_C::DepthMaterial' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, ShowMaximumDepth) == 0x000298, "Member 'ABP_RiverSpline_C::ShowMaximumDepth' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, MaxMovementDepthBuffer) == 0x00029C, "Member 'ABP_RiverSpline_C::MaxMovementDepthBuffer' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, ShowRiverSurface) == 0x0002A0, "Member 'ABP_RiverSpline_C::ShowRiverSurface' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, DefaultRiverFlowSpeed) == 0x0002A4, "Member 'ABP_RiverSpline_C::DefaultRiverFlowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, SegmentFlowSpeed) == 0x0002A8, "Member 'ABP_RiverSpline_C::SegmentFlowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_C, ShouldUpdateMesh) == 0x0002B8, "Member 'ABP_RiverSpline_C::ShouldUpdateMesh' has a wrong offset!");

}

