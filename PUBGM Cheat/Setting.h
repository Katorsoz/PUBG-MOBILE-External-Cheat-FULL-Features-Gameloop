#pragma once

#include "Includes.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
#include "Algorithm.h"
namespace weapon {


	extern ImVec4 m16;
	extern ImVec4 AKM;
	extern ImVec4 AWM;
	extern ImVec4 AWMimmo;
	extern ImVec4 scarl;
	extern ImVec4 m762;
	extern ImVec4 M24;
	extern ImVec4  GROZZA;
	extern ImVec4 scope8x;
	extern ImVec4 kar98;
	extern ImVec4  Airdrop;
	extern ImVec4 Flare;
	extern ImVec4 Flaregun;
	extern ImVec4 QuickDraw;
}

namespace Colors {

	extern ImVec4  dp;
	extern ImVec4  enemyLineofSight;
	extern ImVec4  Granadeswarn;
	extern ImVec4  mg3;
	extern ImVec4  scope4x;
	extern ImVec4  scope3x;
	extern	ImVec4  bag;
	extern	ImVec4  armer;
	extern	ImVec4  helmat;
	extern	ImVec4  mosin;
	extern ImVec4  aug;
	extern ImVec4  g36;
	extern ImVec4  assm;
	extern	ImVec4  Grandes;
	extern	ImVec4  ammo7;
	extern	ImVec4  ammo5;
	extern ImVec4  madkit;

	/////////////////////////
	extern ImVec4 itemcolors;
	// ARGB playr
	extern	ImVec4  playerline;
	extern	ImVec4  playercorner;
	extern	ImVec4  playerbox;
	extern	ImVec4  lotbox;
	// ARGB
	extern ImVec4  helthbar;
	extern ImVec4  boxColor;
	extern ImVec4  cornerColor;
	extern	ImVec4  bot;
	extern	ImVec4  botbone;
	extern	ImVec4  skelec;
	extern	ImVec4  playerbone;
	extern	ImVec4  player;
	extern ImVec4  vehicle;
	//RGB
	extern ImVec4  botcorner;
	extern ImVec4  botline;
	extern	ImVec4 circle;
	extern	ImVec4  enemy;
	extern	ImVec4  botbox;
	extern	ImVec4  bone;
	extern	 ImVec4  fillrect;
	extern	 ImVec4  nam;
	extern	 ImVec4  nambar;
	extern	 ImVec4  bothealth;
	extern	ImVec4  botname;
	extern	ImVec4  playerhealth;
	extern	ImVec4  textcolor;
	extern	ImVec4  plyerdistance;
	extern	ImVec4  plyrweapon;
	extern	ImVec4  targetenemybone;
	extern	ImVec4 Granades;
	extern	ImVec4 health;
	extern	ImVec4 deadbox;
	extern	ImVec4 deadboxitem;
	extern	ImVec4 airdrop;
	extern	ImVec4 airdropitem;
	extern	ImVec4 scopetextcolor;
	extern	ImVec4  allitem;
	extern	ImVec4  scope6x;
	extern	ImVec4  magicline;
	extern	ImVec4  magiclinevvisile;
	extern	ImVec4  bgcorner;
	extern	ImVec4  fovcirclecolor;
	extern	ImVec4 MK12;
	extern	ImVec4 hpt;
}

namespace Setting
{
	extern bool puid;
	extern bool pflag;
	extern bool botflag;
	extern bool botTeamID;
	extern bool pTeamID;
	extern bool knocked;
	extern bool gameinfo;
	extern bool enemyoffscreen;
	extern DWORD CurrentTargetAddress;
	extern bool SkipBots;
	extern bool SkipKnocked;
	extern bool AimLineCross;
	extern bool IsimingAtYou;
	extern bool AimLineBottm;
	extern bool MyLineOfSight;
	extern bool EnemyLineOfSight;
	extern int EnableKey;
	extern const char* Report;
	extern int AimbotKey;
	extern int FastCarKeys;
	extern int SpiningKeys;
	extern int RefreshKey;
	extern int AimSwichKey;
	extern int CamerAimbotKey;
	extern int fastrunkey;
	extern int fastrun5key;
	extern int fastrunkey2;
	extern int GodViewKey;
	extern int PositionKey;
	extern	bool id;
	extern	bool information;
	extern	bool radar;
	extern	bool dots;
	extern	bool redzone;
	extern	bool bg;
	extern int  redioption;
	extern int  RadarLength;
	extern int  RadarWidth;
	extern bool  redioption2;
	extern	bool IsMagicInitialize;
	extern int Aimspeed;
	extern int fovcircleredus;
	extern float enemyLineofSightSize;
	extern float CurrentBulletFireSpeed;
	extern bool aimbotposition;
	extern bool fovcircle;
	extern bool PREDICTION;

	extern ImVec4 colorcode;
	extern bool Magntic;
	extern int	curraim;
	extern int autocurraim;
	extern int	Lang;
	extern int	crosshair;
	extern int	HaxVershion;
	extern bool	engine;
	extern bool	skele;
	extern bool watermark;
	extern bool MAgicline;
	extern char filename[];
	extern int Normalfontsize;
	extern int fontsize;
	extern float plinesize;
	extern float pfullboxsize;
	extern float pcornersize;
	extern float pbonesize;

	extern float blinesize;
	extern float bfullboxsize;
	extern float bcornersize;
	extern float bbonesize;
	extern bool silent;
	extern bool bortext;
	extern bool pcorner;
	extern bool plyrdistance;
	extern bool botdistance;
	extern bool botweapon;
	extern bool playerweapon;

	extern int PlayerMAxDistance;
	extern int VehicalMexDistance;
	extern int ItemMaxDistance;
	extern int UpdateThreadDelay;
	extern int AdreessGetterDelay;
	extern int EspThreadDelay;
	extern int dotsize;
	extern bool style1;
	extern bool style2;
	extern int EspStyle;
	extern int BotEspStyle;
	extern bool ShowMenu5;
	extern bool ShowMenu;
	extern bool ShowSideMenu;
	extern bool AntiScreenShot;
	extern bool CRPTPressed;
	extern bool profree;
	extern	bool botname, bothealth, botline, botfullbox, botblood, botcorner;
	//playr
	extern	bool pline, phealth, pfullbox, pname, pblood, plyrbox, plyrwep, boxitems;
	extern bool fightmode;
	extern bool Name;
	extern bool Distance;
	extern bool Distancee;
	extern bool TotalEnemy;
	extern bool Line;
	extern bool Box;
	extern bool botBone;
	extern bool playerBone;
	extern bool  Bone;
	extern bool Health;
	extern bool BombAlert;
	extern bool Item;
	extern bool PlayerESP;
	extern bool Vehicle;
	extern bool UselessShow;
	extern bool hp;
	extern bool feul;

	extern bool c_enable;
	extern bool impitems;
	extern bool granedwarn;
	extern bool healthitem;
	extern bool scope;
	extern bool allitemss;
	extern int size;
	extern int stroke;
	extern bool instanthit;
	extern bool fastrun;
	extern bool fastrun2;
	extern bool fastrun3;
	extern bool fastrun5;
	extern bool magic1;
	extern bool HeadShot;
	extern bool blacksky;
	extern bool ScopeZoom;
	extern bool FastWeponSwith;
	extern bool fastShoot;
	extern bool ShowDaamge;
	extern bool GodView;
	extern bool SilentGodView;
	extern bool GodView1;
	extern bool fly;
	extern bool carfly;
	extern bool speedcar;
	extern bool recoil;
	extern bool ForceTPP;
	extern bool deadboxloot;

	extern bool Legitrack;
	extern bool airdrop;
	extern bool airdropitem;
	extern bool deadbox;
	extern bool playerdeadbox;
	extern bool itemrect;
	extern bool Bags;
	extern bool Helmat;
	extern bool Armer;

	extern	bool Esp_Item_M249;

	extern	bool Esp_Item_Mk12;
	extern float Esp_Item_Mk12_Color[4];
	extern float Esp_Item_Mk12_TextSize;

	/////////////////////////////////////////////// Shotgun ////////////////////////////////////////////


	extern bool Esp_Item_S686;
	extern bool Esp_Item_S686_Icon;
	extern float Esp_Item_S686_Color[4];
	extern float Esp_Item_S686_TextSize;

