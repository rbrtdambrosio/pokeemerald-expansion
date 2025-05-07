Lago_Wild_Area_Bike_MapScripts::
# 2 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideMapNameLagobike
# 3 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightmareModeOFF
	.byte 0


HideMapNameLagobike::
# 7 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Lago_Wild_Area_Bike_Store_EventScript_OldMan::
	checkitem ITEM_BIKE_VOUCHER
# 0 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Lago_Wild_Area_Bike_Store_EventScript_OldMan_1
# 16 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_1, MSGBOX_NPC
# 17 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	closemessage
	return

Lago_Wild_Area_Bike_Store_EventScript_OldMan_1:
# 12 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_0, MSGBOX_NPC
# 13 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	closemessage
# 14 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	return


Lago_Wild_Area_Bike_Store_EventScript_Pikachu::
# 25 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_Pikachu_Text_0, MSGBOX_NPC
# 26 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	closemessage
	return


Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_0:
# 12 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "VECCHIO SCORBUTICO: Ahhh sei un'amica\n"
	.string "di Ciro. Bene Bene, prendi questa bici e\l"
	.string "togliti dalle palle.$"

Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_1:
# 16 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "VECCHIO SCORBUTICO: Oggi e' ghiornata.\n"
	.string "Prima quell'arabo mo chiss. Togliti dalle\l"
	.string "palle$"

Lago_Wild_Area_Bike_Store_EventScript_Pikachu_Text_0:
# 25 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "Pikachu: Pika e togliti dalle palle.$"
