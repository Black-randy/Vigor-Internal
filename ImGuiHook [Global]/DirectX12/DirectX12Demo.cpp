#include "DirectX12.h"
#include "DirectX12Demo.h"

#include "ZeroGui.hpp"
#include "../Directories/ImGui/imgui.h"
#include "../Directories/ImGui/imgui_impl_dx12.h"
#include "../Directories/ImGui/imgui_impl_win32.h"

#include "SDK/Engine_classes.hpp"
//  #include "SDK.hpp"
//  #include "SDK/Engine_classes.hpp"
//  #include "SDK/CoreUObject_classes.hpp"
//  #include "SDK/Flame_classes.hpp"
#include "Objects.h" 

#include <fstream>       
#include <locale>        
#include <codecvt>       
#include <string>        
#include <vector>        
#include <cmath>         
#include <algorithm>     
#include <chrono>        

#include <MinHook.h>
#pragma comment(lib, "libMinHook.x64.lib")




inline SDK::FName StrToName(std::string str)
{
    std::wstring wstr(str.begin(), str.end());
    const wchar_t* wstr_cstr = wstr.c_str();

    return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(TEXT(wstr_cstr)));
}
inline SDK::FName StrCToName(const wchar_t* str)
{
    return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(TEXT(str)));
}
struct Colors {
    static const ImColor Black;
    static const ImColor Green;
};

const ImColor Colors::Black = ImColor(0, 0, 0);
const ImColor Colors::Green = ImColor(0, 255, 0, 255);

static bool drawBones = false;


inline void DrawLine(ImVec2 A, ImVec2 B, ImColor color, bool outline = true, float t = 1.f)
{
    ImDrawList* draw_list = ImGui::GetForegroundDrawList();
    if (!outline)
        draw_list->AddLine(A, B, color, t);
    else
    {
        draw_list->AddLine(A, B, Colors::Black, t + 1);
        draw_list->AddLine(A, B, color, t);
    }
}

bool bShowESP = false;

template <typename To, typename From>
To* SafeCast(From* source)
{
    return source && source->IsA(To::StaticClass()) ? static_cast<To*>(source) : nullptr;
}
bool WorldToScreen(const SDK::FVector& worldLoc, SDK::FVector2D* screenPos)
{
    return Objects::LocalPlayer->PlayerController->ProjectWorldLocationToScreen(worldLoc, screenPos, true);
}


void ToggleInfiniteAmmo(SDK::AHumanPlayerCharacter* LocalCharacter)
{
    if (!LocalCharacter) return;
    LocalCharacter->ServerToggleInfiniteAmmo();

}


void EnableConsole() {
    // Check if the process already has a console
    if (!AttachConsole(ATTACH_PARENT_PROCESS)) {
        // Allocate a new console if there isn't one
        AllocConsole();

        // Redirect STDOUT and STDERR to the console
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
    }
}
void LogMessage(const std::string& message) {
    // Enable or attach console if not already done
   // EnableConsole();

    // Log to the file
    std::ofstream log_file("aimbot_log.txt", std::ios::app);
    if (log_file.is_open()) {
        log_file << message << std::endl;
    }
    else {
        std::cerr << "Failed to open log file." << std::endl;
    }

    // Log to CMD (console)
    std::cout << message << std::endl;
}

#include <vector>
#include <string>

struct BoneMapping {
    std::string source;
    std::string target;


    BoneMapping(const std::string& src, const std::string& tgt)
        : source(src), target(tgt) {}

    BoneMapping(const BoneMapping& other) = default;
    BoneMapping& operator=(const BoneMapping& other) = default;
};

std::vector<BoneMapping> bones_map = {
    BoneMapping("Root", "Hips"),
    BoneMapping("Hips", "Spine"),
    BoneMapping("Spine", "jigglebone_6"),
    BoneMapping("jigglebone_6", "jigglebone_7"),
    BoneMapping("jigglebone_7", "jigglebone_8"),
    BoneMapping("jigglebone_8", "jigglebone_9"),
    BoneMapping("Spine", "Spine1"),
    BoneMapping("Spine1", "Spine2"),
    BoneMapping("Spine2", "Spine3"),
    BoneMapping("Spine3", "Spine4"),
    BoneMapping("Spine4", "jigglebone_1"),
    BoneMapping("jigglebone_1", "jigglebone_2"),
    BoneMapping("jigglebone_2", "jigglebone_3"),
    BoneMapping("jigglebone_3", "jigglebone_4"),
    BoneMapping("jigglebone_4", "jigglebone_5"),
    BoneMapping("Spine4", "Neck"),
    BoneMapping("Neck", "Neck1"),
    BoneMapping("Neck1", "Neck2"),
    BoneMapping("Neck2", "Head"),
    BoneMapping("Head", "jigglebone_22"),
    BoneMapping("jigglebone_22", "jigglebone_23"),
    BoneMapping("Spine1", "LeftShoulder")
};

