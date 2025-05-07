SaloneeCucina_MapScripts::
# 2 "data//maps/SaloneeCucina/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupSoggCucina
# 3 "data//maps/SaloneeCucina/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


HideMapNamePopupSoggCucina::
# 7 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


SaloneeCucina_EventScript_NeedPokemonTriggerLeft::
# 12 "data//maps/SaloneeCucina/scripts.pory"
	lockall
# 13 "data//maps/SaloneeCucina/scripts.pory"
	waitmovement 0
# 14 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Testo_per_uscire, MSGBOX_DEFAULT
# 15 "data//maps/SaloneeCucina/scripts.pory"
	closemessage
# 16 "data//maps/SaloneeCucina/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SaloneeCucina_Movement_PushPlayerBackFromDoor
# 17 "data//maps/SaloneeCucina/scripts.pory"
	waitmovement 0
# 18 "data//maps/SaloneeCucina/scripts.pory"
	releaseall
	return


# 22 "data//maps/SaloneeCucina/scripts.pory"
SaloneeCucina_Movement_PushPlayerBackFromDoor:
# 23 "data//maps/SaloneeCucina/scripts.pory"
	walk_up
# 24 "data//maps/SaloneeCucina/scripts.pory"
	face_left
	step_end

SaloneeCucina_EventScript_Paola::
# 33 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 0
	goto_if_eq SaloneeCucina_EventScript_Paola_2
# 33 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 1
	goto_if_eq SaloneeCucina_EventScript_Paola_2
# 36 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 2
	goto_if_eq SaloneeCucina_EventScript_Paola_3
# 43 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 3
	goto_if_eq SaloneeCucina_EventScript_Paola_4
# 51 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text4, MSGBOX_NPC
# 52 "data//maps/SaloneeCucina/scripts.pory"
	call givepotionifzero
# 54 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 2
SaloneeCucina_EventScript_Paola_1:
# 56 "data//maps/SaloneeCucina/scripts.pory"
	closemessage
	return

SaloneeCucina_EventScript_Paola_2:
# 34 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text, MSGBOX_NPC
# 35 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 1
	goto SaloneeCucina_EventScript_Paola_1

SaloneeCucina_EventScript_Paola_3:
# 37 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text2, MSGBOX_NPC
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaloneeCucina_EventScript_Paola_12
SaloneeCucina_EventScript_Paola_11:
# 42 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 3
	goto SaloneeCucina_EventScript_Paola_1

SaloneeCucina_EventScript_Paola_4:
# 44 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text3, MSGBOX_NPC
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaloneeCucina_EventScript_Paola_15
SaloneeCucina_EventScript_Paola_14:
# 49 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 4
	goto SaloneeCucina_EventScript_Paola_1

SaloneeCucina_EventScript_Paola_12:
# 39 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text_pozione, MSGBOX_NPC
# 40 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	goto SaloneeCucina_EventScript_Paola_11

SaloneeCucina_EventScript_Paola_15:
# 46 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text_pozione, MSGBOX_NPC
# 47 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	goto SaloneeCucina_EventScript_Paola_14


givepotionifzero::
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq givepotionifzero_1
	return

givepotionifzero_1:
# 61 "data//maps/SaloneeCucina/scripts.pory"
	msgbox givepotionifzero_Text_0, MSGBOX_NPC
# 62 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	return


SaloneeCucina_EventScript_Tommaso::
# 86 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 0
	goto_if_eq SaloneeCucina_EventScript_Tommaso_2
# 86 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 1
	goto_if_eq SaloneeCucina_EventScript_Tommaso_2
# 88 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 2
	goto_if_eq SaloneeCucina_EventScript_Tommaso_3
# 94 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 3
	goto_if_eq SaloneeCucina_EventScript_Tommaso_4
# 101 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Tommaso_text4, MSGBOX_NPC
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaloneeCucina_EventScript_Tommaso_15
SaloneeCucina_EventScript_Tommaso_1:
# 107 "data//maps/SaloneeCucina/scripts.pory"
	closemessage
	return

SaloneeCucina_EventScript_Tommaso_2:
# 87 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Tommaso_text, MSGBOX_NPC
	goto SaloneeCucina_EventScript_Tommaso_1

SaloneeCucina_EventScript_Tommaso_3:
# 89 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Tommaso_text2, MSGBOX_NPC
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaloneeCucina_EventScript_Tommaso_11
	goto SaloneeCucina_EventScript_Tommaso_1

SaloneeCucina_EventScript_Tommaso_4:
# 95 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Tommaso_text3, MSGBOX_NPC
	checkitem ITEM_POTION
# 0 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaloneeCucina_EventScript_Tommaso_13
	goto SaloneeCucina_EventScript_Tommaso_1

SaloneeCucina_EventScript_Tommaso_11:
# 91 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text_pozione, MSGBOX_NPC
# 92 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	goto SaloneeCucina_EventScript_Tommaso_1

