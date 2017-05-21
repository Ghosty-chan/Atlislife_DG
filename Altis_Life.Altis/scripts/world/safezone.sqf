/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek & Latouth)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below. The numeric value after the variable name of the marker will define how big the radius is. (Measured in metres)
*/

#define CIV_MSG "Du betrittst eine Safezone. Hier werden keine Verbrechen geduldet!"

#define SAFETY_ZONES    [
    ["civ_spawn_1", 250], // Kavala
    ["civ_spawn_2", 250], // Pygros
    ["civ_spawn_3", 250], // Athira
    ["civ_spawn_4", 250], // Sofia
    ["medic_spawn_3", 100], 
    ["cop_spawn_4", 20], 
    ["cop_spawn_5"], 35]
    ]

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{};
	
	case civilian:
	{
		player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
              
             titleText [CIV_MSG, "PLAIN", 3];
            };
        }];
	};
	
	case independent:
	{
		player addEventHandler ["Fired", {
			if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
            };
        }];
	};
};