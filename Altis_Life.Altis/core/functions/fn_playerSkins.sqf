#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName","_curuniform"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
        };
		if (backpack player != "") then {(unitBackpack player) setObjectTextureGlobal [0,""];};
    };

    case west: {
        /* DONT NEED THIS... <-<
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\cop_uniform_",(FETCH_CONST(life_coplevel)),".jpg"] joinString "";
                    player setObjectTextureGlobal [0, _skinName];
                };
            };
        */
            _curuniform = uniform player;
            switch (_curuniform) do {
                if (FETCH_CONST(life_coplevel) >= 1) then {

                case "U_Rangemaster": { player setObjectTextureGlobal [0, "textures\cop\uniform\Rangemaster_Polizei_beamter.P1.jpg"]; };
                case "U_B_CombatUniform_mcam.P1": { player setObjectTextureGlobal [0, "textures\cop\uniform\U_B_CombatUniform_mcam.P1.jpg"]; };
                case "U_B_CombatUniform_mcam.P2": { player setObjectTextureGlobal [0, "textures\cop\uniform\U_B_CombatUniform_mcam.P2.jpg"]; };
                case "U_B_CombatUniform_mcam.P2_combatmedic": { player setObjectTextureGlobal [0, "textures\cop\uniform\U_B_CombatUniform_mcam.P2_combatmedic.jpg"]; };
                case "U_BG_Guerilla2_1": { player setObjectTextureGlobal [0, "textures\cop\uniform\U_BG_Guerilla2_1.jpg"]; };
                case "U_BG_Guerilla2_2": { player setObjectTextureGlobal [0, "textures\cop\uniform\U_BG_Guerilla2_2.jpg"]; };
                };
            };
            
        //};
		if (backpack player != "") then {(unitBackpack player) setObjectTextureGlobal [0,""];};
    }; 

    case independent: {
        _curuniform = uniform player;
        switch (_curuniform) do {
            case "U_Rangemaster": { player setObjectTextureGlobal [0, "textures\med\uniform\medic_uniform.jpg"]; };
            case "U_IG_Guerilla2_1": { player setObjectTextureGlobal [0, "textures\med\uniform\recrute_uniform_rettungsdienst.jpg"]; };
            case "U_IG_Guerilla2_2": { player setObjectTextureGlobal [0, "textures\med\uniform\recrute_uniform_rettungsdienst.jpg"]; };
            case "U_IG_Guerilla2_3": { player setObjectTextureGlobal [0, "textures\med\uniform\recrute_uniform_rettungsdienst.jpg"]; };
        };
    };
};