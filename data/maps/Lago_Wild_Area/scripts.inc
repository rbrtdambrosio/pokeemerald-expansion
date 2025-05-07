Lago_Wild_Area_MapScripts::
# 2 "data//maps/Lago_Wild_Area/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNameLagoWA
# 3 "data//maps/Lago_Wild_Area/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/Lago_Wild_Area/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv20
	.byte 0


HideMapNameLagoWA::
# 8 "data//maps/Lago_Wild_Area/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Lago_Wild_Area_Sign::
# 12 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_Sign_Text_0
# 13 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return


Lago_Wild_Area_Sign_EventScript_Mirtilli::
# 18 "data//maps/Lago_Wild_Area/scripts.pory"
	lockall
# 19 "data//maps/Lago_Wild_Area/scripts.pory"
	specialvar VAR_RESULT, CheckPartyFullHealed
# 20 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Lago_Wild_Area_Sign_EventScript_Mirtilli_2
# 22 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Lago_Wild_Area_Sign_EventScript_Mirtilli_3
Lago_Wild_Area_Sign_EventScript_Mirtilli_1:
# 28 "data//maps/Lago_Wild_Area/scripts.pory"
	releaseall
	return

Lago_Wild_Area_Sign_EventScript_Mirtilli_2:
# 21 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_0
	goto Lago_Wild_Area_Sign_EventScript_Mirtilli_1

Lago_Wild_Area_Sign_EventScript_Mirtilli_3:
# 23 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_1
# 24 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_2
# 25 "data//maps/Lago_Wild_Area/scripts.pory"
	special HealPlayerParty
# 26 "data//maps/Lago_Wild_Area/scripts.pory"
	setrespawn HEAL_LOCATION_LagoWild_Mirtilli
	goto Lago_Wild_Area_Sign_EventScript_Mirtilli_1


Lago_Wild_EventScript_Emanuele::
# 34 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_EventScript_Emanuele_Text_0, MSGBOX_NPC
# 35 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
# 36 "data//maps/Lago_Wild_Area/scripts.pory"
	call ViaFrancEast_EventScript_postBattle
	return


LoagoWild_Donato::
# 41 "data//maps/Lago_Wild_Area/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 42 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt LoagoWild_Donato_2
LoagoWild_Donato_1:
# 72 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_5
# 73 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return

LoagoWild_Donato_2:
# 43 "data//maps/Lago_Wild_Area/scripts.pory"
	lockall
# 44 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Donato_text_cancella_pkm, MSGBOX_YESNO
# 45 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne LoagoWild_Donato_5
# 49 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LoagoWild_Donato_6
LoagoWild_Donato_4:
# 67 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
# 68 "data//maps/Lago_Wild_Area/scripts.pory"
	releaseall
	goto LoagoWild_Donato_1

LoagoWild_Donato_5:
# 46 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_0
	goto LoagoWild_Donato_4

LoagoWild_Donato_6:
# 50 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_1
# 51 "data//maps/Lago_Wild_Area/scripts.pory"
	special ChoosePartyMon
# 52 "data//maps/Lago_Wild_Area/scripts.pory"
	waitstate
# 53 "data//maps/Lago_Wild_Area/scripts.pory"
	special ChoosePartyMon
# 54 "data//maps/Lago_Wild_Area/scripts.pory"
	waitstate
# 55 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LoagoWild_Donato_9
# 60 "data//maps/Lago_Wild_Area/scripts.pory"
	special DeleteChosenPartyMon
# 61 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_3
# 62 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_4
# 63 "data//maps/Lago_Wild_Area/scripts.pory"
	giveitem ITEM_POKE_BALL
	goto LoagoWild_Donato_4

LoagoWild_Donato_9:
# 57 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox LoagoWild_Donato_Text_2
	goto LoagoWild_Donato_4


Lago_Wild_Area_EventScript_Jackson::
# 79 "data//maps/Lago_Wild_Area/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Battle_Text_LagoJackson, after_Battle_Text_LagoJackson
# 80 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Jackson_Text_0, MSGBOX_NPC
# 81 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return


