#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FavOutfitSets_SaveGame

#include "Basic.hpp"

#include "BP_FavOutfitSets_SaveGame_classes.hpp"
#include "BP_FavOutfitSets_SaveGame_parameters.hpp"


namespace SDK
{

// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetOutfit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCustomizationSlotVariant>OutfitSlotVariant                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             OutfitName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FavOutfitSets_SaveGame_C::SetOutfit(int32 Index_0, TArray<struct FCustomizationSlotVariant>& OutfitSlotVariant, const class FText& OutfitName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetOutfit");

	Params::BP_FavOutfitSets_SaveGame_C_SetOutfit Parms{};

	Parms.Index_0 = Index_0;
	Parms.OutfitSlotVariant = std::move(OutfitSlotVariant);
	Parms.OutfitName = std::move(OutfitName);

	UObject::ProcessEvent(Func, &Parms);

	OutfitSlotVariant = std::move(Parms.OutfitSlotVariant);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetOutfitSlotVariants
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCustomizationSlotVariant>Slot_Variant_Pairs                                     (Parm, OutParm)
// class FText                             Outfit_Name                                            (Parm, OutParm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetOutfitSlotVariants(int32 Index_0, TArray<struct FCustomizationSlotVariant>* Slot_Variant_Pairs, class FText* Outfit_Name, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetOutfitSlotVariants");

