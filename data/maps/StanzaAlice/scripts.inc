StanzaAlice_MapScripts::
# 2 "data//maps/StanzaAlice/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, StanzaAlice_On_Load
# 3 "data//maps/StanzaAlice/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


NightmareModeOFF::
# 7 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_NightmareMode, 0
	return


HideMapNamePopup::
# 11 "data//maps/StanzaAlice/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


temp_bike::
# 16 "data//maps/StanzaAlice/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 17 "data//maps/StanzaAlice/scripts.pory"
	checkplayergender
# 18 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq temp_bike_2
# 21 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq temp_bike_3
temp_bike_1:
# 25 "data//maps/StanzaAlice/scripts.pory"
	closemessage
	return

temp_bike_2:
# 19 "data//maps/StanzaAlice/scripts.pory"
	msgbox temp_bike_Text_0, MSGBOX_DEFAULT
	goto temp_bike_1

temp_bike_3:
# 22 "data//maps/StanzaAlice/scripts.pory"
	msgbox temp_bike_Text_1, MSGBOX_DEFAULT
	goto temp_bike_1


StanzaAlice_On_Load::
# 31 "data//maps/StanzaAlice/scripts.pory"
	setrespawn HEAL_LOCATION_STANZA_ALICE
# 32 "data//maps/StanzaAlice/scripts.pory"
	setflag FLAG_BADGE03_GET
# 33 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 5
	return


DizionarioElfico_Sign::
# 37 "data//maps/StanzaAlice/scripts.pory"
	msgbox DizionarioElfico_Sign_Text_0, MSGBOX_DEFAULT
# 38 "data//maps/StanzaAlice/scripts.pory"
	giveitem ITEM_DIZIONARIO_ELFICO
# 39 "data//maps/StanzaAlice/scripts.pory"
	closemessage
	return


temp_pokeball::
# 43 "data//maps/StanzaAlice/scripts.pory"
	lockall
# 44 "data//maps/StanzaAlice/scripts.pory"
	giveitem ITEM_POKE_BALL
# 45 "data//maps/StanzaAlice/scripts.pory"
	removeobject 1
# 46 "data//maps/StanzaAlice/scripts.pory"
	setflag FLAG_pokeballstanza
# 48 "data//maps/StanzaAlice/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 52 "data//maps/StanzaAlice/scripts.pory"
	releaseall
	return


scelta_livello_diff::
# 60 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_0, MSGBOX_DEFAULT
# 61 "data//maps/StanzaAlice/scripts.pory"
	multichoice 25, 5, MULTI_DIFFICULTY_LEVEL, 0
# 62 "data//maps/StanzaAlice/scripts.pory"
	closemessage
# 63 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq scelta_livello_diff_2
# 67 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq scelta_livello_diff_3
# 72 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq scelta_livello_diff_4
scelta_livello_diff_1:
# 77 "data//maps/StanzaAlice/scripts.pory"
	closemessage
	return

scelta_livello_diff_2:
# 65 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_1, MSGBOX_DEFAULT
# 66 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 0
	goto scelta_livello_diff_1

scelta_livello_diff_3:
# 69 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_2, MSGBOX_DEFAULT
# 70 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 1
	goto scelta_livello_diff_1

scelta_livello_diff_4:
# 74 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_3, MSGBOX_DEFAULT
# 75 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 2
	goto scelta_livello_diff_1


temp_bike_Text_0:
# 19 "data//maps/StanzaAlice/scripts.pory"
	.string "FEMMINA$"

temp_bike_Text_1:
# 22 "data//maps/StanzaAlice/scripts.pory"
	.string "Machio$"

DizionarioElfico_Sign_Text_0:
# 37 "data//maps/StanzaAlice/scripts.pory"
	.string "Il Dizionario EI: Elfico Italiano,\n"
	.string "sempre utile in ogni occasione$"

scelta_livello_diff_Text_0:
# 60 "data//maps/StanzaAlice/scripts.pory"
	.string "Questo libro parla di videogiochi.\p"
	.string "Il mio gioco preferito e':$"

scelta_livello_diff_Text_1:
# 65 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi semplici\p$"

scelta_livello_diff_Text_2:
# 69 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi bilanciati\p$"

scelta_livello_diff_Text_3:
# 74 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi estremi\p$"