	extern bool Esp_Item_M1014;
	extern bool Esp_Item_M1014_Icon;
	extern float Esp_Item_M1014_Color[4];
	extern float Esp_Item_M1014_TextSize;
	extern bool Esp_Item_Neostead;
	extern float Esp_Item_Neostead_Color[4];
	extern float Esp_Item_Neostead_TextSize;

	extern bool Esp_Item_S1897;
	extern bool Esp_Item_S1897_Icon;
	extern float Esp_Item_S1897_Color[4];
	extern float Esp_Item_S1897_TextSize;

	extern bool Esp_Item_DBS;
	extern bool Esp_Item_DBS_Icon;
	extern float Esp_Item_DBS_Color[4];
	extern float Esp_Item_DBS_TextSize;

	extern bool Esp_Item_S12K;
	extern bool Esp_Item_S12K_Icon;
	extern float Esp_Item_S12K_Color[4];
	extern float Esp_Item_S12K_TextSize;

	/////////////////////////////////////////////// Pistols ////////////////////////////////////////////

	extern bool Esp_Item_DesertEagle;
	extern bool Esp_Item_DesertEagle_Icon;
	extern float Esp_Item_DesertEagle_Color[4];
	extern float Esp_Item_DesertEagle_TextSize;



	extern bool Esp_Item_P1911;
	extern bool Esp_Item_P1911_Icon;
	extern float Esp_Item_P1911_Color[4];
	extern float Esp_Item_P1911_TextSize;

	extern bool Esp_Item_R45;
	extern bool Esp_Item_R45_Icon;
	extern float Esp_Item_R45_Color[4];
	extern float Esp_Item_R45_TextSize;

	extern bool Esp_Item_P18C;
	extern bool Esp_Item_P18C_Icon;
	extern float Esp_Item_P18C_Color[4];
	extern float Esp_Item_P18C_TextSize;

	extern bool Esp_Item_P92;
	extern bool Esp_Item_P92_Icon;
	extern float Esp_Item_P92_Color[4];
	extern float Esp_Item_P92_TextSize;

	extern bool Esp_Item_Vz61;
	extern bool Esp_Item_Vz61_Icon;
	extern float Esp_Item_Vz61_Color[4];
	extern float Esp_Item_Vz61_TextSize;

	extern bool Esp_Item_R1895;
	extern bool Esp_Item_R1895_Icon;
	extern float Esp_Item_R1895_Color[4];
	extern float Esp_Item_R1895_TextSize;

	extern bool Esp_Item_SawedOff;
	extern bool Esp_Item_SawedOff_Icon;
	extern float Esp_Item_SawedOff_Color[4];
	extern float Esp_Item_SawedOff_TextSize;

	extern bool	Esp_Item_MG3;
	extern bool Esp_Item_MG3_Icon;
	extern float Esp_Item_MG3_Color[4];
	extern float Esp_Item_MG3_TextSize;

	extern bool MagicX;
	extern bool SendReport;
	extern bool plan;
	extern ImVec4 plancolor;
	extern ImVec4 dotss;


	extern bool vahicle_item;
	extern bool Esp_Item_Groza;
	extern bool Esp_Item_Groza_Icon;
	extern float Esp_Item_Groza_Color[4];
	extern float Esp_Item_Groza_TextSize;

	extern bool	Esp_Item_MG3;
	extern bool Esp_Item_MG3_Icon;
	extern float Esp_Item_MG3_Color[4];
	extern float Esp_Item_MG3_TextSize;

	extern bool	Esp_Item_FAMAS;
	extern bool Esp_Item_FAMAS_Icon;
	extern float Esp_Item_FAMAS_Color[4];
	extern float Esp_Item_FAMAS_TextSize;



	extern bool Esp_Item_HoneyBadger;
	extern float Esp_Item_HoneyBadger_Color[4];
	extern float Esp_Item_HoneyBadger_TextSize;

	extern bool	Esp_Item_AN94;
	extern bool Esp_Item_AN94_Icon;
	extern float Esp_Item_AN94_Color[4];
	extern float Esp_Item_AN94_TextSize;

	extern bool Esp_Item_AUG;
	extern bool Esp_Item_AUG_Icon;
	extern float Esp_Item_AUG_Color[4];
	extern float Esp_Item_AUG_TextSize;

	extern bool Esp_Item_AKM;
	extern bool Esp_Item_AKM_Icon;
	extern float Esp_Item_AKM_Color[4];
	extern float Esp_Item_AKM_TextSize;

	extern bool Esp_Item_M762;
	extern bool Esp_Item_M762_Icon;
	extern float Esp_Item_M762_Color[4];
	extern float Esp_Item_M762_TextSize;

	extern bool Esp_Item_Mk47Mutant;
	extern bool Esp_Item_Mk47Mutant_Icon;
	extern float Esp_Item_Mk47Mutant_Color[4];
	extern float Esp_Item_Mk47Mutant_TextSize;

	extern bool Esp_Item_SCARL;
	extern bool Esp_Item_SCARL_Icon;
	extern float Esp_Item_SCARL_Color[4];
	extern float Esp_Item_SCARL_TextSize;

	extern bool Esp_Item_M416;
	extern bool Esp_Item_M416_Icon;
	extern float Esp_Item_M416_Color[4];
	extern float Esp_Item_M416_TextSize;

	extern bool Esp_Item_M16A4;
	extern bool Esp_Item_M16A4_Icon;
	extern float Esp_Item_M16A4_Color[4];
	extern float Esp_Item_M16A4_TextSize;

	extern bool Esp_Item_G36C;
	extern bool Esp_Item_G36C_Icon;
	extern float Esp_Item_G36C_Color[4];
	extern float Esp_Item_G36C_TextSize;

	extern bool Esp_Item_QBZ;
	extern bool Esp_Item_QBZ_Icon;
	extern float Esp_Item_QBZ_Color[4];
	extern float Esp_Item_QBZ_TextSize;

	/////////////////////////////////////////////// Sniper ////////////////////////////////////////////

	extern bool Esp_Item_M24;
	extern bool Esp_Item_M24_Icon;
	extern float Esp_Item_M24_Color[4];
	extern float Esp_Item_M24_TextSize;


	extern bool Esp_Item_Awm;
	extern bool Esp_Item_Awm_Icon;
	extern float Esp_Item_Awm_Color[4];
	extern float Esp_Item_Awm_TextSize;

	extern bool Esp_Item_AMR;
	extern bool Esp_Item_AMR_Icon;
	extern float Esp_Item_AMR_Color[4];
	extern float Esp_Item_AMR_TextSize;


	extern bool Esp_Item_Dagger;
	extern bool Esp_Item_Dagger_Icon;
	extern float Esp_Item_Dagger_Color[4];
	extern float Esp_Item_Dagger_TextSize;

	extern bool Esp_Item_ZombieBlade;
	extern bool Esp_Item_ZombieBlade_Icon;
	extern float Esp_Item_ZombieBlade_Color[4];
	extern float Esp_Item_ZombieBlade_TextSize;

	extern bool Esp_Item_ZombieHammer;
	extern bool Esp_Item_ZombieHammer_Icon;
	extern float Esp_Item_ZombieHammer_Color[4];
	extern float Esp_Item_ZombieHammer_TextSize;

	extern bool Esp_Item_BulletAMR;
	extern bool Esp_Item_BulletAMR_Icon;
	extern float Esp_Item_BulletAMR_Color[4];
	extern float Esp_Item_BulletAMR_TextSize;

	extern float Esp_Item_Awmimo_Color[4];

	extern bool Esp_Item_Kar98k;
	extern bool Esp_Item_Kar98k_Icon;
	extern float Esp_Item_Kar98k_Color[4];
	extern float Esp_Item_Kar98k_TextSize;

	extern bool Esp_Item_Mosin;
	extern bool Esp_Item_Mosin_Icon;
	extern float Esp_Item_Mosin_Color[4];
	extern float Esp_Item_Mosin_TextSize;

	/////////////////////////////////////////////// Sniper Rifle ////////////////////////////////////////////

