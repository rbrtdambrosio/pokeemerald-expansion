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
	checkitem ITEM_ACRO_BIKE
# 0 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Lago_Wild_Area_Bike_Store_EventScript_OldMan_2
	checkitem ITEM_BIKE_VOUCHER
# 0 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Lago_Wild_Area_Bike_Store_EventScript_OldMan_5
# 23 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_2, MSGBOX_NPC
Lago_Wild_Area_Bike_Store_EventScript_OldMan_1:
# 27 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	closemessage
	return

Lago_Wild_Area_Bike_Store_EventScript_OldMan_2:
# 12 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_0, MSGBOX_NPC
	goto Lago_Wild_Area_Bike_Store_EventScript_OldMan_1

Lago_Wild_Area_Bike_Store_EventScript_OldMan_5:
# 18 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_1, MSGBOX_NPC
# 20 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	goto Lago_Wild_Area_Bike_Store_EventScript_OldMan_1


Lago_Wild_Area_Bike_Store_EventScript_Pikachu::
# 33 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	msgbox Lago_Wild_Area_Bike_Store_EventScript_Pikachu_Text_0, MSGBOX_NPC
# 34 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	closemessage
	return


Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_0:
# 12 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "VECCHIO SCORBUTICO: Ess chess.\n"
	.string "Ancora? Fuori dai coglioni su...$"

Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_1:
# 18 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "VECCHIO SCORBUTICO: Ahhh sei un'amica\n"
	.string "di Ciro. Bene Bene... non me ne frega un\l"
	.string "cazzo! Prendi questa bici e togliti\l"
	.string "dalle palle.$"

Lago_Wild_Area_Bike_Store_EventScript_OldMan_Text_2:
# 23 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "VECCHIO SCORBUTICO: Oggi e' ghiornata.\n"
	.string "Prima quell'arabo mo chess. Togliti dalle\l"
	.string "palle$"

Lago_Wild_Area_Bike_Store_EventScript_Pikachu_Text_0:
# 33 "data//maps/Lago_Wild_Area_Bike/scripts.pory"
	.string "Pikachu: Pika e togliti dalle palle.$"