SaloneeCucina_EventScript_Tommaso_13:
# 97 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text_pozione, MSGBOX_NPC
# 98 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	goto SaloneeCucina_EventScript_Tommaso_1

SaloneeCucina_EventScript_Tommaso_15:
# 103 "data//maps/SaloneeCucina/scripts.pory"
	msgbox Paola_text_pozione, MSGBOX_NPC
# 104 "data//maps/SaloneeCucina/scripts.pory"
	giveitem ITEM_POTION, 1
	goto SaloneeCucina_EventScript_Tommaso_1


SaloneeCucina_EventScript_InteragisciMilla::
# 131 "data//maps/SaloneeCucina/scripts.pory"
	lockall
# 132 "data//maps/SaloneeCucina/scripts.pory"
	showmonpic SPECIES_YAMPER, 10, 3
# 133 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 0
	goto_if_eq SaloneeCucina_EventScript_InteragisciMilla_2
# 138 "data//maps/SaloneeCucina/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, SaloneeCucina_EventScript_InteragisciMilla_5
# 157 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_5
# 158 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
SaloneeCucina_EventScript_InteragisciMilla_1:
# 162 "data//maps/SaloneeCucina/scripts.pory"
	hidemonpic
# 163 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
# 164 "data//maps/SaloneeCucina/scripts.pory"
	releaseall
	end

SaloneeCucina_EventScript_InteragisciMilla_2:
# 134 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_0
# 135 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
	goto SaloneeCucina_EventScript_InteragisciMilla_1

SaloneeCucina_EventScript_InteragisciMilla_5:
# 139 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_1, MSGBOX_YESNO
# 140 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SaloneeCucina_EventScript_InteragisciMilla_8
# 143 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaloneeCucina_EventScript_InteragisciMilla_9
	goto SaloneeCucina_EventScript_InteragisciMilla_1

SaloneeCucina_EventScript_InteragisciMilla_8:
# 141 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_2
	goto SaloneeCucina_EventScript_InteragisciMilla_1

SaloneeCucina_EventScript_InteragisciMilla_9:
# 144 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_3
# 145 "data//maps/SaloneeCucina/scripts.pory"
	givemon SPECIES_YAMPER, 6
# 146 "data//maps/SaloneeCucina/scripts.pory"
	special ChangePokemonNickname_ROB_Milla
# 147 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMilla_Text_4
# 148 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
# 149 "data//maps/SaloneeCucina/scripts.pory"
	removeobject 2
# 150 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_UNUSED_MILLAVIS
# 151 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 152 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 2
# 153 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_CASA_ALICE_USCITA, 1
	goto SaloneeCucina_EventScript_InteragisciMilla_1


SaloneeCucina_EventScript_InteragisciMina::
# 170 "data//maps/SaloneeCucina/scripts.pory"
	lockall
# 171 "data//maps/SaloneeCucina/scripts.pory"
	showmonpic SPECIES_YAMPER, 10, 3
# 172 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_LOGICA_CASA, 0
	goto_if_eq SaloneeCucina_EventScript_InteragisciMina_2
# 177 "data//maps/SaloneeCucina/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, SaloneeCucina_EventScript_InteragisciMina_5
# 196 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_5
# 197 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
SaloneeCucina_EventScript_InteragisciMina_1:
# 201 "data//maps/SaloneeCucina/scripts.pory"
	hidemonpic
# 202 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
# 203 "data//maps/SaloneeCucina/scripts.pory"
	releaseall
	end

SaloneeCucina_EventScript_InteragisciMina_2:
# 173 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_0
# 174 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
	goto SaloneeCucina_EventScript_InteragisciMina_1

SaloneeCucina_EventScript_InteragisciMina_5:
# 178 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_1, MSGBOX_YESNO
# 179 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SaloneeCucina_EventScript_InteragisciMina_8
# 182 "data//maps/SaloneeCucina/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaloneeCucina_EventScript_InteragisciMina_9
	goto SaloneeCucina_EventScript_InteragisciMina_1

SaloneeCucina_EventScript_InteragisciMina_8:
# 180 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_2
	goto SaloneeCucina_EventScript_InteragisciMina_1

SaloneeCucina_EventScript_InteragisciMina_9:
# 183 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_3
# 184 "data//maps/SaloneeCucina/scripts.pory"
	givemon SPECIES_YAMPER, 5
# 185 "data//maps/SaloneeCucina/scripts.pory"
	special ChangePokemonNickname_ROB_Mina
# 186 "data//maps/SaloneeCucina/scripts.pory"
	msgbox SaloneeCucina_EventScript_InteragisciMina_Text_4
# 187 "data//maps/SaloneeCucina/scripts.pory"
	waitmessage
# 188 "data//maps/SaloneeCucina/scripts.pory"
	removeobject 3
