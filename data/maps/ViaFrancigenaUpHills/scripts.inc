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


ViaFrancigenaUpHill_EventScript_Sign::
# 14 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Sign_Text_0, MSGBOX_DEFAULT
# 15 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
	return


ViaFrancigenaUphill_sign_Tip8::
# 19 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUphill_sign_Tip8_Text_0
# 20 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
	return


ViaFrancigena_EventScript_Vinz::
# 25 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigena_EventScript_Vinz_Text_0, MSGBOX_DEFAULT
# 28 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
	return


ViaFrancigenaUpHill_EventScript_Mirtilli::
# 33 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	lockall
# 34 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 35 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ViaFrancigenaUpHill_EventScript_Mirtilli_2
# 38 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaFrancigenaUpHill_EventScript_Mirtilli_3
ViaFrancigenaUpHill_EventScript_Mirtilli_1:
# 45 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
# 46 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	releaseall
	return

ViaFrancigenaUpHill_EventScript_Mirtilli_2:
# 37 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_0
	goto ViaFrancigenaUpHill_EventScript_Mirtilli_1

ViaFrancigenaUpHill_EventScript_Mirtilli_3:
# 40 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_1
# 41 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox ViaFrancigenaUpHill_EventScript_Mirtilli_Text_2
# 42 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special HealPlayerParty
# 43 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	setrespawn HEAL_LOCATION_ViaFrancigenaUpHill_Mirtilli
	goto ViaFrancigenaUpHill_EventScript_Mirtilli_1


nonEntrareInQuellaGrotta::
# 53 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	goto_if_set FLAG_POKE_BALL_MC, nonEntrareInQuellaGrotta_1
# 59 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
# 60 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	applymovement 2, uphill_mov_donato_verso_alice
# 61 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
# 62 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox nonEntrareInQuellaGrotta_Text_1, MSGBOX_NPC
# 66 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
# 67 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, uphill_mov_alice2
# 68 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitmovement 0
	return

nonEntrareInQuellaGrotta_1:
# 54 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox nonEntrareInQuellaGrotta_Text_0, MSGBOX_NPC
	return


# 72 "data//maps/ViaFrancigenaUpHills/scripts.pory"
uphill_mov_donato_verso_alice:
# 73 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	face_right
	step_end

# 75 "data//maps/ViaFrancigenaUpHills/scripts.pory"
uphill_mov_alice2:
# 76 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	walk_down
# 77 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	face_down
	step_end

UpHill_EventScript_Emanuele::
# 83 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox UpHill_EventScript_Emanuele_Text_0, MSGBOX_NPC
# 84 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
# 86 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	call ViaFrancEast_EventScript_postBattle
	return


Uphill_Donato::
# 93 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 94 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Uphill_Donato_2
Uphill_Donato_1:
# 122 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	call givepotionifzero
# 123 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_5
# 124 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	closemessage
	return

Uphill_Donato_2:
# 95 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	lockall
# 96 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Donato_text_cancella_pkm, MSGBOX_YESNO
# 97 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Uphill_Donato_5
# 101 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Uphill_Donato_6
Uphill_Donato_4:
# 119 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	releaseall
	goto Uphill_Donato_1

Uphill_Donato_5:
# 98 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_0
	goto Uphill_Donato_4

Uphill_Donato_6:
# 102 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_1
# 103 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special ChoosePartyMon
# 104 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitstate
# 105 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special ChoosePartyMon
# 106 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	waitstate
# 107 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Uphill_Donato_9
# 112 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	special DeleteChosenPartyMon
# 113 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_3
# 114 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_4
# 115 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto Uphill_Donato_4

Uphill_Donato_9:
# 109 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	msgbox Uphill_Donato_Text_2
	goto Uphill_Donato_4


ViaFrancigenaUpHill_EventScript_Sign_Text_0:
# 14 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "CASA PETITTA: Tip: Le Pokeball sono\n"
	.string "molto rare, udale saggiamente. Se vuoi\l"
	.string "liberare una delle tue pokeball\l"
	.string "rilasciando un pokemon, vai a paralre\l"
	.string "con Donato.$"

ViaFrancigenaUphill_sign_Tip8_Text_0:
# 19 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "Tip 8: Nelle grotte ci sono molti\n"
	.string "pokemon di terra, molti di questi\l"
	.string "possono usare RockSmash, assicurati di\l"
	.string "catturarne almeno uno!$"

ViaFrancigena_EventScript_Vinz_Text_0:
# 25 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "VINZ: Ciao Ali, Vuoi che ti faccio un po'\n"
	.string "di foto con il mio cellulare?\p"
	.string "Perche' non te le faccio con la\n"
	.string "macchinetta professionale?!\p"
	.string "Perche' sono un finto fotografo, anche\n"
	.string "in Giappone e NewYork ho fatto le foto\l"
	.string "con il cellualre$"

ViaFrancigenaUpHill_EventScript_Mirtilli_Text_0:
# 37 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

ViaFrancigenaUpHill_EventScript_Mirtilli_Text_1:
# 40 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

ViaFrancigenaUpHill_EventScript_Mirtilli_Text_2:
# 41 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

nonEntrareInQuellaGrotta_Text_0:
# 54 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "ERENDIL!!!!!$"

nonEntrareInQuellaGrotta_Text_1:
# 62 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Aspetta Alice, Non entrare e'\n"
	.string "troppo buio!\p"
	.string "Ho visto MariaCristina entrare ed\n"
	.string "uscire piu' volte da questa grotta.\p"
	.string "Forse lei puo' dirti come entrare.\p"
	.string "L'ultima volta che l'ho vitsa faceva\n"
	.string "cose strane vicino al lago.$"

UpHill_EventScript_Emanuele_Text_0:
# 83 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "EMANUELE: Ciao Alice, ho visto i tuoi\n"
	.string "amici Luca e Roberta entrare nella\l"
	.string "grotta; fai attenzione!$"

Uphill_Donato_Text_0:
# 98 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO:Ok, torno ad allenarmi$"

Uphill_Donato_Text_1:
# 102 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO:Seleziona il tuo pkm$"

Uphill_Donato_Text_2:
# 109 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Ok sara' per la prossima volta$"

Uphill_Donato_Text_3:
# 113 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Il tuo pokemon e' tormato\n"
	.string "libero$"

Uphill_Donato_Text_4:
# 114 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: eccoti anche la pokeball in cui\n"
	.string "si trovava$"

Uphill_Donato_Text_5:
# 123 "data//maps/ViaFrancigenaUpHills/scripts.pory"
	.string "DONATO: Uno due, uno due; sicura che\n"
	.string "non vuoi venire a correre?$"
