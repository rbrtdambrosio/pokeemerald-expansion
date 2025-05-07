ViaFrancigenaMiddleNORD_MapScripts::
# 2 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupMiddleNord
# 3 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv12
	.byte 0


HideMapNamePopupMiddleNord::
# 11 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


ViaFrancigenaMiddleNORD_Sign_Tip_3::
# 16 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_Sign_Tip_3_Text_0
# 17 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
	return


ViaFrancigenaMiddleNORD_Sign_Tip_4::
# 21 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_Sign_Tip_4_Text_0
# 22 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
	return


ViaFrancEast_EventScript_incontro_emanuele_up::
# 29 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	lockall
# 30 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	setvar VAR_INCONTRO_EMANUELE, 1
# 31 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox Text_Emanuele_from_Afar, MSGBOX_DEFAULT
# 32 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
# 33 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Francigena_mov_alice_up
# 34 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	waitmovement 0
# 35 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	applymovement 1, Francigena_mov_manuele_verso_alice
# 36 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	waitmovement 0
# 37 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	call battaglia_emanuele
# 38 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
# 39 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	release
	return


ViaFrancEast_EventScript_incontro_emanuele_down::
# 42 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	lockall
# 43 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	setvar VAR_INCONTRO_EMANUELE, 1
# 44 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox Text_Emanuele_from_Afar, MSGBOX_DEFAULT
# 45 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
# 46 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Francigena_mov_alice_down
# 47 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	waitmovement 0
# 48 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	applymovement 1, Francigena_mov_manuele_verso_alice
# 49 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	waitmovement 0
# 50 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	call battaglia_emanuele
# 51 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
# 52 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	release
	return


battaglia_emanuele::
# 57 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Text_Emanuele_1, Text_EmanualePostBattle, ViaFrancEast_EventScript_postBattle
	return


ViaFrancEast_EventScript_postBattle::
# 63 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	specialvar VAR_RESULT, NumberPokemoninParty
# 68 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	copyvar VAR_UNUSED_0x8014, VAR_NUM_POKEBALL
# 69 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	subvar VAR_UNUSED_0x8014, VAR_RESULT
# 74 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	setvar VAR_0x8004, ITEM_POKE_BALL
# 75 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	specialvar VAR_RESULT, GetPokeBallQuantityScript
# 80 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	subvar VAR_UNUSED_0x8014, VAR_RESULT
# 85 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	compare VAR_UNUSED_0x8014, 0
	goto_if_eq ViaFrancEast_EventScript_postBattle_2
# 88 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_UNUSED_0x8014
# 89 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancEast_EventScript_postBattle_Text_1, MSGBOX_DEFAULT
# 90 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	giveitem ITEM_POKE_BALL, VAR_UNUSED_0x8014
ViaFrancEast_EventScript_postBattle_1:
# 93 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	closemessage
	return

ViaFrancEast_EventScript_postBattle_2:
# 86 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancEast_EventScript_postBattle_Text_0, MSGBOX_DEFAULT
	goto ViaFrancEast_EventScript_postBattle_1


ViaFrancigenaMiddleNORD_EventScript_InteragisciJolly::
# 99 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	lockall
# 100 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	showmonpic SPECIES_MIGHTYENA, 10, 3
# 101 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_EventScript_InteragisciJolly_Text_0
# 102 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_EventScript_InteragisciJolly_Text_1
# 103 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	hidemonpic
# 104 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	waitmessage
# 105 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	releaseall
	return


ViaFrancigenaMiddleNORD_EventScript_Mirtilli::
# 110 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	lockall
# 111 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 112 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ViaFrancigenaMiddleNORD_EventScript_Mirtilli_2
# 114 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaFrancigenaMiddleNORD_EventScript_Mirtilli_3
ViaFrancigenaMiddleNORD_EventScript_Mirtilli_1:
# 120 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	releaseall
	return

ViaFrancigenaMiddleNORD_EventScript_Mirtilli_2:
# 113 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_0
	goto ViaFrancigenaMiddleNORD_EventScript_Mirtilli_1

ViaFrancigenaMiddleNORD_EventScript_Mirtilli_3:
# 115 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_1
# 116 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	msgbox ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_2
# 117 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	special HealPlayerParty
# 118 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	setrespawn HEAL_LOCATION_ViaFrancigenaMiddleNORD_Mirtilli
	goto ViaFrancigenaMiddleNORD_EventScript_Mirtilli_1


# 125 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
Francigena_mov_alice_up:
# 126 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_down
# 126 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_down
	step_end

# 129 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
Francigena_mov_alice_down:
# 130 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_down
	step_end

# 133 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
Francigena_mov_manuele_verso_alice:
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 134 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_up
# 135 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_right
# 135 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_right
# 135 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_right
# 135 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_right
# 135 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	walk_right
# 136 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	face_down
	step_end

ViaFrancigenaMiddleNORD_Sign_Tip_3_Text_0:
# 16 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "Tip 3: I mirtilli sono una panacea, ed\n"
	.string "anche uno dei pochi modi per curare il\l"
	.string "tuo party. Fanne buon uso.$"

ViaFrancigenaMiddleNORD_Sign_Tip_4_Text_0:
# 21 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "Tip 4: Se perdi le Pokeball, Emanuele te\n"
	.string "le restituisce$"

ViaFrancEast_EventScript_postBattle_Text_0:
# 86 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE: Hai gia tutte le pokeball cge ti servono. Se ne perdi qualcuna torna da me!$"

ViaFrancEast_EventScript_postBattle_Text_1:
# 89 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE: ti mancano {STR_VAR_1} Poké Ball,\p eccole!$"

ViaFrancigenaMiddleNORD_EventScript_InteragisciJolly_Text_0:
# 101 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "Jolly si sta godendo un po di sole$"

ViaFrancigenaMiddleNORD_EventScript_InteragisciJolly_Text_1:
# 102 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "JOLLY: Woof Woff$"

ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_0:
# 113 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_1:
# 115 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

ViaFrancigenaMiddleNORD_EventScript_Mirtilli_Text_2:
# 116 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

Text_Emanuele_from_Afar::
# 139 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE:Aliceeeeeeeeeee!$"

Text_Emanuele_1::
# 142 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE:Ciao Alice! Donato si sta\n"
	.string "allenando, vero?!\p"
	.string "Allora aspetto un po' altrimenti mi fa\n"
	.string "correre anche a me.\p"
	.string "Ti va di fare una combattimento?$"

Text_EmanualePostBattle::
# 147 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE:Accipicchia!, Sei diventata\n"
	.string "forte.$"

Text_Emanuele_off_battle::
# 150 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE:Aspetto un altro po' e\n"
	.string "raggiungo Donato$"

Text_Emanuele_no_Potions::
# 153 "data//maps/ViaFrancigenaMiddleNORD/scripts.pory"
	.string "EMANUELE:Devi stare attenta qui\n"
	.string "intorno\p"
	.string "e' pieno di cinghilai\p"
	.string "prendi questa pozione$"
