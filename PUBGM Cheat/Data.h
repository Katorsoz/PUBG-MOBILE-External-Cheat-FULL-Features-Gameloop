#pragma once

#include "Includes.h"
#include "Utility.h"
#include "Setting.h"
#include "Algorithm.h"
#include "Offset.h"
#include "Global.h"

struct ActorsEncryption {
	uint32_t Enc_1;
	uint32_t Enc_2;
	uint32_t Enc_3;
	uint32_t Enc_4;
};
struct AActor
{
	//bool LineOfSightTo(const DWORD, VECTOR3 ViewPoint, bool bAlternateChecks);
	bool Visible;
	bool Visible2;
	bool IsBot;
	bool IsDead;
	bool isAimingAtMe;
	bool bIsGunADS;
	bool bIsWeaponFiring;
	VECTOR3 Position;
	FLOAT Health;
	FLOAT KnockedHealth;
	INT BreathMax;
	string weapon1;
	FLOAT HealthMax;
	string Name;
	string Nation;
	string Weapon;
	string ScopeFov;
	float ScopeFovv;
	float MyScope;
	INT Ammo;
	INT AmmoMax;
	INT TeamId;
	string UID;
	DWORD Address;
	VECTOR3 Velocity;
	FRotator RelativeRotation;
	VECTOR3 RelativeLocation;
	string StateInt;
	INT Status;


	//VECTOR3 HeadPos;
	//VECTOR3 ChestPos;
	//VECTOR3 PelvisPos;
	//VECTOR3 lSholderPos;
	//VECTOR3 rSholderPos;
	//VECTOR3 lElbowPos;
	//VECTOR3 rElbowPos;
	//VECTOR3 lWristPos;
	//VECTOR3 rWristPos;
	//VECTOR3 lThighPos;
	//VECTOR3 rThighPos;
	//VECTOR3 lKneePos;
	//VECTOR3 rKneePos;
	//VECTOR3 lAnklePos;
	//VECTOR3 rAnklePos;
	//VECTOR3 NearestBonePos;

	struct _Bones
	{
		VECTOR3 HeadPos;
		VECTOR3 ChestPos;
		VECTOR3 PelvisPos;
		VECTOR3 LEFTSHOULDER;
		VECTOR3 RIGHTSHOULDER;
		VECTOR3 LEFTELBOWROLL;
		VECTOR3 RIGHTELBOWROLL;
		VECTOR3 LEFTHAND;
		VECTOR3 RIGHTHAND;
		VECTOR3 LEFTLEGS;
		VECTOR3 RIGHTLEGS;
		VECTOR3 LEFTKNEEROLL;
		VECTOR3 RIGHTKNEEROLL;
		VECTOR3 LEFTFOOT;
		VECTOR3 RIGHTFOOT;
	}Bones;
	VECTOR3 NerstBone;
};

enum BONES
{
	BONE_ROOT = 0,
	BONE_HEAD = 6,
	BONE_NECK = 5,
	BONE_SPINE_01 = 1,
	BONE_SPINE_02 = 2,
	BONE_SPINE_03 = 3,
	BONE_LEFTSHOULDER = 12,
	BONE_RIGHTSHOULDER = 33,
	BONE_LEFTELBOWROLL = 13,
	BONE_RIGHTELBOWROLL = 34,
	BONE_LEFTHAND = 64,
	BONE_RIGHTHAND = 63,
	BONE_LEFTKNEEROLL = 54,
	BONE_RIGHTKNEEROLL = 58,
	BONE_LEFTFOOT = 55,
	BONE_RIGHTFOOT = 59
};
enum BoneIndex
{
	Head = 5,
	Chest = 4,
	Pelvis = 1,
	LeftSholder = 11,
	RightSholder = 32,
	LeftElbow = 12,
	RightElbow = 33,
	LeftWrist = 63,
	RightWrist = 62,
	LeftThigh = 52,
	RightThigh = 56,
	LeftKnee = 53,
	RightKnee = 57,
	LeftAnkle = 54,
	RightAnkle = 58
};