std::string FindMappedBone(const std::string& bone_name)
{

    for (const BoneMapping& bone : bones_map)
    {
        if (bone.source == bone_name)
            return bone.target;
    }
    return "";
}






SDK::AActor* closest_actor = nullptr;
float aimbot_distance = 100.0f;
SDK::FVector closest_actor_head;
SDK::FRotator closest_actor_rotation;
float MaxDistance = 100.00f;
SDK::UWorld* World = SDK::UWorld::GetWorld();
SDK::ULevel* Level = World->PersistentLevel;
SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers.Num() > 0 ?
World->OwningGameInstance->LocalPlayers[0]->PlayerController : nullptr;
SDK::USkinnedMeshComponent* mesh = nullptr;
bool bAim = false;
bool bAimbotEnabled = false;
bool bVisCheck = false;

bool bTpToEnemies = false;
float AimbotFov = 50.0f;
float cfg_AimbotSmoothing = 2.0f;
static int currentTargetID;
static int Aimbot_BoneIndex;



inline std::vector<SDK::AActor*> PlayerList{};
inline std::vector<SDK::AActor*> WorldActors{};


namespace gl {
    namespace Aimbot {
        bool Aimbot = false;
        float Fov = 50.0f;

    }

    namespace Exploits {
        bool SuperSpeed = false;
        bool FastFly = false;
        bool Unlimitedstamina = false;
        bool GodModee = false;
        bool GodMode = false;
        bool Ammo = false;
        float MaxSpeed = 10000.0f;
        bool AddHealth = false;
        bool AddFood = false;
        bool bMagicBullet = false;
        bool WeaponSkin = false;
    }
}

std::string VectorToString(const SDK::FVector& vec)
{
    return "X: " + std::to_string(vec.X) + ", Y: " + std::to_string(vec.Y) + ", Z: " + std::to_string(vec.Z);
}

std::string Vector2DToString(const SDK::FVector2D& vec)
{
    return "X: " + std::to_string(vec.X) + ", Y: " + std::to_string(vec.Y);
}

std::string RotatorToString(const SDK::FRotator& rot)
{
    return "Pitch: " + std::to_string(rot.Pitch) + ", Yaw: " + std::to_string(rot.Yaw) + ", Roll: " + std::to_string(rot.Roll);
}
#include <algorithm>

#include <chrono>
std::vector<SDK::AActor*> PlayerSet;
std::chrono::steady_clock::time_point LastUpdateTime;
const std::chrono::duration<float> UpdateInterval = std::chrono::seconds(1); // Update every 1 second

void SmoothAim(SDK::FRotator currentRotation, SDK::FRotator targetRotation, float smoothFactor)
{
    // Smooth transition between current and target rotation
    const float deltaTime = 1.0f / 60.0f; // Assuming 60 FPS for now
    SDK::FRotator smoothedRotation = SDK::UKismetMathLibrary::RInterpTo(currentRotation, targetRotation, deltaTime, smoothFactor);

    MyController->SetControlRotation(smoothedRotation);
}

void UpdatePlayerList()
{
    auto CurrentTime = std::chrono::steady_clock::now();
    if (CurrentTime - LastUpdateTime < UpdateInterval)
    {
        return; // Skip update if not enough time has passed
    }

    LastUpdateTime = CurrentTime;
    PlayerSet.clear();

    SDK::TArray<SDK::AActor*>& actors = World->PersistentLevel->Actors;
    for (int i = 0; i < actors.Num(); i++)
    {
        SDK::AActor* actor = actors[i];
        if (actor && actor->IsA(SDK::AHumanPlayerCharacter::StaticClass()))
        {
            PlayerSet.push_back(actor);
        }
    }
}

void SetUnlimitedAmmo(SDK::AProjectileWeapon* Weapon)
{
    if (Weapon)
    {
        Weapon->CurrentAmmoCount = 1000;        // Set the current ammo to 1000
        Weapon->ChamberLoadedAmmo = 1000;       // Set the chamber loaded ammo to 1000 as well
        Weapon->MagazineSize = 1000;             // Optionally set the magazine size to 1000
        Weapon->ChamberSize = 1000;              // Optionally set the chamber size to 1000

        // Notify clients about the ammo change if necessary
        Weapon->OnRep_AmmoCount(Weapon->CurrentAmmoCount);
        Weapon->OnRep_ChamberLoadedAmmoCount(Weapon->ChamberLoadedAmmo);
    }
}

std::string WideCharToUTF8(const std::wstring& wstr)
{
    if (wstr.empty()) return std::string();
    int sizeNeeded = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
    std::string strTo(sizeNeeded, 0);
    WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], sizeNeeded, NULL, NULL);
    return strTo;
}




