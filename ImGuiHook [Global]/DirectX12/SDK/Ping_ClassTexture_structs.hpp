#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ping_ClassTexture

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Ping_ClassTexture.Ping_ClassTexture
// 0x0038 (0x0038 - 0x0000)
struct FPing_ClassTexture final
{
public:
	TSoftClassPtr<class UClass>                   ClassSoft_22_62FD144B42C106BF3F49F2887F8E1B97;     // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UTexture2D*                             Texture_6_3A4F78EF44E423219EE55CA5DC417908;        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rarity_10_FD8917E74307399C8ADD6786D35501BA;        // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRarity_19_5B4E2BAD4FBC313B54784C9895EDEDD7;    // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowBackground_14_7FE9D9F547F4A77F3B81AD997D8FAC4A; // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FPing_ClassTexture) == 0x000008, "Wrong alignment on FPing_ClassTexture");
static_assert(sizeof(FPing_ClassTexture) == 0x000038, "Wrong size on FPing_ClassTexture");
static_assert(offsetof(FPing_ClassTexture, ClassSoft_22_62FD144B42C106BF3F49F2887F8E1B97) == 0x000000, "Member 'FPing_ClassTexture::ClassSoft_22_62FD144B42C106BF3F49F2887F8E1B97' has a wrong offset!");
static_assert(offsetof(FPing_ClassTexture, Texture_6_3A4F78EF44E423219EE55CA5DC417908) == 0x000028, "Member 'FPing_ClassTexture::Texture_6_3A4F78EF44E423219EE55CA5DC417908' has a wrong offset!");
static_assert(offsetof(FPing_ClassTexture, Rarity_10_FD8917E74307399C8ADD6786D35501BA) == 0x000030, "Member 'FPing_ClassTexture::Rarity_10_FD8917E74307399C8ADD6786D35501BA' has a wrong offset!");
static_assert(offsetof(FPing_ClassTexture, ShowRarity_19_5B4E2BAD4FBC313B54784C9895EDEDD7) == 0x000034, "Member 'FPing_ClassTexture::ShowRarity_19_5B4E2BAD4FBC313B54784C9895EDEDD7' has a wrong offset!");
static_assert(offsetof(FPing_ClassTexture, ShowBackground_14_7FE9D9F547F4A77F3B81AD997D8FAC4A) == 0x000035, "Member 'FPing_ClassTexture::ShowBackground_14_7FE9D9F547F4A77F3B81AD997D8FAC4A' has a wrong offset!");

}
