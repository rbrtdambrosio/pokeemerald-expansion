TEST_GIARDINO_ALICE_MapScripts::
# 2 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopup
# 3 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv8
	.byte 0


Script_MaxLv5::
# 7 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 5
	return


Script_MaxLv8::
# 10 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 8
	return


Script_MaxLv10::
# 14 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 10
	return


Script_MaxLv12::
# 17 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 12
	return


Script_MaxLv15::
# 21 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 15
	return


Script_MaxLv17::
# 24 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 17
	return


Script_MaxLv20::
# 27 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 20
	return


Script_MaxLv25::
# 31 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_MAX_AREA_LEVEL, 25
	return


GiardinoAlice_EventScript_DonatoSign::
# 43 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox GiardinoAlice_EventScript_DonatoSign_Text_0
# 44 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	closemessage
	return


GiardinoAlice_EventScript_AliceHouseSign::
# 47 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox GiardinoAlice_EventScript_AliceHouseSign_Text_0
# 48 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	closemessage
	return


TEST_GIARDINO_ALICE_Donato::
# 52 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	lockall
# 53 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 54 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt TEST_GIARDINO_ALICE_Donato_2
# 58 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_DONATO, 0
	goto_if_eq TEST_GIARDINO_ALICE_Donato_6
# 61 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_DONATO, 1
	goto_if_eq TEST_GIARDINO_ALICE_Donato_7
# 64 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_DONATO, 2
	goto_if_eq TEST_GIARDINO_ALICE_Donato_8
# 67 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_DONATO, 3
	goto_if_eq TEST_GIARDINO_ALICE_Donato_9
TEST_GIARDINO_ALICE_Donato_5:
# 71 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	closemessage
TEST_GIARDINO_ALICE_Donato_1:
# 73 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	release
	return

TEST_GIARDINO_ALICE_Donato_2:
# 55 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	call cancelpokemonservice
	goto TEST_GIARDINO_ALICE_Donato_1

TEST_GIARDINO_ALICE_Donato_6:
# 59 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Donato_text, MSGBOX_NPC
# 60 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_DONATO, 1
	goto TEST_GIARDINO_ALICE_Donato_5

TEST_GIARDINO_ALICE_Donato_7:
# 62 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Donato_text2, MSGBOX_NPC
# 63 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_DONATO, 2
	goto TEST_GIARDINO_ALICE_Donato_5

TEST_GIARDINO_ALICE_Donato_8:
# 65 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Donato_text1, MSGBOX_NPC
# 66 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_DONATO, 3
	goto TEST_GIARDINO_ALICE_Donato_5

TEST_GIARDINO_ALICE_Donato_9:
# 68 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Donato_text3, MSGBOX_NPC
# 69 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	setvar VAR_DONATO, 1
	goto TEST_GIARDINO_ALICE_Donato_5


cancelpokemonservice::
# 77 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	lockall
# 78 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Donato_text_cancella_pkm, MSGBOX_YESNO
# 79 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne cancelpokemonservice_2
# 83 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq cancelpokemonservice_3
cancelpokemonservice_1:
# 101 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	releaseall
	return

cancelpokemonservice_2:
# 80 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox cancelpokemonservice_Text_0
	goto cancelpokemonservice_1

cancelpokemonservice_3:
# 84 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox cancelpokemonservice_Text_1
# 85 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	special ChoosePartyMon
# 86 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	waitstate
# 87 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	special ChoosePartyMon
# 88 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	waitstate
# 89 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq cancelpokemonservice_6
# 94 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	special DeleteChosenPartyMon
# 95 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox cancelpokemonservice_Text_3
# 96 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox cancelpokemonservice_Text_4
# 97 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto cancelpokemonservice_1

cancelpokemonservice_6:
# 91 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox cancelpokemonservice_Text_2
	goto cancelpokemonservice_1


LittlerootTown_EventScript_AliceHouseSign::
# 124 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	msgbox Testo_CartelloAlice, MSGBOX_DEFAULT
	return


GiardinoAlice_EventScript_DonatoSign_Text_0:
# 43 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "Tip 2: DONATO ti puo' aiutare a liberarti\n"
	.string "dei pokemon che non vuoi piu'$"

GiardinoAlice_EventScript_AliceHouseSign_Text_0:
# 47 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "CASA MELE\p"
	.string "Tip 1: Se sei a corto di pozioni, parla\n"
	.string "con i tuoi amici ed i membri della tua\l"
	.string "famiglia$"

cancelpokemonservice_Text_0:
# 80 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO:Ok, torno ad allenarmi$"

cancelpokemonservice_Text_1:
# 84 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO:Seleziona il tuo pkm$"

cancelpokemonservice_Text_2:
# 91 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Ok sara' per la prossima volta$"

cancelpokemonservice_Text_3:
# 95 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Il tuo pokemon e' tormato\n"
	.string "libero$"

cancelpokemonservice_Text_4:
# 96 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: eccoti anche la pokeball in cui\n"
	.string "si trovava$"

Donato_text_cancella_pkm::
# 105 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Ciao {PLAYER}! Vuoi liberarti\n"
	.string "di qualche pkm?$"

Donato_text::
# 109 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Ciao {PLAYER}! Uno, due, Uno,\n"
	.string "due. Mi sto allenando! Devo essere in\l"
	.string "forma!$"

Donato_text1::
# 113 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Ho quasi fatto, un'altra\n"
	.string "mezz'ora poi mi vado a fare due\l"
	.string "arrosticini con Emanuele$"

Donato_text2::
# 116 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Stai andando da Mavi e Sami? Ho\n"
	.string "sentito che sono diventate molto forti,\l"
	.string "Secondo me ti devi allenare un po'!$"

Donato_text3::
# 119 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "DONATO: Non puoi prendere la\n"
	.string "superstrada senza bicicletta, prova a\l"
	.string "passare dal lato del lago; Stai attenta\l"
	.string "ai cinghiali!!!!!!$"

Testo_CartelloAlice::
# 127 "data//maps/TEST_GIARDINO_ALICE/scripts.pory"
	.string "Casa MELE$"
