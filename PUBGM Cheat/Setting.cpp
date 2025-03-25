#include "Setting.h"
#include "Algorithm.h"




ImVec4 weapon::m16 = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::AKM = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::AWM = { 1.000f, 0.089f, 0.089f, 1.000f };
ImVec4  weapon::AWMimmo = { 0.942f, 0.300f, 0.073f, 1.000f };

ImVec4  weapon::scarl = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::m762 = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::M24 = { 1.000f, 0.760f, 0.150f, 1.000f };
ImVec4  weapon::GROZZA = { 0.279f, 0.990f, 0.812f, 1.000f };
ImVec4  weapon::scope8x = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::kar98 = { 1.0f, 0.60f,0.05f, 1.0f };
ImVec4  weapon::Airdrop = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::Flare = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::Flaregun = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4 weapon::QuickDraw = { 0.866f, 0.128f, 0.081f, 1.000f };

/////////////////////////drop//////////////////////////
ImVec4   Colors::dp = { 1.000f, 0.760f, 0.150f, 1.000f };
ImVec4   Colors::enemyLineofSight = { 1.000f, 0.760f, 0.150f, 1.000f };
ImVec4   Colors::Granadeswarn = { 1.000f, 0.760f, 0.150f, 1.000f };
ImVec4   Colors::mg3 = { 0.373f, 0.966f, 0.391f, 1.000f };
ImVec4   Colors::scope4x = { 0.937f, 0.063f, 0.937f, 1.000f };
ImVec4   Colors::scope3x = { 0.874f, 0.484f, 0.106f, 1.000f };
ImVec4  Colors::bag = { 0.529f, 0.127f, 0.903f, 1.000f };
ImVec4  Colors::armer = { 0.591f, 1.000f, 0.237f, 1.000f };
ImVec4  Colors::helmat = { 0.726f, 0.070f, 0.908f, 1.000f };
ImVec4  Colors::mosin = { 0.258f, 0.971f, 0.775f, 1.000f };
ImVec4   Colors::aug = { 0.442f, 0.971f, 0.122f, 1.000f };

ImVec4   Colors::g36 = { 0.671f, 0.217f, 1.000f, 1.000f };
ImVec4   Colors::assm = { 1.000f, 0.217f, 0.762f, 1.000f };
extern	ImVec4 Colors::Grandes = { 1.000f, 0.396f, 0.357f, 1.000f };
extern	ImVec4 Colors::ammo7 = { 0.957f, 0.353f, 0.226f, 1.000f };
extern	ImVec4 Colors::ammo5 = { 0.000f, 1.000f, 0.000f, 1.000f };
extern ImVec4 Colors::madkit = { 0.952f, 0.558f, 0.129f, 1.000f };

// color s




ImVec4  Colors::itemcolors;// = { 1.000f, 0.100f, 0.401f, 1.000f };
ImVec4  Colors::playerline = { 0.591f, 1.000f, 0.237f, 1.000f };
ImVec4  Colors::playercorner = { 1.0f, 0.70f,0.30f, 1.0f };
ImVec4  Colors::playerbox = { 1.0f, 1.0f,0.0f, 1.0f };
ImVec4  Colors::lotbox = { 1.0f, 1.0f,0.0f, 1.0f };
// ARGB
ImVec4  Colors::helthbar = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::boxColor = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::cornerColor = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::bot = { 255.0f, 255.0f, 255.0f, 255.0f };
ImVec4  Colors::player = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::vehicle = { 0.996f, 0.859f, 0.226f, 1.100f };
//RGB
ImVec4  Colors::botcorner = { 0.050f, 0.125f, 0.925f, 1.0f };
ImVec4  Colors::botline = { 1.0f, 1.0f, 1.0f, 1.0f };
ImVec4  Colors::circle = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::enemy = { 255, 255, 255, 255 };
ImVec4  Colors::botbox = { 0.950f, 0.125f, 0.925f, 1.0f };
ImVec4  Colors::bone = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::fillrect = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::nam = { 0, 255, 251.304, 255 };
ImVec4  Colors::nambar = { 0.880f, 0.185f, 0.25f, 1.0f };
ImVec4  Colors::bothealth = { 0.95f, 0.125f, 0.825f, 1.0f };
ImVec4  Colors::botname = { 0.050f, 0.825f, 0.185f, 1.0f };
ImVec4  Colors::playerhealth = { 0.50f, 0.725f, 0.105f, 1.0f };
ImVec4  Colors::textcolor = { 0.500f, 0.150f, 0.125f, 1.0f };

ImVec4  Colors::Granades = { 0.990f, 0.995f, 0.995f, 1.0f };
ImVec4  Colors::health = { 0.108f, 1.000f, 1.000f, 1.000f };
ImVec4  Colors::deadbox = { 0.000f, 1.0f, 0.0f, 1.000f };
ImVec4  Colors::deadboxitem = { 1.000f, 0.100f, 0.401f, 1.000f };
ImVec4  Colors::airdrop = { 1.000f, 0.695f, 0.323f, 1.000f };
ImVec4  Colors::airdropitem = { 0.300f, 0.695f, 0.323f, 1.000f };
ImVec4  Colors::scopetextcolor = { 0.000f, 0.995f, 0.995f, 1.000f };
ImVec4  Colors::allitem = { 0.034f, 1.000f, 0.040f, 1.000f };
ImVec4  Colors::scope6x = { 0.120f, 0.955f, 0.125f, 1.0f };
ImVec4 Colors::botbone = { 0.050f, 0.025f, 0.925f, 1.0f };
ImVec4 Colors::playerbone = { 0.87f, 0.86f, 0.809f, 1.000f };
ImVec4 Colors::magicline = { 255, 255, 0, 255 };
ImVec4 Colors::magiclinevvisile = { 255, 255, 0, 255 };
ImVec4 Colors::bgcorner = { 0.000f, 1.000f, 0.964f, 1.000f };
ImVec4 Colors::fovcirclecolor = { 1.000f, 0.695f, 0.323f, 1.000f };
ImVec4 Colors::targetenemybone = { 1.000f, 0.695f, 0.323f, 1.000f };


ImVec4 Colors::plyerdistance = { 1.0, 1.0,1.0, 255 };
ImVec4 Colors::plyrweapon = { 255, 0, 0, 255 };

ImVec4 Colors::skelec = { 255, 255, 255, 255 };
ImVec4  Colors::hpt = { 255, 255, 255, 255 };


int Setting::RefreshKey = 0x52;
int Setting::AimSwichKey = 0x54;



const char* Setting::Report = "";

int Setting::AimbotKey = 0x01;
int Setting::FastCarKeys = 0x10;
int Setting::SpiningKeys = 0x10;
int Setting::CamerAimbotKey = 0x01;
int Setting::fastrun5key = 16;
int Setting::fastrunkey2 = 16;
int Setting::fastrunkey = 16;
int Setting::GodViewKey = 0x14;
int Setting::PositionKey = 0;
int Setting::EnableKey = 0;
bool  Setting::SendReport = false;
bool  Setting::plan = true;
ImVec4  Setting::plancolor = { 0.737f, 1.000f, 0.000f, 1.000f };
ImVec4  Setting::dotss = { 0.950f, 0.125f, 0.925f, 1.0f };
float Setting::crosshaircolor[4] = { 1.f, 1.f, 1.f };
bool Setting::id = false;
bool Setting::information = false;
bool Setting::radar = false;
bool Setting::dots = true;
bool Setting::redzone = true;
int Setting::redioption = 1;
bool Setting::redioption2 = false;
bool Setting::SkipBots = false;
bool Setting::SkipKnocked = false;
bool Setting::AimLineCross = true;
bool Setting::IsimingAtYou = true;
bool Setting::AimLineBottm = false;
bool Setting::IsMagicInitialize = false;
bool Setting::Magntic = false;
int Setting::Aimspeed = 10;
int	Setting::curraim = 0;
int	Setting::autocurraim = 0;
int	Setting::RadarLength = 200;
int	Setting::RadarWidth = 200;
char  Setting::filename[] = "C:\\Legend.ini";
int Setting::fontsize = 15;
int Setting::Normalfontsize = 15;


float  Setting::plinesize = 0.7f;
float  Setting::pfullboxsize = 0.7f;
float  Setting::pcornersize = 0.7f;
float Setting::pbonesize = 0.7f;

float Setting::blinesize = 0.7f;
float Setting::bfullboxsize = 0.7f;
float Setting::bcornersize = 0.7f;
float Setting::bbonesize = 0.7f;
int Setting::PlayerMAxDistance = 500;
int Setting::VehicalMexDistance = 700.0f;
int Setting::ItemMaxDistance = 50.0f;
int Setting::UpdateThreadDelay = 400;
int Setting::AdreessGetterDelay = 600;
int Setting::EspThreadDelay = 20;
int Setting::dotsize = 25;
bool Setting::MagicX = false;

