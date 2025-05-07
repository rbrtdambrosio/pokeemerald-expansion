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
# 14 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


CampoGizzi_Mirtilli_sign::
# 18 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_Mirtilli_sign_Text_0
# 19 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


CampoGizzi_CasaMaviEventScript_Mirtilli::
# 22 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	lockall
# 23 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 24 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CampoGizzi_CasaMaviEventScript_Mirtilli_2
# 26 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CampoGizzi_CasaMaviEventScript_Mirtilli_3
CampoGizzi_CasaMaviEventScript_Mirtilli_1:
# 32 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
# 33 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	releaseall
	return

CampoGizzi_CasaMaviEventScript_Mirtilli_2:
# 25 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_0
	goto CampoGizzi_CasaMaviEventScript_Mirtilli_1

CampoGizzi_CasaMaviEventScript_Mirtilli_3:
# 27 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_1
# 28 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_CasaMaviEventScript_Mirtilli_Text_2
# 29 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	special HealPlayerParty
# 30 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	setrespawn HEAL_LOCATION_CampoGizzi_Mirtilli
	goto CampoGizzi_CasaMaviEventScript_Mirtilli_1


campogizziPokeball::
# 39 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	lockall
# 40 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	giveitem ITEM_POKE_BALL
# 41 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	removeobject 6
# 44 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 48 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	releaseall
	return


CampoGizzi_EventScript_Mattia::
# 53 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Battle_Text_Mattia, after_Battle_Text_Mattia
# 54 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Mattia_Text_0, MSGBOX_NPC
# 55 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


CampoGizzi_EventScript_Emanuele::
# 69 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Emanuele_Text_0, MSGBOX_NPC
# 70 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
# 71 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	call ViaFrancEast_EventScript_postBattle
	return


CampoGizzi_Donato::
# 76 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	lockall
# 77 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 78 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt CampoGizzi_Donato_2
CampoGizzi_Donato_1:
# 82 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_Donato_Text_0, MSGBOX_NPC
# 83 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return

CampoGizzi_Donato_2:
# 79 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	call cancelpokemonservice
	goto CampoGizzi_Donato_1


CampoGizzi_EventScript_Camilla::
# 93 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Camilla_Text_0, MSGBOX_NPC
# 96 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, Battle_Text_Mattia, after_Battle_Text_Mattia
# 98 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


CampoGizzi_EventScript_Ricc::
# 114 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	msgbox CampoGizzi_EventScript_Ricc_Text_0, MSGBOX_NPC
# 115 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	trainerbattle_single TRAINER_NOLAND, Battle_Text_Ricc, after_Battle_Text_Ricc
# 116 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	closemessage
	return


MechanicGym_Sign_Text_0:
# 13 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MACHANIC GYM\p"
	.string "Vi ripariamo le macchine e vi facciamo\n"
	.string "un culo cosi' con i pokemon\p"
	.string "Warning: la DLC gym non e' ancora\n"
	.string "disponibile$"

CampoGizzi_Mirtilli_sign_Text_0:
# 18 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Tip: Ricordati di guarire i tuoi pokemon\n"
	.string "usando i mirtilli. Se sarai sconfitta,\l"
	.string "ricomncerai dal pumto dove hai mangiato\l"
	.string "i mirtilli$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_0:
# 25 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_1:
# 27 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

CampoGizzi_CasaMaviEventScript_Mirtilli_Text_2:
# 28 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

CampoGizzi_EventScript_Mattia_Text_0:
# 54 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: Mavi ti sta aspettando dentro,\n"
	.string "stai attenta, e' molto piu' forte di me!$"

CampoGizzi_EventScript_Emanuele_Text_0:
# 69 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "EMANUELE: L'aria di campo Gizzi e'\n"
	.string "fantastica.$"

CampoGizzi_Donato_Text_0:
# 82 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "DONATO: Chissa se qui a campo gizzi\n"
	.string "fanno gli arrosticini$"

CampoGizzi_EventScript_Camilla_Text_0:
# 93 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "CAMI: Ciao Ali, come sembro una\n"
	.string "vecchia?! Ho solo messo i miei vestiti\l"
	.string "preferiti!!!\p"
	.string "Che ci faccoiamo qui? Riccardo ha\n"
	.string "sentito che Sami e Mavi sono diventate\l"
	.string "allenatrici di Pokemo.\p"
	.string "E' venuto a sfidarle!$"

CampoGizzi_EventScript_Ricc_Text_0:
# 114 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "RICC: Aliiiii pure qua ti trovo! E' una\n"
	.string "maledizione.$"

Battle_Text_Mattia::
# 59 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: BWHAHWAHAHWAHA affronta il\n"
	.string "miglior neurochirurgo di campo Gizzi!$"

after_Battle_Text_Mattia::
# 63 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "MATTIA: BAHWHAWHAHWHA - ho perso!$"

Battle_Text_Camilla::
# 102 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "CAMI: Se ti batto dovrai vestirti come\n"
	.string "me!$"

after_Battle_Text_Camilla::
# 106 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "CAMI: Vabbe' non avrai mai vestiti alla\n"
	.string "moda come i miei!$"

Battle_Text_Ricc::
# 120 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "RICC: Ti batto con il mio stile!$"

after_Battle_Text_Ricc::
# 124 "data//maps/CampoGizzi_CasaMavi/scripts.pory"
	.string "RICC: Porco due porco! Battuto da\n"
	.string "Alice! La mia carriera e' finita$"