# 189 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_UNUSED_MINAVIS
# 190 "data//maps/SaloneeCucina/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 191 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_LOGICA_CASA, 2
# 192 "data//maps/SaloneeCucina/scripts.pory"
	setvar VAR_CASA_ALICE_USCITA, 1
	goto SaloneeCucina_EventScript_InteragisciMina_1


givepotionifzero_Text_0:
# 61 "data//maps/SaloneeCucina/scripts.pory"
	.string "Prendi questa pozione, ti sara' utile$"

SaloneeCucina_EventScript_InteragisciMilla_Text_0:
# 134 "data//maps/SaloneeCucina/scripts.pory"
	.string "Milla, sei proprio bella!!$"

SaloneeCucina_EventScript_InteragisciMilla_Text_1:
# 139 "data//maps/SaloneeCucina/scripts.pory"
	.string "Porti Milla fuori per una passeggiata?$"

SaloneeCucina_EventScript_InteragisciMilla_Text_2:
# 141 "data//maps/SaloneeCucina/scripts.pory"
	.string "Andiamo a vedere come sta Mina$"

SaloneeCucina_EventScript_InteragisciMilla_Text_3:
# 144 "data//maps/SaloneeCucina/scripts.pory"
	.string "Milla scelgo te!$"

SaloneeCucina_EventScript_InteragisciMilla_Text_4:
# 147 "data//maps/SaloneeCucina/scripts.pory"
	.string "Hai ricevuto Milla$"

SaloneeCucina_EventScript_InteragisciMilla_Text_5:
# 157 "data//maps/SaloneeCucina/scripts.pory"
	.string "Ma quanto e' bella Milla?!$"

SaloneeCucina_EventScript_InteragisciMina_Text_0:
# 173 "data//maps/SaloneeCucina/scripts.pory"
	.string "Mina, sei proprio bella!!$"

SaloneeCucina_EventScript_InteragisciMina_Text_1:
# 178 "data//maps/SaloneeCucina/scripts.pory"
	.string "Porti Mina fuori per una passeggiata?$"

SaloneeCucina_EventScript_InteragisciMina_Text_2:
# 180 "data//maps/SaloneeCucina/scripts.pory"
	.string "Andiamo a vedere come sta Milla$"

SaloneeCucina_EventScript_InteragisciMina_Text_3:
# 183 "data//maps/SaloneeCucina/scripts.pory"
	.string "Mina scelgo te!$"

SaloneeCucina_EventScript_InteragisciMina_Text_4:
# 186 "data//maps/SaloneeCucina/scripts.pory"
	.string "Hai ricevuto Mina$"

SaloneeCucina_EventScript_InteragisciMina_Text_5:
# 196 "data//maps/SaloneeCucina/scripts.pory"
	.string "Ma quanto e' bella Mina?!$"

Testo_per_uscire::
# 27 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA: Aliiiiceeee?! Dove vai? Vieni qui\n"
	.string "un momento!$"

Paola_text::
# 66 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA: {PLAYER}! {PLAYER}! Visto\n"
	.string "che stai senza fare nulla\p"
	.string "Puoi portare uno dei cani a fare una\n"
	.string "passeggiata?$"

Paola_text2::
# 70 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA: Mi ha chimato Mimma. Mi ha detto\n"
	.string "che Samantha e Mavi hanno deciso di\l"
	.string "entrare nella lega pokemon. Perche' non\l"
	.string "le vai a trovare? Pero' fai attenzione\l"
	.string "ai cinghiali!$"

Paola_text3::
# 73 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA:Mi raccomando non ti allontanare\n"
	.string "troppo che ci sono i cinghiali e ti si\l"
	.string "mangiano!$"

Paola_text4::
# 76 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA:Finisco di sistemare, la cucina, il\n"
	.string "salone, le scale, la cantina, la foffitta,\l"
	.string "il mondo e mi faccio quattro passi$"

Paola_text_pozione::
# 79 "data//maps/SaloneeCucina/scripts.pory"
	.string "PAOLA:Prendi questa POZIONE ti puo'\n"
	.string "essere utile$"

Tommaso_text::
# 111 "data//maps/SaloneeCucina/scripts.pory"
	.string "TOMMASO: {PLAYER}! Vai a paralre con\n"
	.string "tua madre\p"
	.string "Mi sa che voleva qualcosa.$"

Tommaso_text2::
# 115 "data//maps/SaloneeCucina/scripts.pory"
	.string "TOMMASO:Ohi Ohi, che mal di pancia. Mi\n"
	.string "raccomando chiudi il cancello quando\l"
	.string "esci.$"

Tommaso_text3::
# 118 "data//maps/SaloneeCucina/scripts.pory"
	.string "TOMMASO: ohi Ohi Ohi, non ce la faccio\n"
	.string "piu.'$"

Tommaso_text4::
# 121 "data//maps/SaloneeCucina/scripts.pory"
	.string "TOMMASO: Oggi mi sento un po' meglio.\p"
	.string "Mi sa che tra un po' vado a fare una\n"
	.string "passeggiata.$"
