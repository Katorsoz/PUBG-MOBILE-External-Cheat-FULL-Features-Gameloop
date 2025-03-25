#include "Memory.h"
#include "Aimbot.h"
#include<thread>
#include "candy.h"
enum index : int
{
    Autofire_bool = 1,
    Norecoil_bool = 2,
    Showdmg_bool = 3,
    SilentAim_bool = 4,
    Line_bool = 5,
    bone_bool = 6,
    vischeckaim2 = 7,
    xhit_bool = 8,
    ignorbot = 9,
    ignorknocked = 10,
    instanthit = 11,
    fastshot = 12,
    fastswitch = 13,
    fastscope = 14,
    randombody_bool = 15,
    randomcross_bool = 16,
    randomhead_bool = 17,
    speedknocked_bool = 18,
    autoflash_bool = 19,
    fixstuck_bool = 20,
    xhit_float = 21,
    fastshot_float = 22,
    instanthit_float = 23,
    bone_float = 24,
    line_float = 25,
    ScopeFov_bool = 26,
    ScopeFov_Float = 27,
    WideView_bool = 28,
    NoTree_bool = 29,
    WideView_float = 30,
    BlackSky_bool = 31,
    NightMod_bool = 32,
    NoGrass_bool = 33,
    NoFog_bool = 34,
    Aimpos_floatX = 35,
    autofast_bool = 36,
    Scope_float = 37,
    fastrun_float = 38,
    Aimpos_floatZ = 39,
    hairskin = 40,
    hair_int = 41,
    skin_int = 42,
    skin_s = 43,
    bagback_int = 44,
    bagback_s = 45,
    helmets_int = 46,
    helmets_s = 47,
    face_int = 48,
    face_s = 49,
    Flash_bool = 50,
    skin_m416 = 51,
    skin_tshirt = 52,
    skin_akm = 53,
    skin_m16a4 = 54,
    skin_scar = 55,
    skin_aug = 56,
    skin_qbz = 57,
    skin_m762 = 58,
    skin_ace32 = 59,
    skin_Honey = 60,
    skin_UZI = 61,
    skin_UMP = 62,
    skin_Vector = 63,
    skin_Thompson = 64,
    skin_Bizon = 65,
    skin_K98 = 66,
    skin_M24 = 67,
    skin_AWM = 68,
    skin_AMR = 69,
    skin_VSS = 70,
    skin_SKS = 71,
    skin_Mini14 = 72,
    skin_SLR = 73,
    skin_S1897 = 74,
    skin_DP28 = 75,
    skin_M249 = 76,
    skin_MG3 = 77,
    skin_Skorpion = 78,
    skin_Moto = 79,
    skin_Dacia = 80,
    skin_CoupeRP = 81,
    skin_UAZ = 82,
    Parachute = 83,
	Pan = 84,
	skin_groza = 85,
	skin_MK14 = 86,
	skin_Monster = 87,
	skin_UTV = 88,
	skin_Buggy = 89,
	WeaponScalebool = 90,
	WeaponScalefloat = 91,
	skin_Mirado = 92,
	Lib_Check = 93,
};
int sute;
int parashot;
int Backpack;
int M416;
int M762;
int AKM;
int ACE32;
int GROZA;
int SCARL;
int AUG;
int QBZ;
int M16A4;
int Honey;
int UMP;
int UZI;
int P90;
int Thompson;
int Vector;
int Bizon;
int AWM;
int M24;
int kar;
int AMR;
int SKS;
int VSS;
int Mini14;
int Mk14;
int SLR;
int Mk12;
int MG3;
int DP28;
int M249;
int DBS;
int S1897;
int S686;
int S12K;
int Skorpion;
//int Pan;
int Backpack1;
int Backpack2;
int Backpack3;
int helmet1;
int helmets2;
int helmets3;
////////////////////////////////////////
int VectorscopxHolo;
int VectorscopxRed;
int Vectorscopx2;
int Vectorscopx3;
int Vectorscopx4;
int Vectorscopx6;
int VectorMage;
int VectorFast;
int VectorExtraFast;
int VectorAngled;
int VectorThumb;
int VectorVertical;
int VectorLight;
int VectorHalf;
int VectorLaser;
int VectorCanted;
int Vectorstock;
///////////////////////
int M416scopxHolo;
int M416scopxRed;
int M416scopx2;
int M416scopx3;
int M416scopx4;
int M416scopx6;
int M416Mage;
int M416Fast;
int M416ExtraFast;
int M416Angled;
int M416Thumb;
int M416Vertical;
int M416Light;
int M416Half;
int M416Laser;
int M416Canted;
int M416stock;
/////////////////////////////////////
int M762scopxHolo;
int M762scopxRed;
int M762scopx2;
int M762scopx3;
int M762scopx4;
int M762scopx6;
int M762Mage;
int M762Fast;
int M762ExtraFast;
int M762Angled;
int M762Thumb;
int M762Vertical;
int M762Light;
int M762Half;
int M762Laser;
int M762Canted;
/////////////////////////////////////
int ACE32scopxHolo;
int ACE32scopxRed;
int ACE32scopx2;
int ACE32scopx3;
int ACE32scopx4;
int ACE32scopx6;
int ACE32Mage;
int ACE32Fast;
int ACE32ExtraFast;
int ACE32Angled;
int ACE32Thumb;
int ACE32Vertical;
int ACE32Light;
int ACE32Half;
int ACE32Laser;
int ACE32Canted;
int ACE32stock;
///////////////////////////
int GROZAscopxHolo;
int GROZAscopxRed;
int GROZAscopx2;
int GROZAscopx3;
int GROZAscopx4;
int GROZAscopx6;
int GROZAMage;
int GROZAFast;
int GROZAExtraFast;
//////////////////////////////
int AKMscopxHolo;
int AKMscopxRed;
int AKMscopx2;
int AKMscopx3;
int AKMscopx4;
int AKMscopx6;
int AKMMage;
int AKMFast;
int AKMExtraFast;
//////////////////////////

int AUGscopxHolo;
int AUGscopxRed;
int AUGscopx2;
int AUGscopx3;
int AUGscopx4;
int AUGscopx6;
int AUGMage;
int AUGFast;
int AUGExtraFast;
int AUGAngled;
int AUGThumb;
int AUGVertical;
int AUGLight;
int AUGHalf;
int AUGLaser;
int AUGCanted;
////////////////////////////////
int QBZscopxHolo;
int QBZscopxRed;
int QBZscopx2;
int QBZscopx3;
int QBZscopx4;
int QBZscopx6;
int QBZMage;
int QBZFast;
int QBZExtraFast;
int QBZAngled;
int QBZThumb;
int QBZVertical;
int QBZLight;
int QBZHalf;
int QBZLaser;
int QBZCanted;
//////////////////////////////////
int M16scopxHolo;
int M16scopxRed;
int M16scopx2;
int M16scopx3;
int M16scopx4;
int M16scopx6;
int M16Mage;
int M16Fast;
int M16ExtraFast;
int M16Angled;
int M16Thumb;
int M16Vertical;
int M16Light;
int M16Half;
int M16Laser;
int M16Canted;
int M162stock;
/////////////////////////////////////
int SCARLscopxRed;
int SCARLscopxHolo;
int SCARLscopx2;
int SCARLscopx3;
int SCARLscopx4;
int SCARLscopx6;
int SCARLMage;
int SCARLFast;
int SCARLExtraFast;
int SCARLAngled;
int SCARLThumb;
int SCARLVertical;
int SCARLLight;
int SCARLHalf;
int SCARLLaser;
int SCARLCanted;
////////////////////////////////////////
int UMPLscopxRed;
int UMPLscopxHolo;
int UMPLscopx2;
int UMPLscopx3;
int UMPLscopx4;
int UMPLscopx6;
int UMPLMage;
int UMPLFast;
int UMPLExtraFast;
int UMPLAngled;
int UMPLThumb;
int UMPLVertical;
int UMPLLight;
int UMPLHalf;
int UMPLLaser;
int UMPLCanted;

