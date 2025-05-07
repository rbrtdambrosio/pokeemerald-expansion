Grotta_Francigena_Last_Floor_MapScripts::
# 3 "data//maps/Grotta_Francigena_Last_Floor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VAR_NightmareModeON
	.byte 0


VAR_NightmareModeON::
# 7 "data//maps/Grotta_Francigena_Last_Floor/scripts.pory"
	setvar VAR_NightmareMode, 1
	return

