ViaFrancigenaLagoSUD_MapScripts::
# 2 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupLagoSUD
# 3 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv15
	.byte 0


HideMapNamePopupLagoSUD::
# 8 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


ViaFrancigenaLagoSUD_sign_Tip6::
# 13 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	msgbox ViaFrancigenaLagoSUD_sign_Tip6_Text_0
# 14 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	closemessage
	return


ViaFrancLago_EventScript_MariaCristina::
	checkitem ITEM_DIZIONARIO_ELFICO
# 0 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ViaFrancLago_EventScript_MariaCristina_2
ViaFrancLago_EventScript_MariaCristina_1:
	checkitem ITEM_DIZIONARIO_ELFICO
# 0 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaFrancLago_EventScript_MariaCristina_5
ViaFrancLago_EventScript_MariaCristina_4:
# 38 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	closemessage
	return

ViaFrancLago_EventScript_MariaCristina_2:
# 22 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	call battaglia_mariaCristina
# 23 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	goto_if_set FLAG_POKE_BALL_MC, ViaFrancLago_EventScript_MariaCristina_7
# 26 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	msgbox ViaFrancLago_EventScript_MariaCristina_Text_0, MSGBOX_NPC
# 27 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	giveitem ITEM_POKE_BALL
# 28 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	setflag FLAG_POKE_BALL_MC
# 29 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 30 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	msgbox ViaFrancLago_EventScript_MariaCristina_Text_1, MSGBOX_NPC
	goto ViaFrancLago_EventScript_MariaCristina_1

ViaFrancLago_EventScript_MariaCristina_5:
# 36 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	msgbox MariaCristina_Text2, MSGBOX_NPC
	goto ViaFrancLago_EventScript_MariaCristina_4

ViaFrancLago_EventScript_MariaCristina_7:
# 24 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	msgbox MariaCristina_out_battle, MSGBOX_NPC
	goto ViaFrancLago_EventScript_MariaCristina_1


battaglia_mariaCristina::
# 67 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, MariaCristina_Text, MariaCristina_Dopo
	return


ViaFrancigenaLagoSUD_sign_Tip6_Text_0:
# 13 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "Tip 7: Alcuni tuoi amici sono dei veri\n"
	.string "appassionati di pokemon. Se non riesci a\l"
	.string "batterli ora, riprova quando sarai piu'\l"
	.string "forte$"

ViaFrancLago_EventScript_MariaCristina_Text_0:
# 26 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "Visto che mi hai battuta ti regalo\n"
	.string "questa$"

ViaFrancLago_EventScript_MariaCristina_Text_1:
# 30 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "Ricorda per vedere nei posti piu' bui\n"
	.string "devi gridare Earendil$"

MariaCristina_Text::
# 44 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "MARYCRI:Ciao Ali, sto facendo una\n"
	.string "passeggiata per connettermi con la\l"
	.string "natura.\p"
	.string "Ti va di giocare con me?$"

MariaCristina_Dopo::
# 48 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "MARYCRI:Nooooooo, ho perso!$"

MariaCristina_out_battle::
# 51 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "MARYCRI:E' proprio una bella giornata;\p"
	.string "mi e' venuta voglia di vedere un\n"
	.string "concerto scandinavo\p"
	.string "dove sacrificano un Jigglipuff\n"
	.string "sull'altare...ah per andare avanti su\l"
	.string "questa strada\p"
	.string "ti serve RockSmash. So che Roberta ha\n"
	.string "un pokemon con questa abilita' prova a\l"
	.string "chiedere a lei\p"
	.string "L'ho vista con Luca, si incamminavano\n"
	.string "nel boschetto davanti casa tua.$"

MariaCristina_Text2::
# 58 "data//maps/ViaFrancigenaLagoSUD/scripts.pory"
	.string "Isengard fr baj erendil mord terzo\n"
	.string "giorno\p"
	.string "ggrrrr ent erundil l'unico\p"
	.string "...\p"
	.string "...\p"
	.string "probabilmente conoscere un po' di\n"
	.string "elfico sarebbe utile\p"
	.string "Dovrei avere un dizionario in camera$"
