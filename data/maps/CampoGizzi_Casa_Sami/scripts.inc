CampoGizzi_Casa_Sami_MapScripts::
# 3 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupUpCampoGSam
# 4 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 5 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv30
	.byte 0


HideMapNamePopupUpCampoGSam::
# 9 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


CampoGizzi_EventScript_Vez::
# 16 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Battle_Text_Vez, after_Battle_Text_Vez
# 17 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	msgbox CampoGizzi_EventScript_Vez_Text_0, MSGBOX_NPC
# 18 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	closemessage
	return


CampoGizzi_EventScript_Vez_Text_0:
# 17 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	.string "Vez: Uff Oggi ho fatto solo il giro del\n"
	.string "mondo 1 volta... meglio impegnarsi di piu'$"

Battle_Text_Vez::
# 22 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	.string "VEZ: Bella vez; soc ma bell!$"

after_Battle_Text_Vez::
# 26 "data//maps/CampoGizzi_Casa_Sami/scripts.pory"
	.string "VEZ: NNNNOOOOO soc ma bell!$"
