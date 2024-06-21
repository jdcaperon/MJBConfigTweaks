

SafestartisActive = true;
publicVariable "SafestartisActive";

// Sim disable non-interactable objects
private _id = ["acex_fortify_objectPlaced", {params ["_player", "_side", "_object"];
  private _interactable = (_object isKindOf "AllVehicles" || {_object isKindOf "ReammoBox" || {_object isKindOf "ThingX"}});
  if (!_interactable) then {_object enableSimulationGlobal false;};
}] call CBA_fnc_addEventHandler;