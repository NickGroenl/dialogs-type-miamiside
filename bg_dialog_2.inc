#if defined _bg_dialog_2_included
  #endinput
#endif
#define _bg_dialog_2_included

#include <a_samp>
#include <YSI_Coding\y_hooks>


#define MAX_DIALOGS_LONG 10
#define MAX_MODELS 20

new bool:viendo_bd_dialog_2[MAX_PLAYERS];
new viendoDialogID[MAX_PLAYERS];
new sel_bd_dialog_2[MAX_PLAYERS];

enum dialogstypelong@model
{
	d2_models[MAX_MODELS],
	d2_title[60],
	d2_button1[30],
	d2_button2[30],
	d2_pages,
	d2_viendo_page
};
new dialogsLong[MAX_PLAYERS][MAX_DIALOGS_LONG][dialogstypelong@model];
new d2_description[MAX_PLAYERS][MAX_DIALOGS_LONG][MAX_MODELS][40];


new Text:bg_dialog_long1[4];
new PlayerText:bg_dialog_long2[MAX_PLAYERS][17];
hook OnPlayerConnect(playerid)
{
	bg_dialog_long2[playerid][0] = CreatePlayerTextDraw(playerid, 225.333343, 123.059272, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][0], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][0], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][0], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][0], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][0], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][0], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][0], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][0], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][0], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][1] = CreatePlayerTextDraw(playerid, 270.666778, 123.059265, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][1], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][1], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][1], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][1], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][1], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][1], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][1], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][1], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][2] = CreatePlayerTextDraw(playerid, 315.666748, 122.644454, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][2], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][2], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][2], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][2], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][2], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][2], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][2], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][2], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][2], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][2], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][3] = CreatePlayerTextDraw(playerid, 360.666656, 122.644447, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][3], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][3], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][3], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][3], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][3], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][3], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][3], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][3], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][3], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][3], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][4] = CreatePlayerTextDraw(playerid, 225.333374, 173.251800, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][4], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][4], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][4], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][4], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][4], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][4], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][4], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][4], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][4], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][4], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][5] = CreatePlayerTextDraw(playerid, 270.666809, 173.666595, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][5], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][5], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][5], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][5], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][5], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][5], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][5], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][5], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][5], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][5], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][6] = CreatePlayerTextDraw(playerid, 315.666961, 173.666595, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][6], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][6], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][6], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][6], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][6], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][6], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][6], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][6], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][6], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][6], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][7] = CreatePlayerTextDraw(playerid, 361.000305, 173.666595, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][7], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][7], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][7], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][7], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][7], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][7], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][7], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][7], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][7], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][7], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][8] = CreatePlayerTextDraw(playerid, 225.333602, 224.274002, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][8], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][8], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][8], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][8], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][8], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][8], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][8], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][8], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][8], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][8], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][8], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][9] = CreatePlayerTextDraw(playerid, 270.666931, 224.274032, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][9], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][9], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][9], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][9], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][9], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][9], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][9], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][9], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][9], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][9], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][9], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][10] = CreatePlayerTextDraw(playerid, 315.333557, 224.274017, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][10], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][10], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][10], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][10], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][10], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][10], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][10], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][10], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][10], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][10], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][10], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][11] = CreatePlayerTextDraw(playerid, 361.333648, 224.274032, "");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][11], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][11], 43.000000, 48.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][11], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][11], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][11], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][11], 673720575);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][11], 5);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][11], 0);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][11], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][11], true);
	PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][11], 0);
	PlayerTextDrawSetPreviewRot(playerid, bg_dialog_long2[playerid][11], 0.000000, 0.000000, 0.000000, 1.000000);

	bg_dialog_long2[playerid][12] = CreatePlayerTextDraw(playerid, 318.333374, 100.814834, "Title");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][12], 0.356665, 0.973628);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][12], 0.000000, 201.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][12], 2);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][12], -1);
	PlayerTextDrawUseBox(playerid, bg_dialog_long2[playerid][12], 1);
	PlayerTextDrawBoxColor(playerid, bg_dialog_long2[playerid][12], 336860415);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][12], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][12], 252645375);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][12], 1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][12], 0);

	bg_dialog_long2[playerid][13] = CreatePlayerTextDraw(playerid, 310.333312, 290.799926, "1");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][13], 0.384665, 1.454815);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][13], 1);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][13], -1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][13], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][13], 255);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][13], 1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][13], 0);

	bg_dialog_long2[playerid][14] = CreatePlayerTextDraw(playerid, 269.666748, 276.696258, "Button1");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][14], 0.312332, 0.961184);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][14], 10.000000, 88.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][14], 2);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][14], -1);
	PlayerTextDrawUseBox(playerid, bg_dialog_long2[playerid][14], 1);
	PlayerTextDrawBoxColor(playerid, bg_dialog_long2[playerid][14], 336860415);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][14], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][14], 252645375);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][14], 1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][14], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][14], true);

	bg_dialog_long2[playerid][15] = CreatePlayerTextDraw(playerid, 360.333404, 276.696258, "Button2");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][15], 0.312332, 0.961184);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][15], 10.000000, 86.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][15], 2);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][15], -1);
	PlayerTextDrawUseBox(playerid, bg_dialog_long2[playerid][15], 1);
	PlayerTextDrawBoxColor(playerid, bg_dialog_long2[playerid][15], 336860415);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][15], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][15], 252645375);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][15], 1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][15], 0);
	PlayerTextDrawSetSelectable(playerid, bg_dialog_long2[playerid][15], true);

	bg_dialog_long2[playerid][16] = CreatePlayerTextDraw(playerid, 317.666778, 312.370422, "Nombre:_Lampara");
	PlayerTextDrawLetterSize(playerid, bg_dialog_long2[playerid][16], 0.288332, 1.035850);
	PlayerTextDrawTextSize(playerid, bg_dialog_long2[playerid][16], 0.000000, 201.000000);
	PlayerTextDrawAlignment(playerid, bg_dialog_long2[playerid][16], 2);
	PlayerTextDrawColor(playerid, bg_dialog_long2[playerid][16], -1);
	PlayerTextDrawUseBox(playerid, bg_dialog_long2[playerid][16], 1);
	PlayerTextDrawBoxColor(playerid, bg_dialog_long2[playerid][16], 336860415);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid, bg_dialog_long2[playerid][16], 0);
	PlayerTextDrawBackgroundColor(playerid, bg_dialog_long2[playerid][16], 252645375);
	PlayerTextDrawFont(playerid, bg_dialog_long2[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, bg_dialog_long2[playerid][16], 1);
	PlayerTextDrawSetShadow(playerid, bg_dialog_long2[playerid][16], 0);
}

