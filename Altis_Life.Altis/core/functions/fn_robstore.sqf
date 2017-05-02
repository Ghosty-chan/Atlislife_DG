/*
 File: fn_robShop.sqf
 Author: MrKraken
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; 
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;




if(side _robber != civilian) exitWith { hint "You can not rob this Gas Station!" };
if(_robber distance _shop > 5) exitWith { hint "You need to be within 5m of the cashier to rob him!" };
if (_rip) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, you do not threaten me! Get out of here you hobo!" };

_rip = true;
_kassa = 120000 + round(random 60000); //Raub Beute
 _shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);




if(_chance >= 50) then {[1,format["ALARM! - Gas Station: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west]; }; 
if((west countSide playableUnits) < 1) exitWith{ hint "There isnt enough Police to rob Gas Station!"; }; //Die 1 in die Zahl wie viel Cops min. Online sein müssen




disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;




if(_rip) then {
 while{true} do {
 sleep 3;
 _cP = _cP + 0.01;
 _progress progressSetPosition _cP;
 _pgText ctrlSetText format["Robbery in Progress, stay close (10m) (%1%2)...",round(_cP * 100),"%"];
 _Pos = position player; // by ehno: get player pos
 _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
 "Marker200" setMarkerColor "ColorRed";
 "Marker200" setMarkerText "!ATTENTION! robbery !ATTENTION!";
 "Marker200" setMarkerType "mil_warning";

 if(_cP >= 1) exitWith {};
 if(_robber distance _shop > 10.5) exitWith { };
 if!(alive _robber) exitWith { 5 cutText ["","PLAIN"];};
 };

 if!(alive _robber) exitWith { _rip = false; 5 cutText ["","PLAIN"]; };
 if(_robber distance _shop > 10.5) exitWith { 5 cutText ["","PLAIN"]; deleteMarker "Marker200"; _shop switchMove ""; hint "You need to stay within 10m to Rob registry! - Now the registry is locked."; 5 cutText ["","PLAIN"]; _rip = false; };

 5 cutText ["","PLAIN"];
 titleText[format["You have stolen $%1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
 deleteMarker "Marker200"; // by ehno delete maker
 life_cash = life_cash + _kassa;
 _rip = false;
 if!(alive _robber) exitWith {5 cutText ["","PLAIN"];};
 [getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};




sleep 300;
_action = _shop addAction["Rob the Gas Station",life_fnc_robstore];
_shop switchMove "";