__inline void skins() {
#pragma region sutes
	if (Setting::sute::sutes == 0)
	{
		sute = 1400129; //Golden Pharaoh X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 1)
	{
		sute = 1406469; //Golden Pharaoh X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 2)
	{
		sute = 1407140; //Poseidon X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 3)
	{
		sute = 1407141; //Avalanche X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 4)
	{
		sute = 1407142; //Silvanus X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 5)
	{
		sute = 1406872; //Stygian Liege X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 6)
	{
		sute = 1406971; //Marmoris X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 7)
	{
		sute = 1407103; //Marmoris X-Suit (7-Star)
	}
	if (Setting::sute::sutes == 8)
	{
		sute = 1405870; //Blood Raven X-Suit (6-Star)
	}
	if (Setting::sute::sutes == 9)
	{
		sute = 1406475; //Iridescence X-Suit (6-Star)
	}
	if (Setting::sute::sutes == 10)
	{
		sute = 1406638; //Arcane Jester X-Suit (6-Star)
	}
	if (Setting::sute::sutes == 111)
	{
		sute = 1400687; //Mummy (White)  
	}
	if (Setting::sute::sutes == 12)
	{
		sute = 1405623; //Mummy (Yellow)   
	}
	if (Setting::sute::sutes == 13)
	{
		sute = 1406398; // Flamewraith Set
	}
	if (Setting::sute::sutes == 14)
	{
		sute = 1406397; // Ominous Fox Set
	}
	if (Setting::sute::sutes == 15)
	{
		sute = 1400117; //Fireman Suit
	}
	if (Setting::sute::sutes == 16)
	{
		sute = 1407106; //foxy flare
	}
	if (Setting::sute::sutes == 17)
	{
		sute = 1405102; //Golden trigger
	}
	if (Setting::sute::sutes == 18)
	{
		sute = 1405145; //Invader Set
	}
	if (Setting::sute::sutes == 19)
	{
		sute = 1400778; // Dystopian Survivor Set
	}
	if (Setting::sute::sutes == 20)
	{
		sute = 1400782; //Glacier Set
	}
	if (Setting::sute::sutes == 21)
	{
		sute = 1407079; //The Fool's Delight
	}
	if (Setting::sute::sutes == 22)
	{
		sute = 1406657; //Starsea Admiral Set
	}
	if (Setting::sute::sutes == 23)
	{
		sute = 1406823; //Moondrop Eterna
	}
	if (Setting::sute::sutes == 24)
	{
		sute = 1407106; //Foxy Flare
	}
	if (Setting::sute::sutes == 25)
	{
		sute = 1406742; //Silver Guru
	}
	if (Setting::sute::sutes == 26)
	{
		sute = 1407048; //Boxerbolt
	}
	if (Setting::sute::sutes == 27)
	{
		sute = 1406977; //Wrathful Neptune
	}
	if (Setting::sute::sutes == 28)
	{
		sute = 1406897; //Crimson Ephialtes
	}
	if (Setting::sute::sutes == 29)
	{
		sute = 1406656; //Bloody Noon
	}
	if (Setting::sute::sutes == 30)
	{
		sute = 1406555; //Nether Visage
	}
	if (Setting::sute::sutes == 31)
	{
		sute = 1407049; //Glacial Bride
	}
	if (Setting::sute::sutes == 32)
	{
		sute = 1405061; //Unicorn Set
	}
	if (Setting::sute::sutes == 33)
	{
		sute = 1406399; //Majestic Cavalry
	}
	if (Setting::sute::sutes == 34)
	{
		sute = 1405121; //Infected Patient
	}
	if (Setting::sute::sutes == 35)
	{
		sute = 1405334; //Masked Psychic Robe
	}
	if (Setting::sute::sutes == 36)
	{
		sute = 1405318; //Envoy of Death
	}
	if (Setting::sute::sutes == 37)
	{
		sute = 1406482; //Bramble Overlord
	}
	if (Setting::sute::sutes == 38)
	{
		sute = 1406483; //Lightning Nebula
	}
	if (Setting::sute::sutes == 39)
	{
		sute = 1406574; //Cosmic Inquisitor
	}
	if (Setting::sute::sutes == 40)
	{
		sute = 1405160; //Godzilla's
	}
	if (Setting::sute::sutes == 41)
	{
		sute = 1405387; //SnowflakeBear
	}
	if (Setting::sute::sutes == 42)
	{
		sute = 1405384; //Arctic Witch
	}
	if (Setting::sute::sutes == 43)
	{
		sute = 1400782; //Glacier
	}
	if (Setting::sute::sutes == 44)
	{
		sute = 1405481; //Charged Armor
	}
	if (Setting::sute::sutes == 45)
	{
		sute = 1406291; //Satoru Gojo Cosplay
	}
	if (Setting::sute::sutes == 46)
	{
		sute = 1400288; //Black Shark Diving
	}
	if (Setting::sute::sutes == 47)
	{
		sute = 1407107; //Winter Highness
	}
	if (Setting::sute::sutes == 48)
	{
		sute = 1407186; //Kurapika Character
	}
	if (Setting::sute::sutes == 49)
	{
		sute = 1407187; //Killua Character
	}
	if (Setting::sute::sutes == 50)
	{
		sute = 1407188; //Gon Character
	}
	if (Setting::sute::sutes == 51)
	{
		sute = 1407189; //Leorio Character
	}
	if (Setting::sute::sutes == 52)
	{
		sute = 1407190; //Extreme Cyberwear
	}
	if (Setting::sute::sutes == 53)
	{
		sute = 1407191; //Melee Maiden
	}
	if (Setting::sute::sutes == 54)
	{
		sute = 1407277; //Inferno Feind
	}
#pragma endregion
#pragma region parashot
	if (Setting::parashot::id == 0)
	{
		parashot = 703001; //Pharaoh's Scarab Parachute
	}
	if (Setting::parashot::id == 1)
	{
		parashot = 1401619; //Pharaoh's Scarab Parachute
	}
	if (Setting::parashot::id == 2)
	{
		parashot = 1401625; // Enigmatic Nomad Parachute
	}
	if (Setting::parashot::id == 3)
	{
		parashot = 1401624; //parashot Parachute
	}
	if (Setting::parashot::id == 4)
	{
		parashot = 1401836; //Paperfold Gambit Parachute
	}
	if (Setting::parashot::id == 5)
	{
		parashot = 1401833; //Labyrinth Beast Parachute
	}
	if (Setting::parashot::id == 6)
	{
		parashot = 1401287; //Flamewraith Parachute
	}
	if (Setting::parashot::id == 7)
	{
		parashot = 1401282; //Mega Kitty Parachute
	}
	if (Setting::parashot::id == 8)
	{
		parashot = 1401385; //Mega Yeti Parachute
	}
	if (Setting::parashot::id == 9)
	{
		parashot = 1401549; //Endless Glory Parachute
	}
	if (Setting::parashot::id == 10)
	{
		parashot = 1401336; //Magma Skull Parachute
	}
	if (Setting::parashot::id == 11)
	{
		parashot = 1401335; //Aquatic Fury Parachute
	}
	if (Setting::parashot::id == 12)
	{
		parashot = 1401629; //CyberGen: Zero Parachute
	}
	if (Setting::parashot::id == 13)
	{
		parashot = 1401628; //Radiant Phoenix Adarna Parachute
	}
	if (Setting::parashot::id == 14)
	{
		parashot = 1401615; //Will of Horus
	}
	if (Setting::parashot::id == 15)
	{
		parashot = 1401613; //Anubian Magistrate Parachute
	}
#pragma endregion
#pragma region AR
	/////////////////////m416/////////////////////
#pragma region M416
	if (Setting::Skins::m416::skin == 0)
	{

		M416 = 110100400; // Glacier
	}
	if (Setting::Skins::m416::skin == 1)
	{
		M416scopxRed = 1010040470;
		M416scopxHolo = 1010040469;
		M416scopx2 = 1010040468;
		M416scopx3 = 1010040467;
		M416scopx4 = 1010040466;
		M416scopx6 = 1010040481;
		M416Mage = 1010040473;
		M416Fast = 1010040472;
		M416ExtraFast = 1010040471;
		M416Angled = 1010040477;
		M416Thumb = 1010040478;
		M416Vertical = 1010040479;
		M416Light = 1010040482;
		M416Half = 1010040483;
		M416Laser = 1010040484;
		M416Canted = 1010040485;
		M416stock = 1010040480;
		M416 = 1101004046; // Glacier
	}
	if (Setting::Skins::m416::skin == 2)
	{
		M416 = 1101004062; // The Fool
	}
	if (Setting::Skins::m416::skin == 3)
	{


		M416 = 1101004078; // Wanderer
	}
	if (Setting::Skins::m416::skin == 4)
	{



		M416 = 1101004086; // Lizard
	}
	if (Setting::Skins::m416::skin == 5)
	{
		M416scopxRed = 1010040935;
		M416scopxHolo = 1010040934;
		M416scopx2 = 1010040929;
		M416scopx3 = 1010040928;
		M416scopx4 = 1010040927;
		M416scopx6 = 203015;
		M416Mage = 1010040936;
		M416Fast = 1010040937;
		M416ExtraFast = 1010040938;
		M416Angled = 1010040945;
		M416Thumb = 1010040944;
		M416Vertical = 1010040939;
		M416Light = 202004;
		M416Half = 202005;
		M416Laser = 202007;
		M416Canted = 203018;
		M416stock = 205002;

		M416 = 1101004098; // Call of the Wild
	}
	if (Setting::Skins::m416::skin == 6)
	{
		M416scopxRed = 1010041128;
		M416scopxHolo = 1010041127;
		M416scopx2 = 1010041126;
		M416scopx3 = 1010041125;
		M416scopx4 = 1010041124;
		M416scopx6 = 203015;
		M416Mage = 1010041129;
		M416Fast = 1010041134;
		M416ExtraFast = 1010041135;
		M416Angled = 1010041139;
		M416Thumb = 1010041144;
		M416Vertical = 1010041145;
		M416Light = 202004;
		M416Half = 202005;
		M416Laser = 202007;
		M416Canted = 203018;
		M416stock = 1010041146;

		M416 = 1101004138; // TechnoCore
	}
	if (Setting::Skins::m416::skin == 7)
	{
		M416scopxRed = 1010041565;
		M416scopxHolo = 1010041566;
		M416scopx2 = 1010041564;
		M416scopx3 = 1010041560;
		M416scopx4 = 1010041554;
		M416scopx6 = 203015;
		M416Mage = 1010041567;
		M416Fast = 1010041568;
		M416ExtraFast = 1010041569;
		M416Angled = 1010041576;
		M416Thumb = 1010041577;
		M416Vertical = 1010041578;
		M416Light = 202004;
		M416Half = 202005;
		M416Laser = 202007;
		M416Canted = 203018;
		M416stock = 1010041579;

		M416 = 1101004163; // Imperial Splendor
	}
	if (Setting::Skins::m416::skin == 8)
	{
		M416scopxRed = 1010041948;
		M416scopxHolo = 1010041947;
		M416scopx2 = 1010041946;
		M416scopx3 = 1010041945;
		M416scopx4 = 1010041944;
		M416scopx6 = 1010041967;
		M416Mage = 1010041949;
		M416Fast = 1010041950;
		M416ExtraFast = 1010041955;
		M416Angled = 1010041959;
		M416Thumb = 1010041960;
		M416Vertical = 1010041965;
		M416Light = 202004;
		M416Half = 202005;
		M416Laser = 202007;
		M416Canted = 203018;
		M416stock = 1010041966;

		M416 = 1101004201; // Silver Guru
	}
	if (Setting::Skins::m416::skin == 9)
	{
		M416scopxRed = 1010042028;
		M416scopxHolo = 1010042029;
		M416scopx2 = 1010042027;
		M416scopx3 = 1010042026;
		M416scopx4 = 1010042025;
		M416scopx6 = 1010042024;
		M416Mage = 1010042034;
		M416Fast = 1010042035;
		M416ExtraFast = 1010042036;
		M416Angled = 1010042044;
		M416Thumb = 1010042045;
		M416Vertical = 1010042046;
		M416Light = 1010042048;
		M416Half = 1010042049;
		M416Laser = 1010042054;
		M416Canted = 1010042055;
		M416stock = 1010042047;

		M416 = 1101004209; // Tidal Embrace
	}
	if (Setting::Skins::m416::skin == 10)
	{
		M416scopxRed = 1010042118;
		M416scopxHolo = 1010042119;
		M416scopx2 = 1010042117;
		M416scopx3 = 1010042116;
		M416scopx4 = 1010042115;
		M416scopx6 = 1010042114;
		M416Mage = 1010042124;
		M416Fast = 1010042125;
		M416ExtraFast = 1010042126;
		M416Angled = 1010042134;
		M416Thumb = 1010042135;
		M416Vertical = 1010042136;
		M416Light = 1010042138;
		M416Half = 1010042139;
		M416Laser = 1010042144;
		M416Canted = 1010042145;
		M416stock = 1010042137;
		M416 = 1101004217; // Shinobi Kami
	}	
	if (Setting::Skins::m416::skin == 11)
	{

		M416 = 1101004226; // Shinobi Kami
	}
#pragma endregion
	/////////////////////AKM//////////////////////
#pragma region AKM

	if (Setting::Skins::AKM::skin == 0)
	{
		AKM = 10100100; // Glacier
	}
	if (Setting::Skins::AKM::skin == 1)
	{
		AKM = 1101001089; // Glacier
	}
	if (Setting::Skins::AKM::skin == 2)
	{
		AKM = 1101001042; // Sculpture
	}
	if (Setting::Skins::AKM::skin == 3)
	{
		AKM = 1101001063; // The Seven Seas
	}
	if (Setting::Skins::AKM::skin == 4)
	{
		AKM = 1101001068; // Roaring Tiger
	}
	if (Setting::Skins::AKM::skin == 5)
	{
		AKM = 1101001103; // Desert Fossil
	}
	if (Setting::Skins::AKM::skin == 6)
	{
		AKM = 1101001128; // Ghillie Dragon

		AKMscopxHolo = 1010011226;
		AKMscopxRed = 1010011225;
		AKMscopx2 = 1010011224;
		AKMscopx3 = 1010011223;
		AKMscopx4 = 1010011222;
		AKMscopx6 = 203015;
		AKMMage = 1010011227;
		AKMFast = 1010011228;
		AKMExtraFast = 1010011229;
	}
	if (Setting::Skins::AKM::skin == 7)
	{
		AKM = 1101001143; // Gold Pirate
	}
	if (Setting::Skins::AKM::skin == 8)
	{
		AKM = 1101001154; // Codebreaker
		AKMscopxHolo = 1010011486;
		AKMscopxRed = 1010011485;
		AKMscopx2 = 1010011484;
		AKMscopx3 = 1010011483;
		AKMscopx4 = 1010011482;
		AKMscopx6 = 203015;
		AKMMage = 1010011490;
		AKMFast = 1010011493;
		AKMExtraFast = 1010011494;
	}
	if (Setting::Skins::AKM::skin == 9)
	{
		AKM = 1101001174; // Wandering Tyrant

		AKMscopxHolo = 1010011666;
		AKMscopxRed = 1010011665;
		AKMscopx2 = 1010011664;
		AKMscopx3 = 1010011663;
		AKMscopx4 = 1010011662;
		AKMscopx6 = 203015;
		AKMMage = 1010011670;
		AKMFast = 1010011673;
		AKMExtraFast = 1010011674;

	}
	if (Setting::Skins::AKM::skin == 10)
	{
		AKM = 1101001213; // Starsea Admiral

		AKMscopxHolo = 1010012066;
		AKMscopxRed = 1010012065;
		AKMscopx2 = 1010012064;
		AKMscopx3 = 1010012063;
		AKMscopx4 = 1010012062;
		AKMscopx6 = 203015;
		AKMMage = 1010012070;
		AKMFast = 1010012072;
		AKMExtraFast = 1010012073;

	}
	if (Setting::Skins::AKM::skin == 11)
	{
		AKM = 1101001242; // Decisive Day
		AKMscopxHolo = 1010012355;
		AKMscopxRed = 1010012356;
		AKMscopx2 = 1010012354;
		AKMscopx3 = 1010012353;
		AKMscopx4 = 1010012352;
		AKMscopx6 = 1010012366;
		AKMMage = 1010012362;
		AKMFast = 1010012363;
		AKMExtraFast = 1010012364;


	}
#pragma endregion
	/////////////////////M762//////////////////////
#pragma region M762


	if (Setting::Skins::M762::skin == 0)
	{
		M762 = 10100800; // 8-bit Unicorn
	}
	if (Setting::Skins::M762::skin == 1)
	{
		M762 = 1101008026; // 8-bit Unicorn
	}
	if (Setting::Skins::M762::skin == 2)
	{
		M762 = 1101008036; // Lotus Fury
	}
	if (Setting::Skins::M762::skin == 3)
	{
		M762scopxHolo = 1010080457;
		M762scopxRed = 1010080456;
		M762scopx2 = 1010080455;
		M762scopx3 = 1010080454;
		M762scopx4 = 1010080453;
		M762scopx6 = 1010080452;
		M762Mage = 1010080458;
		M762Fast = 1010080459;
		M762ExtraFast = 1010080462;
		M762Angled = 1010080466;
		M762Thumb = 1010080472;
		M762Vertical = 1010080467;
		M762Light = 1010080468;
		M762Half = 1010080469;
		M762Laser = 1010080473;
		M762Canted = 203018;

		M762 = 1101008051; // Concerto of Love
	}
	if (Setting::Skins::M762::skin == 4)
	{
		M762scopxHolo = 1010080557;
		M762scopxRed = 1010080556;
		M762scopx2 = 1010080555;
		M762scopx3 = 1010080554;
		M762scopx4 = 1010080553;
		M762scopx6 = 1010080552;
		M762Mage = 1010080558;
		M762Fast = 1010080559;
		M762ExtraFast = 1010080562;
		M762Angled = 1010080566;
		M762Thumb = 1010080572;
		M762Vertical = 1010080567;
		M762Light = 1010080568;
		M762Half = 1010080569;
		M762Laser = 1010080573;
		M762Canted = 203018;

		M762 = 1101008061; // Deadly Precision
	}
	if (Setting::Skins::M762::skin == 5)
	{
		M762scopxHolo = 1010080606;
		M762scopxRed = 1010080605;
		M762scopx2 = 1010080604;
		M762scopx3 = 1010080603;
		M762scopx4 = 1010080602;
		M762scopx6 = 203015;
		M762Mage = 1010080607;
		M762Fast = 1010080608;
		M762ExtraFast = 1010080617;
		M762Angled = 1010080614;
		M762Thumb = 1010080616;
		M762Vertical = 1010080615;
		M762Light = 202004;
		M762Half = 202005;
		M762Laser = 202007;
		M762Canted = 203018;

		M762 = 1101008070; // GACKT MOONSAGA
	}
	if (Setting::Skins::M762::skin == 6)
	{
		M762scopxHolo = 1010080736;
		M762scopxRed = 1010080735;
		M762scopx2 = 1010080734;
		M762scopx3 = 1010080733;
		M762scopx4 = 1010080732;
		M762scopx6 = 203015;
		M762Mage = 1010080737;
		M762Fast = 1010080738;
		M762ExtraFast = 1010080739;
		M762Angled = 1010080746;
		M762Thumb = 1010080744;
		M762Vertical = 1010080747;
		M762Light = 202004;
		M762Half = 202005;
		M762Laser = 202007;
		M762Canted = 203018;

		M762 = 1101008081; // Stray Rebellion
	}
	if (Setting::Skins::M762::skin == 7)
	{
		M762scopxHolo = 1010080976;
		M762scopxRed = 1010080975;
		M762scopx2 = 1010080974;
		M762scopx3 = 1010080973;
		M762scopx4 = 1010080972;
		M762scopx6 = 203015;
		M762Mage = 1010080977;
		M762Fast = 1010080978;
		M762ExtraFast = 1010080979;
		M762Angled = 1010080985;
		M762Thumb = 1010080983;
		M762Vertical = 1010080986;
		M762Light = 202004;
		M762Half = 202005;
		M762Laser = 202007;
		M762Canted = 203018;

		M762 = 1101008104; // Starcore
	}
	if (Setting::Skins::M762::skin == 8)
	{
		M762scopxHolo = 1010081106;
		M762scopxRed = 1010081105;
		M762scopx2 = 1010081104;
		M762scopx3 = 1010081103;
		M762scopx4 = 1010081202;
		M762scopx6 = 203015;
		M762Mage = 1010081107;
		M762Fast = 1010081108;
		M762ExtraFast = 1010081109;
		M762Angled = 1010081115;
		M762Thumb = 1010081113;
		M762Vertical = 1010081116;
		M762Light = 202004;
		M762Half = 202005;
		M762Laser = 202007;
		M762Canted = 203018;


		M762 = 1101008116; // Messi Football Icon
	}
	if (Setting::Skins::M762::skin == 9)
	{


		M762scopxHolo = 1010081206;
		M762scopxRed = 1010081205;
		M762scopx2 = 1010081204;
		M762scopx3 = 1010081203;
		M762scopx4 = 1010081202;
		M762scopx6 = 203015;
		M762Mage = 1010081207;
		M762Fast = 1010081208;
		M762ExtraFast = 1010081209;
		M762Angled = 1010081216;
		M762Thumb = 1010081214;
		M762Vertical = 1010081217;
		M762Light = 202004;
		M762Half = 202005;
		M762Laser = 202007;
		M762Canted = 203018;

		M762 = 1101008126; // Noctum Sunder
	}
#pragma endregion
	/////////////////////ACE32/////////////////////
#pragma region ACE32

	if (Setting::Skins::ACE32::skin == 0)
	{
		ACE32 = 10110200; // Beam Blast
	}
	if (Setting::Skins::ACE32::skin == 1)
	{
		ACE32scopxHolo = 1011020019;
		ACE32scopxRed = 1011020018;
		ACE32scopx2 = 1011020017;
		ACE32scopx3 = 1011020016;
		ACE32scopx4 = 1011020015;
		ACE32scopx6 = 1011020014;
		ACE32Mage = 1011020024;
		ACE32Fast = 1011020025;
		ACE32ExtraFast = 1011020026;
		ACE32Angled = 1011020034;
		ACE32Thumb = 1011020035;
		ACE32Vertical = 1011020036;
		ACE32Light = 1011020038;
		ACE32Half = 1011020039;
		ACE32Laser = 1011020044;
		ACE32Canted = 1011020045;
		ACE32stock = 1011020037;

		ACE32 = 1101102007; // Beam Blast
	}
	if (Setting::Skins::ACE32::skin == 2)
	{



		ACE32scopxHolo = 1011020119;
		ACE32scopxRed = 1011020118;
		ACE32scopx2 = 1011020117;
		ACE32scopx3 = 1011020116;
		ACE32scopx4 = 1011020115;
		ACE32scopx6 = 1011020114;
		ACE32Mage = 1011020124;
		ACE32Fast = 1011020125;
		ACE32ExtraFast = 1011020126;
		ACE32Angled = 1011020134;
		ACE32Thumb = 1011020135;
		ACE32Vertical = 1011020136;
		ACE32Light = 1011020138;
		ACE32Half = 1011020139;
		ACE32Laser = 1011020144;
		ACE32Canted = 1011020145;
		ACE32stock = 1011020137;




		ACE32 = 1101102017; // Icicle Spike
	}
#pragma endregion
	/////////////////////GROZA/////////////////////
#pragma region GROZA



	if (Setting::Skins::GROZA::skin == 0)
	{
		GROZA = 10100500; // Forest Raider - GROZA
	}
	if (Setting::Skins::GROZA::skin == 1)
	{
		GROZA = 1101005019; // Forest Raider - GROZA
	}
	if (Setting::Skins::GROZA::skin == 2)
	{
		GROZA = 1101005025; // Eventide Aria - GROZA
	}
	if (Setting::Skins::GROZA::skin == 3)
	{
		GROZAscopxHolo = 1010050326;
		GROZAscopxRed = 1010050325;
		GROZAscopx2 = 1010050324;
		GROZAscopx3 = 1010050323;
		GROZAscopx4 = 1010050322;
		GROZAscopx6 = 203015;
		GROZAMage = 1010050328;
		GROZAFast = 1010050329;
		GROZAExtraFast = 1010050330;
		GROZA = 1101005038; // Ryomen Sukuna - Groza
	}
	if (Setting::Skins::GROZA::skin == 4)
	{
		GROZA = 1101005043; // Splendid Battle - Groza
	}
	if (Setting::Skins::GROZA::skin == 5)
	{
		GROZAscopxHolo = 1010050466;
		GROZAscopxRed = 1010050465;
		GROZAscopx2 = 1010050464;
		GROZAscopx3 = 1010050463;
		GROZAscopx4 = 1010050462;
		GROZAscopx6 = 203015;
		GROZAMage = 1010050468;
		GROZAFast = 1010050469;
		GROZAExtraFast = 1010050470;
		GROZA = 1101005052; // River Styx - Groza
	}
	if (Setting::Skins::GROZA::skin == 6)
	{
		GROZA = 1101005082; // Pumpkin Carol - Groza
	}
#pragma endregion
	/////////////////////SCARL/////////////////////
#pragma region SCARL


	if (Setting::Skins::SCARL::skin == 0)
	{
		SCARL = 10100300; // Water Blaster - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 1)
	{
		SCARL = 1101003057; // Water Blaster - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 2)
	{
		SCARL = 1101003070; // Enchanted Pumpkin - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 3)
	{
		SCARL = 1101003080; // Operation Tomorrow - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 4)
	{
		SCARLscopxRed = 1010030937;
		SCARLscopxHolo = 1010030936;
		SCARLscopx2 = 1010030935;
		SCARLscopx3 = 1010030934;
		SCARLscopx4 = 1010030933;
		SCARLscopx6 = 1010030932;
		SCARLMage = 1010030938;
		SCARLFast = 1010030939;
		SCARLExtraFast = 1010030942;
		SCARLAngled = 1010030946;
		SCARLThumb = 1010030952;
		SCARLVertical = 1010030947;
		SCARLLight = 1010030948;
		SCARLHalf = 1010030949;
		SCARLLaser = 1010030953;
		SCARLCanted = 203018;

		SCARL = 1101003099; // Drop the Bass - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 5)
	{
		SCARLscopxRed = 1010031136;
		SCARLscopxHolo = 1010031135;
		SCARLscopx2 = 1010031134;
		SCARLscopx3 = 1010031133;
		SCARLscopx4 = 1010031132;
		SCARLscopx6 = 203015;
		SCARLMage = 1010031137;
		SCARLFast = 1010031138;
		SCARLExtraFast = 1010031146;
		SCARLAngled = 1010031143;
		SCARLThumb = 1010031145;
		SCARLVertical = 1010031144;
		SCARLLight = 202004;
		SCARLHalf = 202005;
		SCARLLaser = 202007;
		SCARLCanted = 203018;

		SCARL = 1101003119; // Hextech Crystal - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 6)
	{
		SCARLscopxRed = 1010031226;
		SCARLscopxHolo = 1010031225;
		SCARLscopx2 = 1010031224;
		SCARLscopx3 = 1010031223;
		SCARLscopx4 = 1010031222;
		SCARLscopx6 = 203015;
		SCARLMage = 1010031227;
		SCARLFast = 1010031228;
		SCARLExtraFast = 1010031242;
		SCARLAngled = 1010031238;
		SCARLThumb = 1010031240;
		SCARLVertical = 1010031239;
		SCARLLight = 202004;
		SCARLHalf = 202005;
		SCARLLaser = 202007;
		SCARLCanted = 203018;

		SCARL = 1101003146; // Thorn of Malice - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 7)
	{
		SCARLscopxRed = 1010031606;
		SCARLscopxHolo = 1010031605;
		SCARLscopx2 = 1010031604;
		SCARLscopx3 = 1010031603;
		SCARLscopx4 = 1010031602;
		SCARLscopx6 = 203015;
		SCARLMage = 1010031607;
		SCARLFast = 1010031608;
		SCARLExtraFast = 1010031617;
		SCARLAngled = 1010031614;
		SCARLThumb = 1010031616;
		SCARLVertical = 1010031615;
		SCARLLight = 202004;
		SCARLHalf = 202005;
		SCARLLaser = 202007;
		SCARLCanted = 203018;
		SCARL = 1101003167; // Bloodstained Nemesis - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 8)
	{
		SCARLscopxRed = 1010031757;
		SCARLscopxHolo = 1010031756;
		SCARLscopx2 = 1010031755;
		SCARLscopx3 = 1010031754;
		SCARLscopx4 = 1010031753;
		SCARLscopx6 = 1010031752;
		SCARLMage = 1010031758;
		SCARLFast = 1010031759;
		SCARLExtraFast = 1010031763;
		SCARLAngled = 1010031767;
		SCARLThumb = 1010031768;
		SCARLVertical = 1010031769;
		SCARLLight = 1010031773;
		SCARLHalf = 1010031774;
		SCARLLaser = 1010031772;
		SCARLCanted = 1010031775;
		SCARL = 1101003181; // Folly's Clasp - SCAR-L
	}
	if (Setting::Skins::SCARL::skin == 9)
	{
		SCARLscopxRed = 1010031757;
		SCARLscopxHolo = 1010031756;
		SCARLscopx2 = 1010031755;
		SCARLscopx3 = 1010031754;
		SCARLscopx4 = 1010031753;
		SCARLscopx6 = 1010031752;
		SCARLMage = 1010031758;
		SCARLFast = 1010031759;
		SCARLExtraFast = 1010031763;
		SCARLAngled = 1010031767;
		SCARLThumb = 1010031768;
		SCARLVertical = 1010031769;
		SCARLLight = 1010031773;
		SCARLHalf = 1010031774;
		SCARLLaser = 1010031772;
		SCARLCanted = 1010031775;

		SCARL = 1101003188; // Folly's Clasp - Gold SCAR-L
	}	
	if (Setting::Skins::SCARL::skin == 10)
	{
		SCARL = 1101003195; // Folly's Clasp - Gold SCAR-L
	}
#pragma endregion
	/////////////////////AUG/////////////////////
#pragma region AUG


	if (Setting::Skins::AUG::skin == 0)
	{
		AUG = 10100600; // Wandering Circus - AUG
	}
	if (Setting::Skins::AUG::skin == 1)
	{
		AUG = 1101006033; // Wandering Circus - AUG
	}
	if (Setting::Skins::AUG::skin == 2)
	{
		AUG = 1101006044; // Evangelion 4th Angel - AUG
	}
	if (Setting::Skins::AUG::skin == 3)
	{


		AUGscopxHolo = 1010060562;
		AUGscopxRed = 1010060561;
		AUGscopx2 = 1010060554;
		AUGscopx3 = 1010060553;
		AUGscopx4 = 1010060552;
		AUGscopx6 = 1010060551;
		AUGMage = 1010060563;
		AUGFast = 1010060564;
		AUGExtraFast = 1010060571;
		AUGAngled = 1010060581;
		AUGThumb = 1010060582;
		AUGVertical = 1010060583;
		AUGLight = 1010060591;
		AUGHalf = 1010060592;
		AUGLaser = 1010060584;
		AUGCanted = 1010060593;

		AUG = 1101006062; // Forsaken Glace - AUG
	}
#pragma endregion
	/////////////////////QBZ/////////////////////
#pragma region QBZ


	if (Setting::Skins::QBZ::skin == 0)
	{
		QBZ = 10100700; // Dazzling Sun - QBZ
	}
	if (Setting::Skins::QBZ::skin == 1)
	{
		QBZ = 1101007025; // Dazzling Sun - QBZ
	}
	if (Setting::Skins::QBZ::skin == 2)
	{
		QBZ = 1101007036; // Fatal Strike - QBZ
	}
	if (Setting::Skins::QBZ::skin == 3)
	{

		QBZscopxHolo = 1010070406;
		QBZscopxRed = 1010070405;
		QBZscopx2 = 1010070404;
		QBZscopx3 = 1010070403;
		QBZscopx4 = 1010070402;
		QBZscopx6 = 203015;
		QBZMage = 1010070407;
		QBZFast = 1010070408;
		QBZExtraFast = 1010070409;
		QBZAngled = 1010070415;
		QBZThumb = 1010070416;
		QBZVertical = 1010070417;
		QBZLight = 202004;
		QBZHalf = 202005;
		QBZLaser = 202007;
		QBZCanted = 203018;
		QBZ = 1101007046; // Nether Phantom - QBZ
	}
#pragma endregion
	/////////////////////M16A4/////////////////////
#pragma region M16A4



	if (Setting::Skins::M16A4::skin == 0)
	{
		M16A4 = 10100200; // Blood & Bones - M16A4
	}
	if (Setting::Skins::M16A4::skin == 1)
	{
		M16A4 = 1101002029; // Blood & Bones - M16A4
	}
	if (Setting::Skins::M16A4::skin == 2)
	{
		M16A4 = 1101002056; // Aurora Pulse - M16A4
	}
	if (Setting::Skins::M16A4::skin == 3)
	{
		M16A4 = 1101002068; // Radiant Edge - M16A4
	}
	if (Setting::Skins::M16A4::skin == 4)
	{
		M16scopxHolo = 1010020759;
		M16scopxRed = 1010020758;
		M16scopx2 = 1010020757;
		M16scopx3 = 1010020756;
		M16scopx4 = 1010020755;
		M16scopx6 = 203015;
		M16Mage = 1010020760;
		M16Fast = 1010020766;
		M16ExtraFast = 1010020767;
		M162stock = 1010020775;


		M16A4 = 1101002081; // Skeletal Core - M16A4
	}
	if (Setting::Skins::M16A4::skin == 5)
	{
		M16A4 = 1101002103; // Dracoguard - M16A4
	}
	if (Setting::Skins::M16A4::skin == 6)
	{
		M16A4 = 1101002110; // Sweetheart Surge - M16A4
	}
#pragma endregion
	/////////////////////M16A4/////////////////////
	if (Setting::Skins::Honey::skin == 0)
	{
		Honey = 10101200; // Vivid Glare - Honey Badger
	}
	if (Setting::Skins::Honey::skin == 1)
	{
		Honey = 1101012009; // Vivid Glare - Honey Badger
	}
///
#pragma endregion
#pragma region Smg


	////////////////////UMP//////////////
#pragma region UMP


	if (Setting::Skins::UMP::skin == 0)
	{
		UMPLscopxRed = 1020021307;
		UMPLscopxHolo = 1020021306;
		UMPLscopx2 = 1020021305;
		UMPLscopx3 = 1020021304;
		UMPLscopx4 = 1020021303;
		UMPLscopx6 = 1020021302;
		UMPLMage = 1020021308;
		UMPLFast = 1020021309;
		UMPLExtraFast = 1020021312;
		UMPLAngled = 1020021316;
		UMPLThumb = 1020021317;
		UMPLVertical = 1020021318;
		UMPLLight = 1020021323;
		UMPLHalf = 1020021324;
		UMPLLaser = 1020021322;
		UMPLCanted = 1020021325;

		UMP = 10200200; //  Cryofrost Shard - UMP45
	}
	if (Setting::Skins::UMP::skin == 1)
	{
		UMPLscopxRed = 1020021307;
		UMPLscopxHolo = 1020021306;
		UMPLscopx2 = 1020021305;
		UMPLscopx3 = 1020021304;
		UMPLscopx4 = 1020021303;
		UMPLscopx6 = 1020021302;
		UMPLMage = 1020021308;
		UMPLFast = 1020021309;
		UMPLExtraFast = 1020021312;
		UMPLAngled = 1020021316;
		UMPLThumb = 1020021317;
		UMPLVertical = 1020021318;
		UMPLLight = 1020021323;
		UMPLHalf = 1020021324;
		UMPLLaser = 1020021322;
		UMPLCanted = 1020021325;

		UMP = 1102002136; //  Cryofrost Shard - UMP45
	}
	if (Setting::Skins::UMP::skin == 2)
	{
		UMPLscopxRed = 1020020559;
		UMPLscopxHolo = 1020020558;
		UMPLscopx2 = 1020020557;
		UMPLscopx3 = 1020020556;
		UMPLscopx4 = 1020020555;
		UMPLscopx6 = 203015;
		UMPLMage = 1020020562;
		UMPLFast = 1020020563;
		UMPLExtraFast = 1020020564;
		UMPLAngled = 1020020567;
		UMPLThumb = 1020020566;
		UMPLVertical = 1020020565;
		UMPLLight = 202004;
		UMPLHalf = 202005;
		UMPLLaser = 202007;
		UMPLCanted = 203018;

		UMP = 1102002043; // Dragonfire - UMP45
	}
	if (Setting::Skins::UMP::skin == 3)
	{
		UMP = 1102002053; //  EMP - UMP45
	}
	if (Setting::Skins::UMP::skin == 4)
	{
		UMP = 1102002061; //  Outlawed Fantasy - UMP45
	}
	if (Setting::Skins::UMP::skin == 5)
	{
		UMP = 1102002070; //  Platinum Ripper - UMP45
	}
	if (Setting::Skins::UMP::skin == 6)
	{
		UMP = 1102002090; //  8-Bit Blast - UMP45
	}
	if (Setting::Skins::UMP::skin == 7)
	{
		UMP = 1102002112; //  Xmas Holiday - UMP45
	}
	if (Setting::Skins::UMP::skin == 8)
	{
		UMP = 1102002117; //  Rainbow Stinger - UMP45
	}
	if (Setting::Skins::UMP::skin == 9)
	{
		UMP = 1102002124; //  Marine Evolution
	}
	if (Setting::Skins::UMP::skin == 10)
	{
		UMP = 1102002129; //  Carnival Waves - UMP45
	}
#pragma endregion
	////////////////////UZI//////////////
	if (Setting::Skins::UZI::skin == 0)
	{
		UZI = 10200100; //  Savagery - UZI
	}
	if (Setting::Skins::UZI::skin == 1)
	{
		UZI = 1102001024; //  Savagery - UZI
	}
	if (Setting::Skins::UZI::skin == 2)
	{
		UZI = 1102001036; //  Ethereal Emblem - UZI
	}
	if (Setting::Skins::UZI::skin == 3)
	{
		UZI = 1102001058; //  Romantic Moments - UZI
	}
	if (Setting::Skins::UZI::skin == 4)
	{
		UZI = 1102001069; //  Shimmer Power - UZI
	}
	if (Setting::Skins::UZI::skin == 5)
	{
		UZI = 1102001089; //  Mystech - UZI
	}
	if (Setting::Skins::UZI::skin == 6)
	{
		UZI = 1102001102; //  Juicer - UZI
	}
	if (Setting::Skins::UZI::skin == 7)
	{
		UZI = 1102001103; //  Citrus Bliss - UZI
	}
	
	if (Setting::Skins::P90::skin == 0)
	{
		P90 = 102105; //  Savagery - UZI
	}	
	if (Setting::Skins::P90::skin == 1)
	{
		P90 = 1102105001; //  Savagery - UZI
	}
	if (Setting::Skins::P90::skin == 2)
	{
		P90 = 1102105002; //  Ethereal Emblem - UZI
	}
	if (Setting::Skins::P90::skin == 3)
	{
		P90 = 1102105003; //  Romantic Moments - UZI
	}
	if (Setting::Skins::P90::skin == 4)
	{
		P90 = 1102105004; //  Shimmer Power - UZI
	}
	if (Setting::Skins::P90::skin == 5)
	{
		P90 = 1102105005; //  Mystech - UZI
	}
	////////////////////Thompson//////////////
	if (Setting::Skins::Thome::skin == 0)
	{
		Thompson = 10200400; //  Candy Cane - Thompson SMG
	}
	if (Setting::Skins::Thome::skin == 1)
	{
		Thompson = 1102004018; //  Candy Cane - Thompson SMG
	}
	if (Setting::Skins::Thome::skin == 2)
	{
		Thompson = 1102004034; //  Steampunk - Thompson SMG
	}
	////////////////////Bizon//////////////
	if (Setting::Skins::Pithon::skin == 0)
	{
		Bizon = 10200500; //  Blazing Chameleon - PP-19 Bizon
	}
	if (Setting::Skins::Pithon::skin == 1)
	{
		Bizon = 1102005007; //  Blazing Chameleon - PP-19 Bizon
	}
	if (Setting::Skins::Pithon::skin == 2)
	{
		Bizon = 1102005020; //  Skullcrusher - PP-19 Bizon
	}
	if (Setting::Skins::Pithon::skin == 3)
	{
		Bizon = 1102005041; //  Soldier Soul - PP-19 Bizon
	}
	////////////////////Vector//////////////
	if (Setting::Skins::Vctor::skin == 0)
	{
		VectorscopxRed = 1020030748;
		VectorscopxHolo = 1020030747;
		Vectorscopx2 = 1020030746;
		Vectorscopx3 = 1020030745;
		Vectorscopx4 = 1020030744;
		Vectorscopx6 = 1020030764;
		VectorMage = 1020030749;
		VectorFast = 1020030750;
		VectorExtraFast = 1020030754;
		VectorAngled = 202001;
		VectorThumb = 202006;
		VectorVertical = 1020030760;
		VectorLight = 1020030759;
		VectorHalf = 1020030757;
		VectorLaser = 202007;
		VectorCanted = 203018;
		Vectorstock = 1020030765;
		Vector = 10200300; //  Mecha Drake - Vector
	}
	if (Setting::Skins::Vctor::skin == 1)
	{
		VectorscopxRed = 1020030748;
		VectorscopxHolo = 1020030747;
		Vectorscopx2 = 1020030746;
		Vectorscopx3 = 1020030745;
		Vectorscopx4 = 1020030744;
		Vectorscopx6 = 1020030764;
		VectorMage = 1020030749;
		VectorFast = 1020030750;
		VectorExtraFast = 1020030754;
		VectorAngled = 202001;
		VectorThumb = 202006;
		VectorVertical = 1020030760;
		VectorLight = 1020030759;
		VectorHalf = 1020030757;
		VectorLaser = 202007;
		VectorCanted = 203018;
		Vectorstock = 1020030765;
		Vector = 1102003080; //  Mecha Drake - Vector
	}
	if (Setting::Skins::Vctor::skin == 2)
	{
		Vector = 1102003020; //  Blood Tooth - Vector
	}
	if (Setting::Skins::Vctor::skin == 3)
	{
		Vector = 1102003031; //  Midnight Rose - Vector
	}
	if (Setting::Skins::Vctor::skin == 4)
	{
		Vector = 1102003039; //  Cute Baddie - Vector
	}
	if (Setting::Skins::Vctor::skin == 5)
	{
		Vector = 1102003052; //  Golden Earl - Vector
	}
	if (Setting::Skins::Vctor::skin == 6)
	{
		Vector = 1102003065; //  Gilded Reaper - Vector
	}
	if (Setting::Skins::Vctor::skin == 7)
	{
		Vector = 1102003072; //  Ultimate Predator - Vector
	}
#pragma endregion
#pragma region Snipers


	////////////////////AWM//////////////
	if (Setting::Skins::AWM::skin == 0)
	{
		AWM = 10300300; //  Mauve Avenger - AWM
	}
	if (Setting::Skins::AWM::skin == 1)
	{
		AWM = 1103003022; //  Mauve Avenger - AWM
	}
	if (Setting::Skins::AWM::skin == 2)
	{
		AWM = 1103003030; //  Field Commander - AWM
	}
	if (Setting::Skins::AWM::skin == 3)
	{
		AWM = 1103003042; //  Godzilla - AWM
	}
	if (Setting::Skins::AWM::skin == 4)
	{
		AWM = 1103003051; //  Rainbow Drake - AWM
	}
	if (Setting::Skins::AWM::skin == 5)
	{
		AWM = 1103003062; //  Flamewave - AWM
	}
	if (Setting::Skins::AWM::skin == 6)
	{
		AWM = 1103003087; //  Serpengleam - AWM
	}
	////////////////////M24//////////////
	if (Setting::Skins::M24::skin == 0)
	{
		M24 = 10300200; //  The Seven Seas - M24
	}
	if (Setting::Skins::M24::skin == 1)
	{
		M24 = 1103002018; //  The Seven Seas - M24
	}
	if (Setting::Skins::M24::skin == 2)
	{
		M24 = 1103002030; //  Pharaoh's Might - M24
	}
	if (Setting::Skins::M24::skin == 3)
	{
		M24 = 1103002047; //  Killer Tune - M24
	}
	if (Setting::Skins::M24::skin == 4)
	{
		M24 = 1103002049; //  Lady Butterfly - M24
	}
	if (Setting::Skins::M24::skin == 5)
	{
		M24 = 1103002059; //  Circle of Life - M24
	}
	if (Setting::Skins::M24::skin == 6)
	{
		M24 = 1103002087; //  Cadence Maestro - M24
	}
	////////////////////kar//////////////
	if (Setting::Skins::kar::skin == 0)
	{
		kar = 10300100; //  Terror Fang - Kar98K
	}
	if (Setting::Skins::kar::skin == 1)
	{
		kar = 1103001060; //  Terror Fang - Kar98K
	}
	if (Setting::Skins::kar::skin == 2)
	{
		kar = 1103001079; //  Kukulkan Fury - Kar98K
	}
	if (Setting::Skins::kar::skin == 3)
	{
		kar = 1103001085; //  Night of Rock - Kar98K
	}
	if (Setting::Skins::kar::skin == 4)
	{
		kar = 1103001101; //  Moonlit Grace - Kar98K
	}
	if (Setting::Skins::kar::skin == 5)
	{
		kar = 1103001129; //  Gackt Moon - Kar98K
	}
	if (Setting::Skins::kar::skin == 6)
	{
		kar = 1103001146; //  Titanium Shark - Kar98K
	}
	if (Setting::Skins::kar::skin == 7)
	{
		kar = 1103001154; //  Lethal Code - Kar98K
	}
	if (Setting::Skins::kar::skin == 8)
	{
		kar = 1103001160; //  Nebula Hunter - Kar98K
	}
	if (Setting::Skins::kar::skin == 9)
	{
		kar = 1103001179; //  Violet Volt - Kar98K
	}
	////////////////////AMR//////////////
	if (Setting::Skins::AMR::skin == 0)
	{
		AMR = 10301200; //  Crimson Ephialtes - AMR
	}
	if (Setting::Skins::AMR::skin == 1)
	{
		AMR = 1103012010; //  Crimson Ephialtes - AMR
	}
	////////////////////AMR//////////////
	if (Setting::Skins::SKS::skin == 0)
	{
		SKS = 10300400; //  Lady Carmine - SKS
	}
	if (Setting::Skins::SKS::skin == 1)
	{
		SKS = 1103004037; //  Lady Carmine - SKS
	}
	if (Setting::Skins::SKS::skin == 2)
	{
		SKS = 1103004046; //  Metal Medley - SKS
	}
	if (Setting::Skins::SKS::skin == 3)
	{
		SKS = 1103004058; //  Snowcapped Berg - SKS
	}
	////////////////////SLR//////////////
	if (Setting::Skins::SLR::skin == 0)
	{
		SLR = SLR; //  Falling Blossom - SLR
	}
	if (Setting::Skins::SLR::skin == 1)
	{
		SLR = 1103009022; //  Falling Blossom - SLR
	}
	if (Setting::Skins::SLR::skin == 2)
	{
		SLR = 1103009037; //  Mageblaze - SLR
	}
	////////////////////VSS//////////////
	if (Setting::Skins::VSS::skin == 0)
	{
		VSS = 10300500; //  Crow - VSS
	}
	if (Setting::Skins::VSS::skin == 1)
	{
		VSS = 1103005024; //  Crow - VSS
	}
	////////////////////Mini14//////////////
	if (Setting::Skins::Mini14::skin == 0)
	{
		Mini14 = 10300600; //  Icicle - Mini14
	}
	if (Setting::Skins::Mini14::skin == 1)
	{
		Mini14 = 1103006030; //  Icicle - Mini14
	}
	if (Setting::Skins::Mini14::skin == 2)
	{
		Mini14 = 1103006046; //  Ethereal Beauty - Mini14
	}
	if (Setting::Skins::Mini14::skin == 3)
	{
		Mini14 = 1103006058; //  Fortune Cat - Mini14
	}
	////////////////////Mk14//////////////
	if (Setting::Skins::Mk14::skin == 0)
	{
		Mk14 = 10300700; //  Drakreign - Mk14
	}
	if (Setting::Skins::Mk14::skin == 1)
	{
		Mk14 = 1103007028; //  Drakreign - Mk14
	}
	if (Setting::Skins::Mk14::skin == 2)
	{
		Mk14 = 1103007020; //  Gilded Galaxy - Mk14
	}
	////////////////////Mk12//////////////
	if (Setting::Skins::Mk12::skin == 0)
	{
		Mk12 = 1103100007; //  Precise Predator - Mk12
	}
	if (Setting::Skins::Mk12::skin == 0)
	{
		Mk12 = 1103100007; //  Precise Predator - Mk12
	}


#pragma endregion
#pragma region LMG
	////////////////////MG3//////////////
	if (Setting::Skins::MG3::skin == 0)
	{
		MG3 = 105010; //  Soaring Dragon - MG3
	}
	if (Setting::Skins::MG3::skin == 1)
	{
		MG3 = 1105010008; //  Soaring Dragon - MG3
	}
	////////////////////DP28//////////////
	if (Setting::Skins::DP28::skin == 0)
	{
		DP28 = 1105002018; //  Enigmatic Hunter - DP-28
	}
	if (Setting::Skins::DP28::skin == 1)
	{
		DP28 = 1105002035; //  Gilded Jade Dragon - DP-28
	}
	if (Setting::Skins::DP28::skin == 2)
	{
		DP28 = 1105002063; //  Shenron - DP-28
	}
	////////////////////M249//////////////
	if (Setting::Skins::M249::skin == 0)
	{
		M249 = 10500100; //  Party Parcel - M249
	}
	if (Setting::Skins::M249::skin == 1)
	{
		M249 = 1105001034; //  Party Parcel - M249
	}
	if (Setting::Skins::M249::skin == 2)
	{
		M249 = 1105001048; //  Moondrop Eterna - M249
	}
	if (Setting::Skins::M249::skin == 3)
	{
		M249 = 1105001054; //  Stargaze Fury - M249
	}


#pragma endregion
#pragma region DBS

	/////////////////////DBS/////////////////////
	if (Setting::Skins::DBS::skin == 0)
	{
		DBS = 104004;
	}
	if (Setting::Skins::DBS::skin == 1)
	{
		DBS = 1104004024; // Panthera Prime - DBS
	}
	if (Setting::Skins::DBS::skin == 2)
	{
		DBS = 1104004013;
	}
	if (Setting::Skins::DBS::skin == 3)
	{
		DBS = 1104004015;
	}
	
	if (Setting::Skins::S1897::skin == 0)
	{
		S1897 = 104002;
	}
	if (Setting::Skins::S1897::skin == 1)
	{
		S1897 = 1104002022;
	}
	if (Setting::Skins::S1897::skin == 2)
	{
		S1897 = 1104002025;
	}
	if (Setting::Skins::S1897::skin == 3)
	{
		S1897 = 1104002003;
	}	
	if (Setting::Skins::S1897::skin == 4)
	{
		S1897 = 1104002015;
	}
	
	if (Setting::Skins::S686::skin == 0)
	{
		S686 = 104001;
	}
	if (Setting::Skins::S686::skin == 1)
	{
		S686 = 1104001022;
	}
	if (Setting::Skins::S686::skin == 2)
	{
		S686 = 1104001019;
	}
	if (Setting::Skins::S686::skin == 3)
	{
		S686 = 1104001027;
	}	
	if (Setting::Skins::S686::skin == 4)
	{
		S686 = 1104001029;
	}	
	
	if (Setting::Skins::S12K::skin == 0)
	{
		S12K = 104003;
	}
	if (Setting::Skins::S12K::skin == 1)
	{
		S12K = 1104003026;
	}
	if (Setting::Skins::S12K::skin == 2)
	{
		S12K = 1104003019;
	}
	if (Setting::Skins::S12K::skin == 3)
	{
		S12K = 1104003015;
	}	
	if (Setting::Skins::S12K::skin == 4)
	{
		S12K = 1104003005;
	}

#pragma endregion
#pragma region Skorpion


	/////////////////////Skorpion/////////////////////
	if (Setting::Skins::Skorpion::skin == 0)
	{
		Skorpion = 106008; // Golden Cipher - Skorpion
	}
	if (Setting::Skins::Skorpion::skin == 1)
	{
		Skorpion = 1106008013; // Golden Cipher - Skorpion
	}

#pragma endregion
#pragma region Pan
	/////////////////////m416/////////////////////
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004125; // Honeypot - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004145; // Night of Rock - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004160; // Crocodile - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004283; // Accolade - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004337; // Break Pad - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004356; // Chicken Hot - Pan
	//}
	//if (Setting::Skins::Pan::skin == 0)
	//{
	//	Pan = 1108004365; // Faerie Luster - Pan
	//}


#pragma endregion
#pragma region Backpacks


	if (Setting::Backpack::Backpack3 == 0)
	{
		Backpack1 = 1501001179; //Wraith Lord Backpack (Lv. 3)
		Backpack2 = 1501002179; //Wraith Lord Backpack (Lv. 3)
		Backpack3 = 1501003179; //Wraith Lord Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 1)
	{
		Backpack1 = 1501001051; //The Fool Backpack (Lv. 3)
		Backpack2 = 1501002051; //The Fool Backpack (Lv. 3)
		Backpack3 = 1501003051; //The Fool Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 2)
	{
		Backpack1 = 1501001277; //Godzilla Backpack (Lv. 3)
		Backpack2 = 1501002277; //Godzilla Backpack (Lv. 3)
		Backpack3 = 1501003277; //Godzilla Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 3)
	{
		Backpack1 = 1501001471; //Aquatic Fury Backpack (Lv. 3)
		Backpack2 = 1501002471; //Aquatic Fury Backpack (Lv. 3)
		Backpack3 = 1501003471; //Aquatic Fury Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 4)
	{
		Backpack1 = 1501001047; //Butterfly Wings Backpack (Lv. 3)
		Backpack2 = 1501002047; //Butterfly Wings Backpack (Lv. 3)
		Backpack3 = 1501003047; //Butterfly Wings Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 5)
	{
		Backpack1 = 1501001093; //Arctic Witch Backpack (Lv. 3)
		Backpack2 = 1501002093; //Arctic Witch Backpack (Lv. 3)
		Backpack3 = 1501003093; //Arctic Witch Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 6)
	{
		Backpack1 = 1501001537; //Boxerbolt Backpack (Lv. 3)
		Backpack2 = 1501002537; //Boxerbolt Backpack (Lv. 3)
		Backpack3 = 1501003537; //Boxerbolt Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 7)
	{
		Backpack1 = 1501001100; //Blood Lotus Backpack (Lv. 3)
		Backpack2 = 1501002100; //Blood Lotus Backpack (Lv. 3)
		Backpack3 = 1501003100; //Blood Lotus Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 8)
	{
		Backpack1 = 1501001086; //Blood Rain Backpack (Lv. 3)
		Backpack2 = 1501002086; //Blood Rain Backpack (Lv. 3)
		Backpack3 = 1501003086; //Blood Rain Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 9)
	{
		Backpack1 = 1501001143; //Dazzling Youth Backpack (Lv. 3)
		Backpack2 = 1501002143; //Dazzling Youth Backpack (Lv. 3)
		Backpack3 = 1501003143; //Dazzling Youth Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 10)
	{
		Backpack1 = 1501001133; //Bloodthirsty Joker Backpack (Lv. 3)
		Backpack2 = 1501002133; //Bloodthirsty Joker Backpack (Lv. 3)
		Backpack3 = 1501003133; //Bloodthirsty Joker Backpack (Lv. 3)
	}
	if (Setting::Backpack::Backpack3 == 11)
	{
		Backpack1 = 1501001022; //Trickster
		Backpack2 = 1501002022; //Trickster
		Backpack3 = 1501003022; //Trickster
	}
	if (Setting::Backpack::Backpack3 == 12)
	{
		Backpack1 = 1501001549; //Foxy Flare
		Backpack2 = 1501002549; //Foxy Flare
		Backpack3 = 1501003549; //Foxy Flare
	}

#pragma endregion
#pragma region helmets
	if (Setting::helmet::helmets3 == 0)
	{
		helmet1 = 1502001242; //GacktMoon Godzilla-Mecha
		helmets2 = 1502002242; //GacktMoon Godzilla-Mecha
		helmets3 = 1502003242; //GacktMoon Godzilla-Mecha
	}
	if (Setting::helmet::helmets3 == 1)
	{
		helmet1 = 1502001244; //Urban Ghost
		helmets2 = 1502002244; //Urban Ghost
		helmets3 = 1502003244; //Urban Ghost
	}
	if (Setting::helmet::helmets3 == 2)
	{
		helmet1 = 1502001183; //Godzilla Helmet (Lv. 3)

		helmets2 = 1502002183; //Godzilla Helmet (Lv. 3)
		helmets3 = 1502003183; //Godzilla Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 3)
	{
		helmet1 = 1502001069; //Masked Psychic Helmet
		helmets2 = 1502002069; //Masked Psychic Helmet
		helmets3 = 1502003069; //Masked Psychic Helmet
	}
	if (Setting::helmet::helmets3 == 4)
	{
		helmet1 = 1502001335; //Minimalist Tech Helmet (Lv. 3)
		helmets2 = 1502002335; //Minimalist Tech Helmet (Lv. 3)
		helmets3 = 1502003335; //Minimalist Tech Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 5)
	{
		helmet1 = 1502001039; //Dragonling Helmet (Lv. 3)
		helmets2 = 1502002039; //Dragonling Helmet (Lv. 3)
		helmets3 = 1502003039; //Dragonling Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 6)
	{
		helmet1 = 1502001172; //Woolly Dragon Helmet (Lv. 3)
		helmets2 = 1502002172; //Woolly Dragon Helmet (Lv. 3)
		helmets3 = 1502003172; //Woolly Dragon Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 7)
	{
		helmet1 = 1502001336; //Dragon Guard Helmet (Lv. 3)
		helmets2 = 1502002336; //Dragon Guard Helmet (Lv. 3)
		helmets3 = 1502003336; //Dragon Guard Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 8)
	{
		helmet1 = 1502001092; //Sky Barrier Helmet (Lv. 3)
		helmets2 = 1502002092; //Sky Barrier Helmet (Lv. 2)
		helmets3 = 1502003092; //Sky Barrier Helmet (Lv. 3)
	}
	if (Setting::helmet::helmets3 == 9)
	{
		helmet1 = 1502003014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
		helmets2 = 1502002014; //Inferno Rider Helmet (Lv. 2) //Pharaoh
		helmets3 = 1502003014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
	}
#pragma endregion
}
void WeaponSkin(DWORD add)
{
	skins();
	if (add)
	{
		uintptr_t o = static_cast<uintptr_t>(add) + 0x11C;  // 0xa4  //0x45 // soket // 0x7c
		switch (Utility::ReadMemoryEx<int>(o))
		{
			///////////////////AR/////////////////////////////////

		case 101004: Utility::WriteMemoryEx<int>(o, M416); break;//M416
		case 101005: Utility::WriteMemoryEx<int>(o, GROZA); break;//Eventide Aria - GROZA
		case 101006: Utility::WriteMemoryEx<int>(o, AUG); break;//Forsaken Glace - AUG
		case 101001: Utility::WriteMemoryEx<int>(o, AKM); break; //AKM
		case 101003: Utility::WriteMemoryEx<int>(o, SCARL); break;//Bloodstained Nemesis - SCAR-L
		case 101008: Utility::WriteMemoryEx<int>(o, M762); break;//M762
		case 101007: Utility::WriteMemoryEx<int>(o, QBZ); break;//Nether Phantom - QBZ
		case 101102: Utility::WriteMemoryEx<int>(o, ACE32); break;//ACE32
		case 101002: Utility::WriteMemoryEx<int>(o, M16A4); break;//Aurora Pulse - M16A4
		case 101012: Utility::WriteMemoryEx<int>(o, Honey); break;//Honey Badger
			///////////////////////////////////////////////////////////////
		case 102002: Utility::WriteMemoryEx<int>(o, UMP); break;//Rainbow Stinger - UMP45
		case 102004: Utility::WriteMemoryEx<int>(o, Thompson); break;//candy cane - Thompson
		case 102005: Utility::WriteMemoryEx<int>(o, Bizon); break;//Soldier Soul - PP-19 Bizon
		case 102003: Utility::WriteMemoryEx<int>(o, Vector); break;//Mecha Drake - Vecto 
		case 102001: Utility::WriteMemoryEx<int>(o, UZI); break;//Juicer - UZI
		case 102105: Utility::WriteMemoryEx<int>(o, P90); break;//Juicer - UZI
			///////////////////////////////////////////////////////////////
		case 105010: Utility::WriteMemoryEx<int>(o, MG3); break;//Soaring Dragon - MG3
		case 105002: Utility::WriteMemoryEx<int>(o, DP28); break;//Gilded Jade Dragon - DP28
		case 105001: Utility::WriteMemoryEx<int>(o, M249); break;//Moondrop Eterna - M249
			///////////////////////////////////////////////////////////////
		case 103001: Utility::WriteMemoryEx<int>(o, kar); break;//Violet Volt - Kar98K
		case 103003: Utility::WriteMemoryEx<int>(o, AWM); break;//Godzilla - AWM
		case 103002: Utility::WriteMemoryEx<int>(o, M24); break;//Cadence Maestro - M24
		case 103012: Utility::WriteMemoryEx<int>(o, AMR); break;//Crimson Ephialtes - AMR
		case 103004: Utility::WriteMemoryEx<int>(o, SKS); break;//Snowcapped Berg - SKS
		case 103005: Utility::WriteMemoryEx<int>(o, VSS); break;//Crow - VSS
		case 103006: Utility::WriteMemoryEx<int>(o, Mini14); break;//Icicle - Mini14
		case 103007: Utility::WriteMemoryEx<int>(o, Mk14); break;//Gilded Galaxy - Mk14
		case 103009: Utility::WriteMemoryEx<int>(o, SLR); break;//Falling Blossom - SLR
		case 103100: Utility::WriteMemoryEx<int>(o, Mk12); break;//Precise Predator - Mk12
			///////////////////////////////////////////////////////////////////////////
		case 104004: Utility::WriteMemoryEx<int>(o, DBS); break;//Panthera Prime - DBS
		case 104002: Utility::WriteMemoryEx<int>(o, S1897); break;//Panthera Prime - DBS
		case 104001: Utility::WriteMemoryEx<int>(o, S686); break;//Panthera Prime - DBS
		case 104003: Utility::WriteMemoryEx<int>(o, S12K); break;//Panthera Prime - DBS
		case 106008: Utility::WriteMemoryEx<int>(o, Skorpion); break;//Golden Cipher - Skorpion
			//////////////////////Male/////////////////////////////////////////////////
		case 108004: Utility::WriteMemoryEx<int>(o, Pan); break;//Golden Cipher - Skorpion
			///////////////////////////////////////////////////////////////////////////
			//case 602004: Utility::WriteMemoryEx<int>(o, 612004164); break;//Shinobi Kami Grenade
			//case 602003: Utility::WriteMemoryEx<int>(o, 615004050); break;//Shinobi Kami Molotov Cocktail
			///////////////////////////////////////////////////////////////////////////
		}
	}
}
void HELMETSkin(DWORD add)
{
	skins();
	if (add)
	{
		uintptr_t o = static_cast<uintptr_t>(add) + 0x1F8;  // 0xa4  //0x45 // soket // 0x7c
		switch (Utility::ReadMemoryEx<int>(o))
		{
		case 502001: Utility::WriteMemoryEx<int>(o, helmet1); break;//helmet1
		case 502002: Utility::WriteMemoryEx<int>(o, helmets2); break;//helmets2
		case 502003: Utility::WriteMemoryEx<int>(o, helmets3); break;//helmets3
		case 502004: Utility::WriteMemoryEx<int>(o, helmet1); break;//helmet1
		case 502005: Utility::WriteMemoryEx<int>(o, helmets2); break;//helmets2
		case 502114: Utility::WriteMemoryEx<int>(o, helmet1); break;//helmet1
		case 502115: Utility::WriteMemoryEx<int>(o, helmets2); break;//helmets2
		case 502116: Utility::WriteMemoryEx<int>(o, helmets3); break;//helmets3
		}
	}
}
void BackPackSkin(DWORD add)
{
	skins();
	if (add)
	{
		uintptr_t o = static_cast<uintptr_t>(add) + 0x1C0;  // 0xa4  //0x45 // soket // 0x7c
		switch (Utility::ReadMemoryEx<int>(o))
		{
		case 501001: Utility::WriteMemoryEx<int>(o, Backpack1); break;//Backpack1
		case 501002: Utility::WriteMemoryEx<int>(o, Backpack2); break;//Backpack2
		case 501003: Utility::WriteMemoryEx<int>(o, Backpack3); break;//Backpack3

		case 501004: Utility::WriteMemoryEx<int>(o, Backpack1); break;//Backpack1
		case 501005: Utility::WriteMemoryEx<int>(o, Backpack2); break;//Backpack2
		case 501006: Utility::WriteMemoryEx<int>(o, Backpack3); break;//Backpack3

		case 501007: Utility::WriteMemoryEx<int>(o, Backpack1); break;//Backpack1
		case 501008: Utility::WriteMemoryEx<int>(o, Backpack2); break;//Backpack2
		case 501009: Utility::WriteMemoryEx<int>(o, Backpack3); break;//Backpack3

		case 501010: Utility::WriteMemoryEx<int>(o, Backpack1); break;//Backpack1
		case 501011: Utility::WriteMemoryEx<int>(o, Backpack2); break;//Backpack2
		case 501012: Utility::WriteMemoryEx<int>(o, Backpack3); break;//Backpack3

		case 501015: Utility::WriteMemoryEx<int>(o, Backpack3); break;//Backpack3
		}
	}
}

BYTE MagicBulletShell[60] = {
0xC7, 0x45, 0x78, 0x00, 0x00, 0x00, 0x00,
    0x83, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x74, 0x0E,
    0x60,
    0x8B, 0x5D, 0x50,
    0x8B, 0x53, 0x18,
    0x8A, 0x02,
    0x3C, 0x88,   // Need update
    0x74, 0x02,
    0x61,
    0xC3,
    0x8A, 0x42, 0x01,
    0x3C, 0x94,                                              // Need update
    0x75, 0x14,
    0xC7, 0x83, 0x80, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC7, 0x83, 0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xEB, 0xE1                                                     // jmp 0000001D                                                 // jmp 0000001D
};
BYTE RealByteCode[7];

// 0x66 , 0x0F , 0x7E, 0xBE , 0x38, 0x02 , 0x00 , 0x00 , 0xC7 , 0x45 , 0x68 , 0x48 
//66 0F 7E ? ? 38 02 00 00 C7 45 78 48
BYTE BackupSeach[] = { 0xE8, '?', '?', '?', '?', 0x90, 0x90 }; // Need update
BYTE MagicBulletSearch1[] = { 0x66, 0x0F, 0x7E, '?', 0x80, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78, 0xC0 }; // Need update
BYTE MagicBulletSearch2[] = { 0x66, 0x0F, 0x7E, '?', 0x80, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78, 0xC0 }; // Need update

DWORD MagicBulletAddress = 0;
vector<DWORD_PTR> MagicBulletList = {};
INT MagicBulletHook = 0;
bool MemoryThreadEnalbed = false;
bool WeaponCheatsEnabled = false;
bool  Memory::IsMagicInitialized = false;
DWORD FlyCarAddress = 0;
bool IsFlyCarInitialized = false;
bool  Memory::WasBuggedHook = false;




FRotator ToRotator(VECTOR3 local, VECTOR3 target) {
	VECTOR3 rotation = Subtract(local, target);


	FRotator newViewAngle = { 0 };

	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Roll = (float)0.f;

	if (rotation.X >= 0.f)
		newViewAngle.Yaw += 180.0f;

	return newViewAngle;
}

VECTOR3 FRotatorToVector(FRotator ft)
{
	FLOAT angle, sr, sp, sy, cr, cp, cy;

	angle = ft.Yaw * (3.1415926535897f * 2 / 360);
	sy = sin(angle);
	cy = cos(angle);

	angle = ft.Pitch * (3.1415926535897f * 2 / 360);
	sp = sin(angle);
	cp = cos(angle);

	angle = ft.Roll * (3.1415926535897f * 2 / 360);
	sr = sin(angle);
	cr = cos(angle);
	VECTOR3 dd;
	dd.X = cp * cy;
	dd.Y = cp * sy;
	dd.Z = -sp;

	return dd;
}

VECTOR3 MULTIPLYVECT(VECTOR3 ve, float value)
{
	VECTOR3 vec;
	vec.X = ve.X * value;
	vec.Y = ve.Y * value;
	vec.Z = ve.Z * value;
	return vec;

}
VECTOR3 ADDVECTORS(VECTOR3 ve, VECTOR3 ve2)
{
	VECTOR3 vec;
	vec.X = ve.X + ve2.X;
	vec.Y = ve.Y + ve2.Y;
	vec.Z = ve.Z + ve2.Z;
	return vec;

}


void ClampAngles(FRotator& angles) {
	if (angles.Pitch > 180)
		angles.Pitch -= 360;
	if (angles.Pitch < -180)
		angles.Pitch += 360;

	if (angles.Pitch < -75.f)
		angles.Pitch = -75.f;
	else if (angles.Pitch > 75.f)
		angles.Pitch = 75.f;

	while (angles.Yaw < -180.0f)
		angles.Yaw += 360.0f;
	while (angles.Yaw > 180.0f)
		angles.Yaw -= 360.0f;
}
VOID GetMagicAddress()
{
	std::vector<DWORD_PTR> FoundedBase;

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		if (Utility::ReadMemoryEx<BYTE>(FoundedBase[i] + 0xC) == 0x52) // Need update
		{
			MagicBulletList.push_back(FoundedBase[i]);
			MagicBulletAddress = FoundedBase[i];
		}
	}

	FoundedBase.clear();
}

VOID InitializeMagic()
{
	INT Addv = MagicBulletAddress;

	MagicBulletHook = (INT)VirtualAllocEx(Game::hProcess, 0, 500, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}
	if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}

	Utility::WriteMemoryEx<INT>(MagicBulletHook + 9, MagicBulletHook + 0x5E);
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
	WriteProcessMemory(Game::hProcess, (LPVOID)(MagicBulletHook), &RealByteCode, sizeof(RealByteCode), 0);
}

VOID HookCall(INT Address, INT HookAdress)
{
	BYTE Shell[7] = { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0x90 };
	*(INT*)(Shell + 1) = (INT)(HookAdress - Address - 5);
	WriteProcessMemory(Game::hProcess, (LPVOID)Address, &Shell, sizeof(Shell), 0);
}

bool IsEqual(BYTE Array1[], BYTE Array2[])
{
	for (int i = 0; i < 6; i++)
	{
		if (Array1[i] != Array2[i])
		{
			return false;
		}
	}

	return true;
}

bool Hooked(int Address)
{
	unsigned char Tmp[7];
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Address + 0x8), &Tmp, sizeof(Tmp), 0);

	if ((Tmp[0] == 0xE8 && Tmp[5] == 0x90 && Tmp[6] == 0x90))
	{
		return true;
	}

	return false;
}

VOID HookMagic()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		BYTE Tmp[7];
		ReadProcessMemory(Game::hProcess, (LPCVOID)((int)Addv + 0x8), &Tmp, sizeof(Tmp), 0);

		if (IsEqual(Tmp, RealByteCode))
		{
			HookCall((INT)(Addv + 0x8), (INT)MagicBulletHook);
		}
	}
}

VOID Memory::RestoreHook()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		if (Hooked(Addv))
		{
			WriteProcessMemory(Game::hProcess, (LPVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
		}
	}
}

VECTOR3 Subtract(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result;
	Result.X = Src.X - Dst.X;
	Result.Y = Src.Y - Dst.Y;
	Result.Z = Src.Z - Dst.Z;

	return Result;
}

float Magnitude(VECTOR3 Vec)
{
	return sqrtf(Vec.X * Vec.X + Vec.Y * Vec.Y + Vec.Z * Vec.Z);
}

float GetDistance(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result = Subtract(Src, Dst);
	return Magnitude(Result);
}

VECTOR3 NormalizeVec(VECTOR3 Vector)
{
	float Length = Magnitude(Vector);

	Vector.X /= Length;
	Vector.Y /= Length;
	Vector.Z /= Length;

	return Vector;
}
float Distance(VECTOR3 myPos, VECTOR3 enPos)
{
	return sqrt((myPos.X - enPos.X) * (myPos.X - enPos.X) + (myPos.Y - enPos.Y) * (myPos.Y - enPos.Y) + (myPos.Z - enPos.Z) * (myPos.Z - enPos.Z));
}
float BulletDrop(float TravelTime)
{
	return (TravelTime * TravelTime * 980 / 2);
}
bool Fov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius)
{
	VECTOR2 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}


	return false;
}


struct LinearColor
{
	float r;//[Offset: 0x0, Size: 4]
	float g;//[Offset: 0x4, Size: 4]
	float b;//[Offset: 0x8, Size: 4]
	float a;//[Offset: 0xc, Size: 4]
};

LinearColor ToLinerColor(float Input[4]) {
	LinearColor Ouput;
	Ouput.r = Input[0];
	Ouput.g = Input[1];
	Ouput.b = Input[2];
	Ouput.a = Input[3];

	return Ouput;
}

LinearColor RandomColor() {

	//static float x = 0, y = 0;
	//static float r = 0, g = 0, b = 0;

	//if (y >= 0.0f && y < 255.0f) {
	//	r = rand() % 256;
	//	g = 0.0f;
	//	b = x;
	//}
	//else if (y >= 255.0f && y < 510.0f) {
	//	r = rand() % 256 - x;
	//	g = 0.0f;
	//	b = rand() % 256;
	//}
	//else if (y >= 510.0f && y < 765.0f) {
	//	r = 0.0f;
	//	g = x;
	//	b = rand() % 256;
	//}
	//else if (y >= 765.0f && y < 1020.0f) {
	//	r = 0.0f;
	//	g = rand() % 256;
	//	b = rand() % 256 - x;
	//}
	//else if (y >= 1020.0f && y < 1275.0f) {
	//	r = x;
	//	g = rand() % 256;
	//	b = 0.0f;
	//}
	//else if (y >= 1275.0f && y < 1530.0f) {
	//	r = rand() % 256;
	//	g = rand() % 256 - x;
	//	b = 0.0f;
	//}

	//x += 7.0f; //increase this value to switch colors faster
	//if (x >= 255.0f)
	//	x = 0.0f;

	//y += 7.0f; //increase this value to switch colors faster
	//if (y > 1530.0f)
	//	y = 0.0f;

	static float cnt = 0.0f;
	float r = cos(cnt) * .5f + .5f;
	float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
	float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
	if (cnt >= FLT_MAX) {
		cnt = 0.0f;
	}
	else {
		cnt += 0.02f;
	}

	return { (float)r, (float)g, (float)b, 255 };
}

static float Distance2D(VECTOR2 a, VECTOR2 PE_Result)
{
	return sqrt(pow(PE_Result.X - a.X, 2) + pow(PE_Result.Y - a.Y, 2));
}

VECTOR3 GetMagicNoFOV()
{
	VECTOR3 Coordinate;
	Coordinate.X = 0;
	Coordinate.Y = 0;
	Coordinate.Z = 0;


	VECTOR3 EnemyTruePosition;
	EnemyTruePosition.X = 0;
	EnemyTruePosition.Y = 0;
	EnemyTruePosition.Z = 0;
	VECTOR3 Screen;
	Screen.X = 0;
	Screen.Y = 0;
	Screen.Z = 0;

	VECTOR3 Velocity;
	Velocity.X = 0;
	Velocity.Y = 0;
	Velocity.Z = 0;
	FLOAT Dummydistance = 9999.0f;
	FLOAT DistanceBetweenCorssHairAndEnemy = 0;
	INT Distance4 = 0;
	VECTOR3 posi;
	int number = 0;
	AActor TargetActor;
	DWORD TEMp{};
	INT ref;
	VECTOR2 w2s_pos;
	VECTOR2 crosshair = {};
	VECTOR3 SCREENBONELOC;
	INT distnnnnn = 0;
	vector<VECTOR3> Bons;
	FLOAT DummydistanceBONE = 9999.0f;
	FLOAT DistanceBetweenCorssHairAndBONE = 0;
	for (AActor& AActor : Data::AActorList)
	{
		if (Setting::SkipKnocked == true && AActor.Health < 0)
		{
			continue;
		}
		if (Setting::SkipBots == true && AActor.IsBot == true)
		{
			continue;
		}
		if (Setting::AttachOnVisible == true && AActor.Visible == 0)
		{
			continue;
		}
		if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, AActor.Bones.ChestPos, Screen, &Distance4))
		{
			if (Setting::BulletTrackingRange)
			{
				if (Distance4 > Setting::magicrange)
				{
					continue;
				}
			}
			DistanceBetweenCorssHairAndEnemy = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));

			if (DistanceBetweenCorssHairAndEnemy < Dummydistance)
			{
				if (Setting::curraim == 0)
				{
					EnemyTruePosition = AActor.Bones.HeadPos;
					//EnemyTruePosition.Z += Setting::magicv;

				}
				if (Setting::curraim == 1)
				{
					EnemyTruePosition = AActor.Bones.ChestPos;
					EnemyTruePosition.Z += 3;
				}
				if (Setting::curraim == 2)
				{
					EnemyTruePosition = AActor.Bones.PelvisPos;
					EnemyTruePosition.Z += 1;
				}
				if (Setting::AutoAim)
				{
					//		VECTOR3 posarray[] = { AActor.HeadPos, AActor.ChestPos, AActor.PelvisPos, AActor.lSholderPos, AActor.rSholderPos, AActor.lElbowPos, AActor.rElbowPos, AActor.lWristPos, AActor.rWristPos,AActor.lThighPos,AActor.rThighPos,AActor.lKneePos,AActor.rKneePos,AActor.lAnklePos,AActor.rAnklePos };
					//
					//	DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
					//	DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
					//	DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
					//	VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
					//	std::vector<float> _bonearray;
					//	_bonearray.clear();
					//	for (int i = 0; i < 15; i++) {
					//		Algorithm::WorldToScreenBone(Esp::ViewMatrix, posarray[i], w2s_pos, &ref);
					//		float dist = Distance2D(crosshair, w2s_pos);
					//		_bonearray.push_back(dist);
					//	}
					//	float min = _bonearray[0];
					//	int bone_index = 0;
					//	for (int j = 0; j < 15; j++) {
					//		if (_bonearray[j] < min) {
					//			min = _bonearray[j];
					//			bone_index = j;
					//		}
					//	}
					//	if (bone_index == 0)
					//	{
					//		EnemyTruePosition = AActor.HeadPos;
					//		EnemyTruePosition.Z += 7;
					//	}
					//	EnemyTruePosition = posarray[bone_index];

					Bons.emplace_back(Data::TargetActor.Bones.HeadPos);
					Bons.emplace_back(Data::TargetActor.Bones.ChestPos);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTSHOULDER);
					Bons.emplace_back(Data::TargetActor.Bones.PelvisPos);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTSHOULDER);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTELBOWROLL);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTELBOWROLL);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTHAND);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTHAND);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTLEGS);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTLEGS);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTKNEEROLL);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTKNEEROLL);
					Bons.emplace_back(Data::TargetActor.Bones.LEFTFOOT);
					Bons.emplace_back(Data::TargetActor.Bones.RIGHTFOOT);

					for (VECTOR3 BONSPOs : Bons)
					{
						if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, BONSPOs, SCREENBONELOC, &distnnnnn))
						{
							DistanceBetweenCorssHairAndBONE = sqrt(pow(SCREENBONELOC.X - DX11Window::Width / 2, 2) + pow(SCREENBONELOC.Y - DX11Window::Height / 2, 2));

							if (DistanceBetweenCorssHairAndBONE < DummydistanceBONE)
							{
								if (distnnnnn < Setting::magicrange)
								{
									if (BONSPOs == Data::TargetActor.Bones.HeadPos)
									{
										EnemyTruePosition = BONSPOs;
										EnemyTruePosition.Z += Setting::HeadPosZ;
									}
									else if (BONSPOs == Data::TargetActor.Bones.HeadPos)
									{
										EnemyTruePosition = BONSPOs;
										EnemyTruePosition.Z -= 5;
									}
									else
									{
										EnemyTruePosition = BONSPOs;
									}

									DummydistanceBONE = DistanceBetweenCorssHairAndBONE;
								}
								else { continue; }
							}
						}
					}
					Bons.clear();
				}


				Dummydistance = DistanceBetweenCorssHairAndEnemy;
				number++;
				TargetActor = AActor;
				TEMp = AActor.Address;
			}
		}
	}
	if (number == 0) {
		Setting::CurrentTargetAddress = -1;
		VECTOR3 end;
		end.X = 9999.0f;
		end.Y = 9999.0f;
		end.Z = 9999.0f;
		return end;
	}
	else
	{
		Data::TargetActor = TargetActor;

		Data::TargetActor = TargetActor;






		auto curVehicle = Utility::ReadMemoryEx<uint32_t>(Data::TargetActor.Address + Offset::CurrentVehicle); // 0x8e8

		if (curVehicle)
		{
			Data::TargetActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(curVehicle + Offset::ReplicatedMovement); // Actor.Object:ReplicatedMovement + 0x0 -> 0x78
		}
		else
		{
			Data::TargetActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(Data::TargetActor.Address + Offset::RootComponent) + Offset::ComponentVelocity);
		}

		Setting::CurrentTargetAddress = TEMp;



		return EnemyTruePosition;

	}
}


VECTOR3 GetMagicFOV()
{
	VECTOR3 Coordinate;
	Coordinate.X = 0;
	Coordinate.Y = 0;
	Coordinate.Z = 0;


	VECTOR3 EnemyTruePosition;
	EnemyTruePosition.X = 0;
	EnemyTruePosition.Y = 0;
	EnemyTruePosition.Z = 0;
	VECTOR3 Screen;
	Screen.X = 0;
	Screen.Y = 0;
	Screen.Z = 0;

	VECTOR3 Velocity;
	Velocity.X = 0;
	Velocity.Y = 0;
	Velocity.Z = 0;
	FLOAT Dummydistance = 9999.0f;
	FLOAT DistanceBetweenCorssHairAndEnemy = 0;
	INT Distance4 = 0;
	VECTOR3 posi;
	AActor TargetActor;
	DWORD TEMp;
	int number = 0;
	INT ref;
	VECTOR2 w2s_pos;
	VECTOR2 crosshair = {};

	VECTOR3 SCREENBONELOC;
	INT distnnnnn = 0;
	vector<VECTOR3> Bons;
	FLOAT DummydistanceBONE = 9999.0f;
	FLOAT DistanceBetweenCorssHairAndBONE = 0;


	for (AActor& AActor : Data::AActorList)
	{
		if (Setting::SkipKnocked == true && AActor.Health < 0)
		{
			continue;
		}
		if (Setting::SkipBots == true && AActor.IsBot == true)
		{
			continue;
		}
		if (Setting::AttachOnVisible == true && AActor.Visible == 0)
		{
			continue;
		}
		if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, AActor.Bones.ChestPos, Screen, &Distance4))
		{
			if (Setting::BulletTrackingRange)
			{
				if (Distance4 > Setting::magicrange)
				{
					continue;
				}
			}
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov1(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
				{

					DistanceBetweenCorssHairAndEnemy = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));

					if (DistanceBetweenCorssHairAndEnemy < Dummydistance)
					{
						if (Setting::curraim == 0)
						{
							EnemyTruePosition = AActor.Bones.HeadPos;
							//EnemyTruePosition.Z += Setting::magicv;

						}
						if (Setting::curraim == 1)
						{
							EnemyTruePosition = AActor.Bones.ChestPos;
							EnemyTruePosition.Z += 3;
						}
						if (Setting::curraim == 2)
						{
							EnemyTruePosition = AActor.Bones.PelvisPos;
							EnemyTruePosition.Z += 1;
						}
						if (Setting::AutoAim)
						{
						//		VECTOR3 posarray[] = { AActor.HeadPos, AActor.ChestPos, AActor.PelvisPos, AActor.lSholderPos, AActor.rSholderPos, AActor.lElbowPos, AActor.rElbowPos, AActor.lWristPos, AActor.rWristPos,AActor.lThighPos,AActor.rThighPos,AActor.lKneePos,AActor.rKneePos,AActor.lAnklePos,AActor.rAnklePos };
						//
						//	DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
						//	DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
						//	DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
						//	VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
						//	std::vector<float> _bonearray;
						//	_bonearray.clear();
						//	for (int i = 0; i < 15; i++) {
						//		Algorithm::WorldToScreenBone(Esp::ViewMatrix, posarray[i], w2s_pos, &ref);
						//		float dist = Distance2D(crosshair, w2s_pos);
						//		_bonearray.push_back(dist);
						//	}
						//	float min = _bonearray[0];
						//	int bone_index = 0;
						//	for (int j = 0; j < 15; j++) {
						//		if (_bonearray[j] < min) {
						//			min = _bonearray[j];
						//			bone_index = j;
						//		}
						//	}
						//	if (bone_index == 0)
						//	{
						//		EnemyTruePosition = AActor.HeadPos;
						//		EnemyTruePosition.Z += 7;
						//	}
						//	EnemyTruePosition = posarray[bone_index];

							Bons.emplace_back(Data::TargetActor.Bones.HeadPos);
							Bons.emplace_back(Data::TargetActor.Bones.ChestPos);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTSHOULDER);
							Bons.emplace_back(Data::TargetActor.Bones.PelvisPos);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTSHOULDER);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTELBOWROLL);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTELBOWROLL);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTHAND);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTHAND);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTLEGS);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTLEGS);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTKNEEROLL);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTKNEEROLL);
							Bons.emplace_back(Data::TargetActor.Bones.LEFTFOOT);
							Bons.emplace_back(Data::TargetActor.Bones.RIGHTFOOT);

							for (VECTOR3 BONSPOs : Bons)
							{
								if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, BONSPOs, SCREENBONELOC, &distnnnnn))
								{
									DistanceBetweenCorssHairAndBONE = sqrt(pow(SCREENBONELOC.X - DX11Window::Width / 2, 2) + pow(SCREENBONELOC.Y - DX11Window::Height / 2, 2));

									if (DistanceBetweenCorssHairAndBONE < DummydistanceBONE)
									{
										if (distnnnnn < Setting::magicrange)
										{
											if (BONSPOs == Data::TargetActor.Bones.HeadPos)
											{
												EnemyTruePosition = BONSPOs;
												EnemyTruePosition.Z += Setting::HeadPosZ;
											}
											else if (BONSPOs == Data::TargetActor.Bones.HeadPos)
											{
												EnemyTruePosition = BONSPOs;
												EnemyTruePosition.Z -= 5;
											}
											else
											{
												EnemyTruePosition = BONSPOs;
											}

											DummydistanceBONE = DistanceBetweenCorssHairAndBONE;
										}
										else { continue; }
									}
								}
							}
							Bons.clear();
						}


						Dummydistance = DistanceBetweenCorssHairAndEnemy;
						number++;
						TargetActor = AActor;
						TEMp = AActor.Address;
					}

				}
			}

		}
	}
	if (number == 0)
	{
		//CameraCacheEntry CameraCache = Data::CameraCache;
		//VECTOR3 currentViewLocation = Data::lOCALPLAYERHEAD;
		//VECTOR3 currentViewRotation = FRotatorToVector(CameraCache.POV.Rotation);
		//VECTOR3 end = ADDVECTORS(currentViewLocation, MULTIPLYVECT(currentViewRotation, 10000.0f));
		Setting::CurrentTargetAddress = -1;

		VECTOR3 end;
		end.X = 9999.0f;
		end.Y = 9999.0f;
		end.Z = 9999.0f;

		return end;
	}
	else
	{

		Data::TargetActor = TargetActor;


		auto curVehicle = Utility::ReadMemoryEx<uint32_t>(Data::TargetActor.Address + Offset::CurrentVehicle); // 0x8e8

		if (curVehicle)
		{
			Data::TargetActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(curVehicle + Offset::ReplicatedMovement); // Actor.Object:ReplicatedMovement + 0x0 -> 0x78
		}
		else
		{
			Data::TargetActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(Data::TargetActor.Address + Offset::RootComponent) + Offset::ComponentVelocity);
		}



		Setting::CurrentTargetAddress = TEMp;


		return EnemyTruePosition;
	}

}



