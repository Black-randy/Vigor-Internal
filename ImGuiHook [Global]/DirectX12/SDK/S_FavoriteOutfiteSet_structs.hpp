#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_FavoriteOutfiteSet

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_FavoriteOutfiteSet.S_FavoriteOutfiteSet
// 0x0028 (0x0028 - 0x0000)
struct FS_FavoriteOutfiteSet final
{
public:
	TArray<struct FCustomizationSlotVariant>      UsedCustomizationVariants_52_78CC4B634C0C02541735B49D2D91CFE9; // 0x0000(0x0010)(Edit, BlueprintVisible)
	class FText                                   OutfitName_48_FFEE7A4F41311235B3A86EBD1685EC41;    // 0x0010(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_FavoriteOutfiteSet) == 0x000008, "Wrong alignment on FS_FavoriteOutfiteSet");
static_assert(sizeof(FS_FavoriteOutfiteSet) == 0x000028, "Wrong size on FS_FavoriteOutfiteSet");
static_assert(offsetof(FS_FavoriteOutfiteSet, UsedCustomizationVariants_52_78CC4B634C0C02541735B49D2D91CFE9) == 0x000000, "Member 'FS_FavoriteOutfiteSet::UsedCustomizationVariants_52_78CC4B634C0C02541735B49D2D91CFE9' has a wrong offset!");
static_assert(offsetof(FS_FavoriteOutfiteSet, OutfitName_48_FFEE7A4F41311235B3A86EBD1685EC41) == 0x000010, "Member 'FS_FavoriteOutfiteSet::OutfitName_48_FFEE7A4F41311235B3A86EBD1685EC41' has a wrong offset!");

}
