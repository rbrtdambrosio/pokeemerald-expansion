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


StanzaAlice_On_Load::
# 20 "data//maps/StanzaAlice/scripts.pory"
	setrespawn HEAL_LOCATION_STANZA_ALICE
# 21 "data//maps/StanzaAlice/scripts.pory"
	setflag FLAG_BADGE03_GET
# 22 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 5
	return


DizionarioElfico_Sign::
# 26 "data//maps/StanzaAlice/scripts.pory"
	msgbox DizionarioElfico_Sign_Text_0, MSGBOX_DEFAULT
# 27 "data//maps/StanzaAlice/scripts.pory"
	giveitem ITEM_DIZIONARIO_ELFICO
# 28 "data//maps/StanzaAlice/scripts.pory"
	closemessage
	return


temp_pokeball::
# 32 "data//maps/StanzaAlice/scripts.pory"
	lockall
# 33 "data//maps/StanzaAlice/scripts.pory"
	giveitem ITEM_POKE_BALL
# 34 "data//maps/StanzaAlice/scripts.pory"
	removeobject 1
# 35 "data//maps/StanzaAlice/scripts.pory"
	setflag FLAG_pokeballstanza
# 37 "data//maps/StanzaAlice/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 41 "data//maps/StanzaAlice/scripts.pory"
	releaseall
	return


scelta_livello_diff::
# 49 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_0, MSGBOX_DEFAULT
# 50 "data//maps/StanzaAlice/scripts.pory"
	multichoice 25, 5, MULTI_DIFFICULTY_LEVEL, 0
# 51 "data//maps/StanzaAlice/scripts.pory"
	closemessage
# 52 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq scelta_livello_diff_2
# 56 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq scelta_livello_diff_3
# 61 "data//maps/StanzaAlice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq scelta_livello_diff_4
scelta_livello_diff_1:
# 66 "data//maps/StanzaAlice/scripts.pory"
	closemessage
	return

scelta_livello_diff_2:
# 54 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_1, MSGBOX_DEFAULT
# 55 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 0
	goto scelta_livello_diff_1

scelta_livello_diff_3:
# 58 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_2, MSGBOX_DEFAULT
# 59 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 1
	goto scelta_livello_diff_1

scelta_livello_diff_4:
# 63 "data//maps/StanzaAlice/scripts.pory"
	msgbox scelta_livello_diff_Text_3, MSGBOX_DEFAULT
# 64 "data//maps/StanzaAlice/scripts.pory"
	setvar VAR_DIFFICULTY, 2
	goto scelta_livello_diff_1


DizionarioElfico_Sign_Text_0:
# 26 "data//maps/StanzaAlice/scripts.pory"
	.string "Il Dizionario EI: Elfico Italiano,\n"
	.string "sempre utile in ogni occasione$"

scelta_livello_diff_Text_0:
# 49 "data//maps/StanzaAlice/scripts.pory"
	.string "Questo libro parla di videogiochi.\p"
	.string "Il mio gioco preferito e':$"

scelta_livello_diff_Text_1:
# 54 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi semplici\p$"

scelta_livello_diff_Text_2:
# 58 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi bilanciati\p$"

scelta_livello_diff_Text_3:
# 63 "data//maps/StanzaAlice/scripts.pory"
	.string "Ti piaccioni i giochi estremi\p$"