struct BombAlert
{
	int timeLeft;
	int damageradius;
	string Name;
	VECTOR3 Position;
	DWORD Address;
	std::vector<VECTOR3> Trajectory;
};

struct Item
{
	string Name;
	VECTOR3 Position;
	DWORD Address;
};
struct impItem
{
	string Name;
	VECTOR3 Position;
};
struct Vehicle
{
	float oil;
	float hppercet;
	float hp;
	string Name;
	VECTOR3 Position;
	DWORD Address;
	bool driving;
};

struct Itemb {
	std::string Displayname;
	ImVec4 colorcod;

};
struct Airdrop
{
	std::string Displayname;
	string Name;
	VECTOR3 Position;
	std::vector<Item> boxitemm;
	bool bIsAirOpen;

};
struct Deadbox
{
	bool isAirDrop;
	bool IsDeadBox;
	bool IsTreasureBox;
	int picid;
	std::vector<Itemb> boxitem;
	string Name;
	VECTOR3 Position;
	bool bIsAirOpen;
};


class Espp {
public:
	std::vector<Airdrop> LootData, LootDatadatar;

	Airdrop lboxx, temploot;
	std::string airdropstring;
	std::vector<Deadbox> lootbox, lootboxr;


	Deadbox lbox;
};
extern Espp* g_pEsp;
namespace Data
{
	extern FLOAT DistanceTravelled;
	extern FLOAT GameInfovelocity;
	extern DWORD ViewMatrixBase;
	extern DWORD Ue4base;
	extern AActor TargetActor;
	extern DWORD UWorld;
	extern DWORD GName;
	extern DWORD NetDriver;
	extern DWORD GameState;
	extern DWORD PlayerStateBASE;
	extern DWORD GameMode;
	extern string GameType;
	extern int RealPls;
	extern int ElapsedTime;
	extern int NoneAIGameTime;
	extern int PlayerNumPerTeam;
	extern DWORD TimeRemind;
	extern int PlayerAddonCount;
	extern int PlayerNumGameState;
	extern int AlivePlayerNum;
	extern int AliveTeamNum;
	extern int GameModeID;
	extern int CurCircleWave;
	extern DWORD LocalPlayer;
	extern DWORD LocalPlayerAddr;
	extern DWORD LocalController;
	extern DWORD CurrentReloadWeapon;
	extern DWORD ShootWeaponEntity;
	extern DWORD PlayerController;
	extern DWORD PlayerCameraManager;
	extern CameraCacheEntry CameraCache;
	extern DWORD EntityAddress;
	extern VECTOR3 AimingCoordinates;
	extern VECTOR3 lOCALPLAYERHEAD;
	extern VECTOR3 lOCALPLAYERPosotion;
	extern VECTOR3 RelativeScale3D;
	extern FRotator lOCALPLAYERRotation;
	extern DWORD Mesh;
	extern vector<AActor> AActorList;
	extern vector<AActor> AimingAtMePlayersList;
	extern vector<AActor>ABotList;
	extern vector<BombAlert> BombAlertList;
	extern vector<Item> ItemList;
	extern vector<Vehicle> VehicleList;
	extern vector<Deadbox> BoxesList;
	extern vector<impItem> impItemList;
	extern std::string Weapon;
	extern std::string LocalPawn;
	extern int Kills;

	extern DWORD MyPlayerWorld;
	extern DWORD AimingEntityAddress;
	string GetState(int GetEnemyState);
	extern VECTOR3 MyHeadPos;

	DWORD GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress);
	DWORD GetUe4Base(DWORD StartAddress, DWORD EndAddress);
	std::string PlayerWeaponFont(std::string str);
	VOID QueryThread();
	VOID ItemPicker();
	VOID KeyHandler();
	std::string scopes(int fov);
	void GameInformation();
	bool Weapon_IsAR(std::string WeaponIndex);
	bool Weapon_IsSMG(std::string WeaponIndex);
	bool Weapon_IsOther(std::string WeaponIndex);

};