int Memory::AimFindBestTarget() {
	float targetDistance = 9999.0;
	VECTOR2 retval{};
	int dist, headdist = 0;
	int ret{};
	for (int i = 0; i < Data::AActorList.size(); i++)
	{
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;

		VECTOR2 chest;
		VECTOR2 head;
		VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);


		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].Bones.ChestPos, chest, &dist))
		{
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, chest, Setting::fovcircleredus/*FovRadius*/))
				{
					float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
					if (cross_dist < targetDistance)
					{
						ret = i;
						targetDistance = cross_dist;

					}
				}
			}
			else
			{

				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = i;
					targetDistance = cross_dist;

				}

			}
		}
	}
	return ret;

}

int Memory::AimFindBestTargetWeapon()
{
	float targetDistance = 9999.0;
	INT dist;
	int ret;
	for (int i = 0; i < Data::ItemList.size(); i++)
	{
		VECTOR3 Screen;
		if (Algorithm::WorldToScreen1(Data::ItemList[i].Position, Screen, &dist, Esp::ViewMatrix))
		{
			if (Setting::Esp_Item_M16A4 && Data::ItemList[i].Name == "M16A4" || Setting::Esp_Item_AKM && Data::ItemList[i].Name == "AKM" || Setting::Esp_Item_SCARL && Data::ItemList[i].Name == "SCAR-L" || Setting::Esp_Item_M416 && Data::ItemList[i].Name == "M416" || Setting::Esp_Item_DP28 && Data::ItemList[i].Name == "DP28" || Setting::Esp_Item_M762 && Data::ItemList[i].Name == "M762" || Setting::Esp_Item_G36C && Data::ItemList[i].Name == "G36C" || Setting::Esp_Item_QBZ && Data::ItemList[i].Name == "QBZ" || Setting::Esp_Item_M249 && Data::ItemList[i].Name == "M249" || Setting::Esp_Item_Groza && Data::ItemList[i].Name == "Groza")
			{
				if (dist < targetDistance)
				{
					ret = Data::ItemList[i].Address;
					targetDistance = dist;
				}
			}
		}
	}
	return ret;
}

