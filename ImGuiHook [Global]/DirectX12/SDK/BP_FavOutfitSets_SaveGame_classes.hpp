#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FavOutfitSets_SaveGame

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_FavoriteOutfiteSet_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FavOutfitSets_SaveGame.BP_FavOutfitSets_SaveGame_C
// 0x0200 (0x0228 - 0x0028)
class UBP_FavOutfitSets_SaveGame_C final : public USaveGame
{
public:
	class FString                                 SaveName;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_FavoriteOutfiteSet>          OutfitSets;                                        // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, ContainsInstancedReference)
	TMap<int32, int32>                            PosterID_to_OutfitSetID;                           // 0x0048(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<int32, int32>                            PosterID_to_TemplateID;                            // 0x0098(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<int32, int32>                            PosterID_to_ModelID;                               // 0x00E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<int32, bool>                             PosterID_to_Visibility;                            // 0x0138(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<int32, bool>                             PosterID_to_LightVisibility;                       // 0x0188(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<int32, struct FTransform>                PosterID_to_Transform;                             // 0x01D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetOutfit(int32 Index_0, TArray<struct FCustomizationSlotVariant>& OutfitSlotVariant, const class FText& OutfitName);
	void GetOutfitSlotVariants(int32 Index_0, TArray<struct FCustomizationSlotVariant>* Slot_Variant_Pairs, class FText* Outfit_Name, bool* bSuccess);
	void GetOutfitCustomizationVariants(int32 Index_0, TArray<class UClass*>* CustomizationVariants, class FText* Outfit_Name, bool* bSuccess);
	void GetOutfitName(int32 Index_0, class FText* Outfit_Name, bool* bSuccess);
	void SetOutfitName(int32 Index_0, const class FText& NewName, bool* bSuccess);
	void GetAllOufits(TArray<struct FS_FavoriteOutfiteSet>* OutfitSets_0);
	void GetVariantsFromVariantSlots(int32 Outfit_Index, TArray<class UClass*>* CustomizationVariants, bool* bSuccess);
	void SetOutfitSetID_to_PosterID(int32 OutfitSetID, int32 PosterID);
	void GetOutfitSetID_From_PosterID(int32 PosterID, bool* bSuccess, int32* OutfitID);
	void GetPosterID_From_OutfitSetID(int32 OutfitID, int32* PosterID, bool* bFound);
	void SwapOutfitsOnPosters(int32 Outfit1, int32 Outfit2, bool* Success);
	void SetTemplateID(int32 PosterID, int32 TemplateID);
	void GetTemplateID(int32 PosterID, bool* bSuccess, int32* TemplateID);
	void SetVisibilityToPosterID(bool bVisibility, int32 PosterID);
	void GetVisibilityByPosterID(int32 PosterID, bool* bVisibility);
	void SetTransformToPosterID(const struct FTransform& Transform, int32 PosterID);
	void GetTransformByPosterID(int32 PosterID, struct FTransform* Transform, bool* bSuccess);
	void CheckIfCustomizationsIsAlreadyUsed(const struct FCustomizationSlotVariant& CustomizationSlotVariantToCheck, int32 OutfitIndexToIgnore, bool* bAlreadyUsed, int32* OutfitIndexAlreadyUsingIt);
	void SetLightVisibilityToPosterID(bool bVisibility, int32 PosterID);
	void GetLightVisibilityByPosterID(int32 PosterID, bool* bVisibility);
	void SetModelID(int32 PosterID, int32 ModelID);
	void GetModelID(int32 PosterID, bool* bSuccess, int32* TemplateID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FavOutfitSets_SaveGame_C">();
	}
	static class UBP_FavOutfitSets_SaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FavOutfitSets_SaveGame_C>();
	}
};
static_assert(alignof(UBP_FavOutfitSets_SaveGame_C) == 0x000008, "Wrong alignment on UBP_FavOutfitSets_SaveGame_C");
static_assert(sizeof(UBP_FavOutfitSets_SaveGame_C) == 0x000228, "Wrong size on UBP_FavOutfitSets_SaveGame_C");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, SaveName) == 0x000028, "Member 'UBP_FavOutfitSets_SaveGame_C::SaveName' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, OutfitSets) == 0x000038, "Member 'UBP_FavOutfitSets_SaveGame_C::OutfitSets' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_OutfitSetID) == 0x000048, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_OutfitSetID' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_TemplateID) == 0x000098, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_TemplateID' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_ModelID) == 0x0000E8, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_ModelID' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_Visibility) == 0x000138, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_Visibility' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_LightVisibility) == 0x000188, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_LightVisibility' has a wrong offset!");
static_assert(offsetof(UBP_FavOutfitSets_SaveGame_C, PosterID_to_Transform) == 0x0001D8, "Member 'UBP_FavOutfitSets_SaveGame_C::PosterID_to_Transform' has a wrong offset!");

}