bool Setting::bortext = true;
bool Setting::pflag = true;
bool Setting::botflag = true;
bool Setting::botTeamID = true;
bool Setting::pTeamID = true;
bool Setting::botweapon = true;
bool Setting::botdistance = true;
bool Setting::knocked = true;
bool Setting::gameinfo = false;
bool Setting::enemyoffscreen = false;
bool Setting::MyLineOfSight = false;
bool Setting::EnemyLineOfSight = false;
bool Setting::aimbotposition = true;

int Setting::fovcircleredus = 80.0f;
float Setting::enemyLineofSightSize = 200.0f;
float Setting::CurrentBulletFireSpeed = 0.0f;

bool Setting::fovcircle = false;
bool Setting::PREDICTION = false;
ImVec4 Setting::colorcode;
bool Setting::botname = true;
bool Setting::bothealth = true;
bool Setting::botfullbox = false;
bool Setting::botblood = true;
bool Setting::pcorner = true;
bool Setting::botcorner = true;
//playr
bool Setting::pline = true;
bool Setting::plyrdistance = true;
bool Setting::playerweapon = true;
bool Setting::botline = true;
bool Setting::phealth = true;
bool Setting::puid = false;
bool Setting::bg = true;

bool Setting::pfullbox = false;
bool Setting::pname = true;
bool Setting::pblood = true;
bool Setting::plyrbox = false;
bool Setting::plyrwep = false;

bool Setting::boxitems = true;
bool Setting::MAgicline = false;
bool Setting::watermark = true;
bool Setting::fightmode = false;

bool Setting::feul = true;
bool Setting::hp = true;

bool Setting::style1 = true;
bool Setting::style2 = false;
int Setting::EspStyle = 2;
int Setting::BotEspStyle = 1;
bool Setting::botBone = true;

bool Setting::Bags = true;
bool Setting::Armer = false;
bool Setting::Helmat = true;

bool Setting::playerBone = true;
bool  Setting::Legitrack = false;
bool  Setting::airdrop = true;
bool  Setting::airdropitem = true;
bool  Setting::deadbox = true;
bool  Setting::playerdeadbox = true;
bool  Setting::itemrect = true;
bool Setting::ShowMenu = true;
bool Setting::ShowSideMenu = true;
bool Setting::ShowMenu5 = true;

bool Setting::AntiScreenShot = false;
bool Setting::CRPTPressed = false;

bool Setting::Name = true;
bool Setting::Distance = true;
bool Setting::Distancee = true;
bool Setting::TotalEnemy = true;
bool Setting::Line = false;
bool Setting::Box = false;
bool Setting::Bone = true;
bool Setting::Health = false;
bool Setting::BombAlert = true;
bool Setting::Item = true;
bool Setting::PlayerESP = true;
bool Setting::Vehicle = true;
bool Setting::UselessShow = false;

int Setting::Lang = 0;
int Setting::crosshair = 1;
int Setting::HaxVershion = 0;
bool Setting::engine = 0;
bool Setting::skele = 0;
bool Setting::c_enable = false;
bool Setting::impitems = true;
int Setting::size = 8;
int Setting::stroke = 3;
bool Setting::scope = true;
bool Setting::granedwarn = true;
bool Setting::healthitem = true;
bool Setting::allitemss = true;
bool Setting::instanthit = false;
bool Setting::XEffect = false;
bool Setting::XEffectRandomBody = true;
bool Setting::XEffectRandomHead = true;
bool Setting::crossHairrandom = true;
bool Setting::fastpara = false;
bool Setting::paraassists = false;
bool Setting::fastrun = false;
bool Setting::fastrun2 = false;
bool Setting::fastrun3 = false;
bool Setting::fastrun5 = false;
bool Setting::magic1 = false;
bool Setting::HeadShot = false;
bool Setting::blacksky = false;
bool Setting::ScopeZoom = false;
bool Setting::FastWeponSwith = false;
bool Setting::fastShoot = false;
bool Setting::ShowDaamge = false;
bool Setting::GodView = false;
bool Setting::SilentGodView = false;
bool Setting::GodView1 = false;
bool Setting::fly = false;
bool Setting::carfly = false;
bool Setting::speedcar = false;
bool Setting::recoil = false;
bool Setting::ForceTPP = false;
bool Setting::vahicle_item = true;

bool Setting::Esp_Item_AKM = true;
bool Setting::Esp_Item_AKM_Icon = true;
float Setting::Esp_Item_AKM_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_AKM_TextSize = 12.0f;


bool Setting::Esp_Item_M249 = true;
bool Setting::Esp_Item_M249_Icon = true;
float Setting::Esp_Item_M249_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_M249_TextSize = 12.0f;

bool Setting::Esp_Item_MG3 = true;
bool Setting::Esp_Item_MG3_Icon = true;
float Setting::Esp_Item_MG3_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_MG3_TextSize = 12.0f;

bool Setting::Esp_Item_M762 = true;
bool Setting::Esp_Item_M762_Icon = true;
float Setting::Esp_Item_M762_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_M762_TextSize = 12.0f;

bool Setting::Esp_Item_Mk47Mutant = true;
bool Setting::Esp_Item_Mk47Mutant_Icon = true;
float Setting::Esp_Item_Mk47Mutant_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_Mk47Mutant_TextSize = 12.0f;

bool Setting::Esp_Item_DP28 = true;
bool Setting::Esp_Item_DP28_Icon = true;
float Setting::Esp_Item_DP28_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_DP28_TextSize = 12.0f;

bool Setting::Esp_Item_SCARL = true;
bool Setting::Esp_Item_SCARL_Icon = true;
float Setting::Esp_Item_SCARL_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_SCARL_TextSize = 12.0f;

bool Setting::Esp_Item_M416 = true;
bool Setting::Esp_Item_M416_Icon = true;
float Setting::Esp_Item_M416_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_M416_TextSize = 12.0f;

bool Setting::Esp_Item_M16A4 = true;
bool Setting::Esp_Item_M16A4_Icon = true;
float Setting::Esp_Item_M16A4_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_M16A4_TextSize = 12.0f;

bool Setting::Esp_Item_FAMAS = true;
bool Setting::Esp_Item_FAMAS_Icon = true;
float Setting::Esp_Item_FAMAS_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_FAMAS_TextSize = 12.0f;

bool Setting::Esp_Item_AN94 = true;
bool Setting::Esp_Item_AN94_Icon = true;
float Setting::Esp_Item_AN94_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_AN94_TextSize = 12.0f;

bool Setting::Esp_Item_HoneyBadger = true;
float Setting::Esp_Item_HoneyBadger_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_HoneyBadger_TextSize = 12.0f;

bool Setting::Esp_Item_HuntingBow = true;
float Setting::Esp_Item_HuntingBow_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_HuntingBow_TextSize = 12.0f;

bool Setting::Esp_Item_CrossbowBorderland = true;
float Setting::Esp_Item_CrossbowBorderland_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_CrossbowBorderland_TextSize = 12.0f;

bool Setting::Esp_Item_G36C = true;
bool Setting::Esp_Item_G36C_Icon = true;
float Setting::Esp_Item_G36C_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_G36C_TextSize = 12.0f;

bool Setting::Esp_Item_QBZ = true;
bool Setting::Esp_Item_QBZ_Icon = true;
float Setting::Esp_Item_QBZ_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_QBZ_TextSize = 12.0f;

bool Setting::Esp_Item_Groza = true;
bool Setting::Esp_Item_Groza_Icon = true;
float Setting::Esp_Item_Groza_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_Groza_TextSize = 12.0f;

bool Setting::Esp_Item_AUG = true;
bool Setting::Esp_Item_AUG_Icon = true;
float Setting::Esp_Item_AUG_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_AUG_TextSize = 12.0f;

/////////////////////////////////////////////// Sniper Rifle ////////////////////////////////////////////

bool Setting::Esp_Item_VSS = true;
bool Setting::Esp_Item_VSS_Icon = true;
float Setting::Esp_Item_VSS_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_VSS_TextSize = 12.0f;

bool Setting::Esp_Item_Mk12 = true;
bool Setting::Esp_Item_Mk12_Icon = true;
float Setting::Esp_Item_Mk12_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mk12_TextSize = 12.0f;

bool Setting::Esp_Item_Win94 = true;
bool Setting::Esp_Item_Win94_Icon = true;
float Setting::Esp_Item_Win94_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Win94_TextSize = 12.0f;

bool Setting::Esp_Item_QBU = true;
bool Setting::Esp_Item_QBU_Icon = true;
float Setting::Esp_Item_QBU_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_QBU_TextSize = 12.0f;

