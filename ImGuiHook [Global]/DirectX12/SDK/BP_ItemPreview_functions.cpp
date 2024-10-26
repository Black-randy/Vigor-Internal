#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemPreview

#include "Basic.hpp"

#include "BP_ItemPreview_classes.hpp"
#include "BP_ItemPreview_parameters.hpp"


namespace SDK
{

// Function BP_ItemPreview.BP_ItemPreview_C.ItemShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::ItemShown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ItemShown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ExecuteUbergraph_BP_ItemPreview");

	Params::BP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.StopAnimationImmediate
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::StopAnimationImmediate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "StopAnimationImmediate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.StopAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::StopAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "StopAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.RepeatAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::RepeatAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "RepeatAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PlayAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     MontageToPlay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::PlayAnimation(class UAnimMontage* MontageToPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "PlayAnimation");

	Params::BP_ItemPreview_C_PlayAnimation Parms{};

	Parms.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.OnCompleted_10C475484EB5079FAC83B189671E51CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::OnCompleted_10C475484EB5079FAC83B189671E51CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "OnCompleted_10C475484EB5079FAC83B189671E51CB");

	Params::BP_ItemPreview_C_OnCompleted_10C475484EB5079FAC83B189671E51CB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.OnBlendOut_10C475484EB5079FAC83B189671E51CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::OnBlendOut_10C475484EB5079FAC83B189671E51CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "OnBlendOut_10C475484EB5079FAC83B189671E51CB");

	Params::BP_ItemPreview_C_OnBlendOut_10C475484EB5079FAC83B189671E51CB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.OnInterrupted_10C475484EB5079FAC83B189671E51CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::OnInterrupted_10C475484EB5079FAC83B189671E51CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "OnInterrupted_10C475484EB5079FAC83B189671E51CB");

	Params::BP_ItemPreview_C_OnInterrupted_10C475484EB5079FAC83B189671E51CB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.OnNotifyBegin_10C475484EB5079FAC83B189671E51CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::OnNotifyBegin_10C475484EB5079FAC83B189671E51CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "OnNotifyBegin_10C475484EB5079FAC83B189671E51CB");

	Params::BP_ItemPreview_C_OnNotifyBegin_10C475484EB5079FAC83B189671E51CB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.OnNotifyEnd_10C475484EB5079FAC83B189671E51CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::OnNotifyEnd_10C475484EB5079FAC83B189671E51CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "OnNotifyEnd_10C475484EB5079FAC83B189671E51CB");

	Params::BP_ItemPreview_C_OnNotifyEnd_10C475484EB5079FAC83B189671E51CB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ShowStaticMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      NewMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>       OverrideMaterials                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ItemPreview_C::ShowStaticMesh(class UStaticMesh* NewMesh, const TArray<class UMaterialInterface*>& OverrideMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ShowStaticMesh");

	Params::BP_ItemPreview_C_ShowStaticMesh Parms{};

	Parms.NewMesh = NewMesh;
	Parms.OverrideMaterials = std::move(OverrideMaterials);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ShowSkeletalMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    NewMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>       OverrideMaterials                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ItemPreview_C::ShowSkeletalMesh(class USkeletalMesh* NewMesh, const TArray<class UMaterialInterface*>& OverrideMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ShowSkeletalMesh");

	Params::BP_ItemPreview_C_ShowSkeletalMesh Parms{};

	Parms.NewMesh = NewMesh;
	Parms.OverrideMaterials = std::move(OverrideMaterials);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ShowCustomizationClothes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Customization_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Variant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::ShowCustomizationClothes(class AHumanPlayerController* Player, class UClass* Customization_0, class UClass* Variant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ShowCustomizationClothes");

	Params::BP_ItemPreview_C_ShowCustomizationClothes Parms{};

	Parms.Player = Player;
	Parms.Customization_0 = Customization_0;
	Parms.Variant = Variant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ShowItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemPreviewContext                     Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Optional_PreviewParameter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::ShowItem(class UClass* ItemClass, EItemPreviewContext Context, int32 Optional_PreviewParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ShowItem");

	Params::BP_ItemPreview_C_ShowItem Parms{};

	Parms.ItemClass = ItemClass;
	Parms.Context = Context;
	Parms.Optional_PreviewParameter = Optional_PreviewParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::HideAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "HideAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ShowMe
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::ShowMe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ShowMe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ApplySkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemSkin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           WeaponClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::ApplySkin(class UClass* ItemSkin, class UClass* WeaponClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ApplySkin");

	Params::BP_ItemPreview_C_ApplySkin Parms{};

	Parms.ItemSkin = ItemSkin;
	Parms.WeaponClass = WeaponClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemPreview.BP_ItemPreview_C.GetVariantFromBundle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Bundle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanPlayerController*           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           VariantFromBundle                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::GetVariantFromBundle(class UClass* Bundle, class AHumanPlayerController* Player, class UClass** VariantFromBundle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "GetVariantFromBundle");

	Params::BP_ItemPreview_C_GetVariantFromBundle Parms{};

	Parms.Bundle = Bundle;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (VariantFromBundle != nullptr)
		*VariantFromBundle = Parms.VariantFromBundle;
}


// Function BP_ItemPreview.BP_ItemPreview_C.CheckForJiggleAnimBP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ItemPreview_C::CheckForJiggleAnimBP(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "CheckForJiggleAnimBP");

	Params::BP_ItemPreview_C_CheckForJiggleAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_ItemPreview.BP_ItemPreview_C.CheckForJiggleAnimSequence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CustomizationClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*                    AnimSequence                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::CheckForJiggleAnimSequence(class AHumanPlayerController* PlayerController, class UClass* CustomizationClass, class UAnimSequence** AnimSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "CheckForJiggleAnimSequence");

	Params::BP_ItemPreview_C_CheckForJiggleAnimSequence Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CustomizationClass = CustomizationClass;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimSequence != nullptr)
		*AnimSequence = Parms.AnimSequence;
}


// Function BP_ItemPreview.BP_ItemPreview_C.BPGet Player Current Outfit Variant Slots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCustomizationSlotVariant>PairsToOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCustomizationSlotVariant>VariantSlotsPairs                                      (Parm, OutParm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ItemPreview_C::BPGet_Player_Current_Outfit_Variant_Slots(TArray<struct FCustomizationSlotVariant>& PairsToOverride, TArray<struct FCustomizationSlotVariant>* VariantSlotsPairs, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "BPGet Player Current Outfit Variant Slots");

	Params::BP_ItemPreview_C_BPGet_Player_Current_Outfit_Variant_Slots Parms{};

	Parms.PairsToOverride = std::move(PairsToOverride);

	UObject::ProcessEvent(Func, &Parms);

	PairsToOverride = std::move(Parms.PairsToOverride);

	if (VariantSlotsPairs != nullptr)
		*VariantSlotsPairs = std::move(Parms.VariantSlotsPairs);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_ItemPreview.BP_ItemPreview_C.ClearEverything
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::ClearEverything()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "ClearEverything");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.HideSnowMaterialEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::HideSnowMaterialEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "HideSnowMaterialEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemPreview.BP_ItemPreview_C.GetPlayerCurrentOutfitVariantSlots
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCustomizationSlotVariant>PairsToOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCustomizationSlotVariant>OutVariantSlotsPairs                                   (Parm, OutParm)
// bool                                    bOutSucess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ItemPreview_C::GetPlayerCurrentOutfitVariantSlots(TArray<struct FCustomizationSlotVariant>& PairsToOverride, TArray<struct FCustomizationSlotVariant>* OutVariantSlotsPairs, bool* bOutSucess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "GetPlayerCurrentOutfitVariantSlots");

	Params::BP_ItemPreview_C_GetPlayerCurrentOutfitVariantSlots Parms{};

	Parms.PairsToOverride = std::move(PairsToOverride);

	UObject::ProcessEvent(Func, &Parms);

	PairsToOverride = std::move(Parms.PairsToOverride);

	if (OutVariantSlotsPairs != nullptr)
		*OutVariantSlotsPairs = std::move(Parms.OutVariantSlotsPairs);

	if (bOutSucess != nullptr)
		*bOutSucess = Parms.bOutSucess;
}


// Function BP_ItemPreview.BP_ItemPreview_C.GetHardCurrencyPreviewModel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SizeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Mesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreview_C::GetHardCurrencyPreviewModel(int32 SizeIndex, class UStaticMesh** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemPreview_C", "GetHardCurrencyPreviewModel");

	Params::BP_ItemPreview_C_GetHardCurrencyPreviewModel Parms{};

	Parms.SizeIndex = SizeIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}

}