	extern bool Esp_Item_Win94;
	extern bool Esp_Item_Win94_Icon;
	extern float Esp_Item_Win94_Color[4];
	extern float Esp_Item_Win94_TextSize;

	extern bool Esp_Item_Mk12;
	extern bool Esp_Item_Mk12_Icon;
	extern float Esp_Item_Mk12_Color[4];
	extern float Esp_Item_Mk12_TextSize;

	extern bool Esp_Item_QBU;
	extern bool Esp_Item_QBU_Icon;
	extern float Esp_Item_QBU_Color[4];
	extern float Esp_Item_QBU_TextSize;

	extern bool Esp_Item_SLR;
	extern bool Esp_Item_SLR_Icon;
	extern float Esp_Item_SLR_Color[4];
	extern float Esp_Item_SLR_TextSize;

	extern bool Esp_Item_SKS;
	extern bool Esp_Item_SKS_Icon;
	extern float Esp_Item_SKS_Color[4];
	extern float Esp_Item_SKS_TextSize;

	extern bool Esp_Item_Mini14;
	extern bool Esp_Item_Mini14_Icon;
	extern float Esp_Item_Mini14_Color[4];
	extern float Esp_Item_Mini14_TextSize;

	extern	bool Esp_Item_Mk14_Icon;
	extern	bool Esp_Item_Mk14;
	extern	float Esp_Item_Mk14_Color[4];
	extern	float Esp_Item_Mk14_TextSize;

	extern bool Esp_Item_VSS;
	extern bool Esp_Item_VSS_Icon;
	extern float Esp_Item_VSS_Color[4];
	extern float Esp_Item_VSS_TextSize;

	/////////////////////////////////////////////// Suits ////////////////////////////////////////////

	extern bool Esp_Item_Suit_Arctic;
	extern bool Esp_Item_Suit_Arctic_Icon;
	extern float Esp_Item_Suit_Arctic_Color[4];
	extern float Esp_Item_Suit_Arctic_TextSize;

	extern bool Esp_Item_Suit_Woodland;
	extern bool Esp_Item_Suit_Woodland_Icon;
	extern float Esp_Item_Suit_Woodland_Color[4];
	extern float Esp_Item_Suit_Woodland_TextSize;

	extern bool Esp_Item_Suit_Desert;
	extern bool Esp_Item_Suit_Desert2;
	extern bool Esp_Item_Suit_Desert_Icon;
	extern bool Esp_Item_Suit_Desert2_Icon;
	extern float Esp_Item_Suit_Desert_Color[4];
	extern float Esp_Item_Suit_Desert2_Color[4];
	extern float Esp_Item_Suit_Desert_TextSize;


	/////////////////////////////////////////////// Other Weapons ////////////////////////////////////////////

	extern bool Esp_Item_CrossBow;
	extern bool Esp_Item_CrossBow_Quick;
	extern bool Esp_Item_CrossBow_Icon;
	extern bool Esp_Item_CrossBow_Quick_Icon;
	extern float Esp_Item_CrossBow_Color[4];
	extern float Esp_Item_CrossBow_Quick_Color[4];
	extern float Esp_Item_CrossBow_TextSize;

	extern bool Esp_Item_CrossbowBorderland;
	extern float Esp_Item_CrossbowBorderland_Color[4];
	extern float Esp_Item_CrossbowBorderland_TextSize;


	extern bool Esp_Item_DP28;
	extern bool Esp_Item_DP28_Icon;
	extern float Esp_Item_DP28_Color[4];
	extern float Esp_Item_DP28_TextSize;

	extern bool Esp_Item_HuntingBow;
	extern float Esp_Item_HuntingBow_Color[4];
	extern float Esp_Item_HuntingBow_TextSize;

	extern	bool Esp_Item_M249;
	extern	bool Esp_Item_M249_Icon;
	extern float Esp_Item_M249_Color[4];
	extern float Esp_Item_M249_TextSize;

	/////////////////////////////////////////////// Shotgun ////////////////////////////////////////////

	extern bool Esp_Item_S686;
	extern bool Esp_Item_S686_Icon;
	extern float Esp_Item_S686_Color[4];
	extern float Esp_Item_S686_TextSize;

	extern bool Esp_Item_M1014;
	extern bool Esp_Item_M1014_Icon;
	extern float Esp_Item_M1014_Color[4];
	extern float Esp_Item_M1014_TextSize;
	extern bool Esp_Item_Neostead;
	extern float Esp_Item_Neostead_Color[4];
	extern float Esp_Item_Neostead_TextSize;

	extern bool Esp_Item_S1897;
	extern bool Esp_Item_S1897_Icon;
	extern float Esp_Item_S1897_Color[4];
	extern float Esp_Item_S1897_TextSize;

	extern bool Esp_Item_DBS;
	extern bool Esp_Item_DBS_Icon;
	extern float Esp_Item_DBS_Color[4];
	extern float Esp_Item_DBS_TextSize;

	extern bool Esp_Item_S12K;
	extern bool Esp_Item_S12K_Icon;
	extern float Esp_Item_S12K_Color[4];
	extern float Esp_Item_S12K_TextSize;

	/////////////////////////////////////////////// Melee Weapons ////////////////////////////////////////////

	extern bool Esp_Item_Pan;
	extern bool Esp_Item_Pan_Icon;
	extern float Esp_Item_Pan_Color[4];
	extern float Esp_Item_Pan_TextSize;

	extern bool Esp_Item_Machete;
	extern bool Esp_Item_Machete_Icon;
	extern float Esp_Item_Machete_Color[4];
	extern float Esp_Item_Machete_TextSize;

	extern bool Esp_Item_Cowbar;
	extern bool Esp_Item_Cowbar_Icon;
	extern float Esp_Item_Cowbar_Color[4];
	extern float Esp_Item_Cowbar_TextSize;

	extern bool Esp_Item_Sickle;
	extern bool Esp_Item_Sickle_Icon;
	extern float Esp_Item_Sickle_Color[4];
	extern float Esp_Item_Sickle_TextSize;

	/////////////////////////////////////////////// Pistols ////////////////////////////////////////////

	extern bool Esp_Item_DesertEagle;
	extern bool Esp_Item_DesertEagle_Icon;
	extern float Esp_Item_DesertEagle_Color[4];
	extern float Esp_Item_DesertEagle_TextSize;

	extern bool Esp_Item_FlareGun;
	extern bool Esp_Item_FlareGun_Icon;
	extern float Esp_Item_FlareGun_Color[4];
	extern float Esp_Item_FlareGun_TextSize;

	extern bool Esp_Item_P1911;
	extern bool Esp_Item_P1911_Icon;
	extern float Esp_Item_P1911_Color[4];
	extern float Esp_Item_P1911_TextSize;

	extern bool Esp_Item_R45;
	extern bool Esp_Item_R45_Icon;
	extern float Esp_Item_R45_Color[4];
	extern float Esp_Item_R45_TextSize;

	extern bool Esp_Item_P18C;
	extern bool Esp_Item_P18C_Icon;
	extern float Esp_Item_P18C_Color[4];
	extern float Esp_Item_P18C_TextSize;

	extern bool Esp_Item_P92;
	extern bool Esp_Item_P92_Icon;
	extern float Esp_Item_P92_Color[4];
	extern float Esp_Item_P92_TextSize;

	extern bool Esp_Item_Vz61;
	extern bool Esp_Item_Vz61_Icon;
	extern float Esp_Item_Vz61_Color[4];
	extern float Esp_Item_Vz61_TextSize;

	extern bool Esp_Item_R1895;
	extern bool Esp_Item_R1895_Icon;
	extern float Esp_Item_R1895_Color[4];
	extern float Esp_Item_R1895_TextSize;

	extern bool Esp_Item_SawedOff;
	extern bool Esp_Item_SawedOff_Icon;
	extern float Esp_Item_SawedOff_Color[4];
	extern float Esp_Item_SawedOff_TextSize;

	/////////////////////////////////////////////// Attachments ////////////////////////////////////////////

	extern bool Esp_Item_Vertical;
	extern bool Esp_Item_Vertical_Icon;
	extern float Esp_Item_Vertical_Color[4];
	extern float Esp_Item_Vertical_TextSize;