bool Setting::Esp_Item_SLR = true;
bool Setting::Esp_Item_SLR_Icon = true;
float Setting::Esp_Item_SLR_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SLR_TextSize = 12.0f;

bool Setting::Esp_Item_SKS = true;
bool Setting::Esp_Item_SKS_Icon = true;
float Setting::Esp_Item_SKS_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SKS_TextSize = 12.0f;

bool Setting::Esp_Item_Mini14 = true;
bool Setting::Esp_Item_Mini14_Icon = true;
float Setting::Esp_Item_Mini14_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mini14_TextSize = 12.0f;

bool Setting::Esp_Item_Mk14 = true;
bool Setting::Esp_Item_Mk14_Icon = true;
float Setting::Esp_Item_Mk14_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_Mk14_TextSize = 12.0f;

/////////////////////////////////////////////// Sniper ////////////////////////////////////////////

bool Setting::Esp_Item_M24 = true;
bool Setting::Esp_Item_M24_Icon = true;
float Setting::Esp_Item_M24_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_M24_TextSize = 12.0f;

bool Setting::Esp_Item_Awm = true;
bool Setting::Esp_Item_Awm_Icon = true;
float Setting::Esp_Item_Awm_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_Awm_TextSize = 12.0f;

bool Setting::Esp_Item_AMR = true;
bool Setting::Esp_Item_AMR_Icon = true;
float Setting::Esp_Item_AMR_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_AMR_TextSize = 12.0f;

bool Setting::Esp_Item_Dagger = true;
bool Setting::Esp_Item_Dagger_Icon = true;
float Setting::Esp_Item_Dagger_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Dagger_TextSize = 12.0f;

bool Setting::Esp_Item_ZombieBlade = true;
bool Setting::Esp_Item_ZombieBlade_Icon = true;
float Setting::Esp_Item_ZombieBlade_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_ZombieBlade_TextSize = 12.0f;

bool Setting::Esp_Item_ZombieHammer = true;
bool Setting::Esp_Item_ZombieHammer_Icon = true;
float Setting::Esp_Item_ZombieHammer_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_ZombieHammer_TextSize = 12.0f;

bool Setting::Esp_Item_BulletAMR = true;
bool Setting::Esp_Item_BulletAMR_Icon = true;
float Setting::Esp_Item_BulletAMR_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_BulletAMR_TextSize = 12.0f;

bool Setting::Esp_Item_Awmimo = true;
bool Setting::Esp_Item_Awmimo_Icon = true;
float Setting::Esp_Item_Awmimo_TextSize = 12.0f;
bool Setting::Esp_Item_300Magnum_Icon = true;
float Setting::Esp_Item_Awmimo_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };

bool Setting::Esp_Item_Kar98k = true;
bool Setting::Esp_Item_Kar98k_Icon = true;
float Setting::Esp_Item_Kar98k_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Kar98k_TextSize = 12.0f;

bool Setting::Esp_Item_Mosin = true;
bool Setting::Esp_Item_Mosin_Icon = true;
float Setting::Esp_Item_Mosin_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mosin_TextSize = 12.0f;

/////////////////////////////////////////////// Suits ////////////////////////////////////////////

bool Setting::Esp_Item_Suit_Arctic = false;
bool Setting::Esp_Item_Suit_Arctic_Icon = false;
float Setting::Esp_Item_Suit_Arctic_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Suit_Arctic_TextSize = 12.0f;

bool Setting::Esp_Item_RedZone = true;
bool Setting::Esp_Item_RedZone_Icon = true;
float Setting::Esp_Item_RedZone_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_RedZone_TextSize = 12.0f;


bool Setting::Esp_Item_Suit_Woodland = false;
bool Setting::Esp_Item_Suit_Woodland_Icon = false;
float Setting::Esp_Item_Suit_Woodland_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Suit_Woodland_TextSize = 12.0f;

bool Setting::Esp_Item_Suit_Desert = false;
bool Setting::Esp_Item_Suit_Desert2 = false;
bool Setting::Esp_Item_Suit_Desert_Icon = false;
bool Setting::Esp_Item_Suit_Desert2_Icon = false;
float Setting::Esp_Item_Suit_Desert_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Suit_Desert2_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Suit_Desert_TextSize = 12.0f;

bool Setting::Esp_Item_CrossBow = false;
bool Setting::Esp_Item_CrossBow_Quick = false;
bool Setting::Esp_Item_CrossBow_Icon = false;
bool Setting::Esp_Item_CrossBow_Quick_Icon = false;
float Setting::Esp_Item_CrossBow_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_CrossBow_Quick_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_CrossBow_TextSize = 12.0f;

/////////////////////////////////////////////// Shotguns ////////////////////////////////////////////

bool Setting::Esp_Item_SawedOff = false;
bool Setting::Esp_Item_SawedOff_Icon = false;
float Setting::Esp_Item_SawedOff_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SawedOff_TextSize = 12.0f;

bool Setting::Esp_Item_M1014 = true;
bool Setting::Esp_Item_M1014_Icon = true;
float Setting::Esp_Item_M1014_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_M1014_TextSize = 12.0f;

bool Setting::Esp_Item_Neostead = true;
float Setting::Esp_Item_Neostead_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Neostead_TextSize = 12.0f;

bool Setting::Esp_Item_S1897 = false;
bool Setting::Esp_Item_S1897_Icon = false;
float Setting::Esp_Item_S1897_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_S1897_TextSize = 12.0f;

bool Setting::Esp_Item_S686 = false;
bool Setting::Esp_Item_S686_Icon = false;
float Setting::Esp_Item_S686_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_S686_TextSize = 12.0f;

bool Setting::Esp_Item_DBS = true;
bool Setting::Esp_Item_DBS_Icon = true;
float Setting::Esp_Item_DBS_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_DBS_TextSize = 12.0f;

bool Setting::Esp_Item_S12K = false;
bool Setting::Esp_Item_S12K_Icon = false;
float Setting::Esp_Item_S12K_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_S12K_TextSize = 12.0f;

/////////////////////////////////////////////// Melee Weapons ////////////////////////////////////////////

bool Setting::Esp_Item_Cowbar = false;
bool Setting::Esp_Item_Cowbar_Icon = false;
float Setting::Esp_Item_Cowbar_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Cowbar_TextSize = 12.0f;

bool Setting::Esp_Item_Machete = false;
bool Setting::Esp_Item_Machete_Icon = false;
float Setting::Esp_Item_Machete_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Machete_TextSize = 12.0f;

bool Setting::Esp_Item_Sickle = false;
bool Setting::Esp_Item_Sickle_Icon = false;
float Setting::Esp_Item_Sickle_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sickle_TextSize = 12.0f;

bool Setting::Esp_Item_Pan = false;
bool Setting::Esp_Item_Pan_Icon = false;
float Setting::Esp_Item_Pan_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Pan_TextSize = 12.0f;

/////////////////////////////////////////////// Pistol ////////////////////////////////////////////

bool Setting::Esp_Item_DesertEagle = true;
bool Setting::Esp_Item_DesertEagle_Icon = true;
float Setting::Esp_Item_DesertEagle_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_DesertEagle_TextSize = 12.0f;

bool Setting::Esp_Item_P1911 = false;
bool Setting::Esp_Item_P1911_Icon = false;
float Setting::Esp_Item_P1911_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_P1911_TextSize = 12.0f;

bool Setting::Esp_Item_R45 = false;
bool Setting::Esp_Item_R45_Icon = false;
float Setting::Esp_Item_R45_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_R45_TextSize = 12.0f;

bool Setting::Esp_Item_P18C = false;
bool Setting::Esp_Item_P18C_Icon = false;
float Setting::Esp_Item_P18C_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_P18C_TextSize = 12.0f;

bool Setting::Esp_Item_P92 = false;
bool Setting::Esp_Item_P92_Icon = false;
float Setting::Esp_Item_P92_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_P92_TextSize = 12.0f;

bool Setting::Esp_Item_Vz61 = false;
bool Setting::Esp_Item_Vz61_Icon = false;
float Setting::Esp_Item_Vz61_Color[4] = { 1.000f, 1.000f, 1.000f, 1.000f };
float Setting::Esp_Item_Vz61_TextSize = 12.0f;

bool Setting::Esp_Item_R1895 = false;
bool Setting::Esp_Item_R1895_Icon = false;
float Setting::Esp_Item_R1895_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_R1895_TextSize = 12.0f;

bool Setting::Esp_Item_FlareGun = true;
bool Setting::Esp_Item_FlareGun_Icon = true;
float Setting::Esp_Item_FlareGun_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_FlareGun_TextSize = 12.0f;

/////////////////////////////////////////////// Attachments ////////////////////////////////////////////