Lago_Wild_Area_EventScript_Catherine::
# 95 "data//maps/Lago_Wild_Area/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Battle_Text_LagoCatherine, after_Battle_Text_LagoCatherine
# 96 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Catherine_Text_0, MSGBOX_NPC
# 97 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return


Lago_Wild_Area_EventScript_Chris::
# 110 "data//maps/Lago_Wild_Area/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Battle_Text_Lago_Chris, after_Battle_Text_Lago_Chris
# 111 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Chris_Text_0, MSGBOX_NPC
# 112 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return


PinguinoPokeball::
# 127 "data//maps/Lago_Wild_Area/scripts.pory"
	lockall
# 128 "data//maps/Lago_Wild_Area/scripts.pory"
	giveitem ITEM_POKE_BALL
# 129 "data//maps/Lago_Wild_Area/scripts.pory"
	removeobject 9
# 130 "data//maps/Lago_Wild_Area/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 131 "data//maps/Lago_Wild_Area/scripts.pory"
	releaseall
	return


Lago_Wild_Area_EventScript_Giada::
# 136 "data//maps/Lago_Wild_Area/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Battle_Text_Lago_Giada, after_Battle_Text_Lago_Giada
# 137 "data//maps/Lago_Wild_Area/scripts.pory"
	goto_if_set FLAG_POKE_BALL_GIADA, Lago_Wild_Area_EventScript_Giada_2
# 141 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Giada_Text_1, MSGBOX_NPC
# 142 "data//maps/Lago_Wild_Area/scripts.pory"
	giveitem ITEM_POKE_BALL
# 143 "data//maps/Lago_Wild_Area/scripts.pory"
	setflag FLAG_POKE_BALL_GIADA
# 144 "data//maps/Lago_Wild_Area/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
Lago_Wild_Area_EventScript_Giada_1:
# 147 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return

Lago_Wild_Area_EventScript_Giada_2:
# 138 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Giada_Text_0, MSGBOX_NPC
	goto Lago_Wild_Area_EventScript_Giada_1


Lago_Wild_Area_EventScript_Ciro::
	checkitem ITEM_BIKE_VOUCHER
# 0 "data//maps/Lago_Wild_Area/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Lago_Wild_Area_EventScript_Ciro_2
# 166 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Ciro_Text_1, MSGBOX_NPC
# 169 "data//maps/Lago_Wild_Area/scripts.pory"
	giveitem ITEM_BIKE_VOUCHER
Lago_Wild_Area_EventScript_Ciro_1:
# 171 "data//maps/Lago_Wild_Area/scripts.pory"
	closemessage
	return

Lago_Wild_Area_EventScript_Ciro_2:
# 163 "data//maps/Lago_Wild_Area/scripts.pory"
	msgbox Lago_Wild_Area_EventScript_Ciro_Text_0, MSGBOX_NPC
	goto Lago_Wild_Area_EventScript_Ciro_1


Lago_Wild_Area_Sign_Text_0:
# 12 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "Tip 5: Ricordati di guarire i tuoi\n"
	.string "pokemon usando i mirtilli. Se sarai\l"
	.string "sconfitta, ricomncerai dal pumto dove\l"
	.string "hai mangiato i mirtilli$"

Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_0:
# 21 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "Oh una pianta di mirtilli, fa miracoli!$"

Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_1:
# 23 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "Mirtilli selvatici! Non c'e' nulla di\n"
	.string "meglio per curare tutti i mali$"

Lago_Wild_Area_Sign_EventScript_Mirtilli_Text_2:
# 24 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "I tuoi Pokemon sono guariti$"

Lago_Wild_EventScript_Emanuele_Text_0:
# 34 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "EMANUELE: Come abbiamo fatto ad\n"
	.string "arrivare fino a qui?! Conosciamo tutti i\l"
	.string "passaggi$"

LoagoWild_Donato_Text_0:
# 46 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO:Ok, torno ad allenarmi$"

