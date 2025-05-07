ViaFrancigenaLagoNord_MapScripts::
# 2 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupLagoNord
# 3 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 5 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv12
	.byte 0


HideMapNamePopupLagoNord::
# 9 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


ViaFrancigenaLagoNord_Sign_Tip5::
# 12 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ViaFrancigenaLagoNord_Sign_Tip5_Text_0
# 13 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	closemessage
	return


ViaFrancEast_EventScript_zio_pescatore::
# 21 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 0
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_2
# 24 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 1
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_3
# 27 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 2
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_4
# 30 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 3
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_5
# 33 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 9
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_6
# 38 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	compare VAR_ZIO_PESCATORE, 10
	goto_if_eq ViaFrancEast_EventScript_zio_pescatore_7
# 44 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text_quest_completata, MSGBOX_NPC
ViaFrancEast_EventScript_zio_pescatore_1:
# 47 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	closemessage
	return

ViaFrancEast_EventScript_zio_pescatore_2:
# 22 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text, MSGBOX_NPC
# 23 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 1
	goto ViaFrancEast_EventScript_zio_pescatore_1

ViaFrancEast_EventScript_zio_pescatore_3:
# 25 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text2, MSGBOX_NPC
# 26 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 2
	goto ViaFrancEast_EventScript_zio_pescatore_1

ViaFrancEast_EventScript_zio_pescatore_4:
# 28 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text3, MSGBOX_NPC
# 29 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 3
	goto ViaFrancEast_EventScript_zio_pescatore_1

ViaFrancEast_EventScript_zio_pescatore_5:
# 31 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text4, MSGBOX_NPC
# 32 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 1
	goto ViaFrancEast_EventScript_zio_pescatore_1

ViaFrancEast_EventScript_zio_pescatore_6:
# 34 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text_trovate_esche_prima, MSGBOX_NPC
# 35 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 11
# 36 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto ViaFrancEast_EventScript_zio_pescatore_1

ViaFrancEast_EventScript_zio_pescatore_7:
# 39 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ZioPescatore_text_trovate_esche_during_quest, MSGBOX_NPC
# 40 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 11
# 41 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto ViaFrancEast_EventScript_zio_pescatore_1


ViaFrancLagoNord_EventScript_maresciallo::
# 52 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	lockall
# 53 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	msgbox ViaFrancLagoNord_EventScript_maresciallo_Text_0
# 54 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	releaseall
	return


ViaFrancigenaLagoNord_Sign_Tip5_Text_0:
# 12 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "Tip 5: Se il gioco ti sembra troppo\n"
	.string "facile, prova a leggere un libro in\l"
	.string "camera tua!$"

ViaFrancLagoNord_EventScript_maresciallo_Text_0:
# 53 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "Guarda che se ti vedo ancora qui in giro\n"
	.string "chiamo il maresciallo!!!!!!!!$"

ZioPescatore_text::
# 58 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ALICE: Ciao Zio! Che ci fai qui?\p"
	.string "ZIO:Ciao Alice! Sono venuto per pescare\n"
	.string "ma ho perso le esche!\p"
	.string "ZIO: Ti posso chiedere un favore? Puoi\n"
	.string "controllare se mi sono cadute nel campo\l"
	.string "davanti casa tua?\p"
	.string "ALICE: Ma che tipo di esche?\p"
	.string "ZIO: Le stavo trasportando in una\n"
	.string "pokeball, devono essere rotolate da\l"
	.string "qualche parte!$"

ZioPescatore_text2::
# 65 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Mi raccomando portami le esche e mi\n"
	.string "raccomando, fai attenzione ai cinghiali!$"

ZioPescatore_text3::
# 68 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Sento che oggi e' una buona\n"
	.string "giornata! Prendero' sicuramente\l"
	.string "qualcosa di grosso!$"

ZioPescatore_text4::
# 71 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Mi e' sembrato di vedere un\n"
	.string "cinghiale! Hai trovato le esche?$"

ZioPescatore_text_trovate_esche_prima::
# 75 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Ciao Alice? Come stai? Sono delle\n"
	.string "esche quelle?\p"
	.string "Ma quelle sono le mie esche? Ecco dove\n"
	.string "erano finite.\p"
	.string "Grazie mille! Prendi queste scarpe da\n"
	.string "corsa!$"

ZioPescatore_text_trovate_esche_during_quest::
# 80 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Hai trovato le esche! Grazie Alice!\p"
	.string "Prendi queste scarpe da corsa! Ti\n"
	.string "saranno' utili!$"

ZioPescatore_text_quest_completata::
# 85 "data//maps/ViaFrancigenaLagoNord/scripts.pory"
	.string "ZIO: Mi godo un altro po' di sole e poi mi\n"
	.string "metto a pescare! Salutami i tuoi!$"
