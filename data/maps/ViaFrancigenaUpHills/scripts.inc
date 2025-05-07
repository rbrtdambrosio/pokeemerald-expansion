ViaFrancigenaUpHills_MapScripts::
# 3 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupUpHill
# 4 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 5 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv12
	.byte 0


HideMapNamePopupUpHill::
# 9 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


ViaFrancigenaUpHill_EventScript_Mirtilli::
# 15 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	lockall
# 16 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 17 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ViaFrancigenaUpHill_EventScript_Mirtilli_2
# 19 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaFrancigenaUpHill_EventScript_Mirtilli_3
ViaFrancigenaUpHill_EventScript_Mirtilli_1:
# 25 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	releaseall
	return

ViaFrancigenaUpHill_EventScript_Mirtilli_2:
# 18 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_0
	goto ViaFrancigenaUpHill_EventScript_Mirtilli_1

ViaFrancigenaUpHill_EventScript_Mirtilli_3:
# 20 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_1
# 21 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_2
# 22 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special HealPlayerParty
# 23 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	setrespawn HEAL_LOCATION_ViaFrancigenaUpHill_Mirtilli
	goto ViaFrancigenaUpHill_EventScript_Mirtilli_1


nonEntrareInQuellaGrotta::
# 32 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	goto_if_set FLAG_POKE_BALL_MC, nonEntrareInQuellaGrotta_1
# 38 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
# 39 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	applymovement 2, uphill_mov_donato_verso_alice
# 40 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
# 41 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox nonEntrareInQuellaGrotta_Text_1, MSGBOX_NPC
# 45 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
# 46 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, uphill_mov_alice2
# 47 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
	return

nonEntrareInQuellaGrotta_1:
# 33 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox nonEntrareInQuellaGrotta_Text_0, MSGBOX_NPC
	return


# 51 "data//maps/ViaFrancigenaUpHills/scripts.pory"
uphill_mov_donato_verso_alice:
# 52 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	face_right
	step_end

# 54 "data//maps/ViaFrancigenaUpHills/scripts.pory"
uphill_mov_alice2:
# 55 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	walk_down
# 56 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	face_down
	step_end

UpHill_EventScript_Emanuele::
# 62 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox UpHill_EventScript_Emanuele_Text_0, MSGBOX_NPC
# 63 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
# 65 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	call ViaFrancEast_EventScript_postBattle
	return


Uphill_Donato::
# 72 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 73 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Uphill_Donato_2
Uphill_Donato_1:
# 101 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	call givepotionifzero
# 102 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_5
# 103 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
	return

Uphill_Donato_2:
# 74 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	lockall
# 75 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Donato_text_cancella_pkm, MSGBOX_YESNO
# 76 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Uphill_Donato_5
# 80 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Uphill_Donato_6
Uphill_Donato_4:
# 98 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	releaseall
	goto Uphill_Donato_1

Uphill_Donato_5:
# 77 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_0
	goto Uphill_Donato_4

Uphill_Donato_6:
# 81 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_1
# 82 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special ChoosePartyMon
# 83 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitstate
# 84 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special ChoosePartyMon
# 85 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitstate
# 86 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Uphill_Donato_9
# 91 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special DeleteChosenPartyMon
# 92 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_3
# 93 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_4
# 94 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto Uphill_Donato_4

Uphill_Donato_9:
# 88 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_2
	goto Uphill_Donato_4


ViaFrancigenaUpHill_EventScript_Mirtilli_Text_0:
# 18 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

ViaFrancigenaUpHill_EventScript_Mirtilli_Text_1:
# 20 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

ViaFrancigenaUpHill_EventScript_Mirtilli_Text_2:
# 21 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

nonEntrareInQuellaGrotta_Text_0:
# 33 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "ERENDIL!!!!!$"

nonEntrareInQuellaGrotta_Text_1:
# 41 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Aspetta Alice, Non entrare e'\n"
	.string "troppo buio!\p"
	.string "Ho visto MariaCristina entrare ed\n"
	.string "uscire piu' volte da questa grotta.\p"
	.string "Forse lei puo' dirti come entrare.\p"
	.string "L'ultima volta che l'ho vitsa faceva\n"
	.string "cose strane vicino al lago.$"

UpHill_EventScript_Emanuele_Text_0:
# 62 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "EMANUELE: Ciao Alice, ho visto i tuoi\n"
	.string "amici Luca e Roberta entrare nella\l"
	.string "grotta; fai attenzione!$"

Uphill_Donato_Text_0:
# 77 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO:Ok, torno ad allenarmi$"

Uphill_Donato_Text_1:
# 81 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO:Seleziona il tuo pkm$"

Uphill_Donato_Text_2:
# 88 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Ok sara' per la prossima volta$"

Uphill_Donato_Text_3:
# 92 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Il tuo pokemon e' tormato\n"
	.string "libero$"

Uphill_Donato_Text_4:
# 93 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: eccoti anche la pokeball in cui\n"
	.string "si trovava$"

Uphill_Donato_Text_5:
# 102 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Uno due, uno due; sicura che\n"
	.string "non vuoi venire a correre?$"