	extern bool Esp_Item_HalfGrip;
	extern bool Esp_Item_HalfGrip_Icon;
	extern float Esp_Item_HalfGrip_Color[4];
	extern float Esp_Item_HalfGrip_TextSize;

	extern bool Esp_Item_LightGrip;
	extern bool Esp_Item_LightGrip_Icon;
	extern float Esp_Item_LightGrip_Color[4];
	extern float Esp_Item_LightGrip_TextSize;

	extern bool Esp_Item_Angled;
	extern bool Esp_Item_Angled_Icon;
	extern float Esp_Item_Angled_Color[4];
	extern float Esp_Item_Angled_TextSize;

	extern bool Esp_Item_Lasersight;
	extern bool Esp_Item_Lasersight_Icon;
	extern float Esp_Item_Lasersight_Color[4];
	extern float Esp_Item_Lasersight_TextSize;

	extern bool Esp_Item_ThumbGrip;
	extern bool Esp_Item_ThumbGrip_Icon;
	extern float Esp_Item_ThumbGrip_Color[4];
	extern float Esp_Item_ThumbGrip_TextSize;

	extern bool Esp_Item_Mid_FlashHider;
	extern bool Esp_Item_Mid_FlashHider_Icon;
	extern float Esp_Item_Mid_FlashHider_Color[4];
	extern float Esp_Item_Mid_FlashHider_TextSize;

	extern bool Esp_Item_Large_FlashHider;
	extern bool Esp_Item_Large_FlashHider_Icon;
	extern float Esp_Item_Large_FlashHider_Color[4];
	extern float Esp_Item_Large_FlashHider_TextSize;

	extern bool Esp_Item_Large_Compensator;
	extern bool Esp_Item_Large_Compensator_Icon;
	extern float Esp_Item_Large_Compensator_Color[4];
	extern float Esp_Item_Large_Compensator_TextSize;

	extern bool Esp_Item_Mid_Compensator;
	extern bool Esp_Item_Mid_Compensator_Icon;
	extern float Esp_Item_Mid_Compensator_Color[4];
	extern float Esp_Item_Mid_Compensator_TextSize;

	extern bool Esp_Item_Taktik;
	extern bool Esp_Item_Taktik_Icon;
	extern float Esp_Item_Taktik_Color[4];
	extern float Esp_Item_Taktik_TextSize;

	extern bool Esp_Item_Duckbill;
	extern bool Esp_Item_Duckbill_Icon;
	extern float Esp_Item_Duckbill_Color[4];
	extern float Esp_Item_Duckbill_TextSize;

	extern bool Esp_Item_Sniper_FlashHider;
	extern bool Esp_Item_Sniper_FlashHider_Icon;
	extern float Esp_Item_Sniper_FlashHider_Color[4];
	extern float Esp_Item_Sniper_FlashHider_TextSize;

	extern bool Esp_Item_Mid_Suppressor;
	extern bool Esp_Item_Mid_Suppressor_Icon;
	extern float Esp_Item_Mid_Suppressor_Color[4];
	extern float Esp_Item_Mid_Suppressor_TextSize;

	extern bool Esp_Item_Chekpad_Sniper;
	extern bool Esp_Item_Chekpad_Sniper_Icon;
	extern float Esp_Item_Chekpad_Sniper_Color[4];
	extern float Esp_Item_Chekpad_Sniper_TextSize;

	extern bool Esp_Item_Choke;
	extern bool Esp_Item_Choke_Icon;
	extern float Esp_Item_Choke_Color[4];
	extern float Esp_Item_Choke_TextSize;

	extern bool Esp_Item_Micro_UZI;
	extern bool Esp_Item_Micro_UZI_Icon;
	extern float Esp_Item_Micro_UZI_Color[4];
	extern float Esp_Item_Micro_UZI_TextSize;

	extern bool Esp_Item_Sniper_Compensator;
	extern bool Esp_Item_Sniper_Compensator_Icon;
	extern float Esp_Item_Sniper_Compensator_Color[4];
	extern float Esp_Item_Sniper_Compensator_TextSize;

	extern bool Esp_Item_Sniper_Suppressor;
	extern bool Esp_Item_Sniper_Suppressor_Icon;
	extern float Esp_Item_Sniper_Suppressor_Color[4];
	extern float Esp_Item_Sniper_Suppressor_TextSize;

	extern bool Esp_Item_Large_Suppressor;
	extern bool Esp_Item_Large_Suppressor_Icon;
	extern float Esp_Item_Large_Suppressor_Color[4];
	extern float Esp_Item_Large_Suppressor_TextSize;

	extern bool Esp_Item_Sniper_Quick_Extended;
	extern bool Esp_Item_Sniper_Quick_Extended_Icon;
	extern float Esp_Item_Sniper_Quick_Extended_Color[4];
	extern float Esp_Item_Sniper_Quick_Extended_TextSize;

	extern bool Esp_Item_Sniper_Extended;
	extern bool Esp_Item_Sniper_Extended_Icon;
	extern float Esp_Item_Sniper_Extended_Color[4];
	extern float Esp_Item_Sniper_Extended_TextSize;

	extern bool Esp_Item_Sniper_Quick;
	extern bool Esp_Item_Sniper_Quick_Icon;
	extern float Esp_Item_Sniper_Quick_Color[4];
	extern float Esp_Item_Sniper_Quick_TextSize;

	extern bool Esp_Item_AR_Quick;
	extern bool Esp_Item_AR_Quick_Icon;
	extern float Esp_Item_AR_Quick_Color[4];
	extern float Esp_Item_AR_Quick_TextSize;

	extern bool Esp_Item_AR_Quick_Extended;
	extern bool Esp_Item_AR_Quick_Extended_Icon;
	extern float Esp_Item_AR_Quick_Extended_Color[4];
	extern float Esp_Item_AR_Quick_Extended_TextSize;

	extern bool Esp_Item_AR_Extended;
	extern bool Esp_Item_AR_Extended_Icon;
	extern float Esp_Item_AR_Extended_Color[4];
	extern float Esp_Item_AR_Extended_TextSize;

	extern bool Esp_Item_SMG_Quick_Extended;
	extern bool Esp_Item_SMG_Quick_Extended_Icon;
	extern float Esp_Item_SMG_Quick_Extended_Color[4];
	extern float Esp_Item_SMG_Quick_Extended_TextSize;

	extern bool Esp_Item_SMG_Extended;
	extern bool Esp_Item_SMG_Extended_Icon;
	extern float Esp_Item_SMG_Extended_Color[4];
	extern float Esp_Item_SMG_Extended_TextSize;

	extern bool Esp_Item_SMG_Quick;
	extern bool Esp_Item_SMG_Quick_Icon;
	extern float Esp_Item_SMG_Quick_Color[4];
	extern float Esp_Item_SMG_Quick_TextSize;

	extern bool Esp_Item_Grenade_Apple;
	extern bool Esp_Item_Grenade_Apple_Icon;
	extern float Esp_Item_Grenade_Apple_Color[4];
	extern float Esp_Item_Grenade_Apple_TextSize;

	extern bool Esp_Item_WorldCup_Box;
	extern bool Esp_Item_WorldCup_Box_Icon;
	extern float Esp_Item_WorldCup_Box_Color[4];
	extern float Esp_Item_WorldCup_Box_TextSize;

	extern bool Esp_Item_Football_Grenade;
	extern bool Esp_Item_Football_Grenade_Icon;
	extern float Esp_Item_Football_Grenade_Color[4];
	extern float Esp_Item_Football_Grenade_TextSize;

	extern bool Esp_Item_Football_Cloth;
	extern bool Esp_Item_Football_Cloth_Icon;
	extern float Esp_Item_Football_Cloth_Color[4];
	extern float Esp_Item_Football_Cloth_TextSize;

	extern bool Esp_Item_Golden_Boot;
	extern bool Esp_Item_Golden_Boot_Icon;
	extern float Esp_Item_Golden_Boot_Color[4];
	extern float Esp_Item_Golden_Boot_TextSize;

	extern bool Esp_Item_MiniGameMachine;
	extern bool Esp_Item_MiniGameMachine_Icon;
	extern float Esp_Item_MiniGameMachine_Color[4];
	extern float Esp_Item_MiniGameMachine_TextSize;

