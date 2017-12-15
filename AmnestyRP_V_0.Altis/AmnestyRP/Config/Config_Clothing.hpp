/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
			{ "U_C_Man_casual_1_F", "", 5000, "" }, 
            { "U_C_Man_casual_2_F", "", 5000, "" }, 
            { "U_C_Man_casual_3_F", "", 5000, "" }, 
            { "U_C_Man_casual_4_F", "", 5000, "" }, 
            { "U_C_Man_casual_5_F", "", 5000, "" }, 
            { "U_C_Man_casual_6_F", "", 5000, "" }, 
            { "U_C_man_sport_1_F", "", 5000, "" }, 
            { "U_C_man_sport_2_F", "", 5000, "" }, 
            { "U_C_man_sport_3_F", "", 5000, "" }, 
            { "U_C_Mechanic_01_F", "", 5000, "" }, 
            { "U_C_ConstructionCoverall_Red_F", "", 5000, "" }, 
            { "U_C_ConstructionCoverall_Vrana_F", "", 5000, "" }, 
            { "U_C_ConstructionCoverall_Black_F", "", 5000, "" }, 
            { "U_C_ConstructionCoverall_Blue_F", "", 5000, "" } 
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
			
			//DLC
			{ "H_Hat_Safari_olive_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_black_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_black_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_black_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_yellow_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_white_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_orange_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_red_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_black_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_yellow_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_white_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_orange_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_red_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_black_F", "", 425, { "", "", -1 } },
			{ "H_HeadBandage_clean_F", "", 425, { "", "", -1 } },
			{ "H_Cap_White_IDAP_F", "", 425, { "", "", -1 } },
			{ "H_Cap_Orange_IDAP_F", "", 425, { "", "", -1 } },
			{ "H_Cap_Black_IDAP_F", "", 425, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Pocketed_olive_F", "", 1250, { "", "", -1 } },
			{ "V_Pocketed_coyote_F", "", 1250, { "", "", -1 } },
			{ "V_Pocketed_black_F", "", 1250, { "", "", -1 } },
			{ "V_Safety_yellow_F", "", 1250, { "", "", -1 } },
			{ "V_Safety_orange_F", "", 1250, { "", "", -1 } },
			{ "V_Safety_blue_F", "", 1250, { "", "", -1 } },
			{ "V_LegStrapBag_black_F", "", 1250, { "", "", -1 } },
			{ "V_LegStrapBag_olive_F", "", 1250, { "", "", -1 } },
			{ "V_LegStrapBag_coyote_F", "", 1250, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_sgg", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "", 800, { "", "", -1 } },
			{ "B_AssaultPack_tna_f", "", 800, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 1000, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 1300, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 1300, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1300, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 1200, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 1200, { "", "", -1 } },
			{ "B_FieldPack_oucamo", "", 1200, { "", "", -1 } },
			{ "B_FieldPack_ghex_f", "", 1200, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 1100, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 1100, { "", "", -1 } },
			{ "B_Bergen_rgr", "", 1100, { "", "", -1 } },
			{ "B_Bergen_blk", "", 1100, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 3400, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 3400, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 3400, { "", "", -1 } },
			{ "B_Carryall_oli", "", 3400, { "", "", -1 } },
			{ "B_Carryall_khk", "", 3400, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3400, { "", "", -1 } },
			{ "B_Bergen_dgtl_f", "", 5000, { "", "", -1 } },
			{ "B_Bergen_tna_f", "", 5000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 50, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "", 500, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_survival_uniform", "", 700, { "life_coplevel", "SCALAR", 5 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Cap_blk", "", 50, { "life_coplevel", "SCALAR", 5 } },
            { "H_HelmetB_black", "", 5000, { "life_coplevel", "SCALAR", 5 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 20, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 75, { "life_coplevel", "SCALAR", 4 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Safety_yellow_F", "", 80, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 4500, { "life_coplevel", "SCALAR", 2 } },
            { "V_PlateCarrier1_blk", "", 10000, { "life_coplevel", "SCALAR", 5 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 5000, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Medic Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "Medic Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb1 {
        title = "Rebel - Recruit";
        license = "rebel1";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 10500, { "", "", -1 } },
            { "V_TacVest_oli", "", 10500, { "", "", -1 } },
            { "V_TacVest_brn", "", 10500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb2 {
        title = "Rebel - Private";
        license = "rebel2";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 10500, { "", "", -1 } },
            { "V_TacVest_oli", "", 10500, { "", "", -1 } },
            { "V_TacVest_brn", "", 10500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb3 {
        title = "Rebel - Corpral";
        license = "rebel3";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 10500, { "", "", -1 } },
            { "V_TacVest_oli", "", 10500, { "", "", -1 } },
            { "V_TacVest_brn", "", 10500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb4 {
        title = "Rebel - Sergeant";
        license = "rebel4";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 10500, { "", "", -1 } },
            { "V_TacVest_oli", "", 10500, { "", "", -1 } },
            { "V_TacVest_brn", "", 10500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb5 {
        title = "Rebel - Lieutenent";
        license = "rebel5";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 10500, { "", "", -1 } },
            { "V_TacVest_oli", "", 10500, { "", "", -1 } },
            { "V_TacVest_brn", "", 10500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb6 {
        title = "Rebel - Captian";
        license = "rebel6";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } },
			{ "U_B_GhillieSuit", "Captian", 45500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 20500, { "", "", -1 } },
            { "V_TacVest_oli", "", 20500, { "", "", -1 } },
            { "V_TacVest_brn", "", 20500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb7 {
        title = "Rebel - Major";
        license = "rebel7";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } },
			{ "U_B_GhillieSuit", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_ard", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_lsh", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_sard", "", 45500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 20500, { "", "", -1 } },
            { "V_TacVest_oli", "", 20500, { "", "", -1 } },
            { "V_TacVest_brn", "", 20500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb8 {
        title = "Rebel - Colonel";
        license = "rebel8";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } },
			{ "U_B_GhillieSuit", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_ard", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_lsh", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_sard", "", 45500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 20, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } },
			{ "H_Beret_Colonel", "", 850, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 20500, { "", "", -1 } },
            { "V_TacVest_oli", "", 20500, { "", "", -1 } },
            { "V_TacVest_brn", "", 20500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	class reb9 {
        title = "Rebel - General";
        license = "rebel9";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "", 1500, {"", "", -1} },
            { "U_I_CombatUniform_tshirt", "", 1500, { "", "", -1 } },
			{ "U_B_GhillieSuit", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_ard", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_lsh", "", 45500, {"", "", -1} },
			{ "U_O_FullGhillie_sard", "", 45500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "H_Watchcap_camo", "", 800, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 850, { "", "", -1 } },
            { "H_Watchcap_khk", "", 850, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 1200, { "", "", -1 } },
			{ "H_Beret_Colonel", "", 850, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "H_Bandanna_gry", "", 20, { "", "", -1 } },
            { "H_Bandanna_khk", "", 20, { "", "", -1 } },
            { "H_Booniehat_indp", "", 25, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk", "", 20500, { "", "", -1 } },
            { "V_TacVest_oli", "", 20500, { "", "", -1 } },
            { "V_TacVest_brn", "", 20500, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 45000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 125, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
