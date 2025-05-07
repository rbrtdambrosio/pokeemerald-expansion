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


DLC_carnello::
# 12 "data//maps/Autostrada/scripts.pory"
	msgbox DLC_carnello_Text_0, MSGBOX_NPC
# 13 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


GuardiaForestale_bikeroad::
# 21 "data//maps/Autostrada/scripts.pory"
	msgbox GuardiaForestale_bikeroad_Text_0, MSGBOX_NPC
# 22 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


temp_trigger::
# 26 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_0, MSGBOX_DEFAULT
# 28 "data//maps/Autostrada/scripts.pory"
	goto_if_set FLAG_SYS_CYCLING_ROAD, temp_trigger_2
# 33 "data//maps/Autostrada/scripts.pory"
	goto_if_unset FLAG_SYS_CYCLING_ROAD, temp_trigger_3
temp_trigger_1:
# 45 "data//maps/Autostrada/scripts.pory"
	closemessage
	return

temp_trigger_2:
# 29 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_1, MSGBOX_DEFAULT
# 30 "data//maps/Autostrada/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 31 "data//maps/Autostrada/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, script_mov_cycledown
	goto temp_trigger_1

temp_trigger_3:
# 34 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_2, MSGBOX_DEFAULT
# 35 "data//maps/Autostrada/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 36 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq temp_trigger_6
# 39 "data//maps/Autostrada/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq temp_trigger_7
	goto temp_trigger_1

temp_trigger_6:
# 37 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_3, MSGBOX_DEFAULT
# 38 "data//maps/Autostrada/scripts.pory"
	call Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
	goto temp_trigger_1

temp_trigger_7:
# 40 "data//maps/Autostrada/scripts.pory"
	msgbox temp_trigger_Text_4, MSGBOX_DEFAULT
# 41 "data//maps/Autostrada/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 42 "data//maps/Autostrada/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, script_mov_cycleup
	goto temp_trigger_1


# 48 "data//maps/Autostrada/scripts.pory"
script_mov_cycleup:
# 49 "data//maps/Autostrada/scripts.pory"
	walk_up
	step_end

# 52 "data//maps/Autostrada/scripts.pory"
script_mov_cycledown:
# 53 "data//maps/Autostrada/scripts.pory"
	walk_down
	step_end

Autostrada_EventScript_CyclingGirl1::
# 61 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_CyclingGirl1_Text_0, MSGBOX_NPC
# 62 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Abigail::
# 68 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Battle_Text_Abigail, after_Text_Abigail
# 69 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Abigail_Text_0, MSGBOX_NPC
# 70 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Davide::
# 91 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Battle_Text_Davide, after_Text_Davide
# 92 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Davide_Text_0, MSGBOX_NPC
# 93 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Benjamin::
# 112 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Battle_Text_Benjamin, after_Text_Benjamin
	return


Autostrada_EventScript_CyclingGuy1::
# 130 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_CyclingGuy1_Text_0, MSGBOX_NPC
# 131 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Jasmine::
# 135 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Battle_Text_Jasmine, after_Text_Jasmine
# 136 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Jasmine_Text_0, MSGBOX_NPC
# 137 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_Jacob::
# 150 "data//maps/Autostrada/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Battle_Text_Jacob, after_Text_Jacob
# 151 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_Jacob_Text_0, MSGBOX_NPC
# 152 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


Autostrada_EventScript_ChallengeGuy::
# 167 "data//maps/Autostrada/scripts.pory"
	msgbox Autostrada_EventScript_ChallengeGuy_Text_0, MSGBOX_NPC
# 168 "data//maps/Autostrada/scripts.pory"
	closemessage
	return


DLC_carnello_Text_0:
# 12 "data//maps/Autostrada/scripts.pory"
	.string "La DLC Carnjl non e' ancora disponibile.\n"
	.string "Non ti posso lasciar passare$"

GuardiaForestale_bikeroad_Text_0:
# 21 "data//maps/Autostrada/scripts.pory"
	.string "Puoi salire sulla pista ciclabile solo se\n"
	.string "hai una bicicletta!!!!!$"