bool Setting::Esp_Item_Vertical = false;
bool Setting::Esp_Item_Vertical_Icon = false;
float Setting::Esp_Item_Vertical_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Vertical_TextSize = 12.0f;

bool Setting::Esp_Item_HalfGrip = false;
bool Setting::Esp_Item_HalfGrip_Icon = false;
float Setting::Esp_Item_HalfGrip_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_HalfGrip_TextSize = 12.0f;

bool Setting::Esp_Item_LightGrip = false;
bool Setting::Esp_Item_LightGrip_Icon = false;
float Setting::Esp_Item_LightGrip_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_LightGrip_TextSize = 12.0f;

bool Setting::Esp_Item_Angled = false;
bool Setting::Esp_Item_Angled_Icon = false;
float Setting::Esp_Item_Angled_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Angled_TextSize = 12.0f;

bool Setting::Esp_Item_Lasersight = false;
bool Setting::Esp_Item_Lasersight_Icon = false;
float Setting::Esp_Item_Lasersight_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Lasersight_TextSize = 12.0f;

bool Setting::Esp_Item_ThumbGrip = false;
bool Setting::Esp_Item_ThumbGrip_Icon = false;
float Setting::Esp_Item_ThumbGrip_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_ThumbGrip_TextSize = 12.0f;

bool Setting::Esp_Item_Mid_FlashHider = false;
bool Setting::Esp_Item_Mid_FlashHider_Icon = false;
float Setting::Esp_Item_Mid_FlashHider_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mid_FlashHider_TextSize = 12.0f;

bool Setting::Esp_Item_Large_FlashHider = false;
bool Setting::Esp_Item_Large_FlashHider_Icon = false;
float Setting::Esp_Item_Large_FlashHider_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Large_FlashHider_TextSize = 12.0f;

bool Setting::Esp_Item_Large_Compensator = false;
bool Setting::Esp_Item_Large_Compensator_Icon = false;
float Setting::Esp_Item_Large_Compensator_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Large_Compensator_TextSize = 12.0f;

bool Setting::Esp_Item_Mid_Compensator = false;
bool Setting::Esp_Item_Mid_Compensator_Icon = false;
float Setting::Esp_Item_Mid_Compensator_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mid_Compensator_TextSize = 12.0f;

bool Setting::Esp_Item_Taktik = false;
bool Setting::Esp_Item_Taktik_Icon = false;
float Setting::Esp_Item_Taktik_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Taktik_TextSize = 12.0f;

bool Setting::Esp_Item_Duckbill = false;
bool Setting::Esp_Item_Duckbill_Icon = false;
float Setting::Esp_Item_Duckbill_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Duckbill_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_FlashHider = false;
bool Setting::Esp_Item_Sniper_FlashHider_Icon = false;
float Setting::Esp_Item_Sniper_FlashHider_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_FlashHider_TextSize = 12.0f;

bool Setting::Esp_Item_Mid_Suppressor = true;
bool Setting::Esp_Item_Mid_Suppressor_Icon = true;
float Setting::Esp_Item_Mid_Suppressor_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Mid_Suppressor_TextSize = 12.0f;

bool Setting::Esp_Item_Chekpad_Sniper = false;
bool Setting::Esp_Item_Chekpad_Sniper_Icon = false;
float Setting::Esp_Item_Chekpad_Sniper_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Chekpad_Sniper_TextSize = 12.0f;

bool Setting::Esp_Item_Choke = false;
bool Setting::Esp_Item_Choke_Icon = false;
float Setting::Esp_Item_Choke_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Choke_TextSize = 12.0f;

bool Setting::Esp_Item_Micro_UZI = false;
bool Setting::Esp_Item_Micro_UZI_Icon = false;
float Setting::Esp_Item_Micro_UZI_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Micro_UZI_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_Compensator = false;
bool Setting::Esp_Item_Sniper_Compensator_Icon = false;
float Setting::Esp_Item_Sniper_Compensator_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_Compensator_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_Suppressor = true;
bool Setting::Esp_Item_Sniper_Suppressor_Icon = true;
float Setting::Esp_Item_Sniper_Suppressor_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_Suppressor_TextSize = 12.0f;

bool Setting::Esp_Item_Large_Suppressor = true;
bool Setting::Esp_Item_Large_Suppressor_Icon = true;
float Setting::Esp_Item_Large_Suppressor_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Large_Suppressor_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_Quick_Extended = true;
bool Setting::Esp_Item_Sniper_Quick_Extended_Icon = true;
float Setting::Esp_Item_Sniper_Quick_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_Quick_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_Extended = true;
bool Setting::Esp_Item_Sniper_Extended_Icon = true;
float Setting::Esp_Item_Sniper_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_Sniper_Quick = false;
bool Setting::Esp_Item_Sniper_Quick_Icon = false;
float Setting::Esp_Item_Sniper_Quick_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Sniper_Quick_TextSize = 12.0f;

bool Setting::Esp_Item_AR_Quick = false;
bool Setting::Esp_Item_AR_Quick_Icon = false;
float Setting::Esp_Item_AR_Quick_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_AR_Quick_TextSize = 12.0f;

bool Setting::Esp_Item_AR_Quick_Extended = true;
bool Setting::Esp_Item_AR_Quick_Extended_Icon = true;
float Setting::Esp_Item_AR_Quick_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_AR_Quick_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_AR_Extended = true;
bool Setting::Esp_Item_AR_Extended_Icon = true;
float Setting::Esp_Item_AR_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_AR_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_SMG_Quick_Extended = false;
bool Setting::Esp_Item_SMG_Quick_Extended_Icon = false;
float Setting::Esp_Item_SMG_Quick_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SMG_Quick_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_SMG_Extended = false;
bool Setting::Esp_Item_SMG_Extended_Icon = false;
float Setting::Esp_Item_SMG_Extended_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SMG_Extended_TextSize = 12.0f;

bool Setting::Esp_Item_SMG_Quick = false;
bool Setting::Esp_Item_SMG_Quick_Icon = false;
float Setting::Esp_Item_SMG_Quick_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_SMG_Quick_TextSize = 12.0f;

bool Setting::Esp_Item_WorldCup_Box = false;
bool Setting::Esp_Item_WorldCup_Box_Icon = false;
float Setting::Esp_Item_WorldCup_Box_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_WorldCup_Box_TextSize = 12.0f;

bool Setting::Esp_Item_Football_Grenade = false;
bool Setting::Esp_Item_Football_Grenade_Icon = false;
float Setting::Esp_Item_Football_Grenade_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Football_Grenade_TextSize = 12.0f;

bool Setting::Esp_Item_Football_Cloth = false;
bool Setting::Esp_Item_Football_Cloth_Icon = false;
float Setting::Esp_Item_Football_Cloth_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Football_Cloth_TextSize = 12.0f;

bool Setting::Esp_Item_Golden_Boot = false;
bool Setting::Esp_Item_Golden_Boot_Icon = false;
float Setting::Esp_Item_Golden_Boot_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Golden_Boot_TextSize = 12.0f;

bool Setting::Esp_Item_MiniGameMachine = false;
bool Setting::Esp_Item_MiniGameMachine_Icon = false;
float Setting::Esp_Item_MiniGameMachine_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_MiniGameMachine_TextSize = 12.0f;

bool Setting::Esp_Item_BlindBoxMachine = false;
bool Setting::Esp_Item_BlindBoxMachine_Icon = false;
float Setting::Esp_Item_BlindBoxMachine_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_BlindBoxMachine_TextSize = 12.0f;

bool Setting::Esp_Item_GameCoin = true;
bool Setting::Esp_Item_GameCoin_Icon = true;
float Setting::Esp_Item_GameCoin_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_GameCoin_TextSize = 12.0f;

bool Setting::Esp_Item_Benzin = true;
bool Setting::Esp_Item_Benzin_Icon = true;
float Setting::Esp_Item_Benzin_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Benzin_TextSize = 12.0f;

/////////////////////////////////////////////// SMG ////////////////////////////////////////////

bool Setting::Esp_Item_PP19 = false;
bool Setting::Esp_Item_PP19_Icon = false;
float Setting::Esp_Item_PP19_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_PP19_TextSize = 12.0f;

bool Setting::Esp_Item_P90 = false;
bool Setting::Esp_Item_P90_Icon = false;
float Setting::Esp_Item_P90_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_P90_TextSize = 12.0f;

bool Setting::Esp_Item_TommyGun = false;
bool Setting::Esp_Item_TommyGun_Icon = false;
float Setting::Esp_Item_TommyGun_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_TommyGun_TextSize = 12.0f;

bool Setting::Esp_Item_MP5K = false;
bool Setting::Esp_Item_MP5K_Icon = false;
float Setting::Esp_Item_MP5K_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_MP5K_TextSize = 12.0f;