	extern bool Esp_Item_BlindBoxMachine;
	extern bool Esp_Item_BlindBoxMachine_Icon;
	extern float Esp_Item_BlindBoxMachine_Color[4];
	extern float Esp_Item_BlindBoxMachine_TextSize;

	extern bool Esp_Item_GameCoin;
	extern bool Esp_Item_GameCoin_Icon;
	extern float Esp_Item_GameCoin_Color[4];
	extern float Esp_Item_GameCoin_TextSize;

	extern bool Esp_Item_Benzin;
	extern bool Esp_Item_Benzin_Icon;
	extern float Esp_Item_Benzin_Color[4];
	extern float Esp_Item_Benzin_TextSize;

	/////////////////////////////////////////////// SMG ////////////////////////////////////////////

	extern bool Esp_Item_PP19;
	extern bool Esp_Item_PP19_Icon;
	extern float Esp_Item_PP19_Color[4];
	extern float Esp_Item_PP19_TextSize;

	extern bool Esp_Item_P90;
	extern bool Esp_Item_P90_Icon;
	extern float Esp_Item_P90_Color[4];
	extern float Esp_Item_P90_TextSize;

	extern bool Esp_Item_TommyGun;
	extern bool Esp_Item_TommyGun_Icon;
	extern float Esp_Item_TommyGun_Color[4];
	extern float Esp_Item_TommyGun_TextSize;

	extern bool Esp_Item_MP5K;
	extern bool Esp_Item_MP5K_Icon;
	extern float Esp_Item_MP5K_Color[4];
	extern float Esp_Item_MP5K_TextSize;

	extern bool Esp_Item_UMP9;
	extern bool Esp_Item_UMP9_Icon;
	extern float Esp_Item_UMP9_Color[4];
	extern float Esp_Item_UMP9_TextSize;

	extern bool Esp_Item_Vector;
	extern bool Esp_Item_Vector_Icon;
	extern float Esp_Item_Vector_Color[4];
	extern float Esp_Item_Vector_TextSize;

	extern bool Esp_Item_Uzi;
	extern bool Esp_Item_Uzi_Icon;
	extern float Esp_Item_Uzi_Color[4];
	extern float Esp_Item_Uzi_TextSize;

	/////////////////////////////////////////////// Ammo ////////////////////////////////////////////

	extern bool Esp_Item_Flare;
	extern bool Esp_Item_Flare_Icon;
	extern float Esp_Item_Flare_Color[4];
	extern float Esp_Item_Flare_TextSize;

	extern bool Esp_Item_RedZone;
	extern bool Esp_Item_RedZone_Icon;
	extern float Esp_Item_RedZone_Color[4];
	extern float Esp_Item_RedZone_TextSize;

	extern bool Esp_Item_762mm;
	extern bool Esp_Item_762mm_Icon;
	extern float Esp_Item_762mm_Color[4];
	extern float Esp_Item_762mm_TextSize;

	extern bool Esp_Item_556mm;
	extern bool Esp_Item_556mm_Icon;
	extern float Esp_Item_556mm_Color[4];
	extern float Esp_Item_556mm_TextSize;

	extern bool Esp_Item_9mm;
	extern bool Esp_Item_9mm_Icon;
	extern float Esp_Item_9mm_Color[4];
	extern float Esp_Item_9mm_TextSize;

	extern bool Esp_Item_45ACP;
	extern bool Esp_Item_45ACP_Icon;
	extern float Esp_Item_45ACP_Color[4];
	extern float Esp_Item_45ACP_TextSize;

	extern bool Esp_Item_12Guage;
	extern bool Esp_Item_12Guage_Icon;
	extern float Esp_Item_12Guage_Color[4];
	extern float Esp_Item_12Guage_TextSize;

	extern bool Esp_Item_Ammo_Bolt;
	extern bool Esp_Item_Ammo_Bolt_Icon;
	extern float Esp_Item_Ammo_Bolt_Color[4];
	extern float Esp_Item_Ammo_Bolt_TextSize;

	extern bool Esp_Item_300Magnum_Icon;
	extern bool Esp_Item_Awmimo;
	extern bool Esp_Item_Awmimo_Icon;
	extern float Esp_Item_Awmimo_TextSize;

	/////////////////////////////////////////////// Scops ////////////////////////////////////////////

	extern bool Esp_Item_Lazer;
	extern bool Esp_Item_Lazer_Icon;
	extern float Esp_Item_Lazer_Color[4];
	extern float Esp_Item_Lazer_TextSize;

	extern bool Esp_Item_Holo;
	extern bool Esp_Item_Holo_Icon;
	extern float Esp_Item_Holo_Color[4];
	extern float Esp_Item_Holo_TextSize;

	extern bool Esp_Item_x2;
	extern bool Esp_Item_x2_Icon;
	extern float Esp_Item_x2_Color[4];
	extern float Esp_Item_x2_TextSize;

	extern bool Esp_Item_x3;
	extern bool Esp_Item_x3_Icon;
	extern float Esp_Item_x3_Color[4];
	extern float Esp_Item_x3_TextSize;

	extern bool Esp_Item_x4;
	extern bool Esp_Item_x4_Icon;
	extern float Esp_Item_x4_Color[4];
	extern float Esp_Item_x4_TextSize;

	extern bool Esp_Item_x6;
	extern bool Esp_Item_x6_Icon;
	extern float Esp_Item_x6_Color[4];
	extern float Esp_Item_x6_TextSize;

	extern bool Esp_Item_x8;
	extern bool Esp_Item_x8_Icon;
	extern float Esp_Item_x8_Color[4];
	extern float Esp_Item_x8_TextSize;

	/////////////////////////////////////////////// Armor ////////////////////////////////////////////

	extern bool Esp_Item_Bag1;
	extern bool Esp_Item_Bag1_Icon;
	extern float Esp_Item_Bag1_Color[4];
	extern float Esp_Item_Bag1_TextSize;

	extern bool Esp_Item_Bag2;
	extern bool Esp_Item_Bag2_Icon;
	extern float Esp_Item_Bag2_Color[4];
	extern float Esp_Item_Bag2_TextSize;

	extern bool Esp_Item_Bag3;
	extern bool Esp_Item_Bag3_Icon;
	extern float Esp_Item_Bag3_Color[4];
	extern float Esp_Item_Bag3_TextSize;

	extern bool Esp_Item_Armor1;
	extern bool Esp_Item_Armor1_Icon;
	extern float Esp_Item_Armor1_Color[4];
	extern float Esp_Item_Armor1_TextSize;

	extern bool Esp_Item_Armor2;
	extern bool Esp_Item_Armor2_Icon;
	extern float Esp_Item_Armor2_Color[4];
	extern float Esp_Item_Armor2_TextSize;

	extern bool Esp_Item_Armor3;
	extern bool Esp_Item_Armor3_Icon;
	extern float Esp_Item_Armor3_Color[4];
	extern float Esp_Item_Armor3_TextSize;

	extern bool Esp_Item_Helmet1;
	extern bool Esp_Item_Helmet1_Icon;
	extern float Esp_Item_Helmet1_Color[4];
	extern float Esp_Item_Helmet1_TextSize;

	extern bool Esp_Item_Helmet2;
	extern bool Esp_Item_Helmet2_Icon;
	extern float Esp_Item_Helmet2_Color[4];
	extern float Esp_Item_Helmet2_TextSize;

	extern bool Esp_Item_Helmet3;
	extern bool Esp_Item_Helmet3_Icon;
	extern float Esp_Item_Helmet3_Color[4];
	extern float Esp_Item_Helmet3_TextSize;

	extern bool Esp_Item_Frag;
	extern bool Esp_Item_Frag_Icon;
	extern float Esp_Item_Frag_Color[4];
	extern float Esp_Item_Frag_TextSize;

	extern bool Esp_Item_Frag_Warn;
	extern bool Esp_Item_Frag_Warn_Icon;
	extern float Esp_Item_Frag_Warn_Color[4];
	extern float Esp_Item_Frag_Warn_TextSize;

	extern bool Esp_Item_Smoke;
	extern bool Esp_Item_Smoke_Icon;
	extern float Esp_Item_Smoke_Color[4];
	extern float Esp_Item_Smoke_TextSize;

