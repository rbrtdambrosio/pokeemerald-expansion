ViaFrancigenaMiddleSUD_MapScripts::
# 2 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopupMiddleSUD
# 3 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
# 4 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv12
	.byte 0


HideMapNamePopupMiddleSUD::
# 13 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


ViaFrancEast_EventScript_esche_zio::
# 20 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	lockall
# 21 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3
# 22 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	compare VAR_ZIO_PESCATORE, 0
	goto_if_eq ViaFrancEast_EventScript_esche_zio_2
# 29 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	compare VAR_ZIO_PESCATORE, 1
	goto_if_ge ViaFrancEast_EventScript_esche_zio_3
ViaFrancEast_EventScript_esche_zio_1:
# 35 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	hidemonpic
# 36 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	waitmessage
# 37 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	releaseall
	return

ViaFrancEast_EventScript_esche_zio_2:
# 24 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	msgbox TrovatoEsche_prima_della_quest_text
# 25 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 9
# 26 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	removeobject 1
# 27 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	setflag FLAG_esche_zio
	goto ViaFrancEast_EventScript_esche_zio_1

ViaFrancEast_EventScript_esche_zio_3:
# 30 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	msgbox TrovatoEsche_during_quest_text
# 31 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	setvar VAR_ZIO_PESCATORE, 10
# 32 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	removeobject 1
# 33 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	setflag FLAG_esche_zio
	goto ViaFrancEast_EventScript_esche_zio_1


TrovatoEsche_prima_della_quest_text::
# 41 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	.string "Ha trovato delle esche per la pesca!$"

TrovatoEsche_during_quest_text::
# 44 "data//maps/ViaFrancigenaMiddleSUD/scripts.pory"
	.string "Queste devono essere le esche perse da\n"
	.string "zio!\p"
	.string "Sara' felice!$"