hook OnGameModeInit()
{
	bg_dialog_long1[0] = TextDrawCreate(201.666595, 94.437049, "mdl-2001:logo_box");
	TextDrawLetterSize(bg_dialog_long1[0], 0.000000, 0.000000);
	TextDrawTextSize(bg_dialog_long1[0], 243.000000, 231.000000);
	TextDrawAlignment(bg_dialog_long1[0], 1);
	TextDrawColor(bg_dialog_long1[0], 505290495);
	TextDrawSetShadow(bg_dialog_long1[0], 0);
	TextDrawSetOutline(bg_dialog_long1[0], 0);
	TextDrawBackgroundColor(bg_dialog_long1[0], 255);
	TextDrawFont(bg_dialog_long1[0], 4);
	TextDrawSetProportional(bg_dialog_long1[0], 0);
	TextDrawSetShadow(bg_dialog_long1[0], 0);

	bg_dialog_long1[1] = TextDrawCreate(299.999938, 290.385192, "<");
	TextDrawLetterSize(bg_dialog_long1[1], 0.287665, 1.575109);
	TextDrawTextSize(bg_dialog_long1[1], 310.000000, 10.000000);
	TextDrawAlignment(bg_dialog_long1[1], 1);
	TextDrawColor(bg_dialog_long1[1], -1);
	TextDrawUseBox(bg_dialog_long1[1], 1);
	TextDrawBoxColor(bg_dialog_long1[1], 0);
	TextDrawSetShadow(bg_dialog_long1[1], 0);
	TextDrawSetOutline(bg_dialog_long1[1], 0);
	TextDrawBackgroundColor(bg_dialog_long1[1], 255);
	TextDrawFont(bg_dialog_long1[1], 1);
	TextDrawSetProportional(bg_dialog_long1[1], 1);
	TextDrawSetShadow(bg_dialog_long1[1], 0);
	TextDrawSetSelectable(bg_dialog_long1[1], true);

	bg_dialog_long1[2] = TextDrawCreate(321.666900, 289.970397, ">");
	TextDrawLetterSize(bg_dialog_long1[2], 0.291000, 1.670518);
	TextDrawTextSize(bg_dialog_long1[2], 328.000000, 10.000000);
	TextDrawAlignment(bg_dialog_long1[2], 1);
	TextDrawColor(bg_dialog_long1[2], -1);
	TextDrawUseBox(bg_dialog_long1[2], 1);
	TextDrawBoxColor(bg_dialog_long1[2], 0);
	TextDrawSetShadow(bg_dialog_long1[2], 0);
	TextDrawSetOutline(bg_dialog_long1[2], 0);
	TextDrawBackgroundColor(bg_dialog_long1[2], 255);
	TextDrawFont(bg_dialog_long1[2], 1);
	TextDrawSetProportional(bg_dialog_long1[2], 1);
	TextDrawSetShadow(bg_dialog_long1[2], 0);
	TextDrawSetSelectable(bg_dialog_long1[2], true);

	bg_dialog_long1[3] = TextDrawCreate(409.333374, 100.244430, "mdl-2001:logo_cancel");
	TextDrawLetterSize(bg_dialog_long1[3], 0.000000, 0.000000);
	TextDrawTextSize(bg_dialog_long1[3], 10.000000, 12.000000);
	TextDrawAlignment(bg_dialog_long1[3], 1);
	TextDrawColor(bg_dialog_long1[3], -1);
	TextDrawSetShadow(bg_dialog_long1[3], 0);
	TextDrawSetOutline(bg_dialog_long1[3], 0);
	TextDrawBackgroundColor(bg_dialog_long1[3], 255);
	TextDrawFont(bg_dialog_long1[3], 4);
	TextDrawSetProportional(bg_dialog_long1[3], 0);
	TextDrawSetShadow(bg_dialog_long1[3], 0);
	TextDrawSetSelectable(bg_dialog_long1[3], true);

}