	extern bool Esp_Item_Smoke_Warn;
	extern bool Esp_Item_Smoke_Warn_Icon;
	extern float Esp_Item_Smoke_Warn_Color[4];
	extern float Esp_Item_Smoke_Warn_TextSize;

	extern bool Esp_Item_Molotof;
	extern bool Esp_Item_Molotof_Icon;
	extern float Esp_Item_Molotof_Color[4];
	extern float Esp_Item_Molotof_TextSize;

	extern bool Esp_Item_Molotof_Warn;
	extern bool Esp_Item_Molotof_Warn_Icon;
	extern float Esp_Item_Molotof_Warn_Color[4];
	extern float Esp_Item_Molotof_Warn_TextSize;

	extern bool redzone;
	extern bool redzone_Icon;

	/////////////////////////////////////////////// Health ////////////////////////////////////////////

	extern bool Esp_Item_Bandage;
	extern bool Esp_Item_Bandage_Icon;
	extern float Esp_Item_Bandage_Color[4];
	extern float Esp_Item_Bandage_TextSize;

	extern bool Esp_Item_MedKit;
	extern bool Esp_Item_MedKit_Icon;
	extern float Esp_Item_MedKit_Color[4];
	extern float Esp_Item_MedKit_TextSize;

	extern bool Esp_Item_FirstAidKit;
	extern bool Esp_Item_FirstAidKit_Icon;
	extern float Esp_Item_FirstAidKit_Color[4];
	extern float Esp_Item_FirstAidKit_TextSize;

	extern bool Esp_Item_Painkiller;
	extern bool Esp_Item_Painkiller_Icon;
	extern float Esp_Item_Painkiller_Color[4];
	extern float Esp_Item_Painkiller_TextSize;

	extern bool Esp_Item_EnergyDrink;
	extern bool Esp_Item_EnergyDrink_Icon;
	extern float Esp_Item_EnergyDrink_Color[4];
	extern float Esp_Item_EnergyDrink_TextSize;

	extern bool Esp_Item_AdrenalineSyringe;
	extern bool Esp_Item_AdrenalineSyringe_Icon;
	extern float Esp_Item_AdrenalineSyringe_Color[4];
	extern float Esp_Item_AdrenalineSyringe_TextSize;
	/////////////////////////////////////////////// Box ////////////////////////////////////////////


	extern bool Esp_Item_AirDrop;
	extern bool Esp_Item_AirDrop_Icon;
	extern float Esp_Item_AirDrop_Color[4];
	extern float Esp_Item_AirDrop_TextSize;

	extern bool Esp_Item_DeadBox;
	extern bool Esp_Item_DeadBox_Icon;
	extern float Esp_Item_DeadBox_Color[4];
	extern float Esp_Item_DeadBox_TextSize;

	extern bool Esp_Item_AirAttack;
	extern bool Esp_Item_AirAttack_Icon;
	extern float Esp_Item_AirAttack_Color[4];

	extern bool Aimbot;

	extern bool MagicBullet;
	extern bool MagicBulletticked;
	extern bool SnowFlake;
	extern bool MagicBulletd;

	extern bool borderlo;
	extern bool FlyMan;

	extern bool CameraCatch;
	extern bool CameraAimBot;
	extern bool camsmooth;
	extern bool damagebeast;
	extern int damagebeastv;

	extern bool grw;
	extern bool sm;
	extern bool molow;
	//extern float hpt;
	extern int	magicv;
	extern int	magicvy;
	extern int	flycarv;
	extern int	ttpview;
	extern int	instantv;
	extern int	carsv;
	extern int	corsshairvalue;
	extern int	scopefov;
	extern int	GodVieAndhle;
	extern int	camsmoothness;
	extern int	IpadViewValue;
	extern int	fastrv;
	extern int	FlyManHeight;
	extern int	shootinterval;
	extern bool magicb;
	extern bool IpadView;
	extern int magicrange;
	extern bool BulletTrackingRange;

	extern bool vahicle_Text_item_BRDM;
	extern bool vahicle_Text_item_Scooter;
	extern bool vahicle_Text_item_Motorcycle;
	extern bool vahicle_Text_item_Motorcycle3;
	extern bool vahicle_Text_item_Snowmobile;
	extern bool vahicle_Text_item_SnowBike;
	extern bool vahicle_Text_item_Tuk;
	extern bool vahicle_Text_item_Tuk_Icon;
	extern bool vahicle_Text_item_Buggy;
	extern bool vahicle_Text_item_Dacia;
	extern bool vahicle_Text_item_Rony;
	extern bool vahicle_Text_item_UAZ;
	extern bool vahicle_Text_item_PG117;
	extern bool vahicle_Text_item_Aquarail;
	extern bool vahicle_Text_item_Coupe;
	extern bool vahicle_Text_item_Glider;
	extern bool vahicle_Text_item_BigFoot;
	extern bool vahicle_Text_item_UTV;
	extern bool vahicle_Text_item_Capsule;
	extern bool vahicle_Text_item_Beach_Buggy;
	extern bool vahicle_Text_item_ATV2;
	extern bool vahicle_Text_item_Sportsa;
	extern bool vahicle_Text_item_Sports;
	extern bool vahicle_Text_item_CoupeRB;
	extern bool vahicle_Text_item_Tesla;
	extern bool vahicle_Text_item_Minibus;
	extern bool vahicle_Text_item_Gravity;
	extern bool vahicle_Text_item_Motorglider;
	extern bool vahicle_Text_item_PickUpTruck;
	extern bool vahicle_Text_item_Plane;
	extern bool vahicle_Text_item_Bike;
	extern bool vahicle_Text_item_Helicopter;
	extern bool vahicle_Text_item_SnowBoard;

	extern bool vahicle_Text_item_BRDM_Icon;
	extern bool vahicle_Text_item_Scooter_Icon;
	extern bool vahicle_Text_item_Motorcycle_Icon;
	extern bool vahicle_Text_item_Motorcycle3_Icon;
	extern bool vahicle_Text_item_Snowmobile_Icon;
	extern bool vahicle_Text_item_SnowBike_Icon;
	extern bool vahicle_Text_item_Tuk_Icon;
	extern bool vahicle_Text_item_Buggy_Icon;
	extern bool vahicle_Text_item_Dacia_Icon;
	extern bool vahicle_Text_item_Rony_Icon;
	extern bool vahicle_Text_item_UAZ_Icon;
	extern bool vahicle_Text_item_PG117_Icon;
	extern bool vahicle_Text_item_Aquarail_Icon;
	extern bool vahicle_Text_item_Coupe_Icon;
	extern bool vahicle_Text_item_Glider_Icon;
	extern bool vahicle_Text_item_BigFoot_Icon;
	extern bool vahicle_Text_item_Capsule_Icon;
	extern bool vahicle_Text_item_UTV_Icon;
	extern bool vahicle_Text_item_Beach_Buggy_Icon;
	extern bool vahicle_Text_item_ATV2_Icon;
	extern bool vahicle_Text_item_Sportsa_Icon;
	extern bool vahicle_Text_item_Sports_Icon;
	extern bool vahicle_Text_item_CoupeRB_Icon;
	extern bool vahicle_Text_item_Tesla_Icon;
	extern bool vahicle_Text_item_Minibus_Icon;
	extern bool vahicle_Text_item_Gravity_Icon;
	extern bool vahicle_Text_item_Motorglider_Icon;
	extern bool vahicle_Text_item_PickUpTruck_Icon;
	extern bool vahicle_Text_item_Plane_Icon;
	extern bool vahicle_Text_item_Bike_Icon;
	extern bool vahicle_Text_item_Helicopter_Icon;
	extern bool vahicle_Text_item_SnowBoard_Icon;

