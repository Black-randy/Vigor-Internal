#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SI_BaseGenerator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_GeneratorType_structs.hpp"
#include "BP_SI_BaseImprovement_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SI_BaseGenerator.BP_SI_BaseGenerator_C
// 0x0098 (0x0558 - 0x04C0)
class ABP_SI_BaseGenerator_C : public ABP_SI_BaseImprovement_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SI_BaseGenerator_C;              // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   GeneratedItemStaticMesh;                           // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UStaticMesh>>     ProductionMeshes;                                  // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>     Level1_ProductionMeshes;                           // 0x04E0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<TSoftObjectPtr<class UStaticMesh>>     Level2_ProductionMeshes;                           // 0x04F0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<TSoftObjectPtr<class UStaticMesh>>     Level3_ProductionMeshes;                           // 0x0500(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         PrevGeneratedItemIndex;                            // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class USoundBase>>      ResourceCollectingSounds;                          // 0x0518(0x0010)(Edit, BlueprintVisible)
	bool                                          MaxCapacity;                                       // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529[0x3];                                      // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeToStartCheckingCapacity;                       // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckCapacityTimer;                                // 0x0530(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxQuantityMaterials;                              // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentMaterials;                                  // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanShowNotifications;                              // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EnableNotificationsTimer;                          // 0x0548(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_GeneratorType                               GeneratorType;                                     // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SI_BaseGenerator(int32 EntryPoint);
	void PlayCollectingSound();
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void LoadProductionSoftMesh(TSoftObjectPtr<class UStaticMesh> SoftObject);
	void Event_SetGeneratedItemMesh(int32 Generated_Mesh_Level);
	void ReceiveBeginPlay();
	void SomethingChanged();
	void AllowMatchmakingMessages();
	void UpdateNotification();
	void OnLoaded_303A9E7341428F48F05BE78A14B02784(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78AF25084D1(class UObject* Loaded);
	void ShowHologram(class UObject* Hologram);
	void UnShowHologram();
	void SetGeneratedItemMesh(int32 GeneratedMeshLevel);
	void PlanNextUpdateOfGeneratedItemMesh();
	void PlanNextUpdateOfGeneratedItemMeshForGivenCounts(int32 Count_0, int32 MaxCapacity_0, float CountFloat, float Production);
	void PlanNextUpdateOfGeneratedItemMesh_Zero();
	void OverridableInteractedInteraction(class UObject* Sender, class AActor* InteractingActor);
	void EnableNotifications();

	E_GeneratorType GetGeneratorType() const;
	void GetMaxCapacity(int32* MaxCapacity_0) const;
	class FText GetGeneratorName(E_GeneratorType Index_0, int32 InputPin) const;
	void RemoveNameIndex(const class FText& OriginalName, class FText* NameWithoutIndex) const;
	void IsMaxCapacity(bool* MaxCapacity_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SI_BaseGenerator_C">();
	}
	static class ABP_SI_BaseGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SI_BaseGenerator_C>();
	}
};
static_assert(alignof(ABP_SI_BaseGenerator_C) == 0x000008, "Wrong alignment on ABP_SI_BaseGenerator_C");
static_assert(sizeof(ABP_SI_BaseGenerator_C) == 0x000558, "Wrong size on ABP_SI_BaseGenerator_C");
static_assert(offsetof(ABP_SI_BaseGenerator_C, UberGraphFrame_BP_SI_BaseGenerator_C) == 0x0004C0, "Member 'ABP_SI_BaseGenerator_C::UberGraphFrame_BP_SI_BaseGenerator_C' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, GeneratedItemStaticMesh) == 0x0004C8, "Member 'ABP_SI_BaseGenerator_C::GeneratedItemStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, ProductionMeshes) == 0x0004D0, "Member 'ABP_SI_BaseGenerator_C::ProductionMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, Level1_ProductionMeshes) == 0x0004E0, "Member 'ABP_SI_BaseGenerator_C::Level1_ProductionMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, Level2_ProductionMeshes) == 0x0004F0, "Member 'ABP_SI_BaseGenerator_C::Level2_ProductionMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, Level3_ProductionMeshes) == 0x000500, "Member 'ABP_SI_BaseGenerator_C::Level3_ProductionMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, PrevGeneratedItemIndex) == 0x000510, "Member 'ABP_SI_BaseGenerator_C::PrevGeneratedItemIndex' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, ResourceCollectingSounds) == 0x000518, "Member 'ABP_SI_BaseGenerator_C::ResourceCollectingSounds' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, MaxCapacity) == 0x000528, "Member 'ABP_SI_BaseGenerator_C::MaxCapacity' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, TimeToStartCheckingCapacity) == 0x00052C, "Member 'ABP_SI_BaseGenerator_C::TimeToStartCheckingCapacity' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, CheckCapacityTimer) == 0x000530, "Member 'ABP_SI_BaseGenerator_C::CheckCapacityTimer' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, MaxQuantityMaterials) == 0x000538, "Member 'ABP_SI_BaseGenerator_C::MaxQuantityMaterials' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, CurrentMaterials) == 0x00053C, "Member 'ABP_SI_BaseGenerator_C::CurrentMaterials' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, CanShowNotifications) == 0x000540, "Member 'ABP_SI_BaseGenerator_C::CanShowNotifications' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, EnableNotificationsTimer) == 0x000548, "Member 'ABP_SI_BaseGenerator_C::EnableNotificationsTimer' has a wrong offset!");
static_assert(offsetof(ABP_SI_BaseGenerator_C, GeneratorType) == 0x000550, "Member 'ABP_SI_BaseGenerator_C::GeneratorType' has a wrong offset!");

}

