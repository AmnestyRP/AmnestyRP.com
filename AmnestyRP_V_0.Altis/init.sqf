/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

if(hasInterface) then{[] execVM "AmnestyRP\Scripts\Status_Bar\init_statusBar.sqf"};