bool Setting::Esp_Item_UMP9 = true;
bool Setting::Esp_Item_UMP9_Icon = true;
float Setting::Esp_Item_UMP9_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_UMP9_TextSize = 12.0f;

bool Setting::Esp_Item_Vector = true;
bool Setting::Esp_Item_Vector_Icon = true;
float Setting::Esp_Item_Vector_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_Vector_TextSize = 12.0f;

bool Setting::Esp_Item_Uzi = true;
bool Setting::Esp_Item_Uzi_Icon = true;
float Setting::Esp_Item_Uzi_Color[4] = { 1.000f, 0.647f, 0.000f, 1.000f };
float Setting::Esp_Item_Uzi_TextSize = 12.0f;

/////////////////////////////////////////////// Ammo ////////////////////////////////////////////

bool Setting::Esp_Item_762mm = true;
bool Setting::Esp_Item_762mm_Icon = true;
float Setting::Esp_Item_762mm_Color[4] = { 0.984f, 0.871f, 0.043f, 1.000f };
float Setting::Esp_Item_762mm_TextSize = 12.0f;

bool Setting::Esp_Item_556mm = true;
bool Setting::Esp_Item_556mm_Icon = true;
float Setting::Esp_Item_556mm_Color[4] = { 0.000f, 1.000f, 0.318f, 1.000f };
float Setting::Esp_Item_556mm_TextSize = 12.0f;

bool Setting::Esp_Item_9mm = false;
bool Setting::Esp_Item_9mm_Icon = false;
float Setting::Esp_Item_9mm_Color[4] = { 1.000f, 0.000f, 0.337f, 1.000f };
float Setting::Esp_Item_9mm_TextSize = 12.0f;

bool Setting::Esp_Item_45ACP = false;
bool Setting::Esp_Item_45ACP_Icon = false;
float Setting::Esp_Item_45ACP_Color[4] = { 1.000f, 1.000f, 1.000f, 1.000f };
float Setting::Esp_Item_45ACP_TextSize = 12.0f;

bool Setting::Esp_Item_Flare = true;
bool Setting::Esp_Item_Flare_Icon = true;
float Setting::Esp_Item_Flare_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_Flare_TextSize = 12.0f;

bool Setting::Esp_Item_12Guage = false;
bool Setting::Esp_Item_12Guage_Icon = false;
float Setting::Esp_Item_12Guage_Color[4] = { 1.000f, 0.000f, 0.337f, 1.000f };
float Setting::Esp_Item_12Guage_TextSize = 12.0f;

bool Setting::Esp_Item_Ammo_Bolt = false;
bool Setting::Esp_Item_Ammo_Bolt_Icon = false;
float Setting::Esp_Item_Ammo_Bolt_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Ammo_Bolt_TextSize = 12.0f;

/////////////////////////////////////////////// Scops ////////////////////////////////////////////

bool Setting::Esp_Item_Lazer = true;
bool Setting::Esp_Item_Lazer_Icon = true;
float Setting::Esp_Item_Lazer_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_Lazer_TextSize = 12.0f;

bool Setting::Esp_Item_Holo = true;
bool Setting::Esp_Item_Holo_Icon = true;
float Setting::Esp_Item_Holo_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_Holo_TextSize = 12.0f;

bool Setting::Esp_Item_x2 = true;
bool Setting::Esp_Item_x2_Icon = true;
float Setting::Esp_Item_x2_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_x2_TextSize = 12.0f;

bool Setting::Esp_Item_x3 = true;
bool Setting::Esp_Item_x3_Icon = true;
float Setting::Esp_Item_x3_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_x3_TextSize = 12.0f;

bool Setting::Esp_Item_x4 = true;
bool Setting::Esp_Item_x4_Icon = true;
float Setting::Esp_Item_x4_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_x4_TextSize = 12.0f;

bool Setting::Esp_Item_x6 = true;
bool Setting::Esp_Item_x6_Icon = true;
float Setting::Esp_Item_x6_Color[4] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Setting::Esp_Item_x6_TextSize = 12.0f;

bool Setting::Esp_Item_x8 = true;
bool Setting::Esp_Item_x8_Icon = true;
float Setting::Esp_Item_x8_Color[4] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Setting::Esp_Item_x8_TextSize = 12.0f;

/////////////////////////////////////////////// Armors ////////////////////////////////////////////

bool Setting::Esp_Item_Bag1 = false;
bool Setting::Esp_Item_Bag1_Icon = false;
float Setting::Esp_Item_Bag1_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_Bag1_TextSize = 12.0f;

bool Setting::Esp_Item_Bag2 = true;
bool Setting::Esp_Item_Bag2_Icon = true;
float Setting::Esp_Item_Bag2_Color[4] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Setting::Esp_Item_Bag2_TextSize = 12.0f;

bool Setting::Esp_Item_Bag3 = true;
bool Setting::Esp_Item_Bag3_Icon = true;
float Setting::Esp_Item_Bag3_Color[4] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Bag3_TextSize = 12.0f;

bool Setting::Esp_Item_Armor1 = false;
bool Setting::Esp_Item_Armor1_Icon = false;
float Setting::Esp_Item_Armor1_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_Armor1_TextSize = 12.0f;

bool Setting::Esp_Item_Armor2 = true;
bool Setting::Esp_Item_Armor2_Icon = true;
float Setting::Esp_Item_Armor2_Color[4] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Setting::Esp_Item_Armor2_TextSize = 12.0f;

bool Setting::Esp_Item_Armor3 = true;
bool Setting::Esp_Item_Armor3_Icon = true;
float Setting::Esp_Item_Armor3_Color[4] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Armor3_TextSize = 12.0f;

bool Setting::Esp_Item_Helmet1 = false;
bool Setting::Esp_Item_Helmet1_Icon = false;
float Setting::Esp_Item_Helmet1_Color[4] = { 0.000f, 0.682f, 1.000f, 1.000f };
float Setting::Esp_Item_Helmet1_TextSize = 12.0f;

bool Setting::Esp_Item_Helmet2 = true;
bool Setting::Esp_Item_Helmet2_Icon = true;
float Setting::Esp_Item_Helmet2_Color[4] = { 0.627f, 0.102f, 0.941f, 1.000f };
float Setting::Esp_Item_Helmet2_TextSize = 12.0f;

bool Setting::Esp_Item_Helmet3 = true;
bool Setting::Esp_Item_Helmet3_Icon = true;
float Setting::Esp_Item_Helmet3_Color[4] = { 1.000f, 0.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Helmet3_TextSize = 12.0f;

/////////////////////////////////////////////// Grenade ////////////////////////////////////////////

bool Setting::Esp_Item_Frag = true;
bool Setting::Esp_Item_Frag_Icon = true;
float Setting::Esp_Item_Frag_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Frag_TextSize = 12.0f;

bool Setting::Esp_Item_Frag_Warn = true;
bool Setting::Esp_Item_Frag_Warn_Icon = true;
float Setting::Esp_Item_Frag_Warn_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Frag_Warn_TextSize = 12.0f;

bool Setting::Esp_Item_Smoke_Warn = true;
bool Setting::Esp_Item_Smoke_Warn_Icon = true;
float Setting::Esp_Item_Smoke_Warn_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Smoke_Warn_TextSize = 12.0f;

bool Setting::Esp_Item_Smoke = true;
bool Setting::Esp_Item_Smoke_Icon = true;
float Setting::Esp_Item_Smoke_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Smoke_TextSize = 12.0f;

bool Setting::Esp_Item_Molotof = true;
bool Setting::Esp_Item_Molotof_Icon = true;
float Setting::Esp_Item_Molotof_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Molotof_TextSize = 12.0f;

bool Setting::Esp_Item_Molotof_Warn = true;
bool Setting::Esp_Item_Molotof_Warn_Icon = true;
float Setting::Esp_Item_Molotof_Warn_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Molotof_Warn_TextSize = 12.0f;

bool Setting::Esp_Item_Grenade_Apple = true;
bool Setting::Esp_Item_Grenade_Apple_Icon = true;
float Setting::Esp_Item_Grenade_Apple_Color[4] = { 1.000f, 1.000f, 0.000f, 1.000f };
float Setting::Esp_Item_Grenade_Apple_TextSize = 12.0f;


/////////////////////////////////////////////// Health ////////////////////////////////////////////

bool Setting::Esp_Item_MedKit = true;
bool Setting::Esp_Item_MedKit_Icon = true;
float Setting::Esp_Item_MedKit_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_MedKit_TextSize = 12.0f;

bool Setting::Esp_Item_FirstAidKit = true;
bool Setting::Esp_Item_FirstAidKit_Icon = true;
float Setting::Esp_Item_FirstAidKit_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_FirstAidKit_TextSize = 12.0f;

bool Setting::Esp_Item_Painkiller = true;
bool Setting::Esp_Item_Painkiller_Icon = true;
float Setting::Esp_Item_Painkiller_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_Painkiller_TextSize = 12.0f;

bool Setting::Esp_Item_EnergyDrink = true;
bool Setting::Esp_Item_EnergyDrink_Icon = true;
float Setting::Esp_Item_EnergyDrink_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_EnergyDrink_TextSize = 12.0f;

bool Setting::Esp_Item_AdrenalineSyringe = true;
bool Setting::Esp_Item_AdrenalineSyringe_Icon = true;
float Setting::Esp_Item_AdrenalineSyringe_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_AdrenalineSyringe_TextSize = 12.0f;

bool Setting::Esp_Item_Bandage = true;
bool Setting::Esp_Item_Bandage_Icon = true;
float Setting::Esp_Item_Bandage_Color[4] = { 1.000f, 0.753f, 0.796f, 1.000f };
float Setting::Esp_Item_Bandage_TextSize = 12.0f;

/////////////////////////////////////////////// BOX ////////////////////////////////////////////

bool Setting::Esp_Item_AirDrop = true;
bool Setting::Esp_Item_AirDrop_Icon = true;
float Setting::Esp_Item_AirDrop_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };
float Setting::Esp_Item_AirDrop_TextSize = 12.0f;

