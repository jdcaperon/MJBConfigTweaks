/*
	Base Player Loadout for MJB ARMA
	Based on veerserif's revised loadout and SuperJam's revised mission templates
	Edited by NotherDuck on 2021-08-20
	Changenotes:
		- Removed all ACRE radios
		- Added tracers to Leader and AR roles
	Edited by Beagle on 2021-08-24
	Edited by Alien314 on 2021-12-10
	  Changenotes: 
		- Added code to initialize players/respawns, disabling base game stamina and adding APS plates and actions.
        - 2022-02-02: Uncommented RHS vests for SF	
        - Switched default rifle and TL weapons for RHS ones
        - 2022-02-11: Add MMG team (mjbLOVE for Banzerschreck)
*/

// CHANGES HERE WILL NOT BE REFLECTED UNLESS A LINE IN DESCRIPTION.ext IS UNCOMMENTED

// Weaponless Baseclass
class basetrooper 
{
	displayName = "Unarmed";
	// All Randomized.
	// Pants Beagle used - Blackhawk, Deep Recon, G99, Jeans, Tier 3, Triarius, 
	uniform[] = {
		"Tarkov_Uniforms_26",
		"Tarkov_Uniforms_30",
		"Tarkov_Uniforms_32",
		"Tarkov_Uniforms_36",
		"Tarkov_Uniforms_43",
		"Tarkov_Uniforms_44",
		"Tarkov_Uniforms_50",
		"Tarkov_Uniforms_54",
		//"Tarkov_Uniforms_56", white tex bug
		"Tarkov_Uniforms_60",
		"Tarkov_Uniforms_67",
		//"Tarkov_Uniforms_68", white tex bug
		"Tarkov_Uniforms_338",
		"Tarkov_Uniforms_342",
		"Tarkov_Uniforms_344",
		"Tarkov_Uniforms_348",
		"Tarkov_Uniforms_355",
		"Tarkov_Uniforms_356",
		"Tarkov_Uniforms_98",
		"Tarkov_Uniforms_102",
		"Tarkov_Uniforms_104",
		"Tarkov_Uniforms_108",
		"Tarkov_Uniforms_115",
		"Tarkov_Uniforms_116",
		"Tarkov_Uniforms_410",
		"Tarkov_Uniforms_414",
		"Tarkov_Uniforms_416",
		"Tarkov_Uniforms_420",
		"Tarkov_Uniforms_427",
		"Tarkov_Uniforms_428",
		"Tarkov_Uniforms_146",
		"Tarkov_Uniforms_150",
		"Tarkov_Uniforms_152",
		"Tarkov_Uniforms_163",
		"Tarkov_Uniforms_156",
		"Tarkov_Uniforms_164",
		"Tarkov_Uniforms_170",
		"Tarkov_Uniforms_174",
		"Tarkov_Uniforms_176",
		"Tarkov_Uniforms_180",
		"Tarkov_Uniforms_187",
		"Tarkov_Uniforms_188",
		"Tarkov_Uniforms_194",
		"Tarkov_Uniforms_198",
		"Tarkov_Uniforms_200",
		"Tarkov_Uniforms_204",
		"Tarkov_Uniforms_211",
		"Tarkov_Uniforms_212",
		"Tarkov_Uniforms_242",
		"Tarkov_Uniforms_246",
		"Tarkov_Uniforms_248",
		"Tarkov_Uniforms_252",
		"Tarkov_Uniforms_259",
		"Tarkov_Uniforms_260",
		"Tarkov_Uniforms_530",
		"Tarkov_Uniforms_534",
		"Tarkov_Uniforms_536",
		"Tarkov_Uniforms_540",
		"Tarkov_Uniforms_547",
		"Tarkov_Uniforms_548",
		"Tarkov_Uniforms_266",
		"Tarkov_Uniforms_272",
		"Tarkov_Uniforms_276",
		"Tarkov_Uniforms_270",
		"Tarkov_Uniforms_283",
		"Tarkov_Uniforms_284",
		"Tarkov_Uniforms_290",
		"Tarkov_Uniforms_294",
		"Tarkov_Uniforms_296",
		"Tarkov_Uniforms_300",
		"Tarkov_Uniforms_307",
		"Tarkov_Uniforms_308",
		"Tarkov_Uniforms_602",
		"Tarkov_Uniforms_606",
		"Tarkov_Uniforms_608",
		"Tarkov_Uniforms_612",
		"Tarkov_Uniforms_619",
		"Tarkov_Uniforms_620",
		"Tarkov_Uniforms_624"
	};
	vest[] = {
		"V_PlateCarrier2_blk"
	};
	backpack[] = {
		"B_Kitbag_rgr"
	};
	headgear[] = {
		"H_HelmetSpecB_blk"
	};
	goggles[] = {};
	hmd[] = {
		"CUP_NVG_GPNVG_black"
	};
	
