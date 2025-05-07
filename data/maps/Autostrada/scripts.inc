Autostrada_MapScripts::
# 2 "data//maps/Autostrada/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNameIndoor_Autostr
# 3 "data//maps/Autostrada/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/Autostrada/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv25
	.byte 0


HideMapNameIndoor_Autostr::
# 8 "data//maps/Autostrada/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Autostrada_Sign_Mirtilli::
# 14 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_Sign_Mirtilli_Text_0
# 15 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Mirtilli::
# 19 "data//maps/Autostrada/scripts.pory"
	lockall
# 20 "data//maps/Autostrada/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 21 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Autostrada_EventScript_Mirtilli_2
# 23 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Autostrada_EventScript_Mirtilli_3
Autostrada_EventScript_Mirtilli_1:
# 29 "data//maps/Autostrada/scripts.pory"
	releaseall
	return

Autostrada_EventScript_Mirtilli_2:
# 22 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Mirtilli_Text_0
	goto Autostrada_EventScript_Mirtilli_1

Autostrada_EventScript_Mirtilli_3:
# 24 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Mirtilli_Text_1
# 25 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Mirtilli_Text_2
# 26 "data//maps/Autostrada/scripts.pory"
	special HealPlayerParty
# 27 "data//maps/Autostrada/scripts.pory"
	setrespawn HEAL_LOCATION_ViaFrancigenaMiddleNORD_Mirtilli
	goto Autostrada_EventScript_Mirtilli_1


DLC_carnello::
# 38 "data//maps/Autostrada/scripts.pory"
	msgbox DLC_carnello_Text_0, MSGBOX_NPC
# 39 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_Sign::
# 45 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_Sign_Text_0, MSGBOX_NPC
# 46 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


GuardiaForestale_bikeroad::
# 51 "data//maps/Autostrada/scripts.pory"
	msgbox GuardiaForestale_bikeroad_Text_0, MSGBOX_NPC
# 52 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


temp_trigger::
# 58 "data//maps/Autostrada/scripts.pory"
	goto_if_set FLAG_SYS_CYCLING_ROAD, temp_trigger_2
# 63 "data//maps/Autostrada/scripts.pory"
	goto_if_unset FLAG_SYS_CYCLING_ROAD, temp_trigger_3
temp_trigger_1:
# 76 "data//maps/Autostrada/scripts.pory"
	closemessage
	return

temp_trigger_2:
# 60 "data//maps/Autostrada/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 61 "data//maps/Autostrada/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, script_mov_cycledown
	goto temp_trigger_1

temp_trigger_3:
# 65 "data//maps/Autostrada/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 66 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq temp_trigger_6
# 70 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq temp_trigger_7
	goto temp_trigger_1

temp_trigger_6:
# 67 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_0, MSGBOX_DEFAULT
# 69 "data//maps/Autostrada/scripts.pory"
	call Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
	goto temp_trigger_1

temp_trigger_7:
# 72 "data//maps/Autostrada/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 73 "data//maps/Autostrada/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, script_mov_cycleup
	goto temp_trigger_1


# 79 "data//maps/Autostrada/scripts.pory"
script_mov_cycleup:
# 80 "data//maps/Autostrada/scripts.pory"
	walk_up
	step_end

# 83 "data//maps/Autostrada/scripts.pory"
script_mov_cycledown:
# 84 "data//maps/Autostrada/scripts.pory"
	walk_down
	step_end

Autostrada_EventScript_CyclingGirl1::
# 92 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_CyclingGirl1_Text_0, MSGBOX_NPC
# 93 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Abigail::
# 99 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Battle_Text_Abigail, after_Text_Abigail
# 100 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Abigail_Text_0, MSGBOX_NPC
# 101 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Davide::
# 122 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Battle_Text_Davide, after_Text_Davide
# 123 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Davide_Text_0, MSGBOX_NPC
# 124 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Benjamin::
# 143 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Battle_Text_Benjamin, after_Text_Benjamin
	return


Autostrada_EventScript_CyclingGuy1::
# 161 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_CyclingGuy1_Text_0, MSGBOX_NPC
# 162 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Jasmine::
# 166 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Battle_Text_Jasmine, after_Text_Jasmine
# 167 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Jasmine_Text_0, MSGBOX_NPC
# 168 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Jacob::
# 181 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Battle_Text_Jacob, after_Text_Jacob
# 182 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Jacob_Text_0, MSGBOX_NPC
# 183 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_ChallengeGuy::
# 198 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_ChallengeGuy_Text_0, MSGBOX_NPC
# 199 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_Sign_Mirtilli_Text_0:
# 14 "data//maps/Autostrada/scripts.pory"
	.string "I mirtilli sono una panacea, ed anche\n"
	.string "uno dei pochi modi per curare il tuo\l"
	.string "party. Fanne buon uso.$"