	Params::BP_FavOutfitSets_SaveGame_C_GetOutfitSlotVariants Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_Variant_Pairs != nullptr)
		*Slot_Variant_Pairs = std::move(Parms.Slot_Variant_Pairs);

	if (Outfit_Name != nullptr)
		*Outfit_Name = std::move(Parms.Outfit_Name);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetOutfitCustomizationVariants
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>                   CustomizationVariants                                  (Parm, OutParm)
// class FText                             Outfit_Name                                            (Parm, OutParm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetOutfitCustomizationVariants(int32 Index_0, TArray<class UClass*>* CustomizationVariants, class FText* Outfit_Name, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetOutfitCustomizationVariants");

	Params::BP_FavOutfitSets_SaveGame_C_GetOutfitCustomizationVariants Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomizationVariants != nullptr)
		*CustomizationVariants = std::move(Parms.CustomizationVariants);

	if (Outfit_Name != nullptr)
		*Outfit_Name = std::move(Parms.Outfit_Name);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetOutfitName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Outfit_Name                                            (Parm, OutParm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetOutfitName(int32 Index_0, class FText* Outfit_Name, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetOutfitName");

	Params::BP_FavOutfitSets_SaveGame_C_GetOutfitName Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Outfit_Name != nullptr)
		*Outfit_Name = std::move(Parms.Outfit_Name);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetOutfitName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             NewName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::SetOutfitName(int32 Index_0, const class FText& NewName, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetOutfitName");

	Params::BP_FavOutfitSets_SaveGame_C_SetOutfitName Parms{};

	Parms.Index_0 = Index_0;
	Parms.NewName = std::move(NewName);

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetAllOufits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_FavoriteOutfiteSet>    OutfitSets_0                                           (Parm, OutParm, ContainsInstancedReference)

void UBP_FavOutfitSets_SaveGame_C::GetAllOufits(TArray<struct FS_FavoriteOutfiteSet>* OutfitSets_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetAllOufits");

	Params::BP_FavOutfitSets_SaveGame_C_GetAllOufits Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutfitSets_0 != nullptr)
		*OutfitSets_0 = std::move(Parms.OutfitSets_0);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetVariantsFromVariantSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Outfit_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>                   CustomizationVariants                                  (Parm, OutParm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetVariantsFromVariantSlots(int32 Outfit_Index, TArray<class UClass*>* CustomizationVariants, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetVariantsFromVariantSlots");

	Params::BP_FavOutfitSets_SaveGame_C_GetVariantsFromVariantSlots Parms{};

	Parms.Outfit_Index = Outfit_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomizationVariants != nullptr)
		*CustomizationVariants = std::move(Parms.CustomizationVariants);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetOutfitSetID_to_PosterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutfitSetID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetOutfitSetID_to_PosterID(int32 OutfitSetID, int32 PosterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetOutfitSetID_to_PosterID");

	Params::BP_FavOutfitSets_SaveGame_C_SetOutfitSetID_to_PosterID Parms{};

	Parms.OutfitSetID = OutfitSetID;
	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetOutfitSetID_From_PosterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutfitID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::GetOutfitSetID_From_PosterID(int32 PosterID, bool* bSuccess, int32* OutfitID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetOutfitSetID_From_PosterID");

	Params::BP_FavOutfitSets_SaveGame_C_GetOutfitSetID_From_PosterID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (OutfitID != nullptr)
		*OutfitID = Parms.OutfitID;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetPosterID_From_OutfitSetID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutfitID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PosterID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetPosterID_From_OutfitSetID(int32 OutfitID, int32* PosterID, bool* bFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetPosterID_From_OutfitSetID");

	Params::BP_FavOutfitSets_SaveGame_C_GetPosterID_From_OutfitSetID Parms{};

	Parms.OutfitID = OutfitID;

	UObject::ProcessEvent(Func, &Parms);

	if (PosterID != nullptr)
		*PosterID = Parms.PosterID;

	if (bFound != nullptr)
		*bFound = Parms.bFound;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SwapOutfitsOnPosters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Outfit1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Outfit2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::SwapOutfitsOnPosters(int32 Outfit1, int32 Outfit2, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SwapOutfitsOnPosters");

	Params::BP_FavOutfitSets_SaveGame_C_SwapOutfitsOnPosters Parms{};

	Parms.Outfit1 = Outfit1;
	Parms.Outfit2 = Outfit2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetTemplateID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TemplateID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetTemplateID(int32 PosterID, int32 TemplateID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetTemplateID");

	Params::BP_FavOutfitSets_SaveGame_C_SetTemplateID Parms{};

	Parms.PosterID = PosterID;
	Parms.TemplateID = TemplateID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetTemplateID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TemplateID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::GetTemplateID(int32 PosterID, bool* bSuccess, int32* TemplateID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetTemplateID");

	Params::BP_FavOutfitSets_SaveGame_C_GetTemplateID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (TemplateID != nullptr)
		*TemplateID = Parms.TemplateID;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetVisibilityToPosterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetVisibilityToPosterID(bool bVisibility, int32 PosterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetVisibilityToPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_SetVisibilityToPosterID Parms{};

	Parms.bVisibility = bVisibility;
	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetVisibilityByPosterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetVisibilityByPosterID(int32 PosterID, bool* bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetVisibilityByPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_GetVisibilityByPosterID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (bVisibility != nullptr)
		*bVisibility = Parms.bVisibility;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetTransformToPosterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetTransformToPosterID(const struct FTransform& Transform, int32 PosterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetTransformToPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_SetTransformToPosterID Parms{};

	Parms.Transform = std::move(Transform);
	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetTransformByPosterID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetTransformByPosterID(int32 PosterID, struct FTransform* Transform, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetTransformByPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_GetTransformByPosterID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.CheckIfCustomizationsIsAlreadyUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationSlotVariant        CustomizationSlotVariantToCheck                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   OutfitIndexToIgnore                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAlreadyUsed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutfitIndexAlreadyUsingIt                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::CheckIfCustomizationsIsAlreadyUsed(const struct FCustomizationSlotVariant& CustomizationSlotVariantToCheck, int32 OutfitIndexToIgnore, bool* bAlreadyUsed, int32* OutfitIndexAlreadyUsingIt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "CheckIfCustomizationsIsAlreadyUsed");

	Params::BP_FavOutfitSets_SaveGame_C_CheckIfCustomizationsIsAlreadyUsed Parms{};

	Parms.CustomizationSlotVariantToCheck = std::move(CustomizationSlotVariantToCheck);
	Parms.OutfitIndexToIgnore = OutfitIndexToIgnore;

	UObject::ProcessEvent(Func, &Parms);

	if (bAlreadyUsed != nullptr)
		*bAlreadyUsed = Parms.bAlreadyUsed;

	if (OutfitIndexAlreadyUsingIt != nullptr)
		*OutfitIndexAlreadyUsingIt = Parms.OutfitIndexAlreadyUsingIt;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetLightVisibilityToPosterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetLightVisibilityToPosterID(bool bVisibility, int32 PosterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetLightVisibilityToPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_SetLightVisibilityToPosterID Parms{};

	Parms.bVisibility = bVisibility;
	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetLightVisibilityByPosterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FavOutfitSets_SaveGame_C::GetLightVisibilityByPosterID(int32 PosterID, bool* bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetLightVisibilityByPosterID");

	Params::BP_FavOutfitSets_SaveGame_C_GetLightVisibilityByPosterID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (bVisibility != nullptr)
		*bVisibility = Parms.bVisibility;
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.SetModelID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ModelID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::SetModelID(int32 PosterID, int32 ModelID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "SetModelID");

	Params::BP_FavOutfitSets_SaveGame_C_SetModelID Parms{};

	Parms.PosterID = PosterID;
	Parms.ModelID = ModelID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C.GetModelID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   PosterID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TemplateID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FavOutfitSets_SaveGame_C::GetModelID(int32 PosterID, bool* bSuccess, int32* TemplateID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FavOutfitSets_SaveGame_C", "GetModelID");

	Params::BP_FavOutfitSets_SaveGame_C_GetModelID Parms{};

	Parms.PosterID = PosterID;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (TemplateID != nullptr)
		*TemplateID = Parms.TemplateID;
}

}