bool Setting::Esp_Item_DeadBox = true;
bool Setting::Esp_Item_DeadBox_Icon = true;
float Setting::Esp_Item_DeadBox_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::Esp_Item_DeadBox_TextSize = 12.0f;

bool Setting::Esp_Item_AirAttack = true;
bool Setting::Esp_Item_AirAttack_Icon = true;
float Setting::Esp_Item_AirAttack_Color[4] = { 1.00f, 0.00f, 0.00f, 1.0f };

bool Setting::Aimbot = false;

bool Setting::MagicBullet = false;
bool Setting::MagicBulletticked = false;
bool Setting::SnowFlake = false;
bool Setting::MagicBulletd = true;
bool Setting::silent = false;

bool Setting::borderlo = true;
bool Setting::CameraAimBot = false;
bool Setting::FlyMan = false;
bool Setting::camsmooth = false;
bool Setting::damagebeast = false;
int  Setting::damagebeastv = false;

bool Setting::grw = true;
bool Setting::sm = true;
bool Setting::molow = true;;
bool Setting::magicb = false;
bool Setting::IpadView = false;


bool Setting::vahicle_Text_item_BRDM = true;
bool Setting::vahicle_Text_item_Scooter = true;
bool Setting::vahicle_Text_item_Motorcycle = true;
bool Setting::vahicle_Text_item_Motorcycle3 = true;
bool Setting::vahicle_Text_item_Snowmobile = true;
bool Setting::vahicle_Text_item_SnowBike = true;
bool Setting::vahicle_Text_item_Tuk = true;
bool Setting::vahicle_Text_item_Buggy = true;
bool Setting::vahicle_Text_item_Dacia = true;
bool Setting::vahicle_Text_item_Rony = true;
bool Setting::vahicle_Text_item_UAZ = true;
bool Setting::vahicle_Text_item_PG117 = true;
bool Setting::vahicle_Text_item_Aquarail = true;
bool Setting::vahicle_Text_item_Coupe = true;
bool Setting::vahicle_Text_item_Glider = true;
bool Setting::vahicle_Text_item_BigFoot = true;
bool Setting::vahicle_Text_item_Capsule = true;
bool Setting::vahicle_Text_item_UTV = true;
bool Setting::vahicle_Text_item_Beach_Buggy = true;
bool Setting::vahicle_Text_item_ATV2 = true;
bool Setting::vahicle_Text_item_Sportsa = true;
bool Setting::vahicle_Text_item_Sports = true;
bool Setting::vahicle_Text_item_CoupeRB = true;
bool Setting::vahicle_Text_item_Tesla = true;
bool Setting::vahicle_Text_item_Minibus = true;
bool Setting::vahicle_Text_item_Gravity = true;
bool Setting::vahicle_Text_item_Motorglider = true;
bool Setting::vahicle_Text_item_PickUpTruck = true;
bool Setting::vahicle_Text_item_Plane = true;
bool Setting::vahicle_Text_item_Bike = true;
bool Setting::vahicle_Text_item_Helicopter = true;
bool Setting::vahicle_Text_item_SnowBoard = true;

bool Setting::vahicle_Text_item_BRDM_Icon = true;
bool Setting::vahicle_Text_item_Scooter_Icon = true;
bool Setting::vahicle_Text_item_Motorcycle_Icon = true;
bool Setting::vahicle_Text_item_Motorcycle3_Icon = true;
bool Setting::vahicle_Text_item_Snowmobile_Icon = true;
bool Setting::vahicle_Text_item_SnowBike_Icon = true;
bool Setting::vahicle_Text_item_Tuk_Icon = true;
bool Setting::vahicle_Text_item_Buggy_Icon = true;
bool Setting::vahicle_Text_item_Dacia_Icon = true;
bool Setting::vahicle_Text_item_Rony_Icon = true;
bool Setting::vahicle_Text_item_UAZ_Icon = true;
bool Setting::vahicle_Text_item_PG117_Icon = true;
bool Setting::vahicle_Text_item_Aquarail_Icon = true;
bool Setting::vahicle_Text_item_Coupe_Icon = true;
bool Setting::vahicle_Text_item_Glider_Icon = true;
bool Setting::vahicle_Text_item_BigFoot_Icon = true;
bool Setting::vahicle_Text_item_Capsule_Icon = true;
bool Setting::vahicle_Text_item_UTV_Icon = true;
bool Setting::vahicle_Text_item_Beach_Buggy_Icon = true;
bool Setting::vahicle_Text_item_ATV2_Icon = true;
bool Setting::vahicle_Text_item_Sportsa_Icon = true;
bool Setting::vahicle_Text_item_Sports_Icon = true;
bool Setting::vahicle_Text_item_CoupeRB_Icon = true;
bool Setting::vahicle_Text_item_Tesla_Icon = true;
bool Setting::vahicle_Text_item_Minibus_Icon = true;
bool Setting::vahicle_Text_item_Gravity_Icon = true;
bool Setting::vahicle_Text_item_Motorglider_Icon = true;
bool Setting::vahicle_Text_item_PickUpTruck_Icon = true;
bool Setting::vahicle_Text_item_Plane_Icon = true;
bool Setting::vahicle_Text_item_Bike_Icon = true;
bool Setting::vahicle_Text_item_Helicopter_Icon = true;
bool Setting::vahicle_Text_item_SnowBoard_Icon = true;

int Setting::vahicle_Text_item_BRDM_TextSize = 15;
int Setting::vahicle_Text_item_Scooter_TextSize = 15;
int Setting::vahicle_Text_item_Motorcycle_TextSize = 15;
int Setting::vahicle_Text_item_Motorcycle3_TextSize = 15;
int Setting::vahicle_Text_item_Snowmobile_TextSize = 15;
int Setting::vahicle_Text_item_SnowBike_TextSize = 15;
int Setting::vahicle_Text_item_Tuk_TextSize = 15;
int Setting::vahicle_Text_item_Buggy_TextSize = 15;
int Setting::vahicle_Text_item_Dacia_TextSize = 15;
int Setting::vahicle_Text_item_Rony_TextSize = 15;
int Setting::vahicle_Text_item_UAZ_TextSize = 15;
int Setting::vahicle_Text_item_PG117_TextSize = 15;
int Setting::vahicle_Text_item_Aquarail_TextSize = 15;
int Setting::vahicle_Text_item_Coupe_TextSize = 15;
int Setting::vahicle_Text_item_Glider_TextSize = 15;
int Setting::vahicle_Text_item_BigFoot_TextSize = 15;
int Setting::vahicle_Text_item_Capsule_TextSize = 15;
int Setting::vahicle_Text_item_UTV_TextSize = 15;
int Setting::vahicle_Text_item_Beach_Buggy_TextSize = 15;
int Setting::vahicle_Text_item_ATV2_TextSize = 15;
int Setting::vahicle_Text_item_Sportsa_TextSize = 15;
int Setting::vahicle_Text_item_Sports_TextSize = 15;
int Setting::vahicle_Text_item_CoupeRB_TextSize = 15;
int Setting::vahicle_Text_item_Tesla_TextSize = 15;
int Setting::vahicle_Text_item_Minibus_TextSize = 15;
int Setting::vahicle_Text_item_Gravity_TextSize = 15;
int Setting::vahicle_Text_item_Motorglider_TextSize = 15;
int Setting::vahicle_Text_item_PickUpTruck_TextSize = 15;
int Setting::vahicle_Text_item_Plane_TextSize = 15;
int Setting::vahicle_Text_item_Bike_TextSize = 15;
int Setting::vahicle_Text_item_Helicopter_TextSize = 15;
int Setting::vahicle_Text_item_SnowBoard_TextSize = 15;