int Memory::carbesttarget() {
	float targetDistance = 9999.f;
	VECTOR2 retval;
	int dist;
	int ret;
	for (int i = 0; i < Data::VehicleList.size(); i++)
	{
		DWORD CarADDR = Utility::ReadMemoryEx<INT>(Data::VehicleList[i].Address + Offset::RootComponent);
		VECTOR3 Screen;
		VECTOR3 Position = Utility::ReadMemoryEx<VECTOR3>(CarADDR + Offset::Position);
		if (Algorithm::WorldToScreen1(Position, Screen, &dist, Esp::ViewMatrix))
		{
			float cross_dist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
			if (cross_dist < targetDistance)
			{
				ret = Data::VehicleList[i].Address;
				targetDistance = cross_dist;
			}
		}
	}
	return ret;

}

void WideView() {
	while (true) {

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

}
bool IpadActivated = false;
VECTOR3 GetainmRotation(VECTOR3 WorldLocation)
{
	// FRotator Rotation = Data::CameraCache.POV.Rotation; 
	// VECTOR3 Angle = FRotatorToVector(Rotation); 
	// NormalizeVec(Angle);
	// VECTOR3 vDelta = Subtract(WorldLocation, Data::CameraCache.POV.Location);
	// NormalizeVec(vDelta);
	// VECTOR3 vTransformed;
	// vTransformed.X = (vDelta.X * Angle.X) + (vDelta.Y * Angle.Y) + (vDelta.Z * Angle.Z);
	// vTransformed.Y = (vDelta.X * Angle.X) + (vDelta.Y * Angle.Y) + (vDelta.Z * Angle.Z);
	// vTransformed.Z = (vDelta.X * Angle.X) + (vDelta.Y * Angle.Y) + (vDelta.Z * Angle.Z);

	//FRotator Rotation = Data::CameraCache.POV.Rotation;
	//D3DMATRIX1 tempMatrix = ToMatrix(Rotation);
	//
	//VECTOR3 vAxisX, vAxisY, vAxisZ;
	//
	//vAxisX.X = tempMatrix.m[0][0];
	//vAxisX.Y = tempMatrix.m[0][1];
	//vAxisX.Z = tempMatrix.m[0][2];
	//vAxisY.X = tempMatrix.m[1][0];
	//vAxisY.Y = tempMatrix.m[1][1];
	//vAxisY.Z = tempMatrix.m[1][2];
	//vAxisZ.X = tempMatrix.m[2][0];
	//vAxisZ.Y = tempMatrix.m[2][1];
	//vAxisZ.Z = tempMatrix.m[2][2];
	//VECTOR3 vDelta = Subtract(WorldLocation, Data::CameraCache.POV.Location);
	//
	//VECTOR3 vTransformed;
	//
	//vTransformed.X = (vDelta.X * vAxisY.X) + (vDelta.Y * vAxisY.Y) + (vDelta.Z * vAxisY.Z);
	//vTransformed.Y = (vDelta.X * vAxisZ.X) + (vDelta.Y * vAxisZ.Y) + (vDelta.Z * vAxisZ.Z);
	//vTransformed.Z = (vDelta.X * vAxisX.X) + (vDelta.Y * vAxisX.Y) + (vDelta.Z * vAxisX.Z);

 //	DWORD WeaponManagerComponent = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::WeaponManagerComponent);
 //	DWORD CurrentWeaponReplicated = Utility::ReadMemoryEx<DWORD>(WeaponManagerComponent + Offset::CurrentWeaponReplicated);
 //	VECTOR3 CurrentWeaponReplicated = Utility::ReadMemoryEx<VECTOR3>(Data::LocalPlayer + 0x98);

	VECTOR3 vDelta = Subtract(WorldLocation, Data::lOCALPLAYERHEAD);
	NormalizeVec(vDelta);
	float distance = sqrtf((vDelta.X * vDelta.X) + (vDelta.Y * vDelta.Y) + (vDelta.Z * vDelta.Z));


	VECTOR3 LAST;
	LAST.X = (RAD2DEG(atan2(vDelta.Z, distance)));
	LAST.X -= 0.1;
	LAST.Y = RAD2DEG(atan2(vDelta.Y, vDelta.X));

	//FRotator Rotation = Data::CameraCache.POV.Rotation;
	//  VECTOR3 Angle = FRotatorToVector(Rotation); 
	//  NormalizeVec(Angle);
	//  VECTOR3 vDelta2 = (LAST - Angle);
	//
	//  VECTOR3 LLL = LAST - vDelta2;
	//


	return LAST;



}

//VOID Memory::MemoryThread()
//{
//	static bool BulletKeyState = false;
//	VECTOR3 MagicCoordinate;
//	VECTOR3 AimRotation{};
//
//	while (true)
//	{
//		if (Data::NetDriver > 0)
//		{
//			if (Setting::MagicBullet || Setting::engine == 1)
//			{
//				if (IsMagicInitialized == false)
//				{
//					GetMagicAddress();
//					InitializeMagic();
//					IsMagicInitialized = true;
//				}
//				MagicCoordinate = GetMagicRunningCoordinatesVip();
//				if (GetAsyncKeyState(VK_LBUTTON))
//				{
//					if (IsMagicInitialized == false)
//					{
//						GetMagicAddress();
//							InitializeMagic();
//							IsMagicInitialized = true;
//					}
//					BulletKeyState = true;
//						//MagicCoordinate = GetMagicCoordinates();
//
//						Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 44, MagicCoordinate.X);
//					Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 54, MagicCoordinate.Y);
//
//					if (IsMagicInitialized == false)
//					{
//						GetMagicAddress();
//						InitializeMagic();
//						IsMagicInitialized = true;
//					}
//				}
//				if (GetAsyncKeyState(VK_LBUTTON) == 0 && BulletKeyState == true && IsMagicInitialized == true)
//				{
//					BulletKeyState = false;
//					RestoreHook();
//					MagicBulletList.clear();
//					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
//					MagicBulletAddress = 0;
//					MagicBulletHook = 0;
//					ZeroMemory(RealByteCode, sizeof(RealByteCode));
//					IsMagicInitialized = false;
//				}
//				else if (IsMagicInitialized == false)
//				{
//					RestoreHook();
//					MagicBulletList.clear();
//					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
//					MagicBulletAddress = 0;
//					MagicBulletHook = 0;
//					ZeroMemory(RealByteCode, sizeof(RealByteCode));
//					GetMagicAddress();
//					InitializeMagic();
//					IsMagicInitialized = true;
//				}
//				if (GetAsyncKeyState('R'))
//				{
//					RestoreHook();
//					MagicBulletList.clear();
//					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
//					MagicBulletAddress = 0;
//					MagicBulletHook = 0;
//					ZeroMemory(RealByteCode, sizeof(RealByteCode));
//					IsMagicInitialized = false;
//				}
//			}
//			else if (Setting::MagicBullet == false /*&& IsMagicInitialized == true*/)
//			{
//				RestoreHook();
//				MagicBulletList.clear();
//				VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
//				MagicBulletAddress = 0;
//				MagicBulletHook = 0;
//				ZeroMemory(RealByteCode, sizeof(RealByteCode));
//				//    MagicRested = false;
//				IsMagicInitialized = false;
//			}
//
//		}
//		std::this_thread::sleep_for(std::chrono::milliseconds(10));
//	}
//}

VOID Memory::MemoryThread()
{
	VECTOR3 Bones;
	VECTOR3 MagicCoordinate;
	VECTOR3 AimRotation{};

	while (true)
	{

		try {
			if (Data::NetDriver > 0)
			{
				if (Setting::ModSkin)
				{
                    DWORD Check1 = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x20b8) + 0x2a0) + 0x118;
                    DWORD Check2 = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x20b8) + 0x2a0) + 0x268;
				    
                    Utility::WriteMemoryEx<DWORD>(Check1, sute); //sute
                    Utility::WriteMemoryEx<DWORD>(Check2, parashot);
				    
                    HELMETSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x20b8) + 0x2a0));
                    BackPackSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x20b8) + 0x2a0));
				    
                    WeaponSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x14C) + 0) + 0x7cc));
                    WeaponSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x14C) + 4) + 0x7cc));
                    WeaponSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x14C) + 8) + 0x7cc));
                    WeaponSkin(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x14C) + 12) + 0x7cc));			
				}
				if (Setting::MagicBullet || Setting::CameraAimBot || Setting::CameraCatch)
				{
					if (Data::AActorList.size() != 0)
					{


						if (Setting::fovcircle)
						{
							MagicCoordinate = GetMagicFOV();
						}
						else
						{
							MagicCoordinate = GetMagicNoFOV();
						}


						if (Setting::CameraCatch)
						{
							if (Data::LocalController)
							{
								if (Data::PlayerCameraManager)
								{
									CameraCacheEntry CameraCache = Data::CameraCache;
									VECTOR3 currentViewAngle = CameraCache.POV.Location;

									if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
									{
										FRotator aimRotation = ToRotator(currentViewAngle, MagicCoordinate);
										CameraCache.POV.Rotation = aimRotation;
										Utility::WriteMemoryEx<CameraCacheEntry>(Data::PlayerCameraManager + Offset::CameraCache, CameraCache);
									}
								}
							}
						}
						if (Setting::MemoryAimbot)
						{
							DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::STPlayerController1);
							if (LocalController)
							{
								DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + Offset::PlayerCameraManager);
								if (PlayerCameraManager)
								{
									CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + Offset::CameraCache);

									VECTOR3 currentViewAngle = CameraCache.POV.Location;

									if (Setting::camsmooth)
									{
										if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
										{
											//Reading Original FRotator/control rotater
											auto ControlRotation = Utility::ReadMemoryEx<FRotator>(LocalController + Offset::ControlRotation);

											//Callculat Angles
											FRotator aimRotation = ToRotator(currentViewAngle, MagicCoordinate);

											aimRotation.Pitch -= ControlRotation.Pitch;
											aimRotation.Yaw -= ControlRotation.Yaw;


											ClampAngles(aimRotation);
											aimRotation.Pitch += aimRotation.Pitch / (float)Setting::camsmoothness;
											aimRotation.Yaw += aimRotation.Yaw / (float)Setting::camsmoothness;

											Utility::WriteMemoryEx<FRotator>(LocalController + Offset::ControlRotation, aimRotation);
										}
									}
									else
									{
										if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
										{
											//Reading Original FRotator/control rotater
											auto ControlRotation = Utility::ReadMemoryEx<FRotator>(LocalController + Offset::ControlRotation);

											//Callculat Angles
											FRotator aimRotation = ToRotator(currentViewAngle, MagicCoordinate);

											ClampAngles(aimRotation);
											aimRotation.Pitch += aimRotation.Pitch / (float)Setting::camsmoothness;
											aimRotation.Yaw += aimRotation.Yaw / (float)Setting::camsmoothness;

											Utility::WriteMemoryEx<FRotator>(LocalController + Offset::ControlRotation, aimRotation);
										}
									}
								}
							}
						}



						if (IsMagicInitialized == false && Setting::MagicBulletticked)
						{
							GetMagicAddress();
							InitializeMagic();
							HookMagic();

							IsMagicInitialized = true;
						}
						if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
						{
							if (MagicCoordinate.X == 9999.0f && MagicCoordinate.Y == 9999.0f && MagicCoordinate.Z == 9999.0f)
							{
								if (Setting::MagicBulletticked) {
									RestoreHook();//On Off Based On FOV
									//Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 26, 0xbc);
									//Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 35, 0x03);

								}
								continue;
							}
							else
							{


								if (Setting::MagicBullet)
								{
									HookMagic();//FOV ON OFF
									//Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 26, 0xE8);
									//Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 35, 0x73);
									DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
									DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
									DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
									VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);

									if (Setting::PREDICTION)
									{

										float Gravity = 5.24f;
										float AddTime = 30 / 10.0f + 1.0f;
										float distance = GetDistance(MyPosition, MagicCoordinate) / 100.0f;
										float temp = 1.23f;
										DWORD CurrentReloadWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
										DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrentReloadWeapon + Offset::ShootWeaponEntity);
										float BulletSpeed = Utility::ReadMemoryEx<FLOAT>(ShootWeaponEntity + Offset::BulletFireSpeed) / 750.0f;
										//DWORD SceneComponent = Utility::ReadMemoryEx<INT>(Offset::RootComponent + 0x140);//SceneComponent* HomingTargetComponent? old 14c
										//DWORD VehicleCommon = Utility::ReadMemoryEx<INT>(Offset::VehicleCommon + 0x6f8);//VehicleCommonComponent* VehicleCommon? old 6a0
										FLOAT BaseFlyTime = distance / 750.0f;
										FLOAT SecFlyTime = BaseFlyTime * temp;
										float BulletTravelTime = distance / 750.0f;
										float zAssist{ 1.00f };

										if (distance < 5000.f)
											zAssist = 1.8f;
										else if (distance < 10000.f)
											zAssist = 1.72f;
										else if (distance < 15000.f)
											zAssist = 1.23f;
										else if (distance < 20000.f)
											zAssist = 1.24f;
										else if (distance < 25000.f)
											zAssist = 1.25f;
										else if (distance < 30000.f)
											zAssist = 1.26f;
										else if (distance < 35000.f)
											zAssist = 1.27f;
										else if (distance < 40000.f)
											zAssist = 1.28f;
										else if (distance < 45000.f)
											zAssist = 1.29f;
										else if (distance < 50000.f)
											zAssist = 1.30f;
										else zAssist = 1.35f;

										MagicCoordinate.X += Data::TargetActor.Velocity.X * BulletTravelTime;
										MagicCoordinate.Y += Data::TargetActor.Velocity.Y * BulletTravelTime;
										MagicCoordinate.Z += Data::TargetActor.Velocity.Z * BulletTravelTime * zAssist + 50.5f * 5.72f * BulletTravelTime * BulletTravelTime;

										//MagicCoordinate.X += Data::TargetActor.Velocity.X * BulletTravelTime * zAssist + 5.72f * BulletTravelTime * BulletTravelTime;
										//MagicCoordinate.Y += Data::TargetActor.Velocity.Y * BulletTravelTime * zAssist + 5.72f * BulletTravelTime * BulletTravelTime;
										//MagicCoordinate.Z += Data::TargetActor.Velocity.Z * BulletTravelTime * zAssist + 5.72f * BulletTravelTime * BulletTravelTime;

									}
									FLOAT xDif = MagicCoordinate.X - MyPosition.X;
									FLOAT yDif = MagicCoordinate.Y - MyPosition.Y;
									FLOAT zDif = MagicCoordinate.Z - MyPosition.Z;

									float Hyp = sqrt(xDif * xDif + yDif * yDif);
									MagicCoordinate.X = atan2(zDif, Hyp) * 180.0f / 3.1415926535897f;
									MagicCoordinate.Y = atan2(yDif, xDif) * 180.0f / 3.1415926535897f;

									Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 44, MagicCoordinate.X);
									Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 54, MagicCoordinate.Y);

								}
							}
						}

						// Refresh magic
						if (GetAsyncKeyState(0x52) & 1)//r
						{
							if (IsMagicInitialized == true && Setting::MagicBulletticked)
							{
								if (Data::NetDriver > 0)
								{
									IsMagicInitialized = false;
									GetMagicAddress();
									HookMagic();
									IsMagicInitialized = true;
								}
							}
						}
					}
					else {
						if (Setting::MagicBulletticked) {
							RestoreHook();
							//	Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 26, 0xbc);
							//	Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 35, 0x03);
						}
					}


				}

				if (Setting::MagicBullet == false && IsMagicInitialized == true)// && WasBuggedHook == false)
				{
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}


			}

			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		catch (int e)
		{
			std::cout << e << std::endl;
		}
	}
}