temp_trigger_Text_0:
# 26 "data//maps/Autostrada/scripts.pory"
	.string "triggering temp_trigger$"

temp_trigger_Text_1:
# 29 "data//maps/Autostrada/scripts.pory"
	.string "FLAG_SYS_CYCLING_ROAD is TRUE. non si puo\n"
	.string "scendere dalla bici: setto la flag a\l"
	.string "FALSE$"

temp_trigger_Text_2:
# 34 "data//maps/Autostrada/scripts.pory"
	.string "FLAG_SYS_CYCLING_ROAD is FALSE,\n"
	.string "controllo il player$"

temp_trigger_Text_3:
# 37 "data//maps/Autostrada/scripts.pory"
	.string "Fplayer non sulla bici$"

temp_trigger_Text_4:
# 40 "data//maps/Autostrada/scripts.pory"
	.string "Player sulla bici setting\n"
	.string "FLAG_SYS_CYCLING_ROAD to true$"

Autostrada_EventScript_CyclingGirl1_Text_0:
# 61 "data//maps/Autostrada/scripts.pory"
	.string "LUCA C.: Ciao Alice, ti piace la mia nuova\n"
	.string "BMW bike super costosa e super\l"
	.string "sgargiante? Broom Broom!$"

Autostrada_EventScript_Abigail_Text_0:
# 69 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom, togliti dalla strada.$"

Autostrada_EventScript_Davide_Text_0:
# 92 "data//maps/Autostrada/scripts.pory"
	.string "DAVIDE: Ciao Alice, ti serve un Dyson?$"

Autostrada_EventScript_CyclingGuy1_Text_0:
# 130 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom! Attento a non finire sotto\n"
	.string "una ruota!$"

Autostrada_EventScript_Jasmine_Text_0:
# 136 "data//maps/Autostrada/scripts.pory"
	.string "Con questo sole, pedalare sembra\n"
	.string "volare...$"

Autostrada_EventScript_Jacob_Text_0:
# 151 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom$"

Autostrada_EventScript_ChallengeGuy_Text_0:
# 167 "data//maps/Autostrada/scripts.pory"
	.string "Sfido ogni allenatore che incontro! Tu\n"
	.string "sembri un degno avversario... forse.$"

Battle_Text_Abigail::
# 74 "data//maps/Autostrada/scripts.pory"
	.string "Broom Broom, togliti dalla strada.$"

after_Text_Abigail::
# 79 "data//maps/Autostrada/scripts.pory"
	.string "Ho persooooooo, broom broom.$"

Battle_Text_Davide::
# 97 "data//maps/Autostrada/scripts.pory"
	.string "DAVIDE: Ciao Alice, ti serve un Dyson?$"

after_Text_Davide::
# 102 "data//maps/Autostrada/scripts.pory"
	.string "Ho persooooooo, fammi ascoltare un po'\n"
	.string "di musica con le mie super cuffie.$"

Battle_Text_Benjamin::
# 117 "data//maps/Autostrada/scripts.pory"
	.string "La bici è relax… Ma un po’ di lotta ci sta!$"

after_Text_Benjamin::
# 122 "data//maps/Autostrada/scripts.pory"
	.string "La prossima volta porto un’amaca.$"

Battle_Text_Jasmine::
# 140 "data//maps/Autostrada/scripts.pory"
	.string "Con questo sole, pedalare sembra\n"
	.string "volare... Ma vediamo se voli anche in\l"
	.string "battaglia!$"

after_Text_Jasmine::
# 144 "data//maps/Autostrada/scripts.pory"
	.string "Hai lo spirito del vento… bello e\n"
	.string "imprevedibile!$"

Battle_Text_Jacob::
# 155 "data//maps/Autostrada/scripts.pory"
	.string "Ehi tu! Sei veloce? Vediamo chi vince!$"

after_Text_Jacob::
# 159 "data//maps/Autostrada/scripts.pory"
	.string "Accidenti! Sei più rapido della mia bici!$"

Autostrada_EventScript_CyclingGuy2::
# 162 "data//maps/Autostrada/scripts.pory"
	.string "Corro così veloce che i Pidgey mi\n"
	.string "mangiano la polvere!$"
