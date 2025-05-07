CampoGizziSamigym_MapScripts::
# 3 "data//maps/CampoGizziSamigym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupUpCampoGSamiGym
# 4 "data//maps/CampoGizziSamigym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


HideMapNamePopupUpCampoGSamiGym::
# 9 "data//maps/CampoGizziSamigym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


samigymbattle::
# 15 "data//maps/CampoGizziSamigym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_3, Samy_Text, Samy_Dopo
	return


Samy_Text::
# 18 "data//maps/CampoGizziSamigym/scripts.pory"
	.string "Iiiiiiiiiiiiiihhhhhhhhhh Aliiiiiiiiiiiii Non\n"
	.string "batterai mai i miei gatti!$"

Samy_Dopo::
# 21 "data//maps/CampoGizziSamigym/scripts.pory"
	.string "Iiiiiiiiiiiiiihhhhhhhhhh Aliiiiiiiiiiiii Sei\n"
	.string "troppo forte!$"