Autostrada_EventScript_Mirtilli_Text_0:
# 22 "data//maps/Autostrada/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

Autostrada_EventScript_Mirtilli_Text_1:
# 24 "data//maps/Autostrada/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

Autostrada_EventScript_Mirtilli_Text_2:
# 25 "data//maps/Autostrada/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

DLC_carnello_Text_0:
# 38 "data//maps/Autostrada/scripts.pory"
	.string "La DLC Carnjl non e' ancora disponibile.\n"
	.string "Non ti posso lasciar passare$"

Autostrada_Sign_Text_0:
# 45 "data//maps/Autostrada/scripts.pory"
	.string "Tip 8: La superstrada delle bici e' un\n"
	.string "posto pericoloso pieno di allnatori in\l"
	.string "gamba. Assicurati di livellare!$"

GuardiaForestale_bikeroad_Text_0:
# 51 "data//maps/Autostrada/scripts.pory"
	.string "Puoi salire sulla pista ciclabile solo se\n"
	.string "hai una bicicletta!!!!!$"

temp_trigger_Text_0:
# 67 "data//maps/Autostrada/scripts.pory"
	.string "Mi serve una bicicletta$"

Autostrada_EventScript_CyclingGirl1_Text_0:
# 92 "data//maps/Autostrada/scripts.pory"
	.string "LUCA C.: Ciao Alice, ti piace la mia nuova\n"
	.string "BMW bike super costosa e super\l"
	.string "sgargiante? Broom Broom!$"

Autostrada_EventScript_Abigail_Text_0:
# 100 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom, togliti dalla strada.$"

Autostrada_EventScript_Davide_Text_0:
# 123 "data//maps/Autostrada/scripts.pory"
	.string "DAVIDE: Ciao Alice, ti serve un Dyson?$"

Autostrada_EventScript_CyclingGuy1_Text_0:
# 161 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom! Attento a non finire sotto\n"
	.string "una ruota!$"

Autostrada_EventScript_Jasmine_Text_0:
# 167 "data//maps/Autostrada/scripts.pory"
	.string "Con questo sole, pedalare sembra\n"
	.string "volare...$"

Autostrada_EventScript_Jacob_Text_0:
# 182 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom$"

Autostrada_EventScript_ChallengeGuy_Text_0:
# 198 "data//maps/Autostrada/scripts.pory"
	.string "Sfido ogni allenatore che incontro! Tu\n"
	.string "sembri un degno avversario... forse.$"

Battle_Text_Abigail::
# 105 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom, togliti dalla strada.$"

after_Text_Abigail::
# 110 "data//maps/Autostrada/scripts.pory"
	.string "Ho persooooooo, broom broom.$"

Battle_Text_Davide::
# 128 "data//maps/Autostrada/scripts.pory"
	.string "DAVIDE: Ciao Alice, ti serve un Dyson?$"

after_Text_Davide::
# 133 "data//maps/Autostrada/scripts.pory"
	.string "Ho persooooooo, fammi ascoltare un po'\n"
	.string "di musica con le mie super cuffie.$"

Battle_Text_Benjamin::
# 148 "data//maps/Autostrada/scripts.pory"
	.string "La bici è relax… Ma un po’ di lotta ci sta!$"

after_Text_Benjamin::
# 153 "data//maps/Autostrada/scripts.pory"
	.string "La prossima volta porto un’amaca.$"

Battle_Text_Jasmine::
# 171 "data//maps/Autostrada/scripts.pory"
	.string "Con questo sole, pedalare sembra\n"
	.string "volare... Ma vediamo se voli anche in\l"
	.string "battaglia!$"

after_Text_Jasmine::
# 175 "data//maps/Autostrada/scripts.pory"
	.string "Hai lo spirito del vento… bello e\n"
	.string "imprevedibile!$"

Battle_Text_Jacob::
# 186 "data//maps/Autostrada/scripts.pory"
	.string "Ehi tu! Sei veloce? Vediamo chi vince!$"

after_Text_Jacob::
# 190 "data//maps/Autostrada/scripts.pory"
	.string "Accidenti! Sei più rapido della mia bici!$"

Autostrada_EventScript_CyclingGuy2::
# 193 "data//maps/Autostrada/scripts.pory"
	.string "Corro così veloce che i Pidgey mi\n"
	.string "mangiano la polvere!$"
