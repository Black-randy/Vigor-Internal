#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RiverSpline_Mesh

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "RiverSplineSegmentDetails_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RiverSpline_Mesh.BP_RiverSpline_Mesh_C
// 0x0028 (0x0280 - 0x0258)
class ABP_RiverSpline_Mesh_C final : public AWaterActor
{
public:
	class USplineMeshComponent*                   CollisionMesh;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRiverSplineSegmentDetails             SegmentDetails;                                    // 0x0260(0x0020)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DefineSpline(float Speed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RiverSpline_Mesh_C">();
	}
	static class ABP_RiverSpline_Mesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RiverSpline_Mesh_C>();
	}
};
static_assert(alignof(ABP_RiverSpline_Mesh_C) == 0x000008, "Wrong alignment on ABP_RiverSpline_Mesh_C");
static_assert(sizeof(ABP_RiverSpline_Mesh_C) == 0x000280, "Wrong size on ABP_RiverSpline_Mesh_C");
static_assert(offsetof(ABP_RiverSpline_Mesh_C, CollisionMesh) == 0x000258, "Member 'ABP_RiverSpline_Mesh_C::CollisionMesh' has a wrong offset!");
static_assert(offsetof(ABP_RiverSpline_Mesh_C, SegmentDetails) == 0x000260, "Member 'ABP_RiverSpline_Mesh_C::SegmentDetails' has a wrong offset!");

}