void GameLoop()
{
    SDK::AActor* actor_list{};
    SDK::TArray<SDK::AActor*> actors{};

    World = SDK::UWorld::GetWorld();
    SDK::UEngine* gEngine = SDK::UEngine::GetEngine();

    if (!World)
    {
        LogMessage("World is null.");
        return;
    }

    // Initialize the last update time if not set yet
    if (LastUpdateTime.time_since_epoch().count() == 0)
    {
        LastUpdateTime = std::chrono::steady_clock::now();
    }

    // Update the player list periodically
    UpdatePlayerList();

    if (PlayerSet.size() == 0)
    {
        LogMessage("No players in PlayerSet");
        return;
    }

    MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!MyController)
    {
        LogMessage("MyController is null.");
        return;
    }

    // Process the PlayerSet for aimbot 

    float MaxDistance = FLT_MAX;
    SDK::AActor* closest_actor = nullptr;
    SDK::FRotator closest_actor_rotation{};
    SDK::FVector closest_actor_head{};

    for (int i = 0; i < PlayerSet.size(); i++)
    {
        SDK::AActor* actor = PlayerSet[i];
        if (!actor || !actor->RootComponent) continue;

        SDK::AHumanPlayerCharacter* humanCharacter = static_cast<SDK::AHumanPlayerCharacter*>(actor);
        if (!humanCharacter) continue;

        auto ActorState = humanCharacter->PlayerState;

        if (!MyController->PlayerCameraManager)
        {
            LogMessage("PlayerCameraManager is null");
            continue;
        }

        auto CameraLocation = MyController->PlayerCameraManager->GetCameraLocation();
        auto CameraRotation = MyController->PlayerCameraManager->GetCameraRotation();

        auto LocalCharacter = reinterpret_cast<SDK::AHumanPlayerCharacter*>(MyController->Character);
        auto CharacterMovement = LocalCharacter->CharacterMovement;

        // Exploits handling
        if (gl::Exploits::SuperSpeed)
        {
            if (LocalCharacter) {
                SDK::AWeapon* CurrentWeapon = static_cast<SDK::AWeapon*>(LocalCharacter->Inventory->CurrentWeapon.Get());
                // Ensure CurrentWeapon is valid and of type AProjectileWeapon
                if (CurrentWeapon) {
                    // Attempt to cast CurrentWeapon to AProjectileWeapon
                    SDK::AProjectileWeapon* ProjectileWeapon = static_cast<SDK::AProjectileWeapon*>(CurrentWeapon);
                    // Check if the cast was successful
                    if (ProjectileWeapon) {
                        SDK::FVector_NetQuantize BulletLocation = static_cast<SDK::FVector_NetQuantize>(closest_actor_head);
                        SDK::TArray<SDK::FVector_NetQuantizeNormal> BulletDirections;

                        // Create an instance of FVector_NetQuantizeNormal and set its values
                        SDK::FVector_NetQuantizeNormal direction;
                        direction.X = 1.0f;
                        direction.Y = 1.0f;
                        direction.Z = 1.0f;
                        BulletDirections.Add(direction);

                        // Call the multicast function on the ProjectileWeapon instance
                        ProjectileWeapon->MulticastFireBullet(BulletLocation, BulletDirections, true);
                    }
                }
            }



        }

        if (gl::Exploits::Unlimitedstamina)
        {
            LocalCharacter->StaminaComponent->Stamina = 999.0f;
            // LocalCharacter->bBulletTrajectoryBlocked = false;
        }

        if (gl::Exploits::AddHealth) 
        {
            float Amount = 30.00f;
        }



        if (gl::Exploits::GodModee)
        {
            LocalCharacter->HealthComponent->SetTemporaryInvincibility(90);
        }


        if (gl::Exploits::Ammo)
        {
            if (LocalCharacter && LocalCharacter->Inventory)
            {
                SDK::AWeapon* CurrentWeapon = static_cast<SDK::AWeapon*>(LocalCharacter->Inventory->CurrentWeapon.Get());
                if (CurrentWeapon)
                {
                    int AmmoCount = LocalCharacter->Inventory->GetAmmoCountForWeapon(CurrentWeapon);

                    // Use static_cast here
                    if (SDK::AProjectileWeapon* ProjectileWeapon = static_cast<SDK::AProjectileWeapon*>(CurrentWeapon))
                    {
                        ProjectileWeapon->CurrentAmmoCount = 1000;
                        // ProjectileWeapon->ChamberLoadedAmmo = 1000;
                        // ProjectileWeapon->MagazineSize = 1000;
                        // ProjectileWeapon->ChamberSize = 1000;

                    }
                }
            }
        }

        auto LocalPos = LocalCharacter->RootComponent->RelativeLocation;
        auto mesh = humanCharacter->Mesh;
        SDK::FVector location = humanCharacter->RootComponent->RelativeLocation;
        float ActorDistance = LocalPos.GetDistanceToInMeters(location);

        SDK::FVector head_bone_pos = mesh->GetSocketLocation(StrToName("Head"));
        SDK::FVector feet_bone_pos = mesh->GetSocketLocation(StrToName("Leg"));
        SDK::FVector feet_middle_pos = { location.X, location.Y, feet_bone_pos.Z };

        SDK::FVector2D Bottom{}, Top{};
        if (MyController->ProjectWorldLocationToScreen(feet_middle_pos, &Bottom, false) &&
            MyController->ProjectWorldLocationToScreen(head_bone_pos, &Top, false))
        {
            const float h = std::abs(Top.Y - Bottom.Y);
            const float w = h * 0.2f;

            if (gl::Aimbot::Aimbot)
            {

                auto rot = SDK::UKismetMathLibrary::FindLookAtRotation(CameraLocation, head_bone_pos);
                SDK::FVector2D screen_middle = { 2650 / 2, 1080 / 2 };
                float aimbot_distance = SDK::UKismetMathLibrary::Distance2D(Top, screen_middle);

                if (aimbot_distance < MaxDistance && aimbot_distance)
                {
                    MaxDistance = aimbot_distance;
                    closest_actor = actor;
                    closest_actor_rotation = rot;
                    closest_actor_head = head_bone_pos;
                }
            }
        }
    }

    if (closest_actor && gl::Aimbot::Aimbot)
    {
        if (GetAsyncKeyState(VK_RBUTTON))
        {
            LogMessage("Right mouse button is pressed");
            SmoothAim(MyController->GetControlRotation(), closest_actor_rotation, 5.0f); // Adjust '5.0f' for different smoothness
        }
        //K2_GetActorLocation();
        //auto LocalCharacter = reinterpret_cast<SDK::AHumanPlayerCharacter*>(MyController->Character);

    }
    if (gl::Exploits::bMagicBullet) {
        auto LocalCharacter = reinterpret_cast<SDK::AHumanPlayerCharacter*>(MyController->Character);
        LogMessage("magic si on");

        if (LocalCharacter) {



            auto CurrentWeapon = LocalCharacter->Inventory->CurrentWeapon.Get();

            if (CurrentWeapon) {
                SDK::AProjectileWeapon* ProjectileWeapon = static_cast<SDK::AProjectileWeapon*>(CurrentWeapon);


                if (ProjectileWeapon) {

                    SDK::FVector headLocation = closest_actor_head;

                    SDK::FVector_NetQuantize BulletLocation;
                    BulletLocation.X = headLocation.X;
                    BulletLocation.Y = headLocation.Y;
                    BulletLocation.Z = headLocation.Z;


                    SDK::TArray<SDK::FVector_NetQuantizeNormal> BulletDirections;


                    SDK::FVector directionVector = headLocation - LocalCharacter->K2_GetActorLocation();
                    directionVector.Normalize();


                    SDK::FVector_NetQuantizeNormal direction;
                    direction.X = directionVector.X;
                    direction.Y = directionVector.Y;
                    direction.Z = directionVector.Z;

                    BulletDirections.Add(direction);

                    LogMessage("shoot");
                    ProjectileWeapon->MulticastFireBullet(BulletLocation, BulletDirections, false);

                }

            }


        }
        else {
            LogMessage("Character is null!");
        }
    }

}




