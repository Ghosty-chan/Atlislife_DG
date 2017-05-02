/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_C_Scientist", "", 3000, "" },
            { "U_C_Journalist", "", 3000, "" },
            { "U_Competitor", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Press_F", "", 1000, "" },
            { "V_Rangemaster_belt", "", 500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "call life_coplevel >= 1" },
            { "U_BG_Guerilla2_1", "", 350, "call life_coplevel >= 1" },
            { "U_BG_Guerilla2_2", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 350, "call life_coplevel >= 2" },
            { "U_B_CombatUniform_mcam", "", 350, "call life_coplevel >= 3" },
            { "U_O_Wetsuit", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "call life_coplevel >= 1" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Cap_blk", "", 80, "call life_coplevel >= 1" }, 
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 1" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" },
            { "H_Beret_blk_POLICE", "", 1200, "call life_coplevel >= 2" },
            { "H_Beret_ocamo", "", 1200, "call life_coplevel >= 2" },
            { "H_HelmetB", "", 1200, "call life_coplevel >= 2" },
            { "H_BandMask_khk", "", 1200, "call life_coplevel >= 2" },
            { "H_HelmetB_black", "", 1200, "call life_coplevel >= 2" },
            { "H_HelmetB_plain_mcamo", "", 1200, "call life_coplevel >= 2" },
            { "H_PilotHelmetHeli_B", "", 1200, "call life_coplevel >= 2" },
            { "H_PilotHelmetHeli_O", "", 1200, "call life_coplevel >= 2" },
            { "H_CrewHelmetHeli_B", "", 1200, "call life_coplevel >= 3" },
            { "H_HelmetB_light_black", "", 1200, "call life_coplevel >= 3" },
            { "H_Cap_headphones", "", 1200, "call life_coplevel >= 3" },
            { "H_Booniehat_mcamo", "", 1200, "call life_coplevel >= 3" },
            { "H_Booniehat_khk_hs", "", 1200, "call life_coplevel >= 3" },
            { "H_BandMask_blk", "", 1200, "call life_coplevel >= 3" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "call life_coplevel >= 1" },
            { "G_Shades_Blue", "", 20, "call life_coplevel >= 1" },
            { "G_Shades_Black", "", 25, "call life_coplevel >= 1" },
            { "G_Sport_Blackred", "", 20, "call life_coplevel >= 1" },
            { "G_Sport_Checkered", "", 20, "call life_coplevel >= 1" },
            { "G_Sport_Blackyellow", "", 20, "call life_coplevel >= 1" },
            { "G_Sport_BlackWhite", "", 20, "call life_coplevel >= 1" },
            { "G_Lowprofile", "", 30, "call life_coplevel >= 1" },
            { "G_Combat", "", 55, "call life_coplevel >= 1" },
            { "G_Aviator", "", 100, "call life_coplevel >= 1" },
            { "G_Diving", "", 100, "call life_coplevel >= 1" },
            { "H_BandMask_blk", "", 100, "call life_coplevel >= 1" },
            { "G_Lady_Mirror", "", 150, "call life_coplevel >= 1" },
            { "G_Lady_Dark", "", 150, "call life_coplevel >= 1" },
            { "G_Lady_Blue", "", 150, "call life_coplevel >= 1" },
            { "G_Bandanna_aviator", "", 250, "call life_coplevel >= 3" },
            { "G_Bandanna_beast", "", 250, "call life_coplevel >= 3" },
            { "G_Bandanna_blk", "", 250, "call life_coplevel >= 3" },
            { "G_Bandanna_shades", "", 250, "call life_coplevel >= 3" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "call life_coplevel >= 1" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_RebreatherIR", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" },
            { "V_Chestrig_blk", "", 1500, "call life_coplevel >= 2" },
            { "V_RebreatherIA", "", 1500, "call life_coplevel >= 2" },
            { "V_PlateCarrier1_blk", "", 3500, "call life_coplevel >= 3" },
            { "V_TacVestIR_blk", "", 3500, "call life_coplevel >= 3" },
            { "V_BandollierB_blk", "", 3500, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "call life_coplevel >= 1" },
            { "B_AssaultPack_cbr", "", 700, "call life_coplevel >= 1" },
            { "B_Kitbag_cbr", "", 800, "call life_coplevel >= 1" },
            { "B_Bergen_blk", "", 800, "call life_coplevel >= 1" },
            { "B_Bergen_sgg", "", 2500, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "", 3500, "call life_coplevel >= 1" },
            { "B_Parachute", "", 3500, "call life_coplevel >= 2" },
            { "B_AssaultPack_blk", "", 3500, "call life_coplevel >= 2" },
            { "B_OutdoorPack_blk", "", 3500, "call life_coplevel >= 1" },
            { "B_Carryall_ocamo", "", 5500, "call life_coplevel >= 3" },
            { "B_Carryall_oucamo", "", 5500, "call life_coplevel >= 3" },
            { "B_Carryall_mcamo", "", 5500, "call life_coplevel >= 3" },
            { "B_Carryall_oli", "", 5500, "call life_coplevel >= 3" },
            { "B_Carryall_khk", "", 5500, "call life_coplevel >= 3" },
            { "B_Carryall_cbr", "", 5500, "call life_coplevel >= 3" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
            { "U_IG_Guerilla2_1", $STR_C_EMS_uniforms, 100, "" },
            { "U_IG_Guerilla2_2", $STR_C_EMS_uniforms, 100, "" },
            { "U_IG_Guerilla2_3", $STR_C_EMS_uniforms, 100, "" },
            { "U_B_Wetsuit", $STR_C_EMS_uniforms, 250, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 10, "" },
            { "H_Bandanna_surfer", "", 10, "" },
            { "H_Bandanna_gry", "", 10, "" },
            { "H_Bandanna_cbr", "", 10, "" },
            { "H_Bandanna_surfer", "", 10, "" },
            { "H_Bandanna_khk", "", 10, "" },
            { "H_Bandanna_sgg", "", 10, "" },
            { "H_StrawHat", "", 10, "" },
            { "H_BandMask_blk", "", 10, "" },
            { "H_Booniehat_tan", "", 10, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 10, "" },
            { "G_Shades_Black", "", 10, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Sport_Blackred", "", 10, "" },
            { "G_Sport_Checkered", "", 10, "" },
            { "G_Sport_Blackyellow", "", 10, "" },
            { "G_Sport_BlackWhite", "", 10, "" },
            { "G_Squares", "", 10, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Lady_Mirror", "", 10, "" },
            { "G_Lady_Dark", "", 10, "" },
            { "G_Lady_Blue", "", 10, "" },
            { "G_Lowprofile", "", 10, "" },
            { "G_Combat", "", 10, "" }
        };
        vests[] = {
            { "V_Rangemaster_belt", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 250, "" },
            { "V_RebreatherB","", 250, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", "", 3000, "" },
            { "B_AssaultPack_cbr", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 4500, "" },
            { "B_TacticalPack_oli", "", 3500, "" },
            { "B_FieldPack_ocamo", "", 3000, "" },
            { "B_Bergen_sgg", "", 4500, "" },
            { "B_Kitbag_cbr", "", 4500, "" },
            { "B_Carryall_oli", "", 5000, "" },
            { "B_Carryall_khk", "", 5000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_O_CombatUniform_oucamo", "", 50000, "" },
            { "U_O_OfficerUniform_ocamo", "", 50000, "" },
            { "U_I_OfficerUniform", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk_hs", "", 650, "" },
            { "H_Cap_oli_hs", "", 650, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_MilCap_oucamo", "", 850, "" },
            { "H_PilotHelmetFighter_O", "", 2500, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrierIA1_dgtl", "", 12500, "" },
            { "V_PlateCarrierIA2_dgtl", "", 12500, "" },
            { "V_I_G_resistanceLeader_F", "", 12500, "" },
            { "V_HarnessOGL_gry", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
