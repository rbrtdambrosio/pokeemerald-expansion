GrottaFrancigena_1F_MapScripts::
# 3 "data//maps/GrottaFrancigena_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNamePopup
# 4 "data//maps/GrottaFrancigena_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_MaxLv15
	.byte 0


GrottaFrancigena_event_pokeball::
# 11 "data//maps/GrottaFrancigena_1F/scripts.pory"
	lockall
# 13 "data//maps/GrottaFrancigena_1F/scripts.pory"
	giveitem ITEM_POKE_BALL
# 14 "data//maps/GrottaFrancigena_1F/scripts.pory"
	removeobject 1
# 15 "data//maps/GrottaFrancigena_1F/scripts.pory"
	setflag FLAG_pokeballgrotta
# 16 "data//maps/GrottaFrancigena_1F/scripts.pory"
	addvar VAR_NUM_POKEBALL, 1
# 19 "data//maps/GrottaFrancigena_1F/scripts.pory"
	releaseall
	return

