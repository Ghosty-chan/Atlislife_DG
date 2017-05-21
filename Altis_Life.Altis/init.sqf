enableSaving [false, false];

X_Server = false;
X_Client = false;
X_JIP = false;
StartProgress = false;

life_sitting = objNull;

if(!isDedicated) then { X_Client = true;};
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v5";

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\world\DynWeather.sqf";
[
    10*60, // seconds to delete dead bodies (0 means don't delete)
    5*60, // seconds to delete dead vehicles (0 means don't delete)
    0*60, // seconds to delete immobile vehicles (0 means don't delete)
    10*60, // seconds to delete dropped weapons (0 means don't delete)
    60*60, // seconds to deleted planted explosives (0 means don't delete)
    10*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM "scripts\world\repetitive_cleanup.sqf";
// Disabled atm: [] execVM "scripts\world\savezone.sqf";


MAC_fnc_switchMove = {
	private["_object","_anim"];
	_object = _this select 0;
	_anim = _this select 1;
	_object switchMove _anim;
};