bool GodView = false;
bool fastruncheck = false;
bool fastruncheckv2 = false;
bool luffy = false;
bool PowerMagic = false;
bool CameraCatch = false;
bool IsChanged = false;
bool Ipadview = false;
bool Cameraview = false;
bool damagebeastIsChanged = false;
bool skinIsChanged = false;
bool highjump = false;
bool godview = false;
bool highjumpsdk = false;
bool cartracking = false;
unsigned int OldGameModeID;
unsigned int OldGameModeID2;
unsigned int OldGameModeID3;
unsigned int OldGameModeID4;
bool intiGameModeID = false;
bool intiGameModeID2 = false;
bool intiGameModeID3 = false;
bool intiGameModeID4 = false;

void WriteUE4Float2(DWORD offset, float replace)
{
	//MM->init();
	DWORD ue4Header = Utility::ReadMemoryEx<int>(0xE0C3868);
	DWORD oldprotect;
	VirtualProtectEx(Game::hProcess, (LPVOID)(ue4Header + offset), sizeof(float), PAGE_EXECUTE_READWRITE, &oldprotect);
	WriteProcessMemory(Game::hProcess, (LPVOID)(ue4Header + offset), &replace, sizeof(float), NULL);
	VirtualProtectEx(Game::hProcess, (LPVOID)(ue4Header + offset), sizeof(float), PAGE_READONLY, &oldprotect);
}