void DrawESP()
{
    if (!objectsINIT::CheckAllPointers())
    {
        std::cerr << "Failed to initialize all pointers in DrawESP." << std::endl;
        return;
    }

    if (!bShowESP) return;

    SDK::UWorld* World = SDK::UWorld::GetWorld();
    if (!World) return;

    SDK::ULevel* Level = World->PersistentLevel;
    if (!Level) return;

    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;
    if (Actors.Num() == 0) return;

    ImDrawList* drawList = ImGui::GetWindowDrawList();
    if (!drawList) return;

    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers.Num() > 0 ?
        World->OwningGameInstance->LocalPlayers[0]->PlayerController : nullptr;
    if (!MyController) {
        LogMessage("No PlayerController found.");
        return;
    }

    // Get the local player's character to avoid drawing their own box
    SDK::AHumanPlayerCharacter* LocalCharacter = SafeCast<SDK::AHumanPlayerCharacter>(MyController->Character);
    if (!LocalCharacter) return;


    for (int i = 0; i < Actors.Num(); i++)
    {
        SDK::AActor* Actor = Actors[i];
        if (!Actor) continue;

        // Skip if this actor is the local player's own character
        if (Actor == LocalCharacter) continue;

        SDK::AHumanPlayerCharacter* Character = SafeCast<SDK::AHumanPlayerCharacter>(Actor);
        if (Character)
        {
            // Get the player's health
            auto health = Character->HealthComponent->GetHealth();
            if (health <= 0.0f) continue; // Skip drawing if health is zero

            SDK::FVector2D ScreenPos;
            if (WorldToScreen(Character->K2_GetActorLocation(), &ScreenPos))
            {
                // Calculate the distance to the enemy player
                float Distance = Character->GetDistanceTo(MyController->Pawn);
                float ScaleFactor = (Distance > 0) ? (Distance / 1500.0f) : 1.0f;

                ImVec2 BoxSize(50 / ScaleFactor, 100 / ScaleFactor);
                drawList->AddRect(ImVec2(ScreenPos.X - BoxSize.x / 2, ScreenPos.Y - BoxSize.y / 2),
                    ImVec2(ScreenPos.X + BoxSize.x / 2, ScreenPos.Y + BoxSize.y / 2),
                    IM_COL32(0, 255, 0, 255));

                // Draw health bar
                float healthPercentage = health / 100.0f; // Assuming max health is 100
                healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f); // Ensure it's between 0 and 1

                float healthBarWidth = BoxSize.x * healthPercentage; // Adjust width based on health
                float healthBarHeight = 5.0f / ScaleFactor;
                ImVec2 healthBarPos(ScreenPos.X - BoxSize.x / 2, ScreenPos.Y - BoxSize.y / 2 - healthBarHeight - 2);

                // Draw background of the health bar (full bar)
                drawList->AddRectFilled(
                    healthBarPos,
                    ImVec2(healthBarPos.x + BoxSize.x, healthBarPos.y + healthBarHeight),
                    IM_COL32(255, 0, 0, 255)
                );

                // Draw foreground of the health bar (current health)
                drawList->AddRectFilled(
                    healthBarPos,
                    ImVec2(healthBarPos.x + healthBarWidth, healthBarPos.y + healthBarHeight),
                    IM_COL32(0, 255, 0, 255) // Green color for remaining health
                );
                // Draw health value above the health bar
                char healthText[16];
                snprintf(healthText, sizeof(healthText), "%.0f", health);

                ImVec2 textSize = ImGui::CalcTextSize(healthText);

                ImVec2 textPos(healthBarPos.x + (BoxSize.x - textSize.x) / 2, healthBarPos.y - textSize.y - 2);

                drawList->AddText(textPos, IM_COL32(255, 255, 255, 255), healthText);

                // Draw distance below the bounding box
                char distanceText[32];
                snprintf(distanceText, sizeof(distanceText), "%.1f m", Distance);

                ImVec2 distanceTextSize = ImGui::CalcTextSize(distanceText);

                ImVec2 distanceTextPos(
                    ScreenPos.X - distanceTextSize.x / 2,
                    ScreenPos.Y + BoxSize.y / 2 + 2 // Position it slightly below the bounding box
                );

                drawList->AddText(distanceTextPos, IM_COL32(255, 255, 0, 255), distanceText);
            }
        }
        else
        {
            SDK::ABP_Character_C* Monster = SafeCast<SDK::ABP_Character_C>(Actor);
            if (Monster)
            {
                SDK::FVector2D ScreenPos;
                if (WorldToScreen(Monster->K2_GetActorLocation(), &ScreenPos))
                {
                    float Distance = Monster->GetDistanceTo(MyController->Pawn);
                    ImU32 color = MyController->LineOfSightTo(Monster, SDK::FVector{ 0, 0, 0 }, false) ?
                        IM_COL32(255, 0, 0, 255) : IM_COL32(128, 0, 0, 204);

                    ImVec2 BoxSize(50 / (Distance > 0 ? (Distance / 1500.0f) : 1.0f), 100 / (Distance > 0 ? (Distance / 1500.0f) : 1.0f));
                    drawList->AddRect(ImVec2(ScreenPos.X - BoxSize.x / 2, ScreenPos.Y - BoxSize.y / 2),
                        ImVec2(ScreenPos.X + BoxSize.x / 2, ScreenPos.Y + BoxSize.y / 2),
                        color);
                }
            }
        }
    }
}


