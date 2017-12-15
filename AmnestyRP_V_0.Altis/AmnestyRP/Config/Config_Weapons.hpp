/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*	 AmnestyRP.com
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 15000, 7500 },
            { "hgun_Pistol_heavy_02_F", "", 17500, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 65000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 8500 }
        };
    };

    class rebel {
        name = "Rebel Weapon - Recruit";
        side = "civ";
		license = "rebel1";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }

        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class rebel2 {
        name = "Rebel Weapon - Private";
        side = "civ";
        license = "rebel2";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 40000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class rebel3 {
        name = "Rebel Weapon - Corpral";
        side = "civ";
        license = "rebel3";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 40000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class rebel4 {
        name = "Rebel Weapon - Sergeant";
        side = "civ";
        license = "rebel4";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 40000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class rebel5 {
        name = "Rebel Weapon - Lieutenant";
        side = "civ";
        license = "rebel5";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 42500},
			{ "arifle_AK12_F", "", 150000, 75000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 700 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
            { "acc_flashlight", "", 1000 }
        };
    };

	class rebel6 {
        name = "Rebel Weapon - Captian";
        side = "civ";
        license = "rebel6";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 42500},
			{ "srifle_DMR_07_blk_F", "", 140000, 45000},
			{ "arifle_AK12_F", "", 150000, 75000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 700 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500, 1750 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
			{ "optic_DMS", "", 20000, 10000 },
            { "acc_flashlight", "", 2000, 1000 }
			
        };
    };
	
	class rebel7 {
        name = "Rebel Weapon - Major";
        side = "civ";
        license = "rebel7";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "arifle_Katiba_F", "", 85000, 42500},
			{ "srifle_DMR_07_blk_F", "", 140000, 45000},
			{ "arifle_AK12_F", "", 150000, 75000},
			{ "arifle_AKM_F", "", 110000, 55000},
			{ "srifle_DMR_06_olive_F", "", 175000, 85000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 700 },
			{ "20Rnd_762x51_Mag", "", 700 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500, 1750 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
			{ "optic_DMS", "", 20000, 10000 },
            { "acc_flashlight", "", 2000, 1000 }
			
        };
    };
	
	class rebel8 {
        name = "Rebel Weapon - Colonel";
        side = "civ";
        license = "rebel8";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
            { "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "srifle_DMR_07_blk_F", "", 140000, 45000},
			{ "arifle_Katiba_F", "", 85000, 42500},
			{ "arifle_AK12_F", "", 150000, 75000},
			{ "arifle_AKM_F", "", 110000, 55000},
			{ "srifle_DMR_06_olive_F", "", 175000, 85000},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 700 },
			{ "20Rnd_762x51_Mag", "", 700 }
        };
        accs[] = {
			{ "optic_MRCO", "", 10000, 5000 },
            { "optic_ACO_grn", "", 3500, 1750 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
			{ "optic_DMS", "", 20000, 10000 },
            { "acc_flashlight", "", 2000, 1000 }
			
        };
    };
	
	class rebel9 {
		name = "Rebel Weapon - General";
		side = "civ";
		license = "rebel9";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "hgun_Rook40_F", "", 3000, 1500 },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 3000, 1500 },
			{ "SMG_01_F", "", 15000, 7500},
			{ "arifle_Mk20_F", "", 45000, 22500 },
			{ "arifle_SPAR_01_snd_F", "", 55000, 20000 },
			{ "arifle_ARX_blk_F", "", 90000, 45000},
			{ "srifle_DMR_07_blk_F", "", 140000, 45000},
			{ "arifle_Katiba_F", "", 85000, 42500},
			{ "arifle_AK12_F", "", 150000, 75000},
			{ "arifle_AKM_F", "", 110000, 55000},
			{ "srifle_DMR_06_olive_F", "", 175000, 85000},
			{ "srifle_DMR_01_F", "", 165000, -1},
			{ "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150 },
			{ "6Rnd_45ACP_Cylinder", "", 150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 700 },
			{ "20Rnd_762x51_Mag", "", 700 },
			{ "10Rnd_762x54_Mag", "", 700 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750 },
            { "optic_Holosight", "", 3600 },
            { "optic_Arco", "", 10000, 5000 },
			{ "optic_Hamr", "", 10000, 5000 },
			{ "optic_MRCO", "", 10000, 5000 },
			{ "optic_DMS", "", 20000, 10000 },
            { "acc_flashlight", "", 2000, 1000 }
			
        };
    };
	
	
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 15000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 15000, -1 },
            { "hgun_ACPC2_F", "", 15000, -1 },
            { "hgun_PDW2000_F", "", 45000, -1 },
			{ "arifle_TRG20_F", "", 235000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
			{ "30Rnd_556x45_Stanag", "", 1250 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 },
			{ "optic_Hamr", "", 15000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "A.P.D Police Weapon";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_P07_snds_F", "Tazer", 5000, { "life_coplevel", "SCALAR", 1 } },
			{ "SMG_05_F", "Protector", 6500, { "life_coplevel", "SCALAR", 1 } },
			{ "arifle_Mk20C_F", "MK20C", 15000, { "life_coplevel", "SCALAR", 2 } },
			{ "arifle_Mk20_F", "MK20", 20000, { "life_coplevel", "SCALAR", 3 } },
			{ "arifle_SPAR_01_blk_F", "SPAR-16", 22500, { "life_coplevel", "SCALAR", 3 } },
			{ "arifle_MXC_Black_F", "MXC", 27500, { "life_coplevel", "SCALAR", 3 } },
			{ "arifle_MX_Black_F", "MX", 30000, { "life_coplevel", "SCALAR", 4 } },
			{ "arifle_MXM_Black_F", "MXM", 35000, { "life_coplevel", "SCALAR", 4 } },
			{ "srifle_DMR_07_blk_F", "CMR-76", 40000, { "life_coplevel", "SCALAR", 4 } },
			{ "srifle_DMR_03_F", "MK-I", 45000, { "life_coplevel", "SCALAR", 7 } },
			{ "arifle_SPAR_03_blk_F", "SPAR-17", 45000, { "life_coplevel", "SCALAR", 6 } },
			{ "Binocular", "", 150, 10, "" },
            { "ItemGPS", "", 100, 10, "" },
            { "FirstAidKit", "", 150, 15, "" },
            { "NVGoggles", "", 2000, 980, "" },
			{ "NVGoggles_OPFOR", "", 2000, 980, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 50, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag_SMG_02", "", 50, "call life_coplevel >= 1" },
            { "30Rnd_556x45_Stanag", "", 50, "call life_coplevel >= 2" },
            { "30Rnd_65x39_caseless_mag", "", 50, "call life_coplevel >= 5" },
            { "20Rnd_650x39_Cased_Mag_F", "", 50, "call life_coplevel >= 5" },
            { "20Rnd_762x51_Mag", "", 50, "call life_coplevel >= 5" }
        };
        accs[] = {
			{ "optic_Aco_smg", "", 700, { "life_coplevel", "SCALAR", 2 } },
			{ "optic_Hamr", "", 7500, { "life_coplevel", "SCALAR", 3 } },
			{ "optic_Arco", "", 7500, { "life_coplevel", "SCALAR", 3 } },
			{ "optic_Mrco", "", 7500, { "life_coplevel", "SCALAR", 5 } },
			{ "optic_DMS", "", 7500, { "life_coplevel", "SCALAR", 5 } },
			{ "acc_flashlight", "", 700, { "life_coplevel", "SCALAR", 2 } },
			{ "acc_pointer_IR", "", 700, { "life_coplevel", "SCALAR", 2 } },
			{ "muzzle_snds_L", "", 700, { "life_coplevel", "SCALAR", 2 } },
			{ "muzzle_snds_M", "", 7500, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "Medikit", "", 200, 65 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "O_NVGoggles_urb_F", "", 3000, 980 },
            { "O_NVGoggles_hex_F", "", 3000, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};