void Memory::WeaponMarco()
{
	while (true)
	{	
		if (Setting::RecoilAdjusting)
		{
			bool Enable = false;
			FVector2D MicroAxis = {};
			MicroAxis.X = 0;
			MicroAxis.Y = Setting::Macroval;
			if ((GetAsyncKeyState(VK_LBUTTON)))
			{
				for (AActor& AActor : Data::AActorList)
				{
					if (AActor.bIsWeaponFiring == true && AActor.bIsGunADS == true)
					{
						if (!Setting::ShowMenu)
						{
						   //if (Data::scopes((int)AActor.MyScope) == "x1")
						   //{
							  // Memory::moveMouseDown(MicroAxis.X, MicroAxis.Y);
						   //}
						   //else if (Data::scopes((int)AActor.MyScope) == "x3")
						   //{
							  // Memory::moveMouseDown(MicroAxis.X, MicroAxis.Y);
						   //}

						   if (Data::scopes((int)AActor.MyScope) == "Iron")
						   {
							   Enable = Setting::micro_Iron;
							   MicroAxis.X = Setting::microaxis_Iron.X;
							   MicroAxis.Y = Setting::microaxis_Iron.Y;

						   }
						   else if (Data::scopes((int)AActor.MyScope) == "RedDot")
						   {
							   Enable = Setting::micro_RedDot;
							   MicroAxis.X = Setting::microaxis_RedDot.X;
							   MicroAxis.Y = Setting::microaxis_RedDot.Y;

						   }
						   else if (Data::scopes((int)AActor.MyScope) == "x2")
						   {
							   Enable = Setting::micro_X2;
							   MicroAxis.X = Setting::microaxis_X2.X;
							   MicroAxis.Y = Setting::microaxis_X2.Y;

						   }
						   else if (Data::scopes((int)AActor.MyScope) == "x3")
						   {
							   Enable = Setting::micro_X3;
							   MicroAxis.X = Setting::microaxis_X3.X;
							   MicroAxis.Y = Setting::microaxis_X3.Y;

						   }
						   else if (Data::scopes((int)AActor.MyScope) == "x4")
						   {
							   Enable = Setting::micro_X4;
							   MicroAxis.X = Setting::microaxis_X4.X;
							   MicroAxis.Y = Setting::microaxis_X4.Y;
						   }
						   else if (Data::scopes((int)AActor.MyScope) == "x6")
						   {
							   Enable = Setting::micro_X4;
							   MicroAxis.X = Setting::microaxis_X6.X;
							   MicroAxis.Y = Setting::microaxis_X6.Y;
						   }

							
						}

					}					
					else
						{
							Enable = false;
							MicroAxis.X = 0;
							MicroAxis.Y = 0;

						}
					if (Enable) {
						FVector2D GetMicroAxis = MicroAxis;
						Memory::moveMouseDown(GetMicroAxis.X, GetMicroAxis.Y);

					}				
				}
			}

		}
				std::this_thread::sleep_for(std::chrono::milliseconds(1));

	}
}
//    RET(*Orig_##NAME)               \
//    ARGS;                           \
//    RET Hook_##NAME ARGS
//VOID skin_thread()
//{
//    DWORD Records = Utility::ReadMemoryEx<DWORD> (Data::LocalController + 0x1060)//	ClientFatalDamageRecordData[] ClientFatalDamageRecords;//[Offset: 0x1060, Size: 12]
//    for (int i = 0; i < Records.Num(); i++)
//	{
//	 if (Records[i].RecordRelationShip == 0)
//	 {
//		 if (Data::Weapon = "AKM")
//		 {
//			 Records[i].CauserWeaponAvatarID = 1101001037;
//		 }
//	 }
//		 
//	}
//}