void DrawTextAt(const char* text, ImVec2 position, ImColor color, bool center)
{
    ImDrawList* drawList = ImGui::GetForegroundDrawList();
    ImFont* font = ImGui::GetFont();

    if (font == nullptr || drawList == nullptr) return;

    if (center)
    {
        ImVec2 textSize = font->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.0f, text);
        position.x -= textSize.x * 0.5f;
        position.y -= textSize.y * 0.5f;
    }

    drawList->AddText(position, color, text);
}




typedef void(__fastcall* tOnTakeDamage)(SDK::AHumanCharacter*, float, SDK::EDamageType, const SDK::AHumanCharacter*, SDK::TSubclassOf<SDK::AItem>, const struct SDK::FHitResultSimplified&, const SDK::TArray<SDK::TSubclassOf<SDK::AItem>>&);
tOnTakeDamage OriginalOnTakeDamage = nullptr;

void __fastcall HookedOnTakeDamage(SDK::AHumanCharacter* pThis, float DamageAmount, SDK::EDamageType DamageType, const SDK::AHumanCharacter* InstigatingActor, SDK::TSubclassOf<SDK::AItem> InstigatingItemClass, const struct SDK::FHitResultSimplified& HitOptimised, const SDK::TArray<SDK::TSubclassOf<SDK::AItem>>& AffectedItems) {
    if (gl::Exploits::GodMode) {
        LogMessage("GodMode is active: Ignoring damage.");
        DamageAmount = 0; // Set damage to 0
    }

    LogMessage("GodMode is not on buddy: Ignoring damage.");
    OriginalOnTakeDamage(pThis, DamageAmount, DamageType, InstigatingActor, InstigatingItemClass, HitOptimised, AffectedItems);
}