hook OP_ClickPlayerTextDraw(playerid, PlayerText:playertextid)
{
	for(new i;i<12;i++)
	{
		if(playertextid == bg_dialog_long2[playerid][i])
		{
			new id = viendoDialogID[playerid];

			sel_bd_dialog_2[playerid] = i;
			sel_bd_dialog_2[playerid] = getPageFromSelection(playerid, id);
			new string[40];
			format(string, sizeof(string), "%s", d2_description[playerid][id][sel_bd_dialog_2[playerid]]);
			PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][16], string);
		}
	}
	if(playertextid == bg_dialog_long2[playerid][14])
	{
		new dialogid = viendoDialogID[playerid];
		CallLocalFunction("OnLongDialogResponse", "iii", playerid, dialogid, true, sel_bd_dialog_2[playerid], dialogsLong[playerid][dialogid][d2_models][sel_bd_dialog_2[playerid]]);
		for(new h;h<4;h++) TextDrawHideForPlayer(playerid, bg_dialog_long1[h]);
		for(new d;d<17;d++) PlayerTextDrawHide(playerid, bg_dialog_long2[playerid][d]);
		viendo_bd_dialog_2[playerid] = false;
		viendoDialogID[playerid] = -1;
		sel_bd_dialog_2[playerid] = -1;
		CancelSelectTextDraw(playerid);
	}
	if(playertextid == bg_dialog_long2[playerid][15])
	{
		new dialogid = viendoDialogID[playerid];
		CallLocalFunction("OnLongDialogResponse", "iii", playerid, dialogid, false, sel_bd_dialog_2[playerid], dialogsLong[playerid][dialogid][d2_models][sel_bd_dialog_2[playerid]]);
		for(new h;h<4;h++) TextDrawHideForPlayer(playerid, bg_dialog_long1[h]);
		for(new d;d<17;d++) PlayerTextDrawHide(playerid, bg_dialog_long2[playerid][d]);
		viendo_bd_dialog_2[playerid] = false;
		viendoDialogID[playerid] = -1;
		sel_bd_dialog_2[playerid] = -1;
		CancelSelectTextDraw(playerid);
	}
}
hook OnPlayerClickTextDraw(playerid, Text:clickedid)
{
	if(clickedid == Text:INVALID_TEXT_DRAW)
	{
		if(viendo_bd_dialog_2[playerid] == true)
		{
			for(new h;h<4;h++) TextDrawHideForPlayer(playerid, bg_dialog_long1[h]);
			for(new d;d<17;d++) PlayerTextDrawHide(playerid, bg_dialog_long2[playerid][d]);
			viendo_bd_dialog_2[playerid] = false;
			viendoDialogID[playerid] = -1;
			sel_bd_dialog_2[playerid] = -1;
			CancelSelectTextDraw(playerid);
		}
	}
	if(clickedid == bg_dialog_long1[1])
	{
		if(dialogsLong[playerid][viendoDialogID[playerid]][d2_viendo_page] > 1)
		{
			dialogsLong[playerid][viendoDialogID[playerid]][d2_viendo_page]--;
			actPageModel(playerid, viendoDialogID[playerid]);
		}
	}
	if(clickedid == bg_dialog_long1[2])
	{
		if(dialogsLong[playerid][viendoDialogID[playerid]][d2_viendo_page] < dialogsLong[playerid][viendoDialogID[playerid]][d2_pages])
		{
			dialogsLong[playerid][viendoDialogID[playerid]][d2_viendo_page]++;
			actPageModel(playerid, viendoDialogID[playerid]);
		}
	}
	if(clickedid == bg_dialog_long1[3])
	{
		for(new h;h<4;h++) TextDrawHideForPlayer(playerid, bg_dialog_long1[h]);
		for(new d;d<17;d++) PlayerTextDrawHide(playerid, bg_dialog_long2[playerid][d]);
		viendo_bd_dialog_2[playerid] = false;
		viendoDialogID[playerid] = -1;
		sel_bd_dialog_2[playerid] = -1;
		CancelSelectTextDraw(playerid);	
	}
}
ShowDialogLong(playerid, dialogid, const title[], const button1[], const button2[])
{
	if(dialogid != -1)
	{
		format(dialogsLong[playerid][dialogid][d2_title], 60, "%s", title);
		format(dialogsLong[playerid][dialogid][d2_button1], 60, "%s", button1);
		format(dialogsLong[playerid][dialogid][d2_button2], 60, "%s", button2);

		PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][12], dialogsLong[playerid][dialogid][d2_title]);
		PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][13], "1");
		PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][14], dialogsLong[playerid][dialogid][d2_button1]);
		PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][15], dialogsLong[playerid][dialogid][d2_button2]);

		for(new i;i<12;i++)
		{
			if(dialogsLong[playerid][dialogid][d2_models][i] != 0)
			{
				PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][i], dialogsLong[playerid][dialogid][d2_models][i]);
				PlayerTextDrawShow(playerid, bg_dialog_long2[playerid][i]);
			}
		}

		PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][16], "Selecciona un cuadro");

		for(new d = 12;d<17;d++) PlayerTextDrawShow(playerid, bg_dialog_long2[playerid][d]);
		for(new h;h<4;h++) TextDrawShowForPlayer(playerid, bg_dialog_long1[h]);
		SelectTextDraw(playerid, 0x87868286);	
		viendo_bd_dialog_2[playerid] = true;
		dialogsLong[playerid][dialogid][d2_viendo_page] = 1;
		viendoDialogID[playerid] = dialogid;
		sel_bd_dialog_2[playerid] = 1;
	}
}
getPageFromSelection(playerid, dialogid)
{
	new suma;
	switch(dialogsLong[playerid][dialogid][d2_viendo_page])
	{
		case 1: suma = 0;
		case 2..6: suma = 11;
	}
	new count = sel_bd_dialog_2[playerid] + suma;
	return count;
}
actPageModel(playerid, dialogid)
{
	new count;
	switch(dialogsLong[playerid][dialogid][d2_viendo_page])
	{
		case 1: count = 0;
		case 2: count = 12;
		case 3: count = 24;
		case 4: count = 36;
		case 5: count = 48;
	}
	new maxtime = 12; if (count == 48) maxtime = 2;

	for(new i;i<maxtime;i++)
	{
		count++;
		if(dialogsLong[playerid][dialogid][d2_models][i] != 0)
		{
			PlayerTextDrawHide(playerid, bg_dialog_long2[playerid][i]);
			PlayerTextDrawSetPreviewModel(playerid, bg_dialog_long2[playerid][i], dialogsLong[playerid][dialogid][d2_models][count]);
			PlayerTextDrawShow(playerid, bg_dialog_long2[playerid][i]);
		}
	}

	new string[10]; format(string, sizeof(string), "%i", dialogsLong[playerid][dialogid][d2_viendo_page]);
	PlayerTextDrawSetString(playerid, bg_dialog_long2[playerid][13], "1");
}
addModelToLong(playerid, dialogid, modelid, const des[])
{
	for(new i; i<MAX_MODELS;i++)
	{
		if(dialogsLong[playerid][dialogid][d2_models][i] == 0)
		{
			dialogsLong[playerid][dialogid][d2_models][i] = modelid;
			format(d2_description[playerid][dialogid][i], 40, "%s", des);
			break;
		}
	}
	dialogsLong[playerid][dialogid][d2_pages] = getDialogPages(playerid, dialogid);

}
delateModelToLong(playerid, dialgoid, itemid)
{
	dialogsLong[playerid][dialogid][d2_models][itemid] = 0;
}

getDialogPages(playerid, dialogid)
{
	new models;
	for(new i; i<MAX_MODELS;i++)
	{
		if(dialogsLong[playerid][dialogid][d2_models][i] != 0)
		{
			models++;
		}
	}
	new pages = models / 12;
	switch(models)
	{
		case 1..11: pages++;
		case 13..23: pages++;
		case 25..35: pages++;
		case 37..47: pages++;
		case 49..50: pages++;
	}

	return pages; 
}


forward OnLongDialogResponse(playerid, dialogid, bool:response, selitem, modelid);