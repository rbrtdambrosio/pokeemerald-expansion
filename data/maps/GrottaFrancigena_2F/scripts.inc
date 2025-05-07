GrottaFrancigena_2F_MapScripts::
# 2 "data/maps/GrottaFrancigena_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopup
# 3 "data/maps/GrottaFrancigena_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data/maps/GrottaFrancigena_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv15
	.byte 0


GrottaFrancigena_2F_Sign::
# 12 "data/maps/GrottaFrancigena_2F/scripts.pory"
	msgbox GrottaFrancigena_2F_Sign_Text_0
# 13 "data/maps/GrottaFrancigena_2F/scripts.pory"
	closemessage
	return


GrottaFrancigena_2F_Roberta::
# 18 "data/maps/GrottaFrancigena_2F/scripts.pory"
	msgbox GrottaFrancigena_2F_Roberta_Text_0, MSGBOX_NPC
# 19 "data/maps/GrottaFrancigena_2F/scripts.pory"
	closemessage
	return


GrottaFrancigena_2F_Luca::
# 25 "data/maps/GrottaFrancigena_2F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, GrottaFrancigena_2F_Luca_DanIntro, GrottaFrancigena_2F_Luca_Text_DanDefeat, GrottaFrancigena_2F_Luca_Text_DanNotEnoughMons
# 26 "data/maps/GrottaFrancigena_2F/scripts.pory"
	msgbox GrottaFrancigena_2F_Luca_Text_0, MSGBOX_NPC
	checkitem ITEM_HM_ROCK_SMASH
# 0 "data/maps/GrottaFrancigena_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GrottaFrancigena_2F_Luca_2
# 30 "data/maps/GrottaFrancigena_2F/scripts.pory"
	msgbox GrottaFrancigena_2F_Luca_Text_2, MSGBOX_NPC
# 31 "data/maps/GrottaFrancigena_2F/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
GrottaFrancigena_2F_Luca_1:
# 33 "data/maps/GrottaFrancigena_2F/scripts.pory"
	closemessage
	return

GrottaFrancigena_2F_Luca_2:
# 28 "data/maps/GrottaFrancigena_2F/scripts.pory"
	msgbox GrottaFrancigena_2F_Luca_Text_1, MSGBOX_NPC
	goto GrottaFrancigena_2F_Luca_1


GrottaFrancigena_2F_Sign_Text_0:
# 12 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "La guardia forestale di Posta Fibreno\n"
	.string "avvusa: NON ENTRARE, PERICOLO! MORTE\l"
	.string "SICURA! NOI VE LO ABBIAMO DETTO!!$"

GrottaFrancigena_2F_Roberta_Text_0:
# 18 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "ROBERTA: Ciao Ali, ho portato luca qui\n"
	.string "per infrattarci, ma chiss n gl n te'$"

GrottaFrancigena_2F_Luca_Text_0:
# 26 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA:Sei stata brava Ali!$"

GrottaFrancigena_2F_Luca_Text_1:
# 28 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA: Mi sta tornando un po' di energia!$"

GrottaFrancigena_2F_Luca_Text_2:
# 30 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA: Prendi questa ti sara' utile per\n"
	.string "andare verso il lago!$"

GrottaFrancigena_2F_Luca_DanIntro::
# 38 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA:n mn te'$"

GrottaFrancigena_2F_Luca_Text_DanNotEnoughMons::
# 43 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA:se vuoi sfidarci devi avere piu'\n"
	.string "Pokemon'$"

GrottaFrancigena_2F_Luca_Text_DanDefeat::
# 48 "data/maps/GrottaFrancigena_2F/scripts.pory"
	.string "LUCA:incredibile, abbiamo perso.\n"
	.string "ROBERTA:Oooh Lu'! E'tutta colpa tua!$"