bool Memory::moveMouseDown(int x, int y)
{
	INPUT input;
	input.type = INPUT_MOUSE;
	input.mi.mouseData = 0;
	input.mi.time = 0;
	input.mi.dx = x;
	input.mi.dy = y;
	input.mi.dwFlags = MOUSEEVENTF_MOVE;
	SendInput(1, &input, sizeof(input));
	return true;
}

VOID WINAPI ClickLoop()
{
	while ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) == 0)
		Sleep(0);

	INT nCurrKeyState = GetKeyState(VK_LBUTTON);
	INT nPrevKeyState;

	do
	{
		INPUT Input;
		ZeroMemory(&Input, sizeof(INPUT));
		Input.type = INPUT_MOUSE;


		Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		SendInput(1, &Input, sizeof(INPUT));

		Sleep(5); // how many miliseconds between the clicks.
		Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		SendInput(1, &Input, sizeof(INPUT));


		// !! Do not set this number too low
		// !! Setting it too low might cause infinite loops
		//     and you cannot stop your clicks at first try.
		Sleep(Setting::Macroval); // how many miliseconds the click is held.

		nPrevKeyState = nCurrKeyState;
		nCurrKeyState = GetKeyState(VK_LBUTTON);

		if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) == 0)
			break;
	} while (nCurrKeyState != nPrevKeyState);



}