	extern int vahicle_Text_item_BRDM_TextSize;
	extern int vahicle_Text_item_Scooter_TextSize;
	extern int vahicle_Text_item_Motorcycle_TextSize;
	extern int vahicle_Text_item_Motorcycle3_TextSize;
	extern int vahicle_Text_item_Snowmobile_TextSize;
	extern int vahicle_Text_item_SnowBike_TextSize;
	extern int vahicle_Text_item_Tuk_TextSize;
	extern int vahicle_Text_item_Buggy_TextSize;
	extern int vahicle_Text_item_Dacia_TextSize;
	extern int vahicle_Text_item_Rony_TextSize;
	extern int vahicle_Text_item_UAZ_TextSize;
	extern int vahicle_Text_item_PG117_TextSize;
	extern int vahicle_Text_item_Aquarail_TextSize;
	extern int vahicle_Text_item_Coupe_TextSize;
	extern int vahicle_Text_item_Glider_TextSize;
	extern int vahicle_Text_item_BigFoot_TextSize;
	extern int vahicle_Text_item_Capsule_TextSize;
	extern int vahicle_Text_item_UTV_TextSize;
	extern int vahicle_Text_item_Beach_Buggy_TextSize;
	extern int vahicle_Text_item_ATV2_TextSize;
	extern int vahicle_Text_item_Sportsa_TextSize;
	extern int vahicle_Text_item_Sports_TextSize;
	extern int vahicle_Text_item_CoupeRB_TextSize;
	extern int vahicle_Text_item_Tesla_TextSize;
	extern int vahicle_Text_item_Minibus_TextSize;
	extern int vahicle_Text_item_Gravity_TextSize;
	extern int vahicle_Text_item_Motorglider_TextSize;
	extern int vahicle_Text_item_PickUpTruck_TextSize;
	extern int vahicle_Text_item_Plane_TextSize;
	extern int vahicle_Text_item_Bike_TextSize;
	extern int vahicle_Text_item_Helicopter_TextSize;
	extern int vahicle_Text_item_SnowBoard_TextSize;

	extern float vahicle_Text_item_BRDM_Color[4];
	extern float vahicle_Text_item_Scooter_Color[4];
	extern float vahicle_Text_item_Motorcycle_Color[4];
	extern float vahicle_Text_item_Motorcycle3_Color[4];
	extern float vahicle_Text_item_Snowmobile_Color[4];
	extern float vahicle_Text_item_SnowBike_Color[4];
	extern float vahicle_Text_item_Tuk_Color[4];
	extern float vahicle_Text_item_Buggy_Color[4];
	extern float vahicle_Text_item_Dacia_Color[4];
	extern float vahicle_Text_item_Rony_Color[4];
	extern float vahicle_Text_item_UAZ_Color[4];
	extern float vahicle_Text_item_PG117_Color[4];
	extern float vahicle_Text_item_Aquarail_Color[4];
	extern float vahicle_Text_item_Coupe_Color[4];
	extern float vahicle_Text_item_Glider_Color[4];
	extern float vahicle_Text_item_BigFoot_Color[4];
	extern float vahicle_Text_item_Capsule_Color[4];
	extern float vahicle_Text_item_UTV_Color[4];
	extern float vahicle_Text_item_Beach_Buggy_Color[4];
	extern float vahicle_Text_item_ATV2_Color[4];
	extern float vahicle_Text_item_Sportsa_Color[4];
	extern float vahicle_Text_item_Sports_Color[4];
	extern float vahicle_Text_item_CoupeRB_Color[4];
	extern float vahicle_Text_item_Tesla_Color[4];
	extern float vahicle_Text_item_Minibus_Color[4];
	extern float vahicle_Text_item_Gravity_Color[4];
	extern float vahicle_Text_item_Motorglider_Color[4];
	extern float vahicle_Text_item_PickUpTruck_Color[4];
	extern float vahicle_Text_item_Plane_Color[4];
	extern float vahicle_Text_item_Bike_Color[4];
	extern float vahicle_Text_item_Helicopter_Color[4];
	extern float vahicle_Text_item_SnowBoard_Color[4];

	extern float magicline[4];
	extern float plinecolor[4];
	extern float botlinecolor[4];
	extern float EnemyLineOfSightColor[4];
	extern float pBoxcolor[4];
	extern float bBoxcolor[4];
	extern float botbonecolor[4];
	extern float bonecolor[4];
	extern float weaponenemycolor[4];
	extern float botweaponenemycolor[4];
	extern float pdistancecolor[4];
	extern float bdistancecolor[4];
	extern float pnamecolorcolor[4];
	extern float botnamecolorcolor[4];
	extern float pnamebgcolorcolor[4];
	extern float botnamebgcolorcolor[4];
	extern float vehcolor[4];
	extern float fovcirclecolor[4];
	extern float PlayerTeamId[4];
	extern float BotTeamId[4];
	extern float nearstARColors[4];
	extern float NearstArLineThikness;

	extern bool CameraView;
	extern bool Vehicle_Icon_With_BG;
	extern bool Weapon_Icon_With_BG;
	extern bool CameraCatch;
	extern bool carteleport;
	extern bool Magic360deg;
	extern bool MemoryAimbot;
	extern bool noSpread;
	extern bool ShowDamage;
	extern bool FastSwitchWeapon;
	extern bool Quickloot;
	extern bool RapidFireG;
	extern bool wwcd;
	extern bool ZoneCenter;
	extern bool DiscordRPC;

	extern bool NotifyMenu;
	extern bool XEffect;
	extern bool XEffectRandomBody;
	extern bool XEffectRandomHead;
	extern bool crossHairrandom;

	extern bool highjump;
	extern bool highjumpv1;
	extern bool highjump2;
	extern bool intiGameid;


	extern int Fastcarkey;
	extern int Backcarkey;
	extern int highjumpkey;
	extern int highjumpkey2;
	extern int carteleportkey;
	extern int MacroSpeed;
	extern bool Macro;
	extern bool AutoFire;
	extern bool FPS;
	extern bool HDR;
	extern bool skin;
	extern bool rainfall;
	extern bool particles;
	extern bool nearstAR;
	extern bool VisibleCheck;
	extern int FPSVALUE;
	extern int Weaponval;
	extern int Macroval;
	extern int GodUp;
	extern int GodDown;
	extern int GodFront;
	extern int GodLeft;
	extern int GodRight;
	extern int GodBack;
	extern int	FRONT;
	extern int	BACK;
	extern int	LEFT;
	extern int	RIGHT;
	extern int	UP;
	extern int	DOWN;
	extern const char* LOGIN;
	extern int	view;
	extern int	ItemDistance;
	extern int highjumpv;
	extern int highjumpv2;

	//extern bool Esp_Item_Frag_Icon;
	//extern bool Esp_Item_Molotof_Icon;
	//extern bool Esp_Item_Armor3_Icon;
	//extern bool Esp_Item_Bag3_Icon;
	//extern bool Esp_Item_Helmet3_Icon;
	//extern bool Esp_Item_x6_Icon;
	//extern bool Esp_Item_x8_Icon;
	//extern bool Esp_Item_762mm_Icon;
	//extern bool Esp_Item_556mm_Icon;
	//extern bool Esp_Item_SCARL_Icon;

	extern int xsuit;
	extern int DotsThickness;
	extern int DotsRadius;
	extern int DotsRange;
	extern float XeffectColor[4];
	extern float XeffectColorHead[4];
	extern int HitEffectSize;
	extern float SnowFlakeColor[4];
	extern float crosshaircolor[4];
	extern float CrossHairColor[4];
	extern float Green[4];
	extern float Yellow[4];
	extern float Red[4];


	//extern bool MummyW;
	//extern bool Cleopatra;
	//extern bool RAVENXSUITSet;
	//extern bool PharoSUITSet;
	//extern bool Bag1;
	//extern bool Bag2;
	//extern bool Bag3;
	//extern bool M416Joker;
	//extern bool M416Glacier;
	//extern bool AWM;
	//extern bool M416Glacier2;
	//extern bool AKM;
	extern int Test55;
	extern int SpeedShoot;
	extern int NoGrassValue;
	extern int Magic_Bullet;
	extern int SelectorV3;
	extern int SelectorV5;
	extern int SelectorGrass;
	extern int RecSelector;
	extern int RecSelector2;
	extern int Headselctor;
	extern int jmp;
	extern FLOAT fastrv_2;
	extern FLOAT fastrv_3;
	extern FLOAT fastrv_4;
	extern FLOAT fastrv_5;
	extern FLOAT jumpvalue;
	extern FLOAT fastrv_5M;
	extern FLOAT testXeffectt;
	extern int	fastparaaa;
	extern bool fastpara;
	extern bool paraassists;
	extern int GodFRONT;
	extern int Godleft;
	extern int Godright;
	extern int fastparakey;
	extern bool SUITS_SKIN;
	extern bool ModKillMsg;
	extern bool AttachOnVisible;
	extern int  SUITS_SKINv;
	extern int  KillMsg;
	extern int  ModSkinv;
	extern bool  ModSkin;
	extern bool  WaterMark;