	//All Randomized. Add Primary Weapon and attachments.
	//Leave Empty to remove all. {"Default"} for using original items the character start with.
	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	
	// *WARNING* secondaryAttachments[] arrays are NOT randomized.
	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {"CUP_hgun_M9A1"};
	sidearmAttachments[] = {};
	
	// These are added to the uniform or vest first - overflow goes to backpack if there's any.
	magazines[] = {};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
	
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemWatch",
		"ItemMap",
		"ItemCompass",
		"ItemGPS"
	};
	
	// These are put directly into the backpack.
	backpackItems[] = {
		LIST_5("FirstAidKit")
	};
	
	// This is executed (server-side) after the unit init is complete. Argument: _this = _unit.
	code = "_this spawn mjb_arsenal_fnc_tmfSpawnFix;";//"0 = _this execVM ""loadouts\TMFspawnFix.sqf"";"; //
    /* tmfSpawnFix sets stam/fatigue off, iFatigue sway, and adds APS stuff for TMF Respawns */
};


class r : basetrooper
{
	displayName = "Rifletrooper";
	primaryWeapon[] = {
		"rhs_weap_hk416d145"
	};
	scope[] = {
		"optic_hamr"
	};
	bipod[] = {
		"rhsusf_acc_rvg_blk"
	};
	attachment[] = {
		"CUP_acc_ANPEQ_15_Flashlight_Black_L"
	};
	silencer[] = {
		"CUP_muzzle_snds_M16"	
	};
	magazines[] += {
		"diw_armor_plates_main_plate",
		LIST_2("ACE_M84"),
		"SmokeShellRed",
		"CUP_15Rnd_9x19_M9",
		LIST_7("CUP_30Rnd_556x45_PMAG_QP")
	};
	backpackItems[] += {
		LIST_6("diw_armor_plates_main_plate"),
		LIST_3("greenmag_ammo_556x45_basic_60Rnd")
	};
	
};

class ar : basetrooper
{
	displayName = "Machinegun";
	primaryWeapon[] = {
		"CUP_lmg_L110A1"
	};
	scope[] = {
		"optic_hamr"
	};
	bipod[] = {};
	silencer[] = {
		"CUP_muzzle_snds_M16"	
	};
	magazines[] =
	{
		LIST_2("ACE_M84"),
		"SmokeShellRed",
		"CUP_15Rnd_9x19_M9",
		LIST_2("FirstAidKit"),
		LIST_3("diw_armor_plates_main_plate")
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249"),
		LIST_4("diw_armor_plates_main_plate"),
		LIST_3("FirstAidKit"),
		"greenmag_beltlinked_556x45_basic_200"
	};
};

class aar : r
{
	displayName = "Machinegun Ammo Bearer";
	backpack[] = {
		"B_Carryall_cbr"
	};
	items[] += {
		LIST_5("FirstAidKit")
	};
	backpackItems[] = {
		"greenmag_ammo_556x45_basic_60Rnd",
		LIST_3("greenmag_beltlinked_556x45_basic_200"),
		LIST_5("diw_armor_plates_main_plate")
	};
};

class mmg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] =
	{
		"CUP_lmg_Mk48"
	};
	scope[] = {
		"rhsusf_acc_su230a"
	};
	silencer[] = {
		"rhsusf_acc_ardec_m240"
	};
	magazines[] =
	{
		LIST_2("ACE_M84"),
		"SmokeShellRed",
		LIST_3("greenmag_beltlinked_762x51_basic_200"),
		"CUP_15Rnd_9x19_M9"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] = {
		LIST_3("diw_armor_plates_main_plate"),
		LIST_4("FirstAidKit"),
		LIST_3("CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M")
	};
	linkedItems[] += {
		"Rangefinder"
	};  
};