float __fastcall HookedAddTrueHealth(SDK::UHealthComponent* healthComponent, float Amount) {
    LogMessage("Adding true health: " + std::to_string(Amount));
    Amount = 1000.0f; // Set to a fixed value
    healthComponent->CurrentTrueHealth += Amount;
    return Amount;
}
SDK::UHealthComponent* HealthComponentInstance = nullptr;
SDK::USkinFunctions* USkinFunctionsInstance = nullptr;
// Function prototype
void SetupHooks();

void SetupHooks() {
    MH_STATUS status = MH_Initialize();
    if (status != MH_OK) {
        LogMessage("Failed to initialize MinHook! Error: " + std::string(MH_StatusToString(status)));
        return;
    }

    // Assuming you have access to the local character instance
    auto LocalCharacter = reinterpret_cast<SDK::AHumanPlayerCharacter*>(MyController->Character); // Replace with how you access the local character instance

    if (LocalCharacter) {
        // Get the vtable of the character
        uintptr_t* characterVTable = *reinterpret_cast<uintptr_t**>(LocalCharacter);
        OriginalOnTakeDamage = reinterpret_cast<tOnTakeDamage>(characterVTable[83]);  // Replace with the correct vtable index for OnTakeDamage

        // Hook the OnTakeDamage function
        status = MH_CreateHook(
            reinterpret_cast<LPVOID>(OriginalOnTakeDamage),
            &HookedOnTakeDamage,
            reinterpret_cast<LPVOID*>(&OriginalOnTakeDamage)
        );

        if (status != MH_OK) {
            LogMessage("Failed to create hook for OnTakeDamage! Error: " + std::string(MH_StatusToString(status)));
            return;
        }
    }
    else {
        LogMessage("LocalCharacter is not initialized!");
    }

    // Enable all hooks
    if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) {
        LogMessage("Failed to enable hooks!");
        return;
    }

    LogMessage("Hooks successfully set up!");
}

DWORD WINAPI HookThread(LPVOID hModule) {
    SetupHooks();
    return 0;
}


void RenderESP()
{
    static bool bAddHealth = false;

    ImGui::Checkbox("Enable ESP", &bShowESP);
    ImGui::Checkbox("Enable Aimbot", &gl::Aimbot::Aimbot);

    //ImGui::Checkbox("Magic bullet", &gl::Exploits::bMagicBullet);
    if (gl::Aimbot::Aimbot)
    {
        ImGui::SliderFloat("Aimbot FOV", &gl::Aimbot::Fov, 10.0f, 360.0f);
        // ImGui::SliderFloat("Aimbot Distance", aimbot_distance, 10.0f, 360.0f);
    }

   

}

void RenderExploits() {
    ImGui::Checkbox("Enable add health", &gl::Exploits::AddHealth);
    ImGui::Checkbox("Enable Unlimited stamina", &gl::Exploits::Unlimitedstamina);
    ImGui::Checkbox("God Mode", &gl::Exploits::GodModee);
    ImGui::Checkbox("Unlimited ammo", &gl::Exploits::Ammo);
}
#include <cmath>





bool ShowMenu = false;
bool ImGui_Initialised = false;

void UnloadDLL(HMODULE Module) {
    // Clean up DirectX resources

    // Free the console if it was allocated
    fclose(stdout);
    fclose(stdin);
    FreeConsole();

    // Unload the DLL and exit the thread
    FreeLibraryAndExitThread(Module, 0);
}
namespace Process {
    DWORD ID;
    HANDLE Handle;
    HWND Hwnd;
    HMODULE Module;
    WNDPROC WndProc;
    int WindowWidth;
    int WindowHeight;
    LPCSTR Title;
    LPCSTR ClassName;
    LPCSTR Path;
}


namespace DirectX12Interface {
    ID3D12Device* Device = nullptr;
    ID3D12DescriptorHeap* DescriptorHeapBackBuffers;
    ID3D12DescriptorHeap* DescriptorHeapImGuiRender;
    ID3D12GraphicsCommandList* CommandList;
    ID3D12CommandQueue* CommandQueue;

    struct _FrameContext {
        ID3D12CommandAllocator* CommandAllocator;
        ID3D12Resource* Resource;
        D3D12_CPU_DESCRIPTOR_HANDLE DescriptorHandle;
    };

    uintx_t BuffersCounts = -1;
    _FrameContext* FrameContext;
}


extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT APIENTRY WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (ShowMenu) {
        ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam);
        return true;
    }
    return CallWindowProc(Process::WndProc, hwnd, uMsg, wParam, lParam);
}