bool bRunning = false;
bool bRunning2222 = false;
float writee = 0.0f;
bool b_IsZoomed = false;
bool Dmode = false;
bool Bbbmode = false;
bool Rmode = false;
bool Imode = false;
float baseFireSpeed = 0.098f;
float CalcFireSpeed = 1.00;
float BaseCalc;
bool Setting::isSpinning = false;
VOID Memory::WeaponCheats() {

    float R2 = 0.0f; 
    std::vector<DWORD_PTR> magicbases;
	std::vector<DWORD_PTR> speedbase;
	std::vector<DWORD_PTR> xbase;
	DWORD UE4Base = Utility::ReadMemoryEx<int>(0xE0C3868);
	DWORD OurPointer = Utility::ReadMemoryEx<DWORD>(UE4Base + 0x9339400);
    //if(Setting::SilentGodView)
	//{
	//
	//    DWORD Weapon111 = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::WeaponManagerComponent);
	//    DWORD MyWeapon = Utility::ReadMemoryEx<INT>(Weapon111 + Offset::CurrentWeaponReplicated);
	//    DWORD WeapoNrootX = Utility::ReadMemoryEx<INT>(MyWeapon + Offset::RootComponent) + 0x158; //	delegate OnDelSignMarkDelegate;//[Offset: 0x158, Size: 12]
	//    while (true) 
	//    {
	//    	  DWORD rootX = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x158;
    //          float rootXpos;
	//    	  ReadProcessMemory(Game::hProcess, (VOID*)rootX, &rootXpos, sizeof(rootX), nullptr);
	//    	  Utility::WriteMemoryEx<FLOAT>(WeapoNrootX, rootXpos  + 100);
	//		   if (!Setting::SilentGodView) {
    //               break;
    //           }
	//    }
	//}
	//DWORD OurPointer = Utility::ReadMemory<DWORD>(Offset::UE4 + 0x9181400);
	//DWORD UE4Base = Utility::ReadMemoryEx<int>(0xE0C3868);
	//DWORD OurPointer = Utility::ReadMemoryEx<DWORD>(UE4Base + 0x9339400);
	//DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::MeshContainer);
	//DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::SpringArmComp);
	//DWORD root1 = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x164;
	//DWORD root2 = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x1c4;
	//DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::RootComponent) + 0x168;
	//bool godview1 = false;
	//bool godview2 = false;
	//bool godview3 = false;
	//bool godview4 = false;
	//bool godview5 = false;
	//bool Xstopone = false;
	//DWORD WeaponManagerComponent = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::WeaponManagerComponent);
	//DWORD CurrentWeaponReplicated = Utility::ReadMemoryEx<DWORD>(WeaponManagerComponent + Offset::CurrentWeaponReplicated);
	//DWORD RootComponent = Utility::ReadMemoryEx<DWORD>(CurrentWeaponReplicated + Offset::RootComponent);
	//VECTOR3 RelativeScale3D = Utility::ReadMemoryEx<VECTOR3>(Data::MyPlayerWorld + Offset::RelativeScale3D);
	//DWORD ShootWeaponEntityComp = Utility::ReadMemoryEx<DWORD>(CurrentWeaponReplicated + Offset::ShootWeaponEntityComp);
	//DWORD ShootWeaponEffectComp = Utility::ReadMemoryEx<DWORD>(CurrentWeaponReplicated + Offset::ShootWeaponEffectComp);
	//DWORD OUTFIT = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x244) + 0x1E0) + 0x2A0) + 0x118;
	while (true)
	{	
        if (Setting::KeyVersion == 1) 
		{
		//if (Setting::ShowDamage)
		//{
		//	if (Data::NetDriver > 0) 
		//	{
		//	    Utility::WriteMemoryEx<int>(Data::LocalController + Offset::GameReplayType, 2);// 4 AfterMath//2ShowDAmae
		//	}
		//}
		if (Setting::CameraView)
		{
			DWORD Camera = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::SpringArmComp) + Offset::FieldOfView;//float FieldOfView;//[Offset:
			if (Setting::view != 0)
			{
				Utility::WriteMemoryEx<float>(Camera, Setting::view);
			}
			Cameraview = true;
		}
		if (!Setting::CameraView && Cameraview == true)
		{
			DWORD Camera = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::SpringArmComp) + Offset::FieldOfView;
			Utility::WriteMemoryEx<float>(Camera, 220);
			Cameraview = false;
		}

		if (Setting::ForceTPP)
		{
			Utility::WriteMemoryEx<bool>((Data::GameState + Offset::IsFPPGameMode), false);
		}

		
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	}

}


BYTE FlyCarSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };
VOID SetFlyCarAddress()
{
	std::vector<DWORD_PTR> FoundedBase;
	Utility::FindPattern(FlyCarSearch, sizeof(FlyCarSearch), 0x10000000, 0xA0000000, 0, 0, FoundedBase);
	FlyCarAddress = FoundedBase[0];
}