float Setting::vahicle_Text_item_BRDM_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Scooter_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Motorcycle_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Motorcycle3_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Snowmobile_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_SnowBike_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Tuk_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Buggy_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Dacia_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Rony_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_UAZ_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_PG117_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Aquarail_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Coupe_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Glider_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_BigFoot_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Capsule_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_UTV_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Beach_Buggy_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_ATV2_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Sportsa_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Sports_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_CoupeRB_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Tesla_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Minibus_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Gravity_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Motorglider_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_PickUpTruck_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Plane_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Bike_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_Helicopter_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };
float Setting::vahicle_Text_item_SnowBoard_Color[4] = { 1.00f, 1.00f, 1.00f, 1.0f };


int	Setting::DotsThickness = 2;
int	Setting::DotsRadius = 7;
int	Setting::DotsRange = 25;
int	Setting::magicv = 10;
int	Setting::magicvy = 1;
int	Setting::ttpview = 140.0f;
int	Setting::flycarv = 30000.0f;
int	Setting::instantv = 5000000.0f;
int	Setting::carsv = 500.0f;
int	Setting::corsshairvalue = 12.0f;
int	Setting::scopefov = 3.0f;
int	Setting::GodVieAndhle = 500.0f;
int	Setting::camsmoothness = 500.0f;
int	Setting::IpadViewValue = 250.0f;
int	Setting::fastrv = 5.0f;
int	Setting::FlyManHeight = 500.0f;
int	Setting::shootinterval = 0.0f;
int	Setting::magicrange = 380.0f;
float Setting::NearstArLineThikness = 3.0;
bool Setting::BulletTrackingRange = true;

