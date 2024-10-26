#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_DoorBarricade_Component

#include "Basic.hpp"

#include "BP_ADM_DoorBarricade_Component_classes.hpp"
#include "BP_ADM_DoorBarricade_Component_parameters.hpp"


namespace SDK
{

// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.ExecuteUbergraph_BP_ADM_DoorBarricade_Component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::ExecuteUbergraph_BP_ADM_DoorBarricade_Component(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "ExecuteUbergraph_BP_ADM_DoorBarricade_Component");

	Params::BP_ADM_DoorBarricade_Component_C_ExecuteUbergraph_BP_ADM_DoorBarricade_Component Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.Ground Hit Sound Effect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ADM_DoorBarricade_Component_C::Ground_Hit_Sound_Effect(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "Ground Hit Sound Effect");

	Params::BP_ADM_DoorBarricade_Component_C_Ground_Hit_Sound_Effect Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.Fade Out DebrisStep
// (BlueprintCallable, BlueprintEvent)

void UBP_ADM_DoorBarricade_Component_C::Fade_Out_DebrisStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "Fade Out DebrisStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.Remove Barricade
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::Remove_Barricade(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "Remove Barricade");

	Params::BP_ADM_DoorBarricade_Component_C_Remove_Barricade Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.Initialize Barricade
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FF_ADM_BarricadePiece_Settings>Meshes_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                                   Fade_out_delay_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Fade_Out_Duration_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::Initialize_Barricade(const TArray<struct FF_ADM_BarricadePiece_Settings>& Meshes_0, float Fade_out_delay_0, float Fade_Out_Duration_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "Initialize Barricade");

	Params::BP_ADM_DoorBarricade_Component_C_Initialize_Barricade Parms{};

	Parms.Meshes_0 = std::move(Meshes_0);
	Parms.Fade_out_delay_0 = Fade_out_delay_0;
	Parms.Fade_Out_Duration_0 = Fade_Out_Duration_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.Fade Out Debris
// (BlueprintCallable, BlueprintEvent)

void UBP_ADM_DoorBarricade_Component_C::Fade_Out_Debris()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "Fade Out Debris");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.PlayGroundHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              PrimitiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::PlayGroundHitSound(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "PlayGroundHitSound");

	Params::BP_ADM_DoorBarricade_Component_C_PlayGroundHitSound Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.GetUsedMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStaticMeshComponent*>     Meshes_0                                               (Parm, OutParm, ContainsInstancedReference)

void UBP_ADM_DoorBarricade_Component_C::GetUsedMeshes(TArray<class UStaticMeshComponent*>* Meshes_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "GetUsedMeshes");

	Params::BP_ADM_DoorBarricade_Component_C_GetUsedMeshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Meshes_0 != nullptr)
		*Meshes_0 = std::move(Parms.Meshes_0);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.AddDebrieMeshesToFadeOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_ADM_BarricadePiece_Settings   BarricadeMeshSettings                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::AddDebrieMeshesToFadeOut(const struct FF_ADM_BarricadePiece_Settings& BarricadeMeshSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "AddDebrieMeshesToFadeOut");

	Params::BP_ADM_DoorBarricade_Component_C_AddDebrieMeshesToFadeOut Parms{};

	Parms.BarricadeMeshSettings = std::move(BarricadeMeshSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.SpawnDebrieMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             StaticMeshComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_DoorBarricade_Component_C::SpawnDebrieMesh(class UStaticMeshComponent* StaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "SpawnDebrieMesh");

	Params::BP_ADM_DoorBarricade_Component_C_SpawnDebrieMesh Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_DoorBarricade_Component.BP_ADM_DoorBarricade_Component_C.GetMeshSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_ADM_BarricadePiece_Settings   MeshSettings                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ADM_DoorBarricade_Component_C::GetMeshSettings(class UStaticMeshComponent* MeshComponent, struct FF_ADM_BarricadePiece_Settings* MeshSettings, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_DoorBarricade_Component_C", "GetMeshSettings");

	Params::BP_ADM_DoorBarricade_Component_C_GetMeshSettings Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshSettings != nullptr)
		*MeshSettings = std::move(Parms.MeshSettings);

	if (Found != nullptr)
		*Found = Parms.Found;
}

}

