#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Shop_ButtonContent

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "S_TemporarySellingPointTimeInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_Shop_ButtonContent.F_Shop_ButtonContent
// 0x01B0 (0x01B0 - 0x0000)
struct FF_Shop_ButtonContent final
{
public:
	TSoftObjectPtr<class UTexture2D>              PackageBG_61_FE5213D54476C7366955FBB87AD226F1;     // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              PackageImage_62_A4D2656A45F063593A69A4B9CE650DFE;  // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         HC_BaseValue_7_B3D69C4941340DBF517F1E9DC76ED475;   // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HC_BonusValue_9_C035854C4CCDCF08F9364A8732837DE6;  // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   PackagePrice_28_6E3782FF4BC8A556583DB9B49E2720D5;  // 0x0058(0x0018)(Edit, BlueprintVisible)
	class FText                                   PackageName_29_E8C26EB846A8048B5CAB5CB03F95A1F3;   // 0x0070(0x0018)(Edit, BlueprintVisible)
	TSoftClassPtr<class UClass>                   PreviewScene_59_140D59554D89CA1236F1F1ABAD1F1D5B;  // 0x0088(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLabelsList                            SaleLabel_43_98EDBF63433C6C04DC6DE8A5176510C6;     // 0x00B0(0x0040)(Edit, BlueprintVisible)
	class FString                                 ProductID_60_70B8554D41A6B51BC9C8929E91CD1D27;     // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FGameStoreProductInfo                  GameStoreProduct_34_E4ADC4F246BEEE36D9E57180FF8EDEA8; // 0x0100(0x0050)(Edit, BlueprintVisible)
	int32                                         Priority_51_C75B89B44B40833B007E5F8C56AFF6A0;      // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rarity_47_175ABEF74338811EDF2140AF19FED635;        // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TitleTextScale_55_F9720F8D46E94CDB127D7C9C06517124; // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Owned_37_0B860CE64073E4A9725C73A1D955386B;         // 0x015C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              BigBackgroundImage_64_8A447007467F7ABF1F6588BC59346851; // 0x0160(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_TemporarySellingPointTimeInfo       TemporaryTimeInfo_67_66FB89BA4CB84999C7293EB6B203D237; // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   PC_Only_LongDescription_70_341D1B9442C8850560FEB886405DC120; // 0x0198(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_Shop_ButtonContent) == 0x000008, "Wrong alignment on FF_Shop_ButtonContent");
static_assert(sizeof(FF_Shop_ButtonContent) == 0x0001B0, "Wrong size on FF_Shop_ButtonContent");
static_assert(offsetof(FF_Shop_ButtonContent, PackageBG_61_FE5213D54476C7366955FBB87AD226F1) == 0x000000, "Member 'FF_Shop_ButtonContent::PackageBG_61_FE5213D54476C7366955FBB87AD226F1' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, PackageImage_62_A4D2656A45F063593A69A4B9CE650DFE) == 0x000028, "Member 'FF_Shop_ButtonContent::PackageImage_62_A4D2656A45F063593A69A4B9CE650DFE' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, HC_BaseValue_7_B3D69C4941340DBF517F1E9DC76ED475) == 0x000050, "Member 'FF_Shop_ButtonContent::HC_BaseValue_7_B3D69C4941340DBF517F1E9DC76ED475' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, HC_BonusValue_9_C035854C4CCDCF08F9364A8732837DE6) == 0x000054, "Member 'FF_Shop_ButtonContent::HC_BonusValue_9_C035854C4CCDCF08F9364A8732837DE6' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, PackagePrice_28_6E3782FF4BC8A556583DB9B49E2720D5) == 0x000058, "Member 'FF_Shop_ButtonContent::PackagePrice_28_6E3782FF4BC8A556583DB9B49E2720D5' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, PackageName_29_E8C26EB846A8048B5CAB5CB03F95A1F3) == 0x000070, "Member 'FF_Shop_ButtonContent::PackageName_29_E8C26EB846A8048B5CAB5CB03F95A1F3' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, PreviewScene_59_140D59554D89CA1236F1F1ABAD1F1D5B) == 0x000088, "Member 'FF_Shop_ButtonContent::PreviewScene_59_140D59554D89CA1236F1F1ABAD1F1D5B' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, SaleLabel_43_98EDBF63433C6C04DC6DE8A5176510C6) == 0x0000B0, "Member 'FF_Shop_ButtonContent::SaleLabel_43_98EDBF63433C6C04DC6DE8A5176510C6' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, ProductID_60_70B8554D41A6B51BC9C8929E91CD1D27) == 0x0000F0, "Member 'FF_Shop_ButtonContent::ProductID_60_70B8554D41A6B51BC9C8929E91CD1D27' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, GameStoreProduct_34_E4ADC4F246BEEE36D9E57180FF8EDEA8) == 0x000100, "Member 'FF_Shop_ButtonContent::GameStoreProduct_34_E4ADC4F246BEEE36D9E57180FF8EDEA8' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, Priority_51_C75B89B44B40833B007E5F8C56AFF6A0) == 0x000150, "Member 'FF_Shop_ButtonContent::Priority_51_C75B89B44B40833B007E5F8C56AFF6A0' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, Rarity_47_175ABEF74338811EDF2140AF19FED635) == 0x000154, "Member 'FF_Shop_ButtonContent::Rarity_47_175ABEF74338811EDF2140AF19FED635' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, TitleTextScale_55_F9720F8D46E94CDB127D7C9C06517124) == 0x000158, "Member 'FF_Shop_ButtonContent::TitleTextScale_55_F9720F8D46E94CDB127D7C9C06517124' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, Owned_37_0B860CE64073E4A9725C73A1D955386B) == 0x00015C, "Member 'FF_Shop_ButtonContent::Owned_37_0B860CE64073E4A9725C73A1D955386B' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, BigBackgroundImage_64_8A447007467F7ABF1F6588BC59346851) == 0x000160, "Member 'FF_Shop_ButtonContent::BigBackgroundImage_64_8A447007467F7ABF1F6588BC59346851' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, TemporaryTimeInfo_67_66FB89BA4CB84999C7293EB6B203D237) == 0x000188, "Member 'FF_Shop_ButtonContent::TemporaryTimeInfo_67_66FB89BA4CB84999C7293EB6B203D237' has a wrong offset!");
static_assert(offsetof(FF_Shop_ButtonContent, PC_Only_LongDescription_70_341D1B9442C8850560FEB886405DC120) == 0x000198, "Member 'FF_Shop_ButtonContent::PC_Only_LongDescription_70_341D1B9442C8850560FEB886405DC120' has a wrong offset!");

}