class ammg : aar
{
  displayName = "Assistant MMG";
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] = {
		LIST_4("diw_armor_plates_main_plate"),
		LIST_4("FirstAidKit"),
		LIST_4("greenmag_beltlinked_762x51_basic_200")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sniper : basetrooper 
{
	displayName = "Sniper";
	primaryWeapon[] =
	{
		"CUP_srifle_M107_Pristine"
	};
	scope[] = {
		"CUP_optic_LeupoldMk4_25x50_LRT"
	};
	bipod[] = {};
	silencer[] = {
		"CUP_muzzle_mfsup_Suppressor_M107_Black"	
	};
	sidearmWeapon[] = 
	{
		"rhsusf_weap_MP7A2_folded"
	};
	linkedItems[] += {
		"Rangefinder"
	};
	magazines[] = {
		"ACE_ATragMX",
		"greenmag_ammo_127x99_basic_60Rnd",
		LIST_2("CUP_40Rnd_46x30_MP7"),
		LIST_6("CUP_10Rnd_127x99_M107")
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		"HandGrenade",
		LIST_2("SmokeShell")
	};
	backpackItems[] += {
		LIST_3("diw_armor_plates_main_plate")
	};
};

class spotter : r 
{
	displayName = "Spotter";
	scope[] = {
		"CUP_optic_Elcan_SpecterDR_RMR_black"
	};
	bipod[] = 
	{
		"CUP_bipod_Harris_1A2_L_BLK"
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class tl : r
{
	displayName = "Team Leader";
	primaryWeapon[] = {
		"rhs_weap_mk18_m320",
	};
	attachment[] = {
		"CUP_acc_llm_black"
	};
	bipod[] = {};
	magazines[] = {
		LIST_2("ACE_M84"),
		LIST_2("greenmag_ammo_556x45_basic_60Rnd"),
		"SmokeShellRed",
		"SmokeShellBlue",
		"CUP_15Rnd_9x19_M9",
		LIST_10("CUP_30Rnd_556x45_Emag_Tracer_Yellow")
	};
	linkedItems[] += {
		"Rangefinder"
	};
	backpackItems[] = {
		LIST_3("FirstAidKit"),
		LIST_6("diw_armor_plates_main_plate"),
		LIST_10("1Rnd_HE_Grenade_shell"),
		"1Rnd_Smoke_Grenade_shell"
	};
};

class sl : tl
{
	displayName = "Squad Leader";
};

class cls : r
{
	displayName = "Medic";
	traits[] = {
		"medic"
	};
	backpack[] = {
		"B_Carryall_oucamo"
	};
	magazines[] = {
		LIST_2("ACE_M84"),
		"SmokeShellRed",
		"CUP_15Rnd_9x19_M9",
		LIST_7("CUP_30Rnd_556x45_PMAG_QP")//,
        //LIST_5("diw_armor_plates_main_autoInjector")
	};
	backpackItems[] =
	{
		LIST_5("diw_armor_plates_main_plate"),
		LIST_5("FirstAidKit"),
		"Medikit",
		LIST_2("SmokeShell"),
		LIST_2("SmokeShellBlue"),
		LIST_1("SmokeShellPurple"),
	};
};

class lat : r
{
	displayName = "Trooper (Light Anti-tank)";
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		"HandGrenade",
		LIST_2("SmokeShell")
	};
	secondaryWeapon[] = {
		"CUP_launch_M136"
	};
};

class mat : r
{
	displayName = "Antitank Trooper";
	secondaryWeapon[] = {
		"launch_MRAWS_green_F"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		LIST_2("SmokeShell")
	};
	backpackItems[] =
	{
		LIST_2("MRAWS_HEAT_F"),
		LIST_3("diw_armor_plates_main_plate"),
		LIST_2("FirstAidKit")
	};
};

class amat : r
{
	displayName = "Antitank ammo bearer";
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		"HandGrenade",
		LIST_2("SmokeShell")
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] =
	{
		LIST_3("diw_armor_plates_main_plate"),
		LIST_3("MRAWS_HEAT_F"),
		LIST_3("FirstAidKit")
	};
};

class hat : mat
{
	displayName = "Heavy Antitank Trooper";
	secondaryWeapon[] = {
		"launch_I_Titan_short_F"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools"
	};
	backpack[] = {
		"B_Bergen_mcamo_F"
	};
	backpackItems[] =
	{
		LIST_1("Titan_AT"),
		LIST_2("diw_armor_plates_main_plate"),
		"greenmag_ammo_556x45_basic_60Rnd",
		LIST_3("FirstAidKit")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class ahat : hat
{
	displayName = "Heavy Antitank ammo bearer";
	secondaryWeapon[] = {};
	items[] += {
		LIST_2("SmokeShell")
	};
	backpackItems[] =
	{
		LIST_2("Titan_AT"),
		LIST_3("diw_armor_plates_main_plate"),
		"greenmag_ammo_556x45_basic_60Rnd",
		LIST_5("FirstAidKit")
	};
};

class sfsl : sl 
{
	displayName = "SF Team Leader";
	headgear[] = {
		"H_HelmetB_camo"
	};
	goggles[] = {
		"CUP_G_ESS_BLK_Facewrap_Black"
	};
	uniform[] = {
		"CUP_U_O_RUS_Gorka_Green_gloves_kneepads"
	};
	vest[] = {
		"rhsusf_plateframe_teamleader"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"G2_Gunslinger"
	};
	sidearmWeapon[] = {
		"CUP_hgun_Mk23"
	};
	sidearmAttachments[] = {
		"cup_acc_mk23_lam_f",
		"cup_muzzle_snds_mk23",
	};
	items[] += {
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item")
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Emag_Tracer_Yellow"),
		LIST_4("ACE_CTS9"),
		LIST_2("HandGrenade"),
		"CUP_12Rnd_45ACP_mk23"
	};
	backpackItems[] +={
		LIST_3("1Rnd_HE_Grenade_Shell")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfmed : cls
{
	displayName = "SF Medic";
	headgear[] = {
		"H_HelmetB_camo"
	};
	goggles[] = {
		"CUP_G_ESS_BLK_Facewrap_Black"
	};
	uniform[] = {
		"CUP_U_O_RUS_Gorka_Green_gloves_kneepads"
	};
	vest[] = {
		"rhsusf_plateframe_medic"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"G2_Gunslinger"
	};
	primaryWeapon[] =
	{
		"CUP_sgun_AA12"
	};
	attachment[] = {};
	sidearmWeapon[] = {
		"CUP_hgun_Mk23"
	};
	sidearmAttachments[] = {
		"cup_acc_mk23_lam_f",
		"cup_muzzle_snds_mk23",
	};
	items[] = {
		"greenmag_item_speedloader",
		"FirstAidKit",
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item"),
		"HandGrenade",
		LIST_2("SmokeShellPurple")
	};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_AA12_Slug"),
		"SmokeShellBlue",
		LIST_2("SmokeShellRed"),
		LIST_2("ACE_CTS9"),
		"CUP_12Rnd_45ACP_mk23",
        LIST_5("diw_armor_plates_main_autoInjector")
	};
	backpackItems[] =
	{
		LIST_5("diw_armor_plates_main_plate"),
		LIST_5("FirstAidKit"),
		"Medikit"
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfmat : mat
{
	displayName = "SF Antitank trooper";
	headgear[] = {
		"H_HelmetB_camo"
	};
	goggles[] =
	{
		"CUP_G_ESS_BLK_Facewrap_Black"
	};
	uniform[] = 
	{
		"CUP_U_O_RUS_Gorka_Green_gloves_kneepads"
		};
	vest[] = {
		"rhsusf_plateframe_rifleman"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"G2_Gunslinger"
	};
	sidearmWeapon[] = {
		"CUP_hgun_Mk23"
	};
	sidearmAttachments[] = {
		"cup_acc_mk23_lam_f",
		"cup_muzzle_snds_mk23",
	};
	items[] += {
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item")
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Emag"),
		LIST_2("ACE_CTS9"),
		LIST_2("SmokeShellBlue"),
		"HandGrenade",
		"CUP_12Rnd_45ACP_mk23"
	};
	backpackItems[] += {};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfar : ar
{
	displayName = "SF Machinegunner";
	headgear[] = {
		"H_HelmetB_camo"
	};
	goggles[] = {
		"CUP_G_ESS_BLK_Facewrap_Black"
	};
	uniform[] = {
		"CUP_U_O_RUS_Gorka_Green_gloves_kneepads"
	};
	vest[] = {
		"rhsusf_plateframe_machinegunner"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"G2_Gunslinger"
	};
	primaryWeapon[] =
	{
		"CUP_lmg_Mk48"
	};
	scope[] = {
		"CUP_optic_Elcan_SpecterDR_RMR_black"
	};
	attachment[] = {
		"CUP_acc_ANPEQ_15_Flashlight_Black_L"
	};
	silencer[] = {
		"muzzle_snds_h_mg_blk_f"
	};
	sidearmWeapon[] = {
		"CUP_hgun_Mk23"
	};
	sidearmAttachments[] = {
		"cup_acc_mk23_lam_f",
		"cup_muzzle_snds_mk23",
	};
	items[] = {
		"diw_armor_plates_main_plate",
		"greenmag_ammo_45ACP_basic_30Rnd",
		"greenmag_item_speedloader",
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item"),
		"FirstAidKit"
	};
	magazines[] = {
		LIST_2("CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"),
		LIST_2("ACE_CTS9"),
		LIST_2("SmokeShellBlue"),
		"HandGrenade",
		"CUP_12Rnd_45ACP_mk23"
	};
	backpackItems[] =
	{
		"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",
		LIST_4("diw_armor_plates_main_plate"),
		LIST_4("FirstAidKit")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class ceng : basetrooper
{
	displayName = "Combat Engineer";
	headgear[] = {
		"H_HelmetSpecB_Sand"
	};
	vest[] = {
		"rhsusf_mbav_mg"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Bergen_mcamo_F"
	};
	primaryWeapon[] =
	{
		"rhsusf_weap_MP7A2"
	};
	scope[] = {
		"CUP_optic_ZeissZPoint"
	};
	silencer[] = {
		"CUP_muzzle_snds_mp7"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_Clacker",
		"ACE_RangeCard",
		"ACE_MapTools"
	};
	magazines[] = {
		LIST_6("CUP_40Rnd_46x30_MP7"),
		LIST_2("ACE_M14"),
		LIST_2("SmokeShellBlue"),
		"HandGrenade",
		LIST_2("ACE_Chemlight_HiBlue"),
		LIST_2("ACE_Chemlight_HiYellow"),
		LIST_2("ACE_Chemlight_UltraHiOrange"),
		"CUP_15Rnd_9x19_M9"
	};
	backpackItems[] =
	{
		LIST_4("diw_armor_plates_main_plate"),
		LIST_3("FirstAidKit"),
		"greenmag_ammo_46x30_basic_60Rnd",
		"ACE_Wirecutter",
		LIST_2("APERSTripMine_Wire_Mag"),
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
		"ACE_FlareTripMine_Mag",
		"ATMine_Range_Mag",
		"SLAMDirectionalMine_Wire_Mag"
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class crew : basetrooper
{
	displayName = "Crew";
	uniform[] = {
		"Tarkov_Uniforms_32",
		"Tarkov_Uniforms_60",
		"Tarkov_Uniforms_200"
	};
	headgear[] = {
		"H_HelmetCrew_I"
	};
	goggles[] = 
	{
		"CUP_G_ESS_BLK_Facewrap_Black"
	};
	vest[] = {
		"rhsgref_6b23_khaki"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {};
	primaryWeapon[] =
	{
		"rhsusf_weap_MP7A2"
	};
	scope[] = {
		"CUP_optic_ZeissZPoint"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACE_RangeCard",
		"ACE_MapTools",
		"HandGrenade",
		LIST_2("SmokeShell"),
		"FirstAidKit"
	};
	magazines[] = {
		LIST_3("CUP_40Rnd_46x30_MP7"),
		LIST_2("SmokeShellBlue"),
		LIST_2("FirstAidKit"),
		"greenmag_ammo_46x30_basic_60Rnd"
	};
	backpackItems[] = {};
	linkedItems[] += {
		"Rangefinder"
	};
};

class helocrew : crew
{
	displayName = "Helo Crew";
	uniform[] = {
		"Tarkov_Uniforms_420",
		"Tarkov_Uniforms_342",
		"Tarkov_Uniforms_262",
		"Tarkov_Uniforms_499"
	};
	headgear[] = {
		"H_PilotHelmetHeli_B"
	};
	vest[] = {
		"rhsusf_mbav_light"
		//"rhsusf_mbav_mg"
	};
};

class aircrew : basetrooper
{
	displayName = "Aircrew";
	uniform[] = {
		"U_I_pilotCoveralls"
	};
	headgear[] = {
		"H_PilotHelmetFighter_B"
	};
	hmd[] = {};
	vest[] = {};
	backpack[] = {};
	primaryWeapon[] ={};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	sidearmWeapon[] = {
		"CUP_hgun_Mk23"
	};
	sidearmAttachments[] = {
		"cup_acc_mk23_lam_f",
		"cup_muzzle_snds_mk23",
	};
	items[] = {
		"ACE_IR_Strobe_Item",
		LIST_2("FirstAidKit"),
		"ACE_Chemlight_UltraHiOrange",
		"ACE_MapTools"
	};
	magazines[] = {
		LIST_2("CUP_12Rnd_45ACP_mk23"),
		"SmokeShellOrange"
	};
	backpackItems[] = {};
	linkedItems[] += {
		"Rangefinder"
	};
};