LoagoWild_Donato_Text_1:
# 50 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO:Seleziona il tuo pkm$"

LoagoWild_Donato_Text_2:
# 57 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO: Ok sara' per la prossima volta$"

LoagoWild_Donato_Text_3:
# 61 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO: Il tuo pokemon e' tormato\n"
	.string "libero$"

LoagoWild_Donato_Text_4:
# 62 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO: eccoti anche la pokeball in cui\n"
	.string "si trovava$"

LoagoWild_Donato_Text_5:
# 72 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "DONATO:Hai visto come sono stato\n"
	.string "veloce. Altre due flessioni e ci\l"
	.string "facciamo altri due arrosticini$"

Lago_Wild_Area_EventScript_Jackson_Text_0:
# 80 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE: Che guardi?! Sto\n"
	.string "lavorando duramente! Mi raccomando fai\l"
	.string "attenzione ai cinghiali!$"

Lago_Wild_Area_EventScript_Catherine_Text_0:
# 96 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE:Che duro lavoro il\n"
	.string "mio! Salvare il lago da tutti questi\l"
	.string "malfattori$"

Lago_Wild_Area_EventScript_Chris_Text_0:
# 111 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "PINGUINO: Puoi togliere un uomo dal\n"
	.string "lago ma mai un lago dall'uomo$"

Lago_Wild_Area_EventScript_Giada_Text_0:
# 138 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GIADA: C’est vraiment une belle journée.\n"
	.string "Ce serait l’idéal d’avoir un vélo pour\l"
	.string "faire une belle balade. J’ai vu Ciro\l"
	.string "passer à vélo comme une fusée !!$"

Lago_Wild_Area_EventScript_Giada_Text_1:
# 141 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "Visto che mi hai battuta ti regalo\n"
	.string "questa$"

Lago_Wild_Area_EventScript_Ciro_Text_0:
# 163 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "CIRO: Ho proprio voglia di correre. Una\n"
	.string "corsetta da qui in Norvegia penso possa\l"
	.string "andare bene$"

Lago_Wild_Area_EventScript_Ciro_Text_1:
# 166 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "CIRO: Ciao Alice, mi sto scaldando.\p"
	.string "Oggi corro solo millemila chilometri. Ah!\n"
	.string "a proposito non e' che ti puoi prendere\l"
	.string "cura della mia bici. L'ho lasciata nelle\l"
	.string "mani del vecchio scorbutico, ma non mi\l"
	.string "fido$"

Battle_Text_LagoJackson::
# 85 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE: Hey tu dove vai!\n"
	.string "Fammi vedere i documenti! Non vuoi?!\l"
	.string "Allora combattiamo!$"

after_Battle_Text_LagoJackson::
# 89 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE: Hai vinto, fammi\n"
	.string "tornare al mio duro lavoro!$"

Battle_Text_LagoCatherine::
# 101 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE: Hey dove vai! Sei\n"
	.string "una delinquente? Combattiamo!$"

after_Battle_Text_LagoCatherine::
# 104 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GUARDIA FORESTALE: Hai vinto, ma non mi\n"
	.string "inganni, lo so che sei una delinquente!$"

Battle_Text_Lago_Chris::
# 116 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "PINGUINO: Se ti batto dovrai mettere\n"
	.string "l'olio sul culo della modella$"

after_Battle_Text_Lago_Chris::
# 120 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "PINGUINO: Niente olio questa volta$"

Battle_Text_Lago_Giada::
# 152 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GIADA:Coucou Alice, comment ça va ?\n"
	.string "Regarde-moi ce soleil de fou !!!!! Je me\l"
	.string "régale dans la nature ! La tour Eiffel,\l"
	.string "c’est sympa, hein… mais franchement,\l"
	.string "vuoi mette Posta Fibreno ?$"

after_Battle_Text_Lago_Giada::
# 157 "data//maps/Lago_Wild_Area/scripts.pory"
	.string "GIADA: Nooooo ho perso!$"
