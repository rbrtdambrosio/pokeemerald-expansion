CampoGizzyMaviGym_MapScripts::
# 3 "data/maps/CampoGizzyMaviGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupUpCampoGMaviGym
# 4 "data/maps/CampoGizzyMaviGym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


HideMapNamePopupUpCampoGMaviGym::
# 9 "data/maps/CampoGizzyMaviGym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mavigymbattle::
# 15 "data/maps/CampoGizzyMaviGym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, Mavi_Text, Mavi_Dopo
	return


Mavi_Text::
# 19 "data/maps/CampoGizzyMaviGym/scripts.pory"
	.string "Iiiiiiiiiiiiiihhhhhhhhhh Aliiiiiiiiiiiii Non\n"
	.string "batterai mai i miei gatti!$"

Mavi_Dopo::
# 22 "data/maps/CampoGizzyMaviGym/scripts.pory"
	.string "Iiiiiiiiiiiiiihhhhhhhhhh Aliiiiiiiiiiiii Sei\n"
	.string "troppo forte!$"
