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

MAC_fnc_switchMove = {
	private["_object","_anim"];
	_object = _this select 0;
	_anim = _this select 1;
	_object switchMove _anim;
};