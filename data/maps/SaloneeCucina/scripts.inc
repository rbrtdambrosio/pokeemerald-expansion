SaloneeCucina_MapScripts::
	.byte 0


SaloneeCucina_EventScript_NeedPokemonTriggerLeft::
# 5 "data//maps/SaloneeCucina/scripts.pory"
	lockall
# 6 "data//maps/SaloneeCucina/scripts.pory"
	waitmovement 0
# 7 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Testo_per_uscire, MSGBOX_DEFAULT
# 8 "data//maps/SaloneeCucina/scripts.pory"
	closemessage
# 9 "data//maps/SaloneeCucina/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SaloneeCucina_Movement_PushPlayerBackFromDoor
# 10 "data//maps/SaloneeCucina/scripts.pory"
	waitmovement 0
# 11 "data//maps/SaloneeCucina/scripts.pory"
	releaseall
	return


# 15 "data//maps/SaloneeCucina/scripts.pory"
SaloneeCucina_Movement_PushPlayerBackFromDoor:
# 16 "data//maps/SaloneeCucina/scripts.pory"
	walk_up
# 17 "data//maps/SaloneeCucina/scripts.pory"
	face_left
	step_end

SaloneeCucina_EventScript_Paola::
# 26 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text, MSGBOX_NPC
	return


SaloneeCucina_EventScript_InteragisciMilla::
# 35 "data//maps/SaloneeCucina/scripts.pory"
	lockall
# 36 "data//maps/SaloneeCucina/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 37 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_0, MSGBOX_YESNO
# 38 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SaloneeCucina_EventScript_InteragisciMilla_2
# 42 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaloneeCucina_EventScript_InteragisciMilla_3
SaloneeCucina_EventScript_InteragisciMilla_1:
# 51 "data//maps/SaloneeCucina/scripts.pory"
	hidemonpic
# 52 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
# 53 "data//maps/SaloneeCucina/scripts.pory"
	releaseall
	end

SaloneeCucina_EventScript_InteragisciMilla_2:
# 39 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_1
	goto SaloneeCucina_EventScript_InteragisciMilla_1

SaloneeCucina_EventScript_InteragisciMilla_3:
# 43 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_2
# 44 "data//maps/SaloneeCucina/scripts.pory"
	givemon SPECIES_POOCHYENA, 50, ITEM_MASTER_BALL
# 45 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_3
# 46 "data//maps/SaloneeCucina/scripts.pory"
	removeobject 2
# 47 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 48 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto SaloneeCucina_EventScript_InteragisciMilla_1


SaloneeCucina_EventScript_InteragisciMilla_Text_0:
# 37 "data//maps/SaloneeCucina/scripts.pory"
	.string "Porti Milla fuori per una passeggiata?$"

SaloneeCucina_EventScript_InteragisciMilla_Text_1:
# 39 "data//maps/SaloneeCucina/scripts.pory"
	.string "The Cerulean Gym's doors don't\n"
	.string "open until morning.$"

SaloneeCucina_EventScript_InteragisciMilla_Text_2:
# 43 "data//maps/SaloneeCucina/scripts.pory"
	.string "La risposta e' 1$"

SaloneeCucina_EventScript_InteragisciMilla_Text_3:
# 45 "data//maps/SaloneeCucina/scripts.pory"
	.string "Hai ricevuto Milla$"

Testo_per_uscire::
# 20 "data//maps/SaloneeCucina/scripts.pory"
	.string "MOM: Aliiiiceeee?! Dove vai? Vieni qui un\n"
	.string "momento!$"

Paola_text::
# 29 "data//maps/SaloneeCucina/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Visto che\n"
	.string "stai sennza fare nulla\p"
	.string "Puoi portare uno dei cani a fare una\n"
	.string "passeggiata?$"