	extern FLOAT fastrv_5M;
	extern int playerBoneColorVer;
	extern int plineColorVer;
	extern int botBoneColorVer;
	extern int botlineColorVer;

	extern float botlinecoloropen[4];
	extern float botlinecolorcover[4];

	extern float botbonecoloropen[4];
	extern float botbonecolorcover[4];

	extern float plinecoloropen[4];
	extern float plinecolorcover[4];

	extern float bonecoloropen[4];
	extern float bonecolorcover[4];

	extern bool  isSpinning;
	extern bool  WeaponScale;
	extern float WeaponScaleValue;
	extern int PlayerSpining;

	extern int ModSkin_M416;
	extern int ModSkin_Suit;
	extern int ModSkin_BagBack;
	extern int ModSkin_Helmet;
	extern int ModSkin_BG;
	extern bool ModSkin_boolSuit;
	extern bool ModSkin_boolM416;
	extern bool ModSkin_boolakm;
	extern bool ModSkin_boolHelmet;
	extern bool ModSkin_boolBagBack;
	extern bool ModSkin_boolm16a4;
	extern bool ModSkin_boolscar;
	extern bool ModSkin_boolgroza;
	extern bool ModSkin_boolM762;
	extern bool ModSkin_bool_aug;
	extern bool ModSkin_bool_qbz;
	extern bool ModSkin_bool_ace32;
	extern bool ModSkin_bool_Honey;
	extern bool ModSkin_bool_UZI;
	extern bool ModSkin_bool_UMP;
	extern bool ModSkin_boolCoupeRP;
	extern bool ModSkin_boolUAZ;
	extern bool ModSkin_boolVector;
	extern bool ModSkin_boolThompson;
	extern bool ModSkin_boolBizon;
	extern bool ModSkin_boolK98;
	extern bool ModSkin_boolM24;
	extern bool ModSkin_boolAWM;
	extern bool ModSkin_bool_AMR;
	extern bool ModSkin_bool_VSS;
	extern bool ModSkin_boolskin_SKS;
	extern bool ModSkin_bool_Mini14;
	extern bool ModSkin_bool_MK14;
	extern bool ModSkin_bool_SLR;
	extern bool ModSkin_bool_S1897;
	extern bool ModSkin_bool_DP28;
	extern bool ModSkin_bool_M249;
	extern bool ModSkin_bool_MG3;
	extern bool ModSkin_bool_Skorpion;
	extern bool ModSkin_bool_Moto;
	extern bool ModSkin_bool_Dacia;
	extern bool ModSkin_bool_Buggy;
	extern bool ModSkin_bool_Parachute;
	extern bool ModSkin_bool_UTV;
	extern bool ModSkin_bool_Monster;
	extern bool ModSkin_bool_Mirado;


	extern int ModSkin_skin_Suit;
	extern int ModSkin_skin_M416;
	extern int ModSkin_skin_akm;
	extern int ModSkin_skin_Helmet;
	extern int ModSkin_skin_BagBack;
	extern int ModSkin_skin_m16a4;
	extern int ModSkin_skin_scar;
	extern int ModSkin_skin_groza;
	extern int ModSkin_skin_M762;
	extern int ModSkin_skin_aug;
	extern int ModSkin_skin_qbz;
	extern int ModSkin_skin_ace32;
	extern int ModSkin_skin_Honey;
	extern int ModSkin_skin_UZI;
	extern int ModSkin_skin_UMP;
	extern int ModSkin_skin_CoupeRP;
	extern int ModSkin_skin_UAZ;
	extern int ModSkin_skin_Vector;
	extern int ModSkin_skin_Thompson;
	extern int ModSkin_skin_Bizon;
	extern int ModSkin_skin_K98;
	extern int ModSkin_skin_M24;
	extern int ModSkin_skin_AWM;
	extern int ModSkin_skin_AMR;
	extern int ModSkin_skin_VSS;
	extern int ModSkin_skin_skin_SKS;
	extern int ModSkin_skin_Mini14;
	extern int ModSkin_skin_MK14;
	extern int ModSkin_skin_SLR;
	extern int ModSkin_skin_S1897;
	extern int ModSkin_skin_DP28;
	extern int ModSkin_skin_M249;
	extern int ModSkin_skin_MG3;
	extern int ModSkin_skin_Skorpion;
	extern int ModSkin_skin_Moto;
	extern int ModSkin_skin_Dacia;
	extern int ModSkin_skin_Buggy;
	extern int ModSkin_skin_Parachute;
	extern int ModSkin_skin_SKS;
	extern int ModSkin_skin_UTV;
	extern int ModSkin_skin_Monster;
	extern int ModSkin_skin_Mirado;
	extern int Font;
	extern bool SaveSetting;
	extern bool LoadSetting;
	extern bool AllIconsv;
	extern bool AllIcons;
	extern bool ModSkinsss;
	extern bool RecoilAdjusting;

	extern bool micro_Iron;
	extern bool micro_RedDot;
	extern bool micro_X2;
	extern bool micro_X3;
	extern bool micro_X4;
	extern bool micro_X6;
	extern FVector2D microaxis_Iron;
	extern FVector2D microaxis_RedDot;
	extern FVector2D microaxis_X2;
	extern FVector2D microaxis_X3;
	extern FVector2D microaxis_X4;
	extern FVector2D microaxis_X6;
	extern bool AutoLoad;
	extern bool AutoAim;
	extern int KeyVersion;
	extern int SelectedTheme;
	extern int HeadPosZ;
	extern string LoginStatus;

	namespace Skins {
		extern bool skins;
		namespace m416
		{
			extern int skin;
		}
		namespace AKM
		{
			extern int skin;
		}
		namespace M762
		{
			extern int skin;
		}
		namespace ACE32
		{
			extern int skin;
		}
		namespace SCARL
		{
			extern int skin;
		}
		namespace GROZA
		{
			extern int skin;
		}
		namespace QBZ
		{
			extern int skin;
		}
		namespace AUG
		{
			extern int skin;
		}
		namespace M16A4
		{
			extern int skin;
		}
		/////////////////////
		namespace UMP
		{
			extern int skin;
		}
		namespace UZI
		{
			extern int skin;
		}
		namespace Thome
		{
			extern int skin;
		}
		namespace Vctor
		{
			extern int skin;
		}
		namespace Pithon
		{
			extern int skin;
		}
		namespace P90
		{
			extern int skin;
		}
		//////////////////////
		namespace kar
		{
			extern int skin;
		}
		namespace AWM
		{
			extern int skin;
		}
		namespace M24
		{
			extern int skin;
		}
		namespace AMR
		{
			extern int skin;
		}
		namespace SKS
		{
			extern int skin;
		}
		namespace VSS
		{
			extern int skin;
		}
		namespace Mini14
		{
			extern int skin;
		}
		namespace Mk14
		{
			extern int skin;
		}
		namespace SLR
		{
			extern int skin;
		}
		namespace Mk12
		{
			extern int skin;
		}
		namespace MG3
		{
			extern int skin;
		}
		namespace DP28
		{
			extern int skin;
		}
		namespace M249
		{
			extern int skin;
		}
		namespace DBS
		{
			extern int skin;
		}
		namespace S1897
		{
			extern int skin;
		}
		namespace S686
		{
			extern int skin;
		}
		namespace S12K
		{
			extern int skin;
		}
		namespace Skorpion
		{
			extern int skin;
		}
		namespace Pan
		{
			extern int skin;
		}
		namespace Honey
		{
			extern int skin;
		}

	}
	namespace sute {
		extern int sutes;
	}


	namespace helmet {
		extern int helmets1;
		extern int helmets2;
		extern int helmets3;
	}

	namespace Backpack {
		extern int Backpack1;
		extern int Backpack2;
		extern int Backpack3;
	}
	namespace parashot {
		extern int id;
	}

}


