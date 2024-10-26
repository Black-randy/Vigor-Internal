#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredWindow_Breakable

#include "Basic.hpp"

#include "S_StaticMeshArray_Soft_structs.hpp"
#include "Engine_structs.hpp"
#include "S_StaticMeshArray_structs.hpp"
#include "BP_ADM_WindowBarringObject_Base_Breakable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C
// 0x0120 (0x0420 - 0x0300)
class ABP_ADM_BarredWindow_Breakable_C final : public ABP_ADM_WindowBarringObject_Base_Breakable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ADM_BarredWindow_Breakable_C;    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Debrie_3;                                       // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Debrie_1;                                       // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Debrie_2;                                       // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   InteractionDummy;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Frame;                                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionBox;                                    // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_DoorBarricade_Component_C*      DoorBarricade_3;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_DoorBarricade_Component_C*      DoorBarricade_2;                                   // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_DoorBarricade_Component_C*      DoorBarricade_1;                                   // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Interaction_Count;                                 // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxInteractionCount;                               // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentDebrieIndex;                                // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSoftObjectPtr<class UStaticMesh>, struct FS_StaticMeshArray_Soft> BarricadeMesh_To_DebrieMeshes_Soft;                // 0x0360(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UStaticMesh*, struct FS_StaticMeshArray> BarricadeMesh_To_DebrieMeshes_Hard;                // 0x03B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                            GreandeDamageCurve;                                // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 HitZoneMultipliers;                                // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         WindowExplosionDamageMultiplier;                   // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ADM_BarredWindow_Breakable(int32 EntryPoint);
	void ProccessExplosion(const struct FVector& Location, float ExplosionRadius, class AController* InstigatorController, class AActor* DamageCauser, bool DamagingExplosion, float EnviromentDamageMultiplier);
	void ReplicateExplosion(float Radius, const struct FVector& Center);
	void ApplyExplosionDamage(float EnviroDamageMultiplier, const struct FVector& Location, class AController* InstigatingController);
	void ChangeBarricadeHealth(class FName Tag, float Damage);
	void FakeBarricadeInteraction(class AActor* InteractingActor, class UBP_ADM_DoorBarricade_Component_C* Barricade);
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void BarricadeInteract(class AActor* Interacting_Actor, class UBP_ADM_DoorBarricade_Component_C* Barricade);
	void InitBarricades();
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Spawn_Barricade_Debrie_Mesh(class UStaticMeshComponent* MeshComponent, class UBP_ADM_DoorBarricade_Component_C* BarricadeComponent);

	void GetNextDebrieMeshComponent(class UStaticMeshComponent** MeshComponent) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_BarredWindow_Breakable_C">();
	}
	static class ABP_ADM_BarredWindow_Breakable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_BarredWindow_Breakable_C>();
	}
};
static_assert(alignof(ABP_ADM_BarredWindow_Breakable_C) == 0x000008, "Wrong alignment on ABP_ADM_BarredWindow_Breakable_C");
static_assert(sizeof(ABP_ADM_BarredWindow_Breakable_C) == 0x000420, "Wrong size on ABP_ADM_BarredWindow_Breakable_C");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, UberGraphFrame_BP_ADM_BarredWindow_Breakable_C) == 0x000300, "Member 'ABP_ADM_BarredWindow_Breakable_C::UberGraphFrame_BP_ADM_BarredWindow_Breakable_C' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, SM_Debrie_3) == 0x000308, "Member 'ABP_ADM_BarredWindow_Breakable_C::SM_Debrie_3' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, SM_Debrie_1) == 0x000310, "Member 'ABP_ADM_BarredWindow_Breakable_C::SM_Debrie_1' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, SM_Debrie_2) == 0x000318, "Member 'ABP_ADM_BarredWindow_Breakable_C::SM_Debrie_2' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, InteractionDummy) == 0x000320, "Member 'ABP_ADM_BarredWindow_Breakable_C::InteractionDummy' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, Frame) == 0x000328, "Member 'ABP_ADM_BarredWindow_Breakable_C::Frame' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, InteractionBox) == 0x000330, "Member 'ABP_ADM_BarredWindow_Breakable_C::InteractionBox' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, DoorBarricade_3) == 0x000338, "Member 'ABP_ADM_BarredWindow_Breakable_C::DoorBarricade_3' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, DoorBarricade_2) == 0x000340, "Member 'ABP_ADM_BarredWindow_Breakable_C::DoorBarricade_2' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, DoorBarricade_1) == 0x000348, "Member 'ABP_ADM_BarredWindow_Breakable_C::DoorBarricade_1' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, Interaction_Count) == 0x000350, "Member 'ABP_ADM_BarredWindow_Breakable_C::Interaction_Count' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, MaxInteractionCount) == 0x000354, "Member 'ABP_ADM_BarredWindow_Breakable_C::MaxInteractionCount' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, CurrentDebrieIndex) == 0x000358, "Member 'ABP_ADM_BarredWindow_Breakable_C::CurrentDebrieIndex' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, BarricadeMesh_To_DebrieMeshes_Soft) == 0x000360, "Member 'ABP_ADM_BarredWindow_Breakable_C::BarricadeMesh_To_DebrieMeshes_Soft' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, BarricadeMesh_To_DebrieMeshes_Hard) == 0x0003B0, "Member 'ABP_ADM_BarredWindow_Breakable_C::BarricadeMesh_To_DebrieMeshes_Hard' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, GreandeDamageCurve) == 0x000400, "Member 'ABP_ADM_BarredWindow_Breakable_C::GreandeDamageCurve' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, HitZoneMultipliers) == 0x000408, "Member 'ABP_ADM_BarredWindow_Breakable_C::HitZoneMultipliers' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredWindow_Breakable_C, WindowExplosionDamageMultiplier) == 0x000418, "Member 'ABP_ADM_BarredWindow_Breakable_C::WindowExplosionDamageMultiplier' has a wrong offset!");

}

