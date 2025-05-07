Indoor_Vecchio_Piromane_MapScripts::
# 2 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNameIndoor_VP
# 3 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


HideMapNameIndoor_VP::
# 7 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


EventScript_VecchioPiromane::
# 13 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	msgbox EventScript_VecchioPiromane_Text_0, MSGBOX_NPC
# 14 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	closemessage
	return


Indoor_Vecchio_Piromane_EventScript_AzumarillAzumeril::
# 19 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	msgbox Indoor_Vecchio_Piromane_EventScript_AzumarillAzumeril_Text_0, MSGBOX_NPC
# 20 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	closemessage
	return


Autostrada_EventScript_SeasideParkingSign::
# 25 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	msgbox Autostrada_EventScript_SeasideParkingSign_Text_0
# 26 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	closemessage
	return


EventScript_VecchioPiromane_Text_0:
# 13 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	.string "VECCHIO PIROMANE: E' propria na bella\n"
	.string "irnata; pur ogg so dat foc alla\l"
	.string "r'stoccia.$"

Indoor_Vecchio_Piromane_EventScript_AzumarillAzumeril_Text_0:
# 19 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	.string "AZUMARILL: Maririroo!$"

Autostrada_EventScript_SeasideParkingSign_Text_0:
# 25 "data//maps/Indoor_Vecchio_Piromane/scripts.pory"
	.string "Strada Stadale Vandra$"
