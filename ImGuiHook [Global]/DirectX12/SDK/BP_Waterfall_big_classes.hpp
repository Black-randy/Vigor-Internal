#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Waterfall_big

#include "Basic.hpp"

#include "Waterfall_big_meshes_structs.hpp"
#include "Engine_classes.hpp"
#include "Waterfall_big_textures_structs.hpp"
#include "Waterfall_collide_bottom_structs.hpp"
#include "Waterfall_collide_top_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Waterfall_big.BP_Waterfall_big_C
// 0x00B0 (0x02D0 - 0x0220)
class ABP_Waterfall_big_C final : public AActor
{
public:
	class UParticleSystemComponent*               P_WaterFall_Collide_top_big;                       // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_WaterFall_Collide_big;                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CollideBottom;                                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_WaterFall1;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Waterfall_mist;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Start_scale;                                       // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_scale;                                         // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   Mesh;                                              // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Waterfall_sort_priority;                           // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWaterfall_big_meshes                         Select_mesh;                                       // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWaterfall_big_textures                       Select_Material;                                   // 0x026D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mist;                                              // 0x026E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Additional_particles;                              // 0x026F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EWaterfall_collide_bottom                     Bottom_Collide;                                    // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWaterfall_collide_top                        Top_Collide;                                       // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_272[0x6];                                      // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   SplineMesh;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_low;                                         // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_high;                                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Depth_Blend;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Refraction;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_low;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_high;                                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Displace_Strenght;                                 // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Displace_Speed;                                    // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flow_speed;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MistMaterial;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bottom_Cutoff_height;                              // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Waterfall_big_C">();
	}
	static class ABP_Waterfall_big_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Waterfall_big_C>();
	}
};
static_assert(alignof(ABP_Waterfall_big_C) == 0x000008, "Wrong alignment on ABP_Waterfall_big_C");
static_assert(sizeof(ABP_Waterfall_big_C) == 0x0002D0, "Wrong size on ABP_Waterfall_big_C");
static_assert(offsetof(ABP_Waterfall_big_C, P_WaterFall_Collide_top_big) == 0x000220, "Member 'ABP_Waterfall_big_C::P_WaterFall_Collide_top_big' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, P_WaterFall_Collide_big) == 0x000228, "Member 'ABP_Waterfall_big_C::P_WaterFall_Collide_big' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, CollideBottom) == 0x000230, "Member 'ABP_Waterfall_big_C::CollideBottom' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, P_WaterFall1) == 0x000238, "Member 'ABP_Waterfall_big_C::P_WaterFall1' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, P_Waterfall_mist) == 0x000240, "Member 'ABP_Waterfall_big_C::P_Waterfall_mist' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Spline) == 0x000248, "Member 'ABP_Waterfall_big_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_Waterfall_big_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Start_scale) == 0x000258, "Member 'ABP_Waterfall_big_C::Start_scale' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, End_scale) == 0x00025C, "Member 'ABP_Waterfall_big_C::End_scale' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Mesh) == 0x000260, "Member 'ABP_Waterfall_big_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Waterfall_sort_priority) == 0x000268, "Member 'ABP_Waterfall_big_C::Waterfall_sort_priority' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Select_mesh) == 0x00026C, "Member 'ABP_Waterfall_big_C::Select_mesh' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Select_Material) == 0x00026D, "Member 'ABP_Waterfall_big_C::Select_Material' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Mist) == 0x00026E, "Member 'ABP_Waterfall_big_C::Mist' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Additional_particles) == 0x00026F, "Member 'ABP_Waterfall_big_C::Additional_particles' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Bottom_Collide) == 0x000270, "Member 'ABP_Waterfall_big_C::Bottom_Collide' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Top_Collide) == 0x000271, "Member 'ABP_Waterfall_big_C::Top_Collide' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, SplineMesh) == 0x000278, "Member 'ABP_Waterfall_big_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Color_low) == 0x000280, "Member 'ABP_Waterfall_big_C::Color_low' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Color_high) == 0x000290, "Member 'ABP_Waterfall_big_C::Color_high' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Depth_Blend) == 0x0002A0, "Member 'ABP_Waterfall_big_C::Depth_Blend' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Refraction) == 0x0002A4, "Member 'ABP_Waterfall_big_C::Refraction' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Opacity_low) == 0x0002A8, "Member 'ABP_Waterfall_big_C::Opacity_low' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Opacity_high) == 0x0002AC, "Member 'ABP_Waterfall_big_C::Opacity_high' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Displace_Strenght) == 0x0002B0, "Member 'ABP_Waterfall_big_C::Displace_Strenght' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Displace_Speed) == 0x0002B4, "Member 'ABP_Waterfall_big_C::Displace_Speed' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Flow_speed) == 0x0002B8, "Member 'ABP_Waterfall_big_C::Flow_speed' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, MistMaterial) == 0x0002C0, "Member 'ABP_Waterfall_big_C::MistMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Waterfall_big_C, Bottom_Cutoff_height) == 0x0002C8, "Member 'ABP_Waterfall_big_C::Bottom_Cutoff_height' has a wrong offset!");

}
