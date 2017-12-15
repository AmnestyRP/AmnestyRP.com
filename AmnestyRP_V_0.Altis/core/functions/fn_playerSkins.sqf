#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
                player setObjectTextureGlobal [0, "textures\ARP_Rebel\C\ARP_Clothing.jpg"];
            };
            if (uniform player isEqualTo "U_B_survival_uniform") then {
                player setObjectTextureGlobal [0, "textures\ARP_Rebel\C\ARP_Clothing.jpg"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\ARP_Cop\C\ARP_CopStart.jpg";
            player setObjectTextureGlobal [0, _skinName];
        };
		if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            _skinName = "textures\arp_cop\c\ARP_HighCop.jpg";
            player setObjectTextureGlobal [0, _skinName];
        };
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
    };
};
