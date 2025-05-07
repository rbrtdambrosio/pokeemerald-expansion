CampoGizzi_CasaMavi_MapScripts::
# 3 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupUpCampoG
# 4 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 5 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv25
	.byte 0


HideMapNamePopupUpCampoG::
# 9 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


MechanicGym_Sign::
# 13 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox MechanicGym_Sign_Text_0, MSGBOX_DEFAULT
	return


CampoGizzi_CasaMaviEventScript_Mirtilli::
# 19 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	lockall
# 20 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 21 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CampoGizzi_CasaMaviEventScript_Mirtilli_2
# 23 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CampoGizzi_CasaMaviEventScript_Mirtilli_3
CampoGizzi_CasaMaviEventScript_Mirtilli_1:
# 29 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	releaseall
	return

CampoGizzi_CasaMaviEventScript_Mirtilli_2:
# 22 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_0
	goto CampoGizzi_CasaMaviEventScript_Mirtilli_1

CampoGizzi_CasaMaviEventScript_Mirtilli_3:
# 24 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_1
# 25 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_2
# 26 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	special HealPlayerParty
# 27 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	setrespawn HEAL_LOCATION_CampoGizzi_Mirtilli
	goto CampoGizzi_CasaMaviEventScript_Mirtilli_1


CampoGizzi_EventScript_Mattia::
# 38 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Battle_Text_Mattia, after_Battle_Text_Mattia
# 39 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Mattia_Text_0, MSGBOX_NPC
# 40 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


CampoGizzi_EventScript_Emanuele::
# 54 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Emanuele_Text_0, MSGBOX_NPC
# 55 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
# 56 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	call ViaFrancEast_EventScript_postBattle
	return


CampoGizzi_Donato::
# 61 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	lockall
# 62 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 63 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt CampoGizzi_Donato_2
CampoGizzi_Donato_1:
# 67 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_Donato_Text_0, MSGBOX_NPC
# 68 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return

CampoGizzi_Donato_2:
# 64 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	call cancelpokemonservice
	goto CampoGizzi_Donato_1


CampoGizzi_EventScript_Vez::
# 75 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Battle_Text_Mattia, after_Battle_Text_Mattia
# 76 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Vez_Text_0, MSGBOX_NPC
# 77 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


MechanicGym_Sign_Text_0:
# 13 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MACHANIC GYM\p"
	.string "Vi ripariamo le macchine e vi facciamo\n"
	.string "un culo cosi' con i pokemon\p"
	.string "Warning: la DLC gym non e' ancora\n"
	.string "disponibile$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_0:
# 22 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_1:
# 24 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_2:
# 25 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

CampoGizzi_EventScript_Mattia_Text_0:
# 39 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: Mavi ti sta aspettando dentro,\n"
	.string "stai attenta, e' molto piu' forte di me!$"

CampoGizzi_EventScript_Emanuele_Text_0:
# 54 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "EMANUELE: L'aria di campo Gizzi e'\n"
	.string "fantastica.$"

CampoGizzi_Donato_Text_0:
# 67 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "DONATO: Chissa se qui a campo gizzi\n"
	.string "fanno gli arrosticini$"

CampoGizzi_EventScript_Vez_Text_0:
# 76 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Vez: Uff Oggi ho fatto solo il giro del\n"
	.string "mondo 1 volta... meglio impegnarsi di piu'$"

Battle_Text_Mattia::
# 44 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: BWHAHWAHAHWAHA affronta il\n"
	.string "miglior neurochirurgo di campo Gizzi!$"

after_Battle_Text_Mattia::
# 48 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: BAHWHAWHAHWHA - ho perso!$"

Battle_Text_Vez::
# 81 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "VEZ: Bella vez; soc ma bell!$"

after_Battle_Text_Vez::
# 85 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "VEZ: NNNNOOOOO soc ma bell!$"