float Setting::nearstARColors[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::BotTeamId[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::PlayerTeamId[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::fovcirclecolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::magicline[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::plinecolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::botlinecolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::EnemyLineOfSightColor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::pBoxcolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::bBoxcolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::botbonecolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::bonecolor[4] = { 255.000, 255.000, 255.000, 255.000 };
float Setting::weaponenemycolor[4] = { 255 ,237 ,0 ,255 };
float Setting::botweaponenemycolor[4] = { 255 ,237 ,0 ,255 };
float Setting::pdistancecolor[4] = { 255, 255, 0, 255 };
float Setting::bdistancecolor[4] = { 255, 255, 0, 255 };
float Setting::pnamecolorcolor[4] = { 255.000 ,255.000 ,255.000 ,255.000 };
float Setting::botnamecolorcolor[4] = { 0.000 ,255.000 ,0.000 ,255.000 };
float Setting::pnamebgcolorcolor[4] = { 1.000f, 0.392f, 0.000f, 0.600f };
float Setting::botnamebgcolorcolor[4] = { 0.000f, 0.000f, 1.000f, 0.600f };
float Setting::vehcolor[4] = { 000.000, 255.000, 000.000, 255.000 };



bool Setting::Vehicle_Icon_With_BG = true;
bool Setting::Weapon_Icon_With_BG = true;
bool Setting::CameraCatch = false;
bool Setting::CameraView = false;
bool Setting::carteleport = false;
bool Setting::highjump = false;
bool Setting::highjumpv1 = false;
bool Setting::highjump2 = false;
bool Setting::intiGameid = true;

bool Setting::NotifyMenu = true;
bool Setting::Magic360deg = false;
bool Setting::MemoryAimbot = false;
bool Setting::noSpread = false;
bool Setting::ShowDamage = false;
bool Setting::FastSwitchWeapon = false;
bool Setting::Quickloot = false;
bool Setting::RapidFireG = false;
bool Setting::wwcd = true;
bool Setting::ZoneCenter = true;
bool Setting::DiscordRPC = true;
bool Setting::SUITS_SKIN = false;
int  Setting::SUITS_SKINv = 0;

const char* Setting::LOGIN = "WELCOME TO LEGEND HAX";


int Setting::Fastcarkey = 0x10;
int Setting::Backcarkey = 0x53;
int Setting::highjumpkey = 0x20;
int Setting::highjumpkey2 = 0x20;
int Setting::carteleportkey = 0x14;
int Setting::MacroSpeed = 70;
bool Setting::AutoFire = false;
bool Setting::Macro = false;
bool Setting::FPS = false;
bool Setting::HDR = false;
bool Setting::skin = false;
bool Setting::rainfall = false;
bool Setting::particles = false;
bool Setting::nearstAR = false;
bool Setting::VisibleCheck = true;
bool Setting::ModKillMsg = false;
bool Setting::AttachOnVisible = false;
int Setting::FPSVALUE = 90;
int Setting::Weaponval = 0;
int Setting::Macroval = 0;

int	Setting::highjumpv = 1.0f;
int	Setting::highjumpv2 = 1.0f;
int	Setting::view = 360;
int	Setting::ItemDistance = 50;

float Setting::CrossHairColor[4] = { 255.0f, 255.0f, 255.0f, 255.0f };
float Setting::XeffectColor[4] = { 255.0f, 255.0f, 255.0f, 255.0f };
float Setting::XeffectColorHead[4] = { 255.0f, 0.00f, 0.00f, 255.0f };
int Setting::HitEffectSize = 10000;


float Setting::SnowFlakeColor[4] = { 255.0f, 255.0f, 255.0f, 255.0f };
//bool Setting::Esp_Item_Frag_Icon = true;
//bool Setting::Esp_Item_Molotof_Icon = true;
//bool Setting::Esp_Item_Armor3_Icon = true;
//bool Setting::Esp_Item_Bag3_Icon = true;
//bool Setting::Esp_Item_Helmet3_Icon = true;
//bool Setting::Esp_Item_x6_Icon = true;
//bool Setting::Esp_Item_x8_Icon = true;
//bool Setting::Esp_Item_762mm_Icon = true;
//bool Setting::Esp_Item_556mm_Icon = true;
//bool Setting::Esp_Item_SCARL_Icon = true;
int Setting::xsuit = 0;
int Setting::GodUp = 0;
int Setting::GodDown = 0;
int Setting::GodFront = 0;
int Setting::GodLeft = 0;
int Setting::GodRight = 0;
int Setting::GodBack = 0;
int	Setting::FRONT = 420.0f;
int	Setting::BACK = -420.0f;
int	Setting::LEFT = -420.0f;
int	Setting::RIGHT = 420.0f;
int	Setting::UP = 300.0f;
int	Setting::DOWN = -300.0f;
float Setting::Green[4] = { 0.000f, 1.000f, 0.022f, 0.900f };
float Setting::Yellow[4] = { 0.906f, 1.000f, 0.000f, 1.000f };
float Setting::Red[4] = { 1.000f, 0.000f, 0.000f, 1.000f };


int	Setting::Test55 = 100;
int	Setting::Magic_Bullet = 1;
int Setting::SelectorV3 = 1;
int Setting::SelectorV5 = 0;
int Setting::SelectorGrass = 0;
int Setting::RecSelector = 0;
int Setting::RecSelector2 = 0;
int Setting::Headselctor = 0;
int Setting::jmp = 0;
int Setting::KillMsg = 0;
bool Setting::ModSkin = false;
bool Setting::WaterMark = false;

int	Setting::fastparaaa = 3000;
FLOAT Setting::fastrv_2 = 12.000f;
FLOAT Setting::fastrv_3 = 0.005;
FLOAT Setting::fastrv_4 = 1.000f;
FLOAT Setting::fastrv_5 = 23.0f;
int Setting::GodFRONT = 0;
int Setting::Godleft = 0;
int Setting::Godright = 0;
int Setting::fastparakey = 0;

FLOAT Setting::fastrv_5M = 0.300f;

DWORD Setting::CurrentTargetAddress = 0;
int Setting::playerBoneColorVer = 0;
int Setting::plineColorVer = 0;
int Setting::botBoneColorVer = 0;
int Setting::botlineColorVer = 0;

float Setting::botlinecoloropen[4] = { 0.000f, 1.000f, 0.000f, 1.000f };
float Setting::botlinecolorcover[4] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Setting::botbonecoloropen[4] = { 0.000f, 1.000f, 0.000f, 1.000f };
float Setting::botbonecolorcover[4] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Setting::plinecoloropen[4] = { 0.000f, 1.000f, 0.000f, 1.000f };
float Setting::plinecolorcover[4] = { 1.000f, 0.000f, 0.000f, 1.000f };

float Setting::bonecoloropen[4] = { 0.000f, 1.000f, 0.000f, 1.000f };
float Setting::bonecolorcover[4] = { 1.000f, 0.000f, 0.000f, 1.000f };


int Setting::PlayerSpining = 5;
float Setting::WeaponScaleValue = 1;
bool Setting::WeaponScale = false;


int Setting::ModSkinv = 0;
int Setting::ModSkin_M416 = 0;
int Setting::ModSkin_Suit = 0;
int Setting::ModSkin_BagBack = 0;
int Setting::ModSkin_Helmet = 0;
int Setting::ModSkin_BG = 0;
int Setting::ModSkin_skin_Suit = 0;
int Setting::ModSkin_skin_M416 = 0;
int Setting::ModSkin_skin_akm = 0;
int Setting::ModSkin_skin_Helmet = 0;
int Setting::ModSkin_skin_BagBack = 0;
int Setting::ModSkin_skin_m16a4 = 0;
int Setting::ModSkin_skin_scar = 0;
int Setting::ModSkin_skin_groza = 0;
int Setting::ModSkin_skin_M762 = 0;
int Setting::ModSkin_skin_aug = 0;
int Setting::ModSkin_skin_qbz = 0;
int Setting::ModSkin_skin_ace32 = 0;
int Setting::ModSkin_skin_Honey = 0;
int Setting::ModSkin_skin_UZI = 0;
int Setting::ModSkin_skin_UMP = 0;
int Setting::ModSkin_skin_CoupeRP = 0;
int Setting::ModSkin_skin_UAZ = 0;
int Setting::ModSkin_skin_Vector = 0;
int Setting::ModSkin_skin_Thompson = 0;
int Setting::ModSkin_skin_Bizon = 0;
int Setting::ModSkin_skin_K98 = 0;
int Setting::ModSkin_skin_M24 = 0;
int Setting::ModSkin_skin_AWM = 0;
int Setting::ModSkin_skin_AMR = 0;
int Setting::ModSkin_skin_VSS = 0;
int Setting::ModSkin_skin_skin_SKS = 0;
int Setting::ModSkin_skin_Mini14 = 0;
int Setting::ModSkin_skin_MK14 = 0;
int Setting::ModSkin_skin_SLR = 0;
int Setting::ModSkin_skin_S1897 = 0;
int Setting::ModSkin_skin_DP28 = 0;
int Setting::ModSkin_skin_M249 = 0;
int Setting::ModSkin_skin_MG3 = 0;
int Setting::ModSkin_skin_Skorpion = 0;
int Setting::ModSkin_skin_Moto = 0;
int Setting::ModSkin_skin_Dacia = 0;
int Setting::ModSkin_skin_Buggy = 0;
int Setting::ModSkin_skin_Parachute = 0;
int Setting::ModSkin_skin_SKS = 0;
int Setting::ModSkin_skin_Monster = 0;
int Setting::ModSkin_skin_UTV = 0;
int Setting::ModSkin_skin_Mirado = 0;
int Setting::Font = 0;

bool Setting::ModSkin_boolSuit = true;
bool Setting::ModSkin_boolM416 = true;
bool Setting::ModSkin_boolakm = true;
bool Setting::ModSkin_boolHelmet = true;
bool Setting::ModSkin_boolBagBack = true;
bool Setting::ModSkin_boolm16a4 = true;
bool Setting::ModSkin_boolscar = true;
bool Setting::ModSkin_boolgroza = true;
bool Setting::ModSkin_boolM762 = true;
bool Setting::ModSkin_bool_aug = true;
bool Setting::ModSkin_bool_qbz = true;
bool Setting::ModSkin_bool_ace32 = true;
bool Setting::ModSkin_bool_Honey = true;
bool Setting::ModSkin_bool_UZI = true;
bool Setting::ModSkin_bool_UMP = true;
bool Setting::ModSkin_boolCoupeRP = true;
bool Setting::ModSkin_boolUAZ = true;
bool Setting::ModSkin_boolVector = true;
bool Setting::ModSkin_boolThompson = true;
bool Setting::ModSkin_boolBizon = true;
bool Setting::ModSkin_boolK98 = true;
bool Setting::ModSkin_boolM24 = true;
bool Setting::ModSkin_boolAWM = true;
bool Setting::ModSkin_bool_AMR = true;
bool Setting::ModSkin_bool_VSS = true;
bool Setting::ModSkin_boolskin_SKS = true;
bool Setting::ModSkin_bool_Mini14 = true;
bool Setting::ModSkin_bool_MK14 = true;
bool Setting::ModSkin_bool_SLR = true;
bool Setting::ModSkin_bool_S1897 = true;
bool Setting::ModSkin_bool_DP28 = true;
bool Setting::ModSkin_bool_M249 = true;
bool Setting::ModSkin_bool_MG3 = true;
bool Setting::ModSkin_bool_Skorpion = true;
bool Setting::ModSkin_bool_Moto = true;
bool Setting::ModSkin_bool_Dacia = true;
bool Setting::ModSkin_bool_Buggy = true;
bool Setting::ModSkin_bool_Parachute = true;
bool Setting::ModSkin_bool_UTV = true;
bool Setting::ModSkin_bool_Monster = true;
bool Setting::ModSkin_bool_Mirado = true;
bool Setting::SaveSetting = false;
bool Setting::LoadSetting = false;
bool Setting::ModSkinsss = false;
bool Setting::AllIconsv = true;
bool Setting::AllIcons = true;
bool Setting::RecoilAdjusting = true;

bool Setting::micro_Iron = false;
bool Setting::micro_RedDot = false;
bool Setting::micro_X2 = false;
bool Setting::micro_X3 = false;
bool Setting::micro_X4 = false;
bool Setting::micro_X6 = false;
FVector2D Setting::microaxis_Iron = {};
FVector2D Setting::microaxis_RedDot = {};
FVector2D Setting::microaxis_X2 = {};
FVector2D Setting::microaxis_X3 = {};
FVector2D Setting::microaxis_X4 = {};
FVector2D Setting::microaxis_X6 = {};
bool Setting::AutoLoad = true;
bool Setting::AutoAim = false;
int Setting::KeyVersion = 1;
int Setting::SelectedTheme = 1;
int Setting::HeadPosZ = 7;
string Setting::LoginStatus = "";

namespace Setting
{

	namespace Skins {
		bool skins = false;
		namespace m416
		{
			int skin = 0;
		}
		namespace AKM
		{
			int skin = 0;
		}
		namespace M762
		{
			int skin = 0;
		}
		namespace ACE32
		{
			int skin = 0;
		}
		namespace SCARL
		{
			int skin = 0;
		}
		namespace GROZA
		{
			int skin = 0;
		}
		namespace QBZ
		{
			int skin = 0;
		}
		namespace M16A4
		{
			int skin = 0;
		}
		namespace AUG
		{
			int skin = 0;
		}
		//////////////////////////////////
		namespace UMP
		{
			int skin = 0;
		}
		namespace UZI
		{
			int skin = 0;
		}
		namespace Thome
		{
			int skin = 0;
		}
		namespace Vctor
		{
			int skin = 0;
		}
		namespace Pithon
		{
			int skin = 0;
		}
		namespace P90
		{
			int skin = 0;
		}
		///////////Sniper/////////
		namespace kar
		{
			int skin = 0;
		}
		namespace AWM
		{
			int skin = 0;
		}
		namespace M24
		{
			int skin = 0;
		}
		namespace AMR
		{
			int skin = 0;
		}
		namespace SKS
		{
			int skin = 0;
		}
		namespace VSS
		{
			int skin = 0;
		}
		namespace Mini14
		{
			int skin = 0;
		}
		namespace Mk14
		{
			int skin = 0;
		}
		namespace SLR
		{
			int skin = 0;
		}
		namespace Mk12
		{
			int skin = 0;
		}
		namespace MG3
		{
			int skin = 0;
		}
		namespace DP28
		{
			int skin = 0;
		}
		namespace M249
		{
			int skin = 0;
		}
		namespace DBS
		{
			int skin = 0;
		}
		namespace S1897
		{
			int skin = 0;
		}
		namespace S686
		{
			int skin = 0;
		}
		namespace S12K
		{
			int skin = 0;
		}
		namespace Skorpion
		{
			int skin = 0;
		}
		namespace Pan
		{
			int skin = 0;
		}
		namespace Honey
		{
			int skin = 0;
		}


	}

	namespace sute {
		int sutes = 0;
	}
	namespace helmet {
		int helmets1 = 0;
		int helmets2 = 0;
		int helmets3 = 0;
	}
	namespace Backpack {
		int Backpack1 = 0;
		int Backpack2 = 0;
		int Backpack3 = 0;

	}
	namespace parashot {
		int id = 0;
	}
}