HRESULT APIENTRY MJPresent(IDXGISwapChain3* pSwapChain, UINT SyncInterval, UINT Flags) {
    if (!ImGui_Initialised) {
        if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D12Device), (void**)&DirectX12Interface::Device))) {
            ImGui::CreateContext();

            ImGuiIO& io = ImGui::GetIO(); (void)io;
            ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard;
            io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

            DXGI_SWAP_CHAIN_DESC Desc;
            pSwapChain->GetDesc(&Desc);
            Desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
            Desc.OutputWindow = Process::Hwnd;
            Desc.Windowed = ((GetWindowLongPtr(Process::Hwnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

            DirectX12Interface::BuffersCounts = Desc.BufferCount;
            DirectX12Interface::FrameContext = new DirectX12Interface::_FrameContext[DirectX12Interface::BuffersCounts];

            D3D12_DESCRIPTOR_HEAP_DESC DescriptorImGuiRender = {};
            DescriptorImGuiRender.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
            DescriptorImGuiRender.NumDescriptors = DirectX12Interface::BuffersCounts;
            DescriptorImGuiRender.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;

            if (DirectX12Interface::Device->CreateDescriptorHeap(&DescriptorImGuiRender, IID_PPV_ARGS(&DirectX12Interface::DescriptorHeapImGuiRender)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            ID3D12CommandAllocator* Allocator;
            if (DirectX12Interface::Device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&Allocator)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            for (size_t i = 0; i < DirectX12Interface::BuffersCounts; i++) {
                DirectX12Interface::FrameContext[i].CommandAllocator = Allocator;
            }

            if (DirectX12Interface::Device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, Allocator, NULL, IID_PPV_ARGS(&DirectX12Interface::CommandList)) != S_OK ||
                DirectX12Interface::CommandList->Close() != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            D3D12_DESCRIPTOR_HEAP_DESC DescriptorBackBuffers;
            DescriptorBackBuffers.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
            DescriptorBackBuffers.NumDescriptors = DirectX12Interface::BuffersCounts;
            DescriptorBackBuffers.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
            DescriptorBackBuffers.NodeMask = 1;

            if (DirectX12Interface::Device->CreateDescriptorHeap(&DescriptorBackBuffers, IID_PPV_ARGS(&DirectX12Interface::DescriptorHeapBackBuffers)) != S_OK)
                return oPresent(pSwapChain, SyncInterval, Flags);

            const auto RTVDescriptorSize = DirectX12Interface::Device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
            D3D12_CPU_DESCRIPTOR_HANDLE RTVHandle = DirectX12Interface::DescriptorHeapBackBuffers->GetCPUDescriptorHandleForHeapStart();

            for (size_t i = 0; i < DirectX12Interface::BuffersCounts; i++) {
                ID3D12Resource* pBackBuffer = nullptr;
                DirectX12Interface::FrameContext[i].DescriptorHandle = RTVHandle;
                pSwapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
                DirectX12Interface::Device->CreateRenderTargetView(pBackBuffer, nullptr, RTVHandle);
                DirectX12Interface::FrameContext[i].Resource = pBackBuffer;
                RTVHandle.ptr += RTVDescriptorSize;
            }

            ImGui_ImplWin32_Init(Process::Hwnd);
            ImGui_ImplDX12_Init(DirectX12Interface::Device, DirectX12Interface::BuffersCounts, DXGI_FORMAT_R8G8B8A8_UNORM, DirectX12Interface::DescriptorHeapImGuiRender, DirectX12Interface::DescriptorHeapImGuiRender->GetCPUDescriptorHandleForHeapStart(), DirectX12Interface::DescriptorHeapImGuiRender->GetGPUDescriptorHandleForHeapStart());
            ImGui_ImplDX12_CreateDeviceObjects();
            ImGui::GetIO().ImeWindowHandle = Process::Hwnd;
            Process::WndProc = (WNDPROC)SetWindowLongPtr(Process::Hwnd, GWLP_WNDPROC, (__int3264)(LONG_PTR)WndProc);
        }
        ImGui_Initialised = true;
    }

    if (DirectX12Interface::CommandQueue == nullptr)
        return oPresent(pSwapChain, SyncInterval, Flags);
    // Scale all sizes by 50% or adjust as needed

    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();



    // First ImGui window - Overlay
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(ImVec2(2560, 1080));
    ImGui::Begin("Overlay", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar  | ImGuiWindowFlags_NoBackground);
    if (bShowESP == true)
    {
        DrawESP();

    }
    if (gl::Aimbot::Aimbot)
    {
        if (gl::Aimbot::Aimbot)
        {
            LogMessage("Aimbot enabled");
            GameLoop();
        }

    }
    if (gl::Exploits::GodModee)
    {
        GameLoop();
    }
    if (gl::Exploits::Unlimitedstamina)
    {
        GameLoop();
    }
    if (gl::Exploits::bMagicBullet)
    {
        GameLoop();
    }
    if (gl::Exploits::AddHealth)
    {
        GameLoop();
    }
    if (gl::Exploits::Ammo)
    {
        GameLoop();

    }
    if (gl::Exploits::WeaponSkin)
    {
        GameLoop();
    }

    ImGui::End();

    // Toggle menu visibility
    if (GetAsyncKeyState(VK_INSERT) & 1) ShowMenu = !ShowMenu;

    ImGui::GetIO().MouseDrawCursor = ShowMenu;
    if (ShowMenu == true) {
        if (GetAsyncKeyState(VK_END) & 1) {
            UnloadDLL(Process::Module);
        }

        // Main ImGui window - Menu
        ImGui::Begin(" Internal [DEV]", nullptr, ImGuiWindowFlags_NoCollapse);
        // Ensure the menu is large enough and positioned correctly
        ImGui::SetNextWindowPos(ImVec2(0, 0));           // Adjust position as necessary


        if (ImGui::BeginTabBar("MainTabs")) {


            // ESP Tab
            if (ImGui::BeginTabItem("ESP")) {
                RenderESP();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Exploits")) {
                RenderExploits();
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        ImGui::End();
    }



    ImGui::EndFrame();

    DirectX12Interface::_FrameContext& CurrentFrameContext = DirectX12Interface::FrameContext[pSwapChain->GetCurrentBackBufferIndex()];
    CurrentFrameContext.CommandAllocator->Reset();

    D3D12_RESOURCE_BARRIER Barrier;
    Barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    Barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    Barrier.Transition.pResource = CurrentFrameContext.Resource;
    Barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;

    DirectX12Interface::CommandList->Reset(CurrentFrameContext.CommandAllocator, nullptr);
    DirectX12Interface::CommandList->ResourceBarrier(1, &Barrier);
    DirectX12Interface::CommandList->OMSetRenderTargets(1, &CurrentFrameContext.DescriptorHandle, FALSE, nullptr);
    DirectX12Interface::CommandList->SetDescriptorHeaps(1, &DirectX12Interface::DescriptorHeapImGuiRender);

    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), DirectX12Interface::CommandList);
    Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    DirectX12Interface::CommandList->ResourceBarrier(1, &Barrier);
    DirectX12Interface::CommandList->Close();
    DirectX12Interface::CommandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&DirectX12Interface::CommandList));
    return oPresent(pSwapChain, SyncInterval, Flags);
}


void MJExecuteCommandLists(ID3D12CommandQueue* queue, UINT NumCommandLists, ID3D12CommandList* ppCommandLists) {
    if (!DirectX12Interface::CommandQueue)
        DirectX12Interface::CommandQueue = queue;

    oExecuteCommandLists(queue, NumCommandLists, ppCommandLists);
}

void APIENTRY MJDrawInstanced(ID3D12GraphicsCommandList* dCommandList, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation) {
    return oDrawInstanced(dCommandList, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}

void APIENTRY MJDrawIndexedInstanced(ID3D12GraphicsCommandList* dCommandList, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation) {
    return oDrawIndexedInstanced(dCommandList, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}

DWORD WINAPI MainThread(LPVOID lpParameter) {
    bool WindowFocus = false;

    while (WindowFocus == false) {

        DWORD ForegroundWindowProcessID;
        GetWindowThreadProcessId(GetForegroundWindow(), &ForegroundWindowProcessID);
        if (GetCurrentProcessId() == ForegroundWindowProcessID) {

            Process::ID = GetCurrentProcessId();
            Process::Handle = GetCurrentProcess();
            Process::Hwnd = GetForegroundWindow();

            RECT TempRect;
            GetWindowRect(Process::Hwnd, &TempRect);
            Process::WindowWidth = TempRect.right - TempRect.left;
            Process::WindowHeight = TempRect.bottom - TempRect.top;

            char TempTitle[MAX_PATH];
            GetWindowText(Process::Hwnd, TempTitle, sizeof(TempTitle));
            Process::Title = TempTitle;

            char TempClassName[MAX_PATH];
            GetClassName(Process::Hwnd, TempClassName, sizeof(TempClassName));
            Process::ClassName = TempClassName;

            char TempPath[MAX_PATH];
            GetModuleFileNameEx(Process::Handle, NULL, TempPath, sizeof(TempPath));
            Process::Path = TempPath;

            WindowFocus = true;
        }
    }
    bool InitHook = false;
    while (InitHook == false) {
        if (DirectX12::Init() == true) {
            CreateHook(54, (void**)&oExecuteCommandLists, MJExecuteCommandLists);
            CreateHook(140, (void**)&oPresent, MJPresent);
            CreateHook(84, (void**)&oDrawInstanced, MJDrawInstanced);
            CreateHook(85, (void**)&oDrawIndexedInstanced, MJDrawIndexedInstanced);
            InitHook = true;
        }
    }
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        if (ChecktDirectXVersion(DirectXVersion.D3D12) == true) {
            Process::Module = hModule;
            CreateThread(0, 0, MainThread, 0, 0, 0);

            DisableThreadLibraryCalls(hModule);
            CreateThread(nullptr, 0, HookThread, hModule, 0, nullptr);
        }
        break;
    case DLL_PROCESS_DETACH:
        DisableAll();
        UnloadDLL(hModule); // Call your unload function here

        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    default:
        break;
    }
    return TRUE;
}












