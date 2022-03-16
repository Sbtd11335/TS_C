#pragma once
#include <stdio.h>
#include<iostream>
#include<string> //stringクラスを使用可能にする
using namespace std;

//変数登録
//int型は%d
//double型は%lg
//strは%s


std::string BanaPass_Data_New_Whiting = "Pass_ID:1\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nPass_ID:2\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nPass_ID:3\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\n";



double FPS = 60.0;
double FPS_Flesh = 1000.0 / FPS;
double FPS_Flesh_60FPS = 1000.0 / 60.0;
double FPS_ = 60.0 / FPS;

bool VSync = TRUE;






int Play_Song_FPS;

int FPS_Count_Timer[3];
int FPS_Count_Timer_;
int FPS_Count_Timer_DisPlay;
bool FPS_Count_Timer_Check;
bool White_FPS;
int White_FPS_Font;


int Player_Choice_Number[2];//選択された難易度


int Play_1P_Pass_ID;
int Play_2P_Pass_ID;
bool Playing_Pos[2] = {FALSE,FALSE};
int Player_People = 1;
string Play_Display_T_Course_;
int Play_Display_T_Course;
int Play_1P_Display_Course = 4;
int Play_2P_Display_Course = 4;
string Play_Display_Omote_Ura_T_Course_;
int Play_Display_Omote_Ura_T_Course;
bool Play_1P_Display_Course_Omote_Ura_Course;
bool Play_2P_Display_Course_Omote_Ura_Course;
bool Loaded_Pass_Data_Im[3];


int Song_Play_Mode = 0;//0:通常演奏 1:AIバトル 2:段位道場







//プレイヤー設定

//仮
std::string Player_T_Name = ""; 
int Player_T_Name_width;
std::string Player_T_Title = "";
std::string Player_T_Title_Type_ = "0";

std::string Player_T_CommonDonChanSkin_ = "FALSE";
std::string Player_T_CharaDonChanSkin_ = "FALSE";
std::string Player_T_Petit_Chara_ = "FALSE";
std::string Player_T_SelectSong_HiScoreBoard_ = "FALSE";
std::string Player_T_SelectSong_ScoreBoard_ = "FALSE";
std::string Player_T_Dan_Flag_ = "FALSE";
std::string Player_T_Plate_Effect_Flag_ = "FALSE";

int  Player_T_Title_Type = 0;
bool Player_T_CommonDonChanSkin = 0;
bool Player_T_CharaDonChanSkin = 0;
bool Player_T_Petit_Chara = 0;
bool Player_T_SelectSong_HiScoreBoard = 0;
bool Player_T_SelectSong_ScoreBoard = 0;
bool Player_T_Dan_Flag;
bool Player_T_Plate_Effect_Flag = FALSE;

int Player_Title_Font[3];
int Player_Title_Font_Size[3];
int Player_Title_Font_Width[3];
int Player_Title_Font_Width2[3];//縦
int Player_Title_Font_cnt;


//演奏オプション
//取得用
std::string Player_T_Speed_ = "0";
std::string Player_T_Disappear_ = "FALSE";
std::string Player_T_Inverse_ = "FALSE";
std::string Player_T_Random_ = "0";
std::string Player_T_Skip_ = "FALSE";
std::string Player_T_Adjustment_ = "FALSE";
std::string Player_T_Adjustment_Value_ = "5";
std::string Player_T_Voice_ = "FALSE";
std::string Player_T_Tone_ = "0";



int Player_T_Speed = 1;
int Player_T_Disappear;
int Player_T_Inverse;
int Player_T_Random;
int Player_T_Skip;
int Player_T_Adjustment;
int Player_T_Adjustment_Value;
int Player_T_Voice;
int Player_T_Tone;

int Tone_Number_Max = 1;//音色の数



//使用
bool Entry_BanaPass_Choosed_Check_1;

std::string Player_Name_[3];
int Player_Name_width_[3];
std::string Player_Title_[3];

int  Player_Title_Type[3];
bool Player_CommonDonChanSkin[3];
bool Player_CharaDonChanSkin[3];
bool Player_Petit_Chara[3];
bool Player_SelectSong_HiScoreBoard[3];
bool Player_SelectSong_ScoreBoard[3];
bool Player_Dan_Flag[3];
bool Player_Plate_Effect_Flag[3];

int Player_Speed[3];
int Player_Disappear[3];
int Player_Inverse[3];
int Player_Random[3];
int Player_Skip[3];
int Player_Adjustment[3];
int Player_Adjustment_Value[3];
int Player_Voice[3];
int Player_Tone[3];

//デフォルト
int Player_Speed_Default = 0;
int Player_Disappear_Default = 0;
int Player_Inverse_Default = 0;
int Player_Random_Default = 0;
int Player_Skip_Default = 0;
int Player_Adjustment_Default = 0;
int Player_Adjustment_Value_Default = 5;
int Player_Voice_Default = 1;
int Player_Tone_Default = 0;



/*
int Player_Title_Font[3];
int Player_Title_Font_Size[3];
int Player_Title_Font_Width[3];
int Player_Title_Font_Width2[3];//縦

//バナパスデータ用画像(0:仮読み込み)
int _CommonDonChan_Clear_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Clear_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Daiseikou_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Daiseikou_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Failed_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Failed_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Normal_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Skip_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_StartSong_all_BPlayer[Texture_Number1][3];

int _Enso_Chara_10combo_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_10combo_Max_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Balloon_Breaking_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Balloon_Broke_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Clear_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Clearin_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_GoGo_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_GoGoStart_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_In_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_Loop_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_Miss_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Miss_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Miss6_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Normal_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Revival_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Soulin_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Surprised_all_BPlayer[Texture_Number1][3];


*/




















//読み込み関連
const int Genre_Folder_Count_Max = 30; //読み込めるジャンル数
const int TJA_Folder_In_Genre_Count_Max = 400; //読み込める譜面数
const int TJA_Folder_In_Genre_Close_Count_Max = Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max; //とじるボタンの最大数
const int TJA_Folder_In_Genre_Count_Max2 = 1; //読み込める譜面数2
const int TJA_FILE_COURSE_NUMBER = 5; //読み込めるコース数
const int TJA_FILE_BRANCH_NUMBER = 100; //読み込める譜面分岐数
const int SoundFile_Tones_Max = 100; //読み込める音色の数



//Texture
std::string Texture_LoadImage = "LoadImage.png";
std::string Texture_LoadImage_;
int Texture_LoadImage_Load;//Texture_LoadImage

std::string Texture_Score_Rank = "Score_Rank.png";
std::string Texture_Score_Rank_;
int Texture_Score_Rank_Load[8];//Texture_Score_Rank

const char* Texture_Entry_Back; //Texture_Entry_Back
int Texture_Entry_Back_Load;//Texture_Entry_Back

const char* Texture_Entry_Bar; //Texture_Entry_Bar
int Texture_Entry_Bar_Load;//Texture_Entry_Bar

const char* Texture_Entry_Coin_Text; //Texture_Entry_Coin_Text
int Texture_Entry_Coin_Text_Load;//Texture_Entry_Coin_Text

const char* Texture_Online_Mark_Online; //Texture_Online_Mark_Online
int Texture_Online_Mark_Online_Load;//Texture_Online_Mark_Online

const char* Texture_Online_Mark_Offline; //Texture_Online_Mark_Offline
int Texture_Online_Mark_Offline_Load;//Texture_Online_Mark_Offline

std::string Texture_Entry_Bana_Loading = "Entry/Bana_Loading.png";
std::string Texture_Entry_Bana_Loading_;
int Texture_Entry_Bana_Loading_Load;//Texture_Entry_Bana_Loading

std::string Texture_Entry_Bana_Loading_Text = "Entry/Bana_Loading_Text.png";
std::string Texture_Entry_Bana_Loading_Text_;
int Texture_Entry_Bana_Loading_Text_Load;//Texture_Entry_Bana_Loading_Text

std::string Texture_Entry_Bana_Loaded = "Entry/Bana_Loaded.png";
std::string Texture_Entry_Bana_Loaded_;
int Texture_Entry_Bana_Loaded_Load;//Texture_Entry_Bana_Loaded

std::string Texture_Water_Baloon = "Entry/Water_Baloon.png";
std::string Texture_Water_Baloon_;
int Texture_Entry_Water_Baloon_Load;//Texture_Entry_Water_Baloon

std::string Texture_Entry_Select_Base = "Entry/Select/Base.png";
std::string Texture_Entry_Select_Base_;
int Texture_Entry_Select_Base_Load;//Texture_Entry_Select_Base

std::string Texture_NamePlate_NamePlate_1P_Icon = "NamePlate/NamePlate_1P_Icon.png";
std::string Texture_NamePlate_NamePlate_1P_Icon_;
int Texture_NamePlate_NamePlate_1P_Icon_Load;//Texture_NamePlate_NamePlate_1P_Icon

std::string Texture_NamePlate_NamePlate_2P_Icon = "NamePlate/NamePlate_2P_Icon.png";
std::string Texture_NamePlate_NamePlate_2P_Icon_;
int Texture_NamePlate_NamePlate_2P_Icon_Load;//Texture_NamePlate_NamePlate_2P_Icon

std::string Texture_NamePlate_NamePlate_2P_Icon__ = "NamePlate/NamePlate_2P_Icon_.png";
std::string Texture_NamePlate_NamePlate_2P_Icon___;
int Texture_NamePlate_NamePlate_2P_Icon__Load;//Texture_NamePlate_NamePlate_2P_Icon

std::string Texture_NamePlate_NamePlate_1P_Normal = "NamePlate/NamePlate_1P_Normal.png";
std::string Texture_NamePlate_NamePlate_1P_Normal_;
int Texture_NamePlate_NamePlate_1P_Normal_Load;//Texture_NamePlate_NamePlate_1P_Normal

std::string Texture_NamePlate_NamePlate_2P_Normal = "NamePlate/NamePlate_2P_Normal.png";
std::string Texture_NamePlate_NamePlate_2P_Normal_;
int Texture_NamePlate_NamePlate_2P_Normal_Load;//Texture_NamePlate_NamePlate_2P_Normal

std::string Texture_NamePlate_NamePlate_Wood = "NamePlate/NamePlate_Wood.png";
std::string Texture_NamePlate_NamePlate_Wood_;
int Texture_NamePlate_NamePlate_Wood_Load;//Texture_NamePlate_NamePlate_Wood

std::string Texture_NamePlate_NamePlate_Gold = "NamePlate/NamePlate_Gold.png";
std::string Texture_NamePlate_NamePlate_Gold_;
int Texture_NamePlate_NamePlate_Gold_Load;//Texture_NamePlate_NamePlate_Gold

std::string Texture_NamePlate_NamePlate_Purple = "NamePlate/NamePlate_Purple.png";
std::string Texture_NamePlate_NamePlate_Purple_;
int Texture_NamePlate_NamePlate_Purple_Load;//Texture_NamePlate_NamePlate_Purple

const int Texture_NamePlate_Rainbows = 6;
std::string Texture_NamePlate_Rainbow[Texture_NamePlate_Rainbows] = { "NamePlate/Rainbow/0.png","NamePlate/Rainbow/1.png","NamePlate/Rainbow/2.png","NamePlate/Rainbow/3.png","NamePlate/Rainbow/4.png","NamePlate/Rainbow/5.png" };
std::string Texture_NamePlate_Rainbow_[Texture_NamePlate_Rainbows];
int Texture_NamePlate_Rainbow_Load[Texture_NamePlate_Rainbows];//Texture_NamePlate_Rainbow
int Texture_NamePlate_Rainbow_cnt;
int Texture_NamePlate_Rainbow_Timer[3];
double Texture_NamePlate_Rainbow_Timer1_1 = 60.0;
bool Texture_NamePlate_Rainbow_Timer1_1_Check;//チェック


const int Texture_NamePlate_effects = 119;
std::string Texture_NamePlate_effects_str;
std::string Texture_NamePlate_effect = "NamePlate/effect/" ;
std::string Texture_NamePlate_effect_[Texture_NamePlate_effects];
int Texture_NamePlate_effect_Load[Texture_NamePlate_effects];//Texture_NamePlate_effect
int Texture_NamePlate_effect_cnt;
double Texture_NamePlate_effect_cnt_d;
double Texture_NamePlate_effect_cnt_d2;

std::string Texture_NamePlate_NamePlate_Dan_Base = "NamePlate/NamePlate_Dan_Base.png";
std::string Texture_NamePlate_NamePlate_Dan_Base_;
int Texture_NamePlate_NamePlate_Dan_Base_Load;//Texture_NamePlate_NamePlate_Dan_Base

std::string Pass_Data_Skin_Number_Dan_Plate_T;
std::string Pass_Data_Skin_Number_Dan_Plate_[3];
int Pass_Data_Skin_Number_Dan_Plate_Load[3];//Pass_Data_Skin_Number_Dan_Plate


std::string Texture_Entry_Select_Player_Effect = "Entry/Select/Player_Effect.png";
std::string Texture_Entry_Select_Player_Effect_;
int Texture_Entry_Select_Player_Effect_Load;//Texture_Entry_Select_Player_Effect

std::string Texture_Entry_Select_Player = "Entry/Select/Player.png";
std::string Texture_Entry_Select_Player_;
int Texture_Entry_Select_Player_Load;//Texture_Entry_Select_Player

std::string Texture_Entry_Select_IMG_9933 = "Entry/Select/IMG_9933.png";
std::string Texture_Entry_Select_IMG_9933_;
int Texture_Entry_Select_IMG_9933_Load;//Texture_Entry_Select_IMG_9933

std::string Texture_Entry_Select_IMG_9936 = "Entry/Select/IMG_9936.png";
std::string Texture_Entry_Select_IMG_9936_;
int Texture_Entry_Select_IMG_9936_Load;//Texture_Entry_Select_IMG_9936


//プレイヤー情報
//ぷちきゃら

std::string Texture_SelectSong_Bar_White = "SelectSong/Bar_White.png";
std::string Texture_SelectSong_Bar_White_;
int Texture_SelectSong_Bar_White_Load;//Texture_SelectSong_Bar_White

std::string Texture_SelectSong_Barcode_Scan = "SelectSong/Barcode_Scan.png";
std::string Texture_SelectSong_Barcode_Scan_;
int Texture_SelectSong_Barcode_Scan_Load;//Texture_SelectSong_Barcode_Scan

std::string Texture_SelectSong_HiScoreBoard = "SelectSong/HiScoreBoard.png";
std::string Texture_SelectSong_HiScoreBoard_;
int Texture_SelectSong_HiScoreBoard_Load;//Texture_SelectSong_HiScoreBoard

std::string Texture_SelectSong_HiScoreBoard_Ura = "SelectSong/HiScoreBoard_Ura.png";
std::string Texture_SelectSong_HiScoreBoard_Ura_;
int Texture_SelectSong_HiScoreBoard_Ura_Load;//Texture_SelectSong_HiScoreBoard_Ura

std::string Texture_SelectSong_ScoreBoard = "SelectSong/ScoreBoard.png";
std::string Texture_SelectSong_ScoreBoard_;
int Texture_SelectSong_ScoreBoard_Load;//Texture_SelectSong_ScoreBoard

//バナパスデータ用
std::string Texture_SelectSong_HiScoreBoard_Bana_Data[3];
std::string Texture_SelectSong_HiScoreBoard_Bana_Data_[3];
int Texture_SelectSong_HiScoreBoard_Bana_Data_Load[3];//Texture_SelectSong_HiScoreBoard_Bana_Data

std::string Texture_SelectSong_ScoreBoard_Bana_Data[3];
std::string Texture_SelectSong_ScoreBoard_Bana_Data_[3];
int Texture_SelectSong_ScoreBoard_Bana_Data_Load[3];//Texture_SelectSong_ScoreBoard_Bana_Data


std::string Texture_SelectSong_NowSong_Base = "SelectSong/NowSong_Base.png";
std::string Texture_SelectSong_NowSong_Base_;
int Texture_SelectSong_NowSong_Base_Load;//Texture_SelectSong_NowSong_Base

std::string Texture_SelectSong_Timer_Base = "SelectSong/Timer_Base.png";
std::string Texture_SelectSong_Timer_Base_;
int Texture_SelectSong_Timer_Base_Load;//Texture_SelectSong_Timer_Base


std::string Texture_SelectSong_Remnant_Coins = "SelectSong/Remnant_Coins.png";
std::string Texture_SelectSong_Remnant_Coins_;
int Texture_SelectSong_Remnant_Coins_Load;//Texture_SelectSong_Remnant_Coins

std::string Texture_SelectSong_Level_Panel = "SelectSong/Level_Panel.png";
std::string Texture_SelectSong_Level_Panel_;
int Texture_SelectSong_Level_Panel_Load;//Texture_SelectSong_Level_Panel

std::string Texture_SelectSong_Level_Panel2 = "SelectSong/Level_Panel2.png";
std::string Texture_SelectSong_Level_Panel2_;
int Texture_SelectSong_Level_Panel2_Load;//Texture_SelectSong_Level_Panel2

std::string Texture_SelectSong_Level_10_Panel = "SelectSong/Level_10_Panel.png";
std::string Texture_SelectSong_Level_10_Panel_;
int Texture_SelectSong_Level_10_Panel_Load;//Texture_SelectSong_Level_10_Panel

std::string Texture_SelectSong_Branch = "SelectSong/Branch.png";
std::string Texture_SelectSong_Branch_;
int Texture_SelectSong_Branch_Load;//Texture_SelectSong_Branch

std::string Texture_SelectSong_Difficult = "SelectSong/Difficult.png";
std::string Texture_SelectSong_Difficult_;
int Texture_SelectSong_Difficult_Load[TJA_FILE_COURSE_NUMBER + 1];//Texture_SelectSong_Difficult

std::string Texture_SelectSong_YellowFrame = "SelectSong/YellowFrame.png";
std::string Texture_SelectSong_YellowFrame_;
int Texture_SelectSong_YellowFrame_Load;//Texture_SelectSong_YellowFrame

std::string Texture_SelectSong_WhiteFrame = "SelectSong/WhiteFrame.png";
std::string Texture_SelectSong_WhiteFrame_;
int Texture_SelectSong_WhiteFrame_Load;//Texture_SelectSong_WhiteFrame

std::string Texture_SelectSong_YellowFrameBack = "SelectSong/YellowFrameBack.png";
std::string Texture_SelectSong_YellowFrameBack_;
int Texture_SelectSong_YellowFrameBack_Load;//Texture_SelectSong_YellowFrameBack

std::string Texture_SelectSong_CourseSelect_Main_Panel = "SelectSong/CourseSelect/Main_Panel.png";
std::string Texture_SelectSong_CourseSelect_Main_Panel_;
int Texture_SelectSong_CourseSelect_Main_Panel_Load;//Texture_SelectSong_CourseSelect_Main_Panel

std::string Texture_SelectSong_CourseSelect_Main_Panel2 = "SelectSong/CourseSelect/Main_Panel2.png";
std::string Texture_SelectSong_CourseSelect_Main_Panel2_;
int Texture_SelectSong_CourseSelect_Main_Panel2_Load;//Texture_SelectSong_CourseSelect_Main_Panel2

std::string Texture_SelectSong_CourseSelect_Main_Panel_2P = "SelectSong/CourseSelect/Main_Panel_2P.png";
std::string Texture_SelectSong_CourseSelect_Main_Panel_2P_;
int Texture_SelectSong_CourseSelect_Main_Panel_2P_Load;//Texture_SelectSong_CourseSelect_Main_Panel_2P

std::string Texture_SelectSong_CourseSelect_Oni_Panel = "SelectSong/CourseSelect/Oni_Panel.png";
std::string Texture_SelectSong_CourseSelect_Oni_Panel_;
int Texture_SelectSong_CourseSelect_Oni_Panel_Load;//Texture_SelectSong_CourseSelect_Oni_Panel

std::string Texture_SelectSong_CourseSelect_Oni_Panel2 = "SelectSong/CourseSelect/Oni_Panel2.png";
std::string Texture_SelectSong_CourseSelect_Oni_Panel2_;
int Texture_SelectSong_CourseSelect_Oni_Panel2_Load;//Texture_SelectSong_CourseSelect_Oni_Panel2

std::string Texture_SelectSong_CourseSelect_Oni_Panel_2P = "SelectSong/CourseSelect/Oni_Panel_2P.png";
std::string Texture_SelectSong_CourseSelect_Oni_Panel_2P_;
int Texture_SelectSong_CourseSelect_Oni_Panel_2P_Load;//Texture_SelectSong_CourseSelect_Oni_Panel_2P

std::string Texture_SelectSong_CourseSelect_Ura_Panel = "SelectSong/CourseSelect/Ura_Panel.png";
std::string Texture_SelectSong_CourseSelect_Ura_Panel_;
int Texture_SelectSong_CourseSelect_Ura_Panel_Load;//Texture_SelectSong_CourseSelect_Ura_Panel

std::string Texture_SelectSong_CourseSelect_Ura_Panel2 = "SelectSong/CourseSelect/Ura_Panel2.png";
std::string Texture_SelectSong_CourseSelect_Ura_Panel2_;
int Texture_SelectSong_CourseSelect_Ura_Panel2_Load;//Texture_SelectSong_CourseSelect_Ura_Panel2

std::string Texture_SelectSong_CourseSelect_Ura_Panel_2P = "SelectSong/CourseSelect/Ura_Panel_2P.png";
std::string Texture_SelectSong_CourseSelect_Ura_Panel_2P_;
int Texture_SelectSong_CourseSelect_Ura_Panel_2P_Load;//Texture_SelectSong_CourseSelect_Ura_Panel_2P

std::string Texture_SelectSong_CourseSelect_Cursor_1P = "SelectSong/CourseSelect/Cursor_1P.png";
std::string Texture_SelectSong_CourseSelect_Cursor_1P_;
int Texture_SelectSong_CourseSelect_Cursor_1P_Load;//Texture_SelectSong_CourseSelect_Cursor_1P

std::string Texture_SelectSong_CourseSelect_Cursor_1P_2 = "SelectSong/CourseSelect/Cursor_1P_2.png";
std::string Texture_SelectSong_CourseSelect_Cursor_1P_2_;
int Texture_SelectSong_CourseSelect_Cursor_1P_2_Load;//Texture_SelectSong_CourseSelect_Cursor_1P_2

std::string Texture_SelectSong_CourseSelect_Cursor_2P = "SelectSong/CourseSelect/Cursor_2P.png";
std::string Texture_SelectSong_CourseSelect_Cursor_2P_;
int Texture_SelectSong_CourseSelect_Cursor_2P_Load;//Texture_SelectSong_CourseSelect_Cursor_2P

std::string Texture_SelectSong_CourseSelect_Level_Mark = "SelectSong/CourseSelect/Level_Mark.png";
std::string Texture_SelectSong_CourseSelect_Level_Mark_;
int Texture_SelectSong_CourseSelect_Level_Mark_Load;//Texture_SelectSong_CourseSelect_Level_Mark

std::string Texture_SelectSong_CourseSelect_Mark_Easy_0 = "SelectSong/CourseSelect/Mark/Easy_0.png";
std::string Texture_SelectSong_CourseSelect_Mark_Easy_0_;
int Texture_SelectSong_CourseSelect_Mark_Easy_0_Load;//Texture_SelectSong_CourseSelect_Mark_Easy_0

std::string Texture_SelectSong_CourseSelect_Mark_Normal_0 = "SelectSong/CourseSelect/Mark/Normal_0.png";
std::string Texture_SelectSong_CourseSelect_Mark_Normal_0_;
int Texture_SelectSong_CourseSelect_Mark_Normal_0_Load;//Texture_SelectSong_CourseSelect_Mark_Normal_0

std::string Texture_SelectSong_CourseSelect_Mark_Hard_0 = "SelectSong/CourseSelect/Mark/Hard_0.png";
std::string Texture_SelectSong_CourseSelect_Mark_Hard_0_;
int Texture_SelectSong_CourseSelect_Mark_Hard_0_Load;//Texture_SelectSong_CourseSelect_Mark_Hard_0

std::string Texture_SelectSong_CourseSelect_Mark_Oni_0 = "SelectSong/CourseSelect/Mark/Oni_0.png";
std::string Texture_SelectSong_CourseSelect_Mark_Oni_0_;
int Texture_SelectSong_CourseSelect_Mark_Oni_0_Load;//Texture_SelectSong_CourseSelect_Mark_Oni_0

std::string Texture_SelectSong_CourseSelect_Mark_Edit_0 = "SelectSong/CourseSelect/Mark/Edit_0.png";
std::string Texture_SelectSong_CourseSelect_Mark_Edit_0_;
int Texture_SelectSong_CourseSelect_Mark_Edit_0_Load;//Texture_SelectSong_CourseSelect_Mark_Edit_0

std::string Texture_SelectSong_CourseSelect_Mark_Easy_White = "SelectSong/CourseSelect/Mark/Easy_White.png";
std::string Texture_SelectSong_CourseSelect_Mark_Easy_White_;
int Texture_SelectSong_CourseSelect_Mark_Easy_White_Load;//Texture_SelectSong_CourseSelect_Mark_Easy_White

std::string Texture_SelectSong_CourseSelect_Mark_Normal_White = "SelectSong/CourseSelect/Mark/Normal_White.png";
std::string Texture_SelectSong_CourseSelect_Mark_Normal_White_;
int Texture_SelectSong_CourseSelect_Mark_Normal_White_Load;//Texture_SelectSong_CourseSelect_Mark_Normal_White

std::string Texture_SelectSong_CourseSelect_Mark_Hard_White = "SelectSong/CourseSelect/Mark/Hard_White.png";
std::string Texture_SelectSong_CourseSelect_Mark_Hard_White_;
int Texture_SelectSong_CourseSelect_Mark_Hard_White_Load;//Texture_SelectSong_CourseSelect_Mark_Hard_White

std::string Texture_SelectSong_CourseSelect_Mark_Oni_White = "SelectSong/CourseSelect/Mark/Oni_White.png";
std::string Texture_SelectSong_CourseSelect_Mark_Oni_White_;
int Texture_SelectSong_CourseSelect_Mark_Oni_White_Load;//Texture_SelectSong_CourseSelect_Mark_Oni_White

std::string Texture_SelectSong_CourseSelect_Mark_Edit_White = "SelectSong/CourseSelect/Mark/Edit_White.png";
std::string Texture_SelectSong_CourseSelect_Mark_Edit_White_;
int Texture_SelectSong_CourseSelect_Mark_Edit_White_Load;//Texture_SelectSong_CourseSelect_Mark_Edit_White






std::string Texture_SelectSong_CourseSelect_Change_OniUra_Oni_Change_Panel = "SelectSong/CourseSelect/Change_OniUra/Oni_Change_Panel.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_Oni_Change_Panel_;
int Texture_SelectSong_CourseSelect_Change_OniUra_Oni_Change_Panel_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_Oni_Change_Panel

std::string Texture_SelectSong_CourseSelect_Change_OniUra_Ura_Change_Panel = "SelectSong/CourseSelect/Change_OniUra/Ura_Change_Panel.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_Ura_Change_Panel_;
int Texture_SelectSong_CourseSelect_Change_OniUra_Ura_Change_Panel_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_Ura_Change_Panel

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Oni.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_F = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Oni_F.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_F_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_F_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_F

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_M = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Oni_M.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_M_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_M_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Oni_M

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Ura.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_F = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Ura_F.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_F_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_F_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_F

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_M = "SelectSong/CourseSelect/Change_OniUra/UraOniChange_Ura_M.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_M_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_M_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniChange_Ura_M

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniEffect_White = "SelectSong/CourseSelect/Change_OniUra/UraOniEffect_White.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOniEffect_White_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOniEffect_White_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOniEffect_White

std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOni_White = "SelectSong/CourseSelect/Change_OniUra/UraOni_White.png";
std::string Texture_SelectSong_CourseSelect_Change_OniUra_UraOni_White_;
int Texture_SelectSong_CourseSelect_Change_OniUra_UraOni_White_Load;//Texture_SelectSong_CourseSelect_Change_OniUra_UraOni_White

std::string Texture_SelectSong_CourseSelect_Option_Base_1P = "SelectSong/CourseSelect/Option/Base_1P.png";
std::string Texture_SelectSong_CourseSelect_Option_Base_1P_;
int Texture_SelectSong_CourseSelect_Option_Base_1P_Load;//Texture_SelectSong_CourseSelect_Option_Base_1P

std::string Texture_SelectSong_CourseSelect_Option_Base_1P_2 = "SelectSong/CourseSelect/Option/Base_1P_2.png";
std::string Texture_SelectSong_CourseSelect_Option_Base_1P_2_;
int Texture_SelectSong_CourseSelect_Option_Base_1P_2_Load;//Texture_SelectSong_CourseSelect_Option_Base_1P_2

std::string Texture_SelectSong_CourseSelect_Option_Base_2P = "SelectSong/CourseSelect/Option/Base_2P.png";
std::string Texture_SelectSong_CourseSelect_Option_Base_2P_;
int Texture_SelectSong_CourseSelect_Option_Base_2P_Load;//Texture_SelectSong_CourseSelect_Option_Base_2P

std::string Texture_SelectSong_CourseSelect_Option_Base_Font = "SelectSong/CourseSelect/Option/Base_Font.png";
std::string Texture_SelectSong_CourseSelect_Option_Base_Font_;
int Texture_SelectSong_CourseSelect_Option_Base_Font_Load;//Texture_SelectSong_CourseSelect_Option_Base_Font

std::string Texture_SelectSong_CourseSelect_Option_Changed = "SelectSong/CourseSelect/Option/Changed.png";
std::string Texture_SelectSong_CourseSelect_Option_Changed_;
int Texture_SelectSong_CourseSelect_Option_Changed_Load;//Texture_SelectSong_CourseSelect_Option_Changed

std::string Texture_SelectSong_CourseSelect_Option_Select = "SelectSong/CourseSelect/Option/Select.png";
std::string Texture_SelectSong_CourseSelect_Option_Select_;
int Texture_SelectSong_CourseSelect_Option_Select_Load;//Texture_SelectSong_CourseSelect_Option_Select

std::string Texture_SelectSong_CourseSelect_Option_C = "SelectSong/CourseSelect/Option/C.png";
std::string Texture_SelectSong_CourseSelect_Option_C_;
int Texture_SelectSong_CourseSelect_Option_C_Load;//Texture_SelectSong_CourseSelect_Option_C

std::string Texture_SelectSong_CourseSelect_Small_Back = "SelectSong/CourseSelect/Small_Back.png";
std::string Texture_SelectSong_CourseSelect_Small_Back_;
int Texture_SelectSong_CourseSelect_Small_Back_Load;//Texture_SelectSong_CourseSelect_Small_Back

std::string Texture_SelectSong_CourseSelect_Small_Back_Light = "SelectSong/CourseSelect/Small_Back_Light.png";
std::string Texture_SelectSong_CourseSelect_Small_Back_Light_;
int Texture_SelectSong_CourseSelect_Small_Back_Light_Load;//Texture_SelectSong_CourseSelect_Small_Back_Light

std::string Texture_SelectSong_CourseSelect_Back_Light = "SelectSong/CourseSelect/Back_Light.png";
std::string Texture_SelectSong_CourseSelect_Back_Light_;
int Texture_SelectSong_CourseSelect_Back_Light_Load;//Texture_SelectSong_CourseSelect_Back_Light

std::string Texture_SelectSong_CourseSelect_Back_Light_Back = "SelectSong/CourseSelect/Back_Light_Back.png";
std::string Texture_SelectSong_CourseSelect_Back_Light_Back_;
int Texture_SelectSong_CourseSelect_Back_Light_Back_Load;//Texture_SelectSong_CourseSelect_Back_Light_Back

std::string Texture_SelectSong_CourseSelect_Back_White_Light = "SelectSong/CourseSelect/Back_White_Light.png";
std::string Texture_SelectSong_CourseSelect_Back_White_Light_;
int Texture_SelectSong_CourseSelect_Back_White_Light_Load;//Texture_SelectSong_CourseSelect_Back_White_Light


//Result
std::string Texture_Result_Crown = "Result/Crown.png";
std::string Texture_Result_Crown_;
int Texture_Result_Crown_Load[4];//Texture_Result_Crown







//Sound
const char* Sound_Title_Meinongen; //Sound_Title_Meinongen
int Sound_Title_Meinongen_Load;//Sound_Title_Meinongen

const char* Sound_Title_Kurejitto; //Sound_Title_Kurejitto
int Sound_Title_Kurejitto_Load;//Sound_Title_Kurejitto

const char* Sound_Title_TaikoWotataitesutato; //Sound_Title_TaikoWotataitesutato
int Sound_Title_TaikoWotataitesutato_Load;//Sound_Title_TaikoWotataitesutato


int Sound_S_Dong_Load;//Sound_S_Dong
int Sound_S_Ka_Load;//Sound_S_Ka

std::string Sound_Taiko_Taiko_dong_1p = "Taiko/Taiko/dong_1p.ogg";
std::string Sound_Taiko_Taiko_dong_1p_;
int Sound_Taiko_Taiko_dong_1p_Load;//Sound_Taiko_Taiko_dong_1p

std::string Sound_Taiko_Taiko_dong_2p = "Taiko/Taiko/dong_2p.ogg";
std::string Sound_Taiko_Taiko_dong_2p_;
int Sound_Taiko_Taiko_dong_2p_Load;//Sound_Taiko_Taiko_dong_2p

std::string Sound_Taiko_Taiko_ka_1p = "Taiko/Taiko/ka_1p.ogg";
std::string Sound_Taiko_Taiko_ka_1p_;
int Sound_Taiko_Taiko_ka_1p_Load;//Sound_Taiko_Taiko_ka_1p

std::string Sound_Taiko_Taiko_ka_2p = "Taiko/Taiko/ka_2p.ogg";
std::string Sound_Taiko_Taiko_ka_2p_;
int Sound_Taiko_Taiko_ka_2p_Load;//Sound_Taiko_Taiko_ka_2p



//SelectSong
std::string Sound_Difficulty_Select;
std::string Sound_Difficulty_Select_ = "Difficulty_Select.ogg";
int Sound_Difficulty_Select_Load;//Sound_Difficulty_Select
bool Sound_Difficulty_Select_Load_Check;

std::string Sound_SongDecide;
std::string Sound_SongDecide_ = "SongDecide.ogg";
int Sound_SongDecide_Load;//Sound_SongDecide

std::string Sound_S_Option;
std::string Sound_S_Option_ = "S_Option.wav";
int Sound_S_Option_Load;//Sound_S_Option

std::string Sound_ChangeUra;
std::string Sound_ChangeUra_ = "ChangeUra.wav";
int Sound_ChangeUra_Load;//Sound_ChangeUra




//Screen関連
//画面解像度(1920,1080)
#define Window_Size_X 1920
#define Window_Size_Y 1080

bool ASyncLoadMode;

//Game
int Coins = 1; //コインの枚数
int Coins_Plus = 1; //コインの増加量

int CoinText_Alpha = 255; //コインテキストの透明度
int CoinText_Alpha_Waitime1 = 0; //コインテキスト専用タイマー1
int CoinText_Alpha_Waitime2 = 0; //コインテキスト専用タイマー2
int CoinText_Alpha_Waitime3 = 0; //コインテキスト専用タイマー3
int CoinText_Alpha_Time1 = 1000; //コインテキストの透明度が255の際の滞在時間
int CoinText_Alpha_Minus = 9; //コインテキストの透明度を下げる量
int CoinText_Alpha_Check = 0; //コインテキストの透明度チェック(0,不透明から透明 1,透明から不透明)
int TaikoWotataitesutato_Check = 0; //太鼓をたたいてスタート!音源再生チェック(0,再生 1,再生済み)
bool Play_Songs_In = FALSE;//1クレジットあたりの演奏できる曲数を無限にする
int Play_Songs = 2;//1クレジットあたりの演奏できる曲数
bool Goto_SongSelect_FadeOut_Check = FALSE;
bool Goto_SongSelect_Check = FALSE;
bool Goto_SongSelect_All_Check = FALSE;
int Goto_SongSelect_FadeOut = 0;
int Goto_SongSelect_FadeOut_Plus = 7;
int Goto_SongSelect_FadeOut_Back;

double SelectSong_Back_PlusX = 0.5;

double SelectSong_Back_PlusX1;

int KeySetting_1P;
int KeySetting_2P;
int SelectSong_FadeIn_Time1 = 400;


double Entry_Banapass_Loading_Pos[4][2] = { { (1920 - 1386) / 2,1080 / 2 },{(1920 + 1386) / 2,1080 / 2} ,{(1920 + 1386) / 2,1080 / 2} ,{(1920 - 1386) / 2,1080 / 2} };//左上、右上、左下、右下の座標
int Entry_Banapass_Loading_Pos_cnt;
int Entry_Banapass_Loading_Pos_Plus;

int Entry_Banapass_Loading_Text_Alpha_cnt;
double Entry_Banapass_Loading_Text_Alpha;

int Entry_Banapass_Loading_Text_Alpha_cnt2;
double Entry_Banapass_Loading_Text_Alpha2;

double _BanaPass_Loading_Bar_Text_Fade_Timer1_1 = 70.0;
double _BanaPass_Loading_Bar_Text_Fade_Timer1_2 = 70.0;
double _BanaPass_Loading_Bar_Loting_Timer1_1 = 100.0;

double _BanaPass_Loading_Bar_DonChan1_Loating_Timer1_1 = 100.0;
double _BanaPass_Loading_Bar_DonChan1_Loating_Timer1_Plus = 130.0;

double _BanaPass_Load_Time_1 = 550.0;
double _BanaPass_Load_Time_2 = 2760.0;

int Entry_BanaPass_Loading_Animetion_cnt_Apply = 2;
int Entry_Pass_Loading_Animetion_cnt;
bool Entry_Pass_Loading_Animetion_Check[5] = { TRUE,FALSE,FALSE,FALSE,FALSE };
int Entry_Pass_Loading_Animetion_Check_Number;
int Entry_Pass_Loading_Animetion_Timer[3];
bool Entry_Pass_Loading_Animetion_Timer_Check = FALSE;

bool Entry_Pass_Load_End_Animetion;

bool Entry_Pass_Bar_Change_Check;
bool Entry_Pass_Bar_Change_Check2;

bool Entry_BanaPass_Loaded_OK_Check[3];

//選択
bool Entry_BanaPass_Player_Choice_Left_and_Right;

double _BanaPass_Select_Base_Wait_Timer1_1 = 180.0;
double _BanaPass_Select_Base_Fade_Timer1_1 = 280.0;

double _BanaPass_Select_Base_Wait_Timer2_1 = 440.0;
double _BanaPass_Select_IMG_9936_Fade_Timer1_1 = 50.0;


int Entry_BanaPass_Select_Base_Timer1_Count[3];
int Entry_BanaPass_Select_Base_Alpha_cnt;
double Entry_BanaPass_Select_Base_Alpha;
bool Entry_BanaPass_Select_Base_Faded_;

int Entry_DonChan_Daiseikou_Loop_IMG_cnt;
double Entry_DonChan_Daiseikou_Loop_IMG_cnt_d;
double Entry_DonChan_Daiseikou_Loop_IMG_cnt_d2;


int Entry_Player_Choise_Number = 1;
int Entry_Player_Choose_Number;
bool Entry_Player_Choose_Check;
bool Entry_Player_Choose_Check2;
int Entry_Player_Choose_Timer1[3];
double Entry_Player_Choose_IMG_9936_Alpha;
int Entry_Player_Choose_IMG_9936_Alpha_cnt;
int Entry_Player_Choose_IMG_9936_Alpha_cnt2;
int Entry_BanaPass_Select_Base_Fade_Wait_Timer2_1[3];

int Texture_NamePlate_Rainbow_cnt2;

int SelectSong_FadeIn_Waitime1 = 0; //SelectSong専用タイマー1
int SelectSong_FadeIn_Waitime2 = 0; //SelectSong専用タイマー2
int SelectSong_FadeIn_Waitime3 = 0; //SelectSong専用タイマー3
int Goto_SongSelect_FadeIn_Plus = 6;
bool Goto_SongSelect_FadeIn_Check = FALSE;

int Genre_Scroll_Plus = 1;
int Genre_Scroll_Back_Alpha = 0;
int Genre_Scroll_Back_Alpha_Plus = 30;
bool Goto_SongSelect_Back_Key_Left_Check = FALSE;
bool Goto_SongSelect_Back_Key_Right_Check = FALSE;


int SelectSong_Genre_Bar_Center;
int SelectSong_Genre_Bar_Down1;
int SelectSong_Genre_Bar_Down2;
int SelectSong_Genre_Bar_Down3;
int SelectSong_Genre_Bar_Down4;
int SelectSong_Genre_Bar_Up1;
int SelectSong_Genre_Bar_Up2;
int SelectSong_Genre_Bar_Up3;
int SelectSong_Genre_Bar_Up4;


int SelectSong_Genre_Bar_Center_1;
int SelectSong_Genre_Bar_Down1_1;
int SelectSong_Genre_Bar_Down2_1;
int SelectSong_Genre_Bar_Down3_1;
int SelectSong_Genre_Bar_Down4_1;
int SelectSong_Genre_Bar_Up1_1;
int SelectSong_Genre_Bar_Up2_1;
int SelectSong_Genre_Bar_Up3_1;
int SelectSong_Genre_Bar_Up4_1;










int SelectSong_Genre_Bar_Up_Stop_X = 443;
int SelectSong_Genre_Bar_Up_Stop_Y = 221;

int SelectSong_Genre_Bar_Down_Stop_X = 543;
int SelectSong_Genre_Bar_Down_Stop_Y = 731;

double SelectSong_Genre_Bar_Down_Stop_PlusX = 40.0;
double SelectSong_Genre_Bar_Down_Stop_PlusY = 135.0;

double SelectSong_Genre_Bar_Up_Stop_PlusX = 40.0;
double SelectSong_Genre_Bar_Up_Stop_PlusY = 135.0;


int SelectSong_Donchan_1P_Clear_Loop_X = 6;
int SelectSong_Donchan_1P_Clear_Loop_Y = 598;

int SelectSong_Donchan_1P_Count = 0;
double SelectSong_Donchan_1P_Count_d = 0.0;
double SelectSong_Donchan_1P_Count_d2 = 0.0;


bool SelectSong_Genre_Bar_Scrolling = FALSE;
bool SelectSong_Genre_Bar_Left_Scrolling = FALSE;
bool SelectSong_Genre_Bar_Right_Scrolling = FALSE;

int SelectSong_Genre_Bar_Scroll_Timer1;
int SelectSong_Genre_Bar_Scroll_Timer2;
int SelectSong_Genre_Bar_Scroll_Timer3;
int SelectSong_Genre_Bar_Scroll_Timer4;
double _SelectSong_Bar_Scroll_Time1 = 180.0;
int _SelectSong_Bar_Scroll_Time1_Count = 0;
double _SelectSong_Bar_Scroll_Time1_Count_d = 0;
double _SelectSong_Bar_Scroll_Time1_Count_d2 = 0;



double SelectSong_Genre_Bar_Down_Center_To_X = 50.0;
double SelectSong_Genre_Bar_Down_Center_To_Y = 261.0;

double SelectSong_Genre_Bar_Up_Center_To_X = 50.0;
double SelectSong_Genre_Bar_Up_Center_To_Y = 261.0;

double _SelectSong_Bar_Open_Time1_1 = 560.0;
double _SelectSong_Bar_Open_Time1_2 = 650.0;
double _SelectSong_Bar_Open_Time1_3 = _SelectSong_Bar_Open_Time1_2 - _SelectSong_Bar_Open_Time1_1;

int SelectSong_Genre_Bar_Open_Scroll_Timer1;
int SelectSong_Genre_Bar_Open_Scroll_Timer2;
int SelectSong_Genre_Bar_Open_Scroll_Timer3;

double _SelectSong_Bar_Open_Scroll_Timer1_1 = 530.0;
double _SelectSong_Bar_Open_Scroll_Timer1_2 = 900.0;
double _SelectSong_Bar_Open_Scroll_Timer1_3 = 1110.0;
double _SelectSong_Bar_Open_Scroll_Timer1_4 = 1380.0;
double _SelectSong_Bar_Open_Scroll_Timer1_5 = 1710.0;

double _SelectSong_Chara_Fade_Timer1_1 = 642.0;
double _SelectSong_Chara_Fade_Timer1_2 = 786.0;

double _SelectSong_Chara_Fade_Timer2_1 = 1460.0;
double _SelectSong_Chara_Fade_Timer2_2 = 1660.0;

double _SelectSong_Level_Panel_Fade_Timer1_1 = 360.0;
double _SelectSong_Level_Panel_Fade_Timer1_2 = 560.0;
double _SelectSong_Level_Panel_Fade_Timer1_3 = 1550.0;
int _SelectSong_Level_Panel_Fade_Timer1_3_Timer_cnt[3];
bool SelectSong_Check_Change_Level_Panel;
bool SelectSong_Check_Changeed_One_Level_Panel;
bool _SelectSong_Level_Panel_Fade_Timer1_3_Timer_Check;
double SelectSong_Check_Change_Level_Panel_ALPHA;
int SelectSong_Check_Change_Level_Panel_ALPHA_cnt;
double SelectSong_Check_Change_Level_Panel_ALPHA2;
double SelectSong_Check_Change_Level_Panel_ALPHA3;

double _SelectSong_Level_Panel_Fade_Timer2_1 = 650.0;
double _SelectSong_Level_Panel_Fade_Timer2_2 = 680.0;
bool _SelectSong_Chara_Fade_Check;
bool _SelectSong_Chara_Fade_Check2;

bool SelectSong_Dong_Check__ = FALSE;

bool SelectSong_Bar_Change_Check1 = 2;//(0: 1: 2:)
bool SelectSong_Bar_Change_Check2 = FALSE;//(0:切り替え前 1:後)

bool _SelectSong_Bar_Open_Check = FALSE;
double _SelectSong_Bar_Open_Up_X_1 = 492.0;
double _SelectSong_Bar_Open_Up_Y_1 = 392.0;
double _SelectSong_Bar_Open_Up_X_1_cnt = 0.0;
double _SelectSong_Bar_Open_Up_Y_1_cnt = 0.0;
int _SelectSong_Bar_Open_Up_X_1_cnt_int;
int _SelectSong_Bar_Open_Up_Y_1_cnt_int;
double _SelectSong_Bar_Open_Up_Y_1_cnt_int_d;
double _SelectSong_Bar_Open_Up_Y_1_cnt_int_d2;



double _SelectSong_Bar_Open_Down_X_1 = 492.0;
double _SelectSong_Bar_Open_Down_Y_1 = 569.0;
double _SelectSong_Bar_Open_Down_X_1_cnt = 0.0;
double _SelectSong_Bar_Open_Down_Y_1_cnt = 0.0;
int _SelectSong_Bar_Open_Down_X_1_cnt_int;
int _SelectSong_Bar_Open_Down_Y_1_cnt_int;

double _SelectSong_Bar_White_Open_X_1_cnt;
double _SelectSong_Bar_White_Open_Y_1_cnt;

double _SelectSong_Bar_White_Open_Down_Y_Size = 178.0;
double _SelectSong_Bar_White_Open_Down_Y_Size2 = 178.0 - 84.0;
double _SelectSong_Bar_White_Open_Down_Y_Size_cnt = 0.0;
double _SelectSong_Bar_White_Open_Down_Y_Size_cnt_;

double _SelectSong_Bar_White_Open_Down_X_Size;

bool _SelectSong_Bar_Opened_Check = FALSE;

//ジャンル開閉時のバーの動き
bool SelectSong_Bar_Default_Opened_Check_1;//バーが開ききっているかチェック

bool SelectSong_Bar_Default_Lotate_And_Move_Check;//全体
bool SelectSong_Bar_Default_Lotate_Check_1;//回転チェック1
bool To_Genre_;
bool To_Song_ = TRUE;


//真ん中
double SelectSong_Bar_Default_Size_X = 938.0;
double SelectSong_Bar_Default_Size_Y = 328.0;
//画像座標
double SelectSong_Bar_Default_Pos_LeftUp[2] = { 491.0 , 382.0};//X,Y
double SelectSong_Bar_Default_Pos_RightUp[2] = { 1429.0 , 382.0 };//X,Y
double SelectSong_Bar_Default_Pos_LeftDown[2] = { 491.0 , 704.0 };//X,Y
double SelectSong_Bar_Default_Pos_RightDown[2] = { 1429.0 , 704.0 };//X,Y
double SelectSong_Bar_Default_Lotate_cnt;
double SelectSong_Bar_Default_Lotate_cnt_d;
double SelectSong_Bar_Default_Lotate_cnt_d2;

double SelectSong_Bar_Default_Lotate_Plus;
double SelectSong_Bar_Default_Lotate_cnt_Sub = 2.0;


bool SelectSong_Bar_Open_Lotated = FALSE;
bool SelectSong_Dong_Pressed_Check = FALSE;
double Level_Panel_ALPHA = 0.0;
int Level_Panel_ALPHA_cnt;
int Level_Panel_ALPHA_cnt_Max = 6;

int _SelectSong_Genre_Close_Frequency = 6;//フォルダをとじるボタンの頻度(1以上)
bool Genre_Change_ = FALSE;

int SelectSong_Bar_Opened_Pic_Folder[3];
int SelectSong_Bar_Opened_Pic_Folder_Close[3];

int SelectSong_Bar_White_Opened_Pic[3];
int SelectSong_Bar_ID_C;
int SelectSong_Bar_ID_CB;
int SelectSong_SelectDifficult_Random_Select_Check;


//移動チェック
bool SelectSong_Bar_Open_NULL_Check_1 = FALSE;//バーを動かす前
bool SelectSong_Bar_Open_Moving_Check_1 = FALSE;//バーを動かすか
bool SelectSong_Bar_Open_Lotating_Check_1 = FALSE;//真ん中のバーを回転させるか
bool SelectSong_Bar_Open_Lotating_Check_2 = FALSE;//真ん中のバーを回転させるか
bool SelectSong_Bar_Open_Moving_Check_2 = FALSE;//バーを動かすか

double SelectSong_Genre_Chara_Alpha;
int SelectSong_Genre_Chara_Alpha_cnt = 0;
double SelectSong_Genre_Chara_PosX_Count = 0.0;
double SelectSong_Genre_Chara_PosX_Plus = 0.0;
double SelectSong_Genre_Chara_PosX_Start = 377.0;
double SelectSong_Genre_Chara_PosX_Back = 307.0;
double SelectSong_Genre_Chara_PosX_Stop = 313.0;

double SelectSong_YelloBack_Alpha = 255.0;
int SelectSong_YelloBack_Alpha_cnt;
bool SelectSong_YelloBack_Alpha_Timer_Check;
bool SelectSong_YelloBack_Fade_Check = TRUE;
int SelectSong_YelloBack_Alpha_Fade_Timer = 450;

int SelectSong_WhiteBack_Alpha_Fade_Timer_cnt[3];
int SelectSong_WhiteBack_Alpha_Fade_Timer = 50;
int SelectSong_WhiteBack_Alpha_Fade_Timer_Number_cnt;
int SelectSong_WhiteBack_Alpha_Fade_Timer_Number = 4;
bool SelectSong_WhiteBack_Alpha_Fade_Timer_Check = FALSE;
bool SelectSong_WhiteBack_Alpha_Fade_Change_Check = TRUE;



bool SelectSong_Genre_Chara_PosX_Back_Check = FALSE;

int SelectSong_Level_Number_Pos[TJA_FILE_COURSE_NUMBER][2] = {{735,600},{916,600},{1099,600},{1281,600},{1281,600}};
int SelectSong_BRANCH_Pos[TJA_FILE_COURSE_NUMBER][2] = { {602,576},{784,576},{966,576},{1148,576},{1148,576} };


int SelectSong_HiScore_Str_Alpha_Timer[3];
double _SelectSong_HiScore_Str_Fade_Timer1;
bool SelectSong_HiScore_Str_Alpha_Timer_Check;
bool SelectSong_HiScore_Str_Change_Check;


//どんちゃんチェック
bool SelectSong_DonChan_Skin_Clear_Loop_Check = TRUE;
bool SelectSong_DonChan_Skin_Daiseikou_In_Check;

bool SelectSong_DonChan_Skin_Skip_Check;
bool SelectSong_DonChan_Skin_StartSong_Check;



//難易度選択
bool SelectSong_SelectDifficult_Check = FALSE;
double SelectSong_SelectDifficult_Bar_Alpha = 255.0;
int SelectSong_SelectDifficult_Bar_Alpha_cnt;
int SelectSong_SelectDifficult_Choose[2] = {0,0};
int SelectSong_SelectDifficult_Bar_Fading_Timer_cnt[3];

//フェードアウト
bool SelectSong_SelectDifficult_Bar_Fading_Check = FALSE;
bool SelectSong_SelectDifficult_Bar_Fading_Check_NULL = FALSE;
bool SelectSong_SelectDifficult_Bar_Fading_Check_1 = FALSE;
bool SelectSong_SelectDifficult_Bar_Fading_Check_2 = FALSE;
bool SelectSong_SelectDifficult_Bar_Fading_Check_3 = FALSE;
bool SelectSong_SelectDifficult_Bar_Fading_Check_4 = FALSE;


//選択
bool SelectSong_SelectDifficult_Selecting_Timer1_1 = FALSE;//選択可能か


int _SelectDifficult_Bar_Fade_Timer1_1 = 750.0;
int _SelectDifficult_Bar_Fade_Timer1_2 = 930.0;
int _SelectDifficult_Bar_Fade_Timer1_3 = 1180.0;
int _SelectDifficult_Bar_Fade_Timer1_4 = 1660.0;
int _SelectDifficult_Selecting_Timer1_1 = 2030.0;

double SelectSong_SelectDifficult_CourseBox_ALPHA;
double SelectSong_SelectDifficult_CourseBox_ALPHA_cnt;

int SelectSong_SelectDifficult_Random_Select;

bool SelectSong_SelectDifficult_Ura_Check = FALSE;
int SelectSong_SelectDifficult_Ura_cnt[2];
int SelectSong_SelectDifficult_Ura_cnt_Max = 10;

double SelectSong_SelectDifficult_Cursor_Default_PosY_1 = 266.0;
double SelectSong_SelectDifficult_Cursor_Default_PosY_2 = 309.0;

double SelectSong_SelectDifficult_Cursor_PosX[2];
double SelectSong_SelectDifficult_Cursor_PosY[2];

int SelectSong_SelectDifficult_Cursor_PosY_cnt;
double SelectSong_SelectDifficult_Cursor_PosY_cnt_d;
double SelectSong_SelectDifficult_Cursor_PosY_cnt_d2;

double SelectSong_SelectDifficult_Cursor_PosY_Plus;

double SelectSong_SelectDifficult_Cursor_Alpha;
int SelectSong_SelectDifficult_Cursor_Same_Number;

//移動アニメーション
int SelectSong_SelectDifficult_Cursor_Moving_Timer_cnt[3];
int SelectSong_SelectDifficult_Cursor_Moving_Timer_cnt2[3];

bool SelectSong_SelectDifficult_Cursor_Moving_Check[2];
bool SelectSong_SelectDifficult_Cursor_Timer_Check[2];
double SelectSong_SelectDifficult_Cursor_Moving_Timer = 130.0;

bool SelectSong_SelectDifficult_Cursor_Min_Check[2];
bool SelectSong_SelectDifficult_Cursor_Max_Check[2];

int SelectSong_SelectDifficult_Mark_Timer_cnt[2][3];
bool SelectSong_SelectDifficult_Mark_Timer_Start_Check[2];
bool SelectSong_SelectDifficult_Mark_Timer_Start_Check_[2];




double SelectSong_SelectDifficult_Mark_Timer1_1 = 200.0;
double SelectSong_SelectDifficult_Mark_Timer1_2 = 400.0;

bool SelectSong_SelectDifficult_Mark_Timer1_Check_NULL[2];
bool SelectSong_SelectDifficult_Mark_Timer1_Check_1[2];
bool SelectSong_SelectDifficult_Mark_Timer1_Check_2[2];

double SelectSong_SelectDifficult_Mark_ALPHA_1 = 198.9;
//204.51
double SelectSong_SelectDifficult_Mark_ALPHA_2 = 204.51;

double SelectSong_SelectDifficult_Mark_ALPHA_[2];
int SelectSong_SelectDifficult_Mark_ALPHA_cnt_[2];

double SelectSong_SelectDifficult_Mark_ALPHA[2];
int SelectSong_SelectDifficult_Mark_ALPHA_cnt[2];

double SelectSong_SelectDifficult_Mark_PosX[2][2];
double SelectSong_SelectDifficult_Mark_PosY[2][2];
int SelectSong_SelectDifficult_Mark_Pos_cnt[2];
double SelectSong_SelectDifficult_Mark_Pos_cnt_d[2];
double SelectSong_SelectDifficult_Mark_Pos_cnt_d2[2];


double SelectSong_SelectDifficult_Mark_PosX_T[2];
double SelectSong_SelectDifficult_Mark_PosY_T[2];
int SelectSong_SelectDifficult_Mark_Pos_cnt_T;


int SelectSong_SelectDifficult_Cursor_PosY_cnt2[2];
double SelectSong_SelectDifficult_Cursor_PosY_Plus2[2];

int SelectSong_SelectDifficult_Song_TITLE_Font;

double SelectSong_SelectDifficult_Song_Str_ALPHA;
int SelectSong_SelectDifficult_Song_Str_ALPHA_cnt;
int SelectSong_SelectDifficult_Song_Str_Length;

bool SelectSong_SelectDifficult_Song_TITLE_Check;
int SelectSong_SelectDifficult_Song_TITLE_Width;
int SelectSong_SelectDifficult_Song_TITLE_Size;
int SelectSong_SelectDifficult_Song_TITLE_OutLine = 5;
int SelectSong_SelectDifficult_Song_TITLE_WidthY;

int SelectSong_SelectDifficult_Choice[2];

int SelectSong_SelectDifficult_2P_StartVoice_Check;
int SelectSong_SelectDifficult_Option_Choosing[2];

int SelectSong_SelectDifficult_Option_Base_Timer_cnt[2][3];
int SelectSong_SelectDifficult_Option_Base_Timer_Check[2];

int SelectSong_SelectDifficult_Option_Choosing_Check[2];

double SelectSong_SelectDifficult_Option_Base_Timer1_1 = 230.0;
double SelectSong_SelectDifficult_Option_Base_Timer1_2 = 300.0;

double SelectSong_SelectDifficult_Option_Base_PosY_Plus[2];
double SelectSong_SelectDifficult_Option_Base_PosY_cnt[2];
double SelectSong_SelectDifficult_Option_Base_PosY_cnt_d[2];
double SelectSong_SelectDifficult_Option_Base_PosY_cnt_d2[2];



int SelectSong_SelectDifficult_Change_Ura_Timer_cnt[3];
int SelectSong_SelectDifficult_Change_Ura_Timer_Check;
int SelectSong_SelectDifficult_Change_Ura_Timer_Started_Check;

double SelectSong_SelectDifficult_Change_Ura_Timer1_1 = 30.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_2 = 100.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_3 = 160.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_4 = 260.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_5 = 300.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_6 = 450.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_7 = 510.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_8 = 630.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_9 = 760.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_10 = 810.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_11 = 900.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_12 = 960.0;;
double SelectSong_SelectDifficult_Change_Ura_Timer1_13 = 1000.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_14 = 1030.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_15 = 1150.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_16 = 1400.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_17 = 1480.0;
double SelectSong_SelectDifficult_Change_Ura_Timer1_18 = 1480.0;


bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_NULL;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_1;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_2;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_3;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_4;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_5;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_6;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_7;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_8;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_9;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_10;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_11;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_12;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_13;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_14;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_15;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_16;
bool SelectSong_SelectDifficult_Change_Ura_Timer1_Check_17;

int SelectSong_SelectDifficult_Change_Panel_ALPHA_cnt;
double SelectSong_SelectDifficult_Change_Panel_ALPHA;

int SelectSong_SelectDifficult_Change_Panel_ALPHA2_cnt;
double SelectSong_SelectDifficult_Change_Panel_ALPHA2;

double SelectSong_SelectDifficult_Change_M_Expansion_Rote_PlusX;
double SelectSong_SelectDifficult_Change_M_Expansion_Rote_PlusY;
int SelectSong_SelectDifficult_Change_M_Expansion_Rote_cnt;
double SelectSong_SelectDifficult_Change_M_Expansion_Rote_cnt_d;
double SelectSong_SelectDifficult_Change_M_Expansion_Rote_cnt_d2;

bool SelectSong_SelectDifficult_Change_M_Expansion_Rote_Check;


double SelectSong_SelectDifficult_Change_M_Expansion_PlusX;
double SelectSong_SelectDifficult_Change_M_Expansion_PlusY;
int SelectSong_SelectDifficult_Change_M_Expansion_cnt;
double SelectSong_SelectDifficult_Change_M_Expansion_cnt_d;
double SelectSong_SelectDifficult_Change_M_Expansion_cnt_d2;


bool SelectSong_SelectDifficult_Change_M_Angle_Check;
double SelectSong_SelectDifficult_Change_M_Angle;
int SelectSong_SelectDifficult_Change_M_Angle_cnt;
double SelectSong_SelectDifficult_Change_M_Angle_cnt_d;
double SelectSong_SelectDifficult_Change_M_Angle_cnt_d2;


double SelectSong_SelectDifficult_Change_WIcon_ALPHA;
int SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt;
double SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt_d;
double SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt_d2;


double SelectSong_SelectDifficult_Change_WIcon_ALPHA2;
int SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt2;
double SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt2_d;
double SelectSong_SelectDifficult_Change_WIcon_ALPHA_cnt2_d2;


double SelectSong_SelectDifficult_Change_White_M_PlusX;
double SelectSong_SelectDifficult_Change_White_M_PlusY;
int SelectSong_SelectDifficult_Change_White_M_cnt;
double SelectSong_SelectDifficult_Change_White_M_cnt_d;
double SelectSong_SelectDifficult_Change_White_M_cnt_d2;


const int SelectSong_SelectDifficult_Option_Item_Numbers = 8;//オプションの項目数
int SelectSong_SelectDifficult_Option_Choosing_Number[2] = {0,0};

bool SelectSong_SelectDifficult_Option_Back_Check[2];

double SelectSong_SelectDifficult_Yello_Back_Pos[2][6] = { {357,489,629,844,1059,1274},{378,378,310,310,310,310} };

double SelectSong_SelectDifficult_Yello_Back_Light_Timer_cnt[2][3];
double SelectSong_SelectDifficult_Yello_Back_Light_Timer1_1 = 110.0;//待ち時間
double SelectSong_SelectDifficult_Yello_Back_Light_Timer1_2 = 230.0;//フェードインが終わる時間
double SelectSong_SelectDifficult_Yello_Back_Light_Timer1_3 = 380.0;//フェードアウトが始まる時間
double SelectSong_SelectDifficult_Yello_Back_Light_Timer1_4 = 500.0;//フェードアウトが終わる時間

bool SelectSong_SelectDifficult_Yello_Back_Light_Timer_Check[2];
double SelectSong_SelectDifficult_Yello_Back_Light_ALPHA[2];
int SelectSong_SelectDifficult_Yello_Back_Light_ALPHA_cnt[2];

double SelectSong_SelectDifficult_White_Back_ALPHA[2];
int SelectSong_SelectDifficult_White_Back_ALPHA_cnt[2];
int SelectSong_SelectDifficult_White_Back_Timer_cnt[2][3];
bool SelectSong_SelectDifficult_White_Back_Timer_Check[2];

double SelectSong_SelectDifficult_White_Back_Timer1_1 = 60.0;
double SelectSong_SelectDifficult_White_Back_Timer1_2 = 120.0;
double SelectSong_SelectDifficult_White_Back_Timer1_3 = 180.0;
double SelectSong_SelectDifficult_White_Back_Timer2_1 = 80.0;

int SelectSong_SelectDifficult_White_Back_C = 3;
int SelectSong_SelectDifficult_White_Back_C_cnt[2];

double SelectSong_SelectDifficult_Yello_Back_ALPHA_2[2] = {255.0 , 255.0};
int SelectSong_SelectDifficult_Yello_Back_ALPHA_2_cnt[2];




//(バナパスID、難易度)
//プレイ回数
int Player_Played[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];//プレイ回数
//スコアランク
int Player_ScoreRank[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//ハイスコア
int Player_HiScore[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//良の数
int Player_Great[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//可の数
int Player_Good[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//不可の数
int Player_Bad[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//成績
int Player_Grades[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//連打数
int Player_RepeatedHits[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//コンボ数
int Player_Combo[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//叩けた数
int Player_Hits[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//王冠
int Player_Crown[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];

int Player_Crown_Silver_Number[4][5];//銀王冠の数
int Player_Crown_Gold_Number[4][5];//金王冠の数
int Player_Crown_Rainbow_Number[4][5];//虹王冠の数

int Player_Crown_Silver_Number_Font_[4][5];//文字間の幅
int Player_Crown_Gold_Number_Font_[4][5];//文字間の幅
int Player_Crown_Rainbow_Number_Font_[4][5];//文字間の幅

int Player_Crown_Silver_Number_Width[4][5];//幅
int Player_Crown_Gold_Number_Width[4][5];//幅
int Player_Crown_Rainbow_Number_Width[4][5];//幅

int Play_Display_1P_Course_Crown;//王冠数表示用
int Play_Display_2P_Course_Crown;//王冠数表示用

string Play_Display_1P_Course_Crown_Str;//王冠数表示用
string Play_Display_2P_Course_Crown_Str;//王冠数表示用

int Play_Display_Course_Crown_Length;//文字数

//スコアボード
int Player_ScoreRank_Number[8][4][5];//スコアランクの数(各ランクID、バナパスID、難易度)
int Player_ScoreRank_Number_Font_[8][4][5];//文字間の幅
int Player_ScoreRank_Number_Width[8][4][5];//幅

int Play_Display_1P_Course_ScoreRank;//王冠数表示用
int Play_Display_2P_Course_ScoreRank;//王冠数表示用

string Play_Display_1P_Course_ScoreRank_Str;//王冠数表示用
string Play_Display_2P_Course_ScoreRank_Str;//王冠数表示用

int Play_Display_Course_ScoreRank_Length;//文字数

bool Song_Dicided_Check[2];

bool Option_Voice_Check[2];


//ID分け
int ID_Player_Played[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];//プレイ回数
//スコアランク
int ID_Player_ScoreRank[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//ハイスコア
int ID_Player_HiScore[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//良の数
int ID_Player_Great[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//可の数
int ID_Player_Good[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//不可の数
int ID_Player_Bad[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//成績
int ID_Player_Grades[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//連打数
int ID_Player_RepeatedHits[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//コンボ数
int ID_Player_Combo[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//叩けた数
int ID_Player_Hits[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];
//王冠
int ID_Player_Crown[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][4][5];

int Player_Display_Cource = 3;



//バー移動
int SelectSong_Bar_Moving_cnt;
double SelectSong_Bar_Moving_cnt_d;
double SelectSong_Bar_Moving_cnt_d2;


int SelectSong_Bar_1_Moving_Pos[2];
int SelectSong_Bar_2_Moving_Pos[2];
int SelectSong_Bar_3_Moving_Pos[2];

int SelectSong_Bar_1_Moving_Pos2[2];
int SelectSong_Bar_2_Moving_Pos2[2];
int SelectSong_Bar_3_Moving_Pos2[2];

int SelectSong_Bar_1_Moving_Pos3[2];
int SelectSong_Bar_2_Moving_Pos3[2];
int SelectSong_Bar_3_Moving_Pos3[2];

int SelectSong_Bar_1_Moving_Pos4[2];
int SelectSong_Bar_2_Moving_Pos4[2];
int SelectSong_Bar_3_Moving_Pos4[2];

int SelectSong_Bar_Moving_Pos_Check[3];

//王冠の位置
int SelectSong_Bar_Opening_Crown_Pos[4][2] = { {502,391},{568,391},{502,459},{568,459} };
//難易度の位置
int SelectSong_Bar_Opening_Difficult_Pos[4][2] = { {529,421},{578,421},{529,469},{578,469} };
//難易度の位置
int SelectSong_Bar_Opening_Difficult_Pos2[4][2] = { {529,348},{578,348},{529,396},{578,396} };
//スコアランクの位置
int SelectSong_Bar_Opening_Score_Rank_Pos[4][2] = { {482,447},{482,447},{563,548},{563,548} };


//王冠の位置
int SelectSong_Bar_Opening_Crown_Pos_cnt[2][2][2];
//難易度の位置
int SelectSong_Bar_Opening_Difficult_Pos_cnt[2][2][2];
//難易度の位置
int SelectSong_Bar_Opening_Difficult_Pos2_cnt[2][2][2];
//スコアランクの位置
int SelectSong_Bar_Opening_Score_Rank_Pos_cnt[2][2][2];
int SelectSong_Bar_Opening_S_cnt;
int SelectSong_Bar_Opening_S_cnt2;


//キー入力
int Entry_Input_C;
int Entry_Input_C_Count;

int Entry_Input_Q;
int Entry_Input_Q_Count;

int Entry_Input_Esc;
int Entry_Input_Esc_Count;

int Entry_Input_1, Entry_Input_2, Entry_Input_3;
int Entry_Input_1_Count, Entry_Input_2_Count, Entry_Input_3_Count;
bool Entry_Input_BanaPass_Pressing,Entry_Input_BanaPass1_Pressing, Entry_Input_BanaPass2_Pressing, Entry_Input_BanaPass3_Pressing;
bool Entry_Input_BanaPass1_Loading, Entry_Input_BanaPass2_Loading, Entry_Input_BanaPass3_Loading;
bool Entry_Input_BanaPass1_Loaded, Entry_Input_BanaPass2_Loaded, Entry_Input_BanaPass3_Loaded;
int Entry_BanaPass_Loading_Timer1[3];

bool Entry_BanaPass1_Loaded_Check_[3];
bool Entry_BanaPass1_Loaded_Check;

std::string Entry_Input_1_2_3_Check = "0";
bool Entry_Pass_Data_Loaded;


int Taiko_Input_F;
int Taiko_Input_F_Count;

int Taiko_Input_G;
int Taiko_Input_G_Count;

int Taiko_Input_H;
int Taiko_Input_H_Count;

int Taiko_Input_J;
int Taiko_Input_J_Count;

int Taiko_Input_S;
int Taiko_Input_S_Count;

int Taiko_Input_D;
int Taiko_Input_D_Count;

int Taiko_Input_K;
int Taiko_Input_K_Count;

int Taiko_Input_L;
int Taiko_Input_L_Count;

int Taiko_Input_E;
int Taiko_Input_E_Count;

int Taiko_Input_R;
int Taiko_Input_R_Count;

int Taiko_Input_I;
int Taiko_Input_I_Count;

int Taiko_Input_O;
int Taiko_Input_O_Count;


int Taiko_Input_V;
int Taiko_Input_V_Count;

int Taiko_Input_B;
int Taiko_Input_B_Count;

int Taiko_Input_N;
int Taiko_Input_N_Count;

int Taiko_Input_M;
int Taiko_Input_M_Count;

int Taiko_Input_C;
int Taiko_Input_C_Count;

int Taiko_Input_X;
int Taiko_Input_X_Count;

int Taiko_Input_PERIOD;
int Taiko_Input_PERIOD_Count;

int Taiko_Input_COMMA;
int Taiko_Input_COMMA_Count;

int _Input_Back;
int _Input_Back_Count;

int _Input_F5;
int _Input_F5_Count;

int _Input_F1;
int _Input_F1_Count;

int _Input_F2;
int _Input_F2_Count;

int _Input_F3;
int _Input_F3_Count;


bool Taiko_Left_Dong_Check = FALSE;
bool Taiko_Right_Dong_Check = FALSE;

bool Taiko_Left_Ka_Check = FALSE;
bool Taiko_Right_Ka_Check = FALSE;

bool Taiko_Left_Dong_Check_2P = FALSE;
bool Taiko_Right_Dong_Check_2P = FALSE;

bool Taiko_Left_Ka_Check_2P = FALSE;
bool Taiko_Right_Ka_Check_2P = FALSE;

bool SelectSong_Genre_Folder_Open = FALSE;
int SelectSong_Opened_Genre_Folder_Number = -1;

bool Taiko_2P_Inputed;
bool Taiko_2P_Inputed2;

int TJA_Folder_In_Genre_Number_Plus1;//フォルダを開いた時の曲の合計1
int TJA_Folder_In_Genre_Number_Plus2;//フォルダを開いた時の曲の合計2



//font
int Coins_Font;
int Coins_Font_Width;
int Coin_Font_OutLine = 2;

int Coins_Font2;
int Coin_Font2_OutLine = 5;
int Coins_Font3;

int Play_Songs_Font;

int Player_Name_Font;
int Player_Name_Font_OutLine = 1;



int SeleceSong_Names_Font_Default;
int SeleceSong_Names_Font_Default_Up_Width_1;
int SeleceSong_Names_Font_Default_Up_Width_2;
int SeleceSong_Names_Font_Default_Up_Width_3;
int SeleceSong_Names_Font_Default_OutLine = 4;

int SeleceSong_Names_Font_Default_Genre;
int SeleceSong_Names_Font_Default_Genre_Up_Width_1;
int SeleceSong_Names_Font_Default_Genre_Up_Width_2;
int SeleceSong_Names_Font_Default_Genre_Up_Width_3;
int SeleceSong_Names_Font_Default_Genre_OutLine = 4;


int SeleceSong_Names_Font_Default_Genre_Close;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_1;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_2;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_3 = 780;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_3_cnt;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_3_cnt_Max;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_3_Max = 22;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_4_strlen_1;
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_4_strlen_2;
int SeleceSong_Names_Font_Default_Genre_Close_OutLine = 3;

int SeleceSong_Genre_Text_Font;
int SeleceSong_Genre_Text_Font_OutLine = 2;

int SeleceSong_Level_Number_Font;
int SeleceSong_Level_Number_Font_OutLine = 2;

int SeleceSong_Song_SUBTITLE_Font;
int SeleceSong_Song_SUBTITLE_Font_Width;
int SeleceSong_Song_SUBTITLE_Font_OutLine = 2;

int SelectSong_Score_Board_Font;
int SelectSong_Score_Board_Font_OutLine = 1;

int SelectSong_HiScore_Font;
int SelectSong_HiScore_Font_Width;
int SelectSong_HiScore_Font_Width2;

string SelectSong_HiScore_Font_str;
string SelectSong_HiScore_Font_str2;
int SelectSong_HiScore_Font_Length;
int SelectSong_HiScore_Font_Length2;

int SelectSong_HiScore_Font_OutLine = 1;

int SelectSong_SelectDifficult_Song_SUBTITLE_Font;
double SelectSong_SelectDifficult_Song_SUBTITLE_Width;
int SelectSong_SelectDifficult_Song_SUBTITLE_OutLine = 3;

int SelectSong_SelectDifficult_Star_Font;

int Difficult_S_Font_Default;

//503

//Texture
std::string Texture_File("Texture/");

//Entry
std::string Entry_Back("Entry/Back.png"); //Texture_Entry_Back

std::string Entry_Bar("Entry/Bar.png"); //Texture_Entry_Bar

std::string Entry_Coin_Text("Entry/Coin_Text.png"); //Texture_Entry_Coin_Text


//総合Texture
std::string Online_Mark_Online("Online_Mark/Online.png"); //Texture_Online_Mark_Online
std::string Online_Mark_Offline("Online_Mark/Offline.png"); //Texture_Online_Mark_Offline

//CommonDonChan
std::string CommonDonChan_Clear_In_File("CommonDonChan/Clear_In/"); //Texture_CommonDonChan_Clear_In
std::string CommonDonChan_Clear_Loop_File("CommonDonChan/Clear_Loop/"); //Texture_CommonDonChan_Clear_Loop
std::string CommonDonChan_Daiseikou_In_File("CommonDonChan/Daiseikou_In/"); //Texture_CommonDonChan_Daiseikou_In
std::string CommonDonChan_Daiseikou_Loop_File("CommonDonChan/Daiseikou_Loop/"); //Texture_CommonDonChan_Daiseikou_Loop
std::string CommonDonChan_Failed_In_File("CommonDonChan/Failed_In/"); //Texture_CommonDonChan_Failed_In
std::string CommonDonChan_Failed_Loop_File("CommonDonChan/Failed_Loop/"); //Texture_CommonDonChan_Failed_Loop
std::string CommonDonChan_Normal_Loop_File("CommonDonChan/Normal_Loop/"); //Texture_CommonDonChan_Normal_Loop
std::string CommonDonChan_Skip_File("CommonDonChan/Skip/"); //Texture_CommonDonChan_Skip
std::string CommonDonChan_StartSong_File("CommonDonChan/StartSong/"); //Texture_CommonDonChan_StartSong

//Enso_Chara
std::string Enso_Chara_10Combo_File("Enso/Chara/10Combo/"); //Texture_Enso_Chara_10Combo
std::string Enso_Chara_10Combo_Max_File("Enso/Chara/10Combo_Max/"); //Texture_Enso_Chara_10Combo_Max
std::string Enso_Chara_Balloon_Breaking_File("Enso/Chara/Balloon_Breaking/"); //Texture_Enso_Chara_Balloon_Breaking
std::string Enso_Chara_Balloon_Broke_File("Enso/Chara/Balloon_Broke/"); //Texture_Enso_Chara_Balloon_Broke
std::string Enso_Chara_Balloon_Miss_File("Enso/Chara/Balloon_Miss/"); //Texture_Enso_Chara_Balloon_Miss
std::string Enso_Chara_Clear_File("Enso/Chara/Clear/"); //Texture_Enso_Chara_Clear
std::string Enso_Chara_Clearin_File("Enso/Chara/Clearin/"); //Texture_Enso_Chara_Clearin
std::string Enso_Chara_GoGo_File("Enso/Chara/GoGo/"); //Texture_Enso_Chara_GoGo
std::string Enso_Chara_GoGoStart_File("Enso/Chara/GoGoStart/"); //Texture_Enso_Chara_GoGoStart
std::string Enso_Chara_Kusu_In_File("Enso/Chara/Kusu_In/"); //Texture_Enso_Chara_Kusu_In
std::string Enso_Chara_Kusu_Loop_File("Enso/Chara/Kusu_Loop/"); //Texture_Enso_Chara_Kusu_Loop
std::string Enso_Chara_Kusu_Miss_File("Enso/Chara/Kusu_Miss/"); //Texture_Enso_Chara_Kusu_Miss
std::string Enso_Chara_Miss_File("Enso/Chara/Miss/"); //Texture_Enso_Chara_Miss
std::string Enso_Chara_Miss6_File("Enso/Chara/Miss6/"); //Texture_Enso_Chara_Miss6
std::string Enso_Chara_Normal_File("Enso/Chara/Normal/"); //Texture_Enso_Chara_Normal
std::string Enso_Chara_Revival_File("Enso/Chara/Revival/"); //Texture_Enso_Chara_Revival
std::string Enso_Chara_Soulin_File("Enso/Chara/Soulin/"); //Texture_Enso_Chara_Soulin
std::string Enso_Chara_Surprised_File("Enso/Chara/Surprised/"); //Texture_Enso_Chara_Surprised



//Sound
std::string Sound_File("Sound/");

//Entry
std::string Title_Meinongen("Title/メイン音源.ogg"); //Sound_Title_Meinongen

std::string Title_Kurejitto("Title/クレジット.ogg"); //Sound_Title_Kurejitto

std::string Title_TaikoWotataitesutato("Title/太鼓をたたいてスタート.ogg"); //Sound_Title_Kurejitto

std::string Sound_Title_Loaded_("Title/Loaded.ogg"); //Sound_Title_Loaded
std::string Sound_Title_Loaded;
int Sound_Title_Loaded_Load;

std::string S_Dong("Dong.ogg"); //Sound_Dong
std::string S_Ka("Ka.ogg"); //Sound_Ka

std::string Sound_SelectSong_BGM1_("SelectSong/Select BGM start.ogg"); //Sound_SelectSong_BGM1
std::string Sound_SelectSong_BGM1;
int Sound_SelectSong_BGM1_Load;

std::string Sound_SelectSong_BGM2_("SelectSong/Select BGM loop.ogg"); //Sound_SelectSong_BGM2
std::string Sound_SelectSong_BGM2;
int Sound_SelectSong_BGM2_Load;
//総合Sound


//TJA
std::string TJA_File = "TJA/";
const char* TJA_File2 = "TJA/";


//Screenshots
string ScreenShot_File_Name = "TaikoS_C++_";
string ScreenShot_File_Name_ = "";
LONGLONG ScreenShot_Timer;
string ScreenShot_Timer_str;
string ScreenShot_Folder = "ScreenShots/";
string ScreenShot_Extension = ".png";


//Pass_Data
std::string Pass_Data_File("Pass_Data/");
std::string Pass_Data_File_line_sub;





//Config関連
std::string Config_Line_Substr1;
std::string Config_Line_Substr2;

int Config_Line_Cnt; //Configの行目
int Config_Line_Max; //Configの行数

bool Config_WindowMode = FALSE;
bool Config_Sound_Load_Memory_All = TRUE;
int SelectSong_Play_Memory;




//GameTexture
int GameTexture_Count;
double GameTexture_Count_d;
std::string GameTexture_Count_Str;
std::string GameTexture_Extension = ".png";

//CommonDonChan(画像枚数)
int _CommonDonChan_Clear_In = 39;
int _CommonDonChan_Clear_Loop = 59;
int _CommonDonChan_Daiseikou_In = 63;
int _CommonDonChan_Daiseikou_Loop = 45;
int _CommonDonChan_Failed_In = 15;
int _CommonDonChan_Failed_Loop = 29;
int _CommonDonChan_Normal_Loop = 30;
int _CommonDonChan_Skip = 44;
int _CommonDonChan_StartSong = 24;
bool SelectSong_CommonDonChan_Loaded;

std::string Texture_CommonDonChan_Clear_In_File_;
std::string Texture_CommonDonChan_Clear_Loop_File_;
std::string Texture_CommonDonChan_Daiseikou_In_File_;
std::string Texture_CommonDonChan_Daiseikou_Loop_File_;
std::string Texture_CommonDonChan_Failed_In_File_;
std::string Texture_CommonDonChan_Failed_Loop_File_;
std::string Texture_CommonDonChan_Normal_Loop_File_;
std::string Texture_CommonDonChan_Skip_File_;
std::string Texture_CommonDonChan_StartSong_File_;


//Enso_Chara(画像枚数)
int _Enso_Chara_10combo = 371;
int _Enso_Chara_10combo_Max = 543;
int _Enso_Chara_Balloon_Breaking = 85;
int _Enso_Chara_Balloon_Broke = 257;
int _Enso_Chara_Balloon_Miss = 198;
int _Enso_Chara_Clear = 511;
int _Enso_Chara_Clearin = 370;
int _Enso_Chara_GoGo = 1035;
int _Enso_Chara_GoGoStart = 457;
int _Enso_Chara_Kusu_In = 160;
int _Enso_Chara_Kusu_Loop = 78;
int _Enso_Chara_Kusu_Miss = 173;
int _Enso_Chara_Miss = 247;
int _Enso_Chara_Miss6 = 250;
int _Enso_Chara_Normal = 1039;
int _Enso_Chara_Revival = 457;
int _Enso_Chara_Soulin = 582;
int _Enso_Chara_Surprised = 377;


std::string Texture_Enso_Chara_10Combo_File_;
std::string Texture_Enso_Chara_10Combo_Max_File_;
std::string Texture_Enso_Chara_Balloon_Breaking_File_;
std::string Texture_Enso_Chara_Balloon_Broke_File_;
std::string Texture_Enso_Chara_Balloon_Miss_File_;
std::string Texture_Enso_Chara_Clear_File_;
std::string Texture_Enso_Chara_Clearin_File_;
std::string Texture_Enso_Chara_GoGo_File_;
std::string Texture_Enso_Chara_GoGoStart_File_;
std::string Texture_Enso_Chara_Kusu_In_File_;
std::string Texture_Enso_Chara_Kusu_Loop_File_;
std::string Texture_Enso_Chara_Kusu_Miss_File_;
std::string Texture_Enso_Chara_Miss_File_;
std::string Texture_Enso_Chara_Miss6_File_;
std::string Texture_Enso_Chara_Normal_File_;
std::string Texture_Enso_Chara_Revival_File_;
std::string Texture_Enso_Chara_Soulin_File_;
std::string Texture_Enso_Chara_Surprised_File_;





const int Texture_Number1 = 3000;//読み込み可能画像枚数


int _CommonDonChan_Clear_In_all[Texture_Number1];
int _CommonDonChan_Clear_Loop_all[Texture_Number1];
int _CommonDonChan_Daiseikou_In_all[Texture_Number1];
int _CommonDonChan_Daiseikou_Loop_all[Texture_Number1];
int _CommonDonChan_Failed_In_all[Texture_Number1];
int _CommonDonChan_Failed_Loop_all[Texture_Number1];
int _CommonDonChan_Normal_Loop_all[Texture_Number1];
int _CommonDonChan_Skip_all[Texture_Number1];
int _CommonDonChan_StartSong_all[Texture_Number1];

int _Enso_Chara_10combo_all[Texture_Number1];
int _Enso_Chara_10combo_Max_all[Texture_Number1];
int _Enso_Chara_Balloon_Breaking_all[Texture_Number1];
int _Enso_Chara_Balloon_Broke_all[Texture_Number1];
int _Enso_Chara_Clear_all[Texture_Number1];
int _Enso_Chara_Clearin_all[Texture_Number1];
int _Enso_Chara_GoGo_all[Texture_Number1];
int _Enso_Chara_GoGoStart_all[Texture_Number1];
int _Enso_Chara_Kusu_In_all[Texture_Number1];
int _Enso_Chara_Kusu_Loop_all[Texture_Number1];
int _Enso_Chara_Kusu_Miss_all[Texture_Number1];
int _Enso_Chara_Miss_all[Texture_Number1];
int _Enso_Chara_Miss6_all[Texture_Number1];
int _Enso_Chara_Normal_all[Texture_Number1];
int _Enso_Chara_Revival_all[Texture_Number1];
int _Enso_Chara_Soulin_all[Texture_Number1];
int _Enso_Chara_Surprised_all[Texture_Number1];


//各データ専用スキン数
int _CommonDonChan_Clear_In_all_B[3][Texture_Number1];
int _CommonDonChan_Clear_Loop_all_B[3][Texture_Number1];
int _CommonDonChan_Daiseikou_In_all_B[3][Texture_Number1];
int _CommonDonChan_Daiseikou_Loop_all_B[3][Texture_Number1];
int _CommonDonChan_Failed_In_all_B[3][Texture_Number1];
int _CommonDonChan_Failed_Loop_all_B[3][Texture_Number1];
int _CommonDonChan_Normal_Loop_all_B[3][Texture_Number1];
int _CommonDonChan_Skip_all_B[3][Texture_Number1];
int _CommonDonChan_StartSong_all_B[3][Texture_Number1];

int _Enso_Chara_10combo_all_B[3][Texture_Number1];
int _Enso_Chara_10combo_Max_all_B[3][Texture_Number1];
int _Enso_Chara_Balloon_Breaking_all_B[3][Texture_Number1];
int _Enso_Chara_Balloon_Broke_all_B[3][Texture_Number1];
int _Enso_Chara_Clear_all_B[3][Texture_Number1];
int _Enso_Chara_Clearin_all_B[3][Texture_Number1];
int _Enso_Chara_GoGo_all_B[3][Texture_Number1];
int _Enso_Chara_GoGoStart_all_B[3][Texture_Number1];
int _Enso_Chara_Kusu_In_all_B[3][Texture_Number1];
int _Enso_Chara_Kusu_Loop_all_B[3][Texture_Number1];
int _Enso_Chara_Kusu_Miss_all_B[3][Texture_Number1];
int _Enso_Chara_Miss_all_B[3][Texture_Number1];
int _Enso_Chara_Miss6_all_B[3][Texture_Number1];
int _Enso_Chara_Normal_all_B[3][Texture_Number1];
int _Enso_Chara_Revival_all_B[3][Texture_Number1];
int _Enso_Chara_Soulin_all_B[3][Texture_Number1];
int _Enso_Chara_Surprised_all_B[3][Texture_Number1];

int DonChan_Pic_Count[3];






//バナパスデータ用画像(0:仮読み込み)
int _CommonDonChan_Clear_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Clear_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Daiseikou_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Daiseikou_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Failed_In_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Failed_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Normal_Loop_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_Skip_all_BPlayer[Texture_Number1][3];
int _CommonDonChan_StartSong_all_BPlayer[Texture_Number1][3];

int _Enso_Chara_10combo_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_10combo_Max_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Balloon_Breaking_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Balloon_Broke_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Clear_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Clearin_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_GoGo_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_GoGoStart_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_In_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_Loop_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Kusu_Miss_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Miss_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Miss6_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Normal_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Revival_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Soulin_all_BPlayer[Texture_Number1][3];
int _Enso_Chara_Surprised_all_BPlayer[Texture_Number1][3];




















//TJAフォルダー関連


//TJAフォルダの中 (ジャンル)
int TJA_Folder_Number;//フォルダー数
int TJA_Folder_Number_cnt;//フォルダー数カウント
int TJA_Folder_Number_cnt2;//フォルダー数カウント2
int TJA_Folder_Number_cnt3;//フォルダー数カウント3
int TJA_Folder_Number_cnt4;
int TJA_Folder_Number_cnt5;
int TJA_Folder_Number_cnt6;
int TJA_Folder_Number_cnt7;

int TJA_Folder_Number_cnt_ID;
int TJA_Folder_Number_cnt_ID_Sub[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];
int TJA_Folder_Number_cnt_ID_Sub_Check[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];
int TJA_Folder_Number_cnt_ID_Sub_cnt;
int TJA_Folder_Number_cnt_ID_Sub_cnt_Max;
int TJA_Folder_Number_cnt_ID_Sub_Max;

bool d = FALSE;


//TJAフォルダ\各ジャンルフォルダの中
int TJA_Folder_In_Genre_Number_Loop;//ループ用(ジャンル番号)
int TJA_Folder_In_Genre_Number_Loop2;//ループ用2(譜面番号)
int TJA_Folder_In_Genre_Number_Loop3;//ループ用3(フォルダ散策用)
int TJA_Folder_In_Genre_Number_Loop4;//ループ用4(フォルダ散策用)
int TJA_Folder_In_Genre_Number_[Genre_Folder_Count_Max];//TJAフォルダー数
int TJA_Folder_In_Genre_Number[Genre_Folder_Count_Max];//譜面数
int TJA_Folder_In_Genre_Number_All;//全譜面数

int TJA_Folder_In_Genre_Number_cnt[Genre_Folder_Count_Max];//TJAフォルダー数カウント
int TJA_Folder_In_Genre_Number_cnt2[Genre_Folder_Count_Max];//TJAフォルダー数カウント2
int TJA_Folder_In_Genre_Number_cnt3[Genre_Folder_Count_Max];//TJAフォルダー数カウント3(tjaファイルの数)


string TJA_Folder_In_Genre_Folders_Path[Genre_Folder_Count_Max];//TJA\各フォルダのパス
string TJA_Folder_In_Genre_Number_Name_sub[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//読み込んだフォルダ名
string TJA_Folder_In_Genre_Number_Name_Path[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//Tjaファイルのパス

int TJA_Folder_In_Genre_Number_Name_sub_Find;
int TJA_Folder_In_Genre_Number_Name_sub_Find2;
bool TJA_Folder_In_Genre_Number_Find_FileCheck[Genre_Folder_Count_Max];




//dirent* TJA_Folder_In_Genre_Load;
//DIR* TJA_Folder_In_Genre_Load_;


//TJAフォルダ\各ジャンルフォルダの中\
//dirent* TJA_Folder_In_Genre_Load_In;
//DIR* TJA_Folder_In_Genre_Load_In_;

string TJA_Folder_In_Genre_Folders_Path_In[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス
string ID_TJA_Folder_In_Genre_Folders_Path_In[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(曲分け)
string ID_TJA_Folder_In_Genre_Folders_Path_In2[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(デモ曲分け)

string ID_TJA_Folder_In_Genre_Folders_Path_In_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//Tjaフォルダまでのデモ曲パス(ID分け)
string ID_TJA_Folder_In_Genre_Folders_Path_In_2[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//Tjaフォルダまでの曲パス(ID分け)


string TJA_Folder_In_Genre_Folders_Path_In_To_TJA[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//Tjaファイルまでのパス

string TJA_Folder_In_Genre_Number_Name_sub_In[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max][TJA_Folder_In_Genre_Count_Max2];//Tjaファイルまでのパス
int TJA_Folder_In_Genre_Number_Name_sub_Find_In; //find



int TJA_Folder_Number_Plus_TJA;//フォルダー数 + TJA
int TJA_Folder_Number_Plus_TJA_Plus_Close;//フォルダー数 + TJA + とじる

int TJA_Folder_Number_Plus_TJA_Plus_Close_ID[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//フォルダー数 + TJA + とじるID

int TJA_Folder_Number_Plus_TJA_Plus_Close_cnt[Genre_Folder_Count_Max];//とじるフォルダの数(初期値1)
int TJA_Folder_Number_Plus_TJA_Plus_Close_All;//とじるフォルダの合計数
int Count_Time;

int ID_SelectSong_Genre[Genre_Folder_Count_Max];//ジャンルフォルダのID
int ID_SelectSong_Song[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//曲のID

int ID_SelectSong_Song_Genre_[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//ジャンル別曲のID

int ID_SelectSong_GenreClose[TJA_Folder_In_Genre_Close_Count_Max];//とじるフォルダのID
int ID_SelectSong_GenreClose_1[TJA_Folder_In_Genre_Close_Count_Max];//とじるフォルダのID(一番先頭)

int ID_SelectSong_Check[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//IDチェック (0:フォルダ 1:とじる  2:譜面)

bool ID_SelectSong_Backed_Check[Genre_Folder_Count_Max];
int ID_SelectSong_Backed_[Genre_Folder_Count_Max];

int ss;

int ID_SelectSong_GenreClose_cnt;
int ID_SelectSong_GenreClose_cnt2;

int Test_Count;
int Test_Count2;
int Test_Count3;
int Test_Count4;

string TJA_Folder_Number_Name_sub[Genre_Folder_Count_Max];//読み込んだフォルダ名
int TJA_Folder_Number_Name_sub_Find;


int TJA_Folder_In_Genre_Number_Name_substrlen_O;
int TJA_Folder_In_Genre_Number_Name_filesize;
std::string TJA_Folder_In_Genre_Number_Name_substr_O;

int TJA_Folder_In_Genre_Number_Name_substrlen_D;
std::string TJA_Folder_In_Genre_Number_Name_substr_D;
bool TJA_Folder_In_Genre_Number_Name_sub_Scheck;
bool TJA_Folder_In_Genre_Number_Name_sub_Scheck2;

//dirent* TJA_Folder_Load;
//DIR* TJA_Folder_Load_;

string TJA_Genre_Boxdef_File[Genre_Folder_Count_Max];

std::string Genre_Boxdef_File = "box.def";
std::string Genre_Image_File = "Image/";

//ifstream Boxdef_File[Genre_Folder_Count_Max]; 
std::string Boxdef_Line[Genre_Folder_Count_Max][6];//CenterText.aptの中身([ジャンルナンバー][n行目])
int Boxdef_Line_cnt;//行カウント


string TJA_Genre_CenterTextapt_File[Genre_Folder_Count_Max];
std::string Genre_CenterTextapt_File = "CenterText.apt";

//ifstream CenterTextapt_File[Genre_Folder_Count_Max]; 
std::string CenterTextapt_Line[Genre_Folder_Count_Max][3];//CenterText.aptの中身([ジャンルナンバー][n行目])
std::string CenterTextapt_Line_Sub;
int CenterTextapt_Line_cnt;//行カウント
int CenterTextapt_Line_Number[Genre_Folder_Count_Max];//行カウント(ジャンル別)
double CenterTextapt_Line_strlen;
double CenterTextapt_Line_strlen_;


//Genre
std::string Genre_SubStr1;
std::string Genre_SubStr2;

string Genre_TITLE[Genre_Folder_Count_Max];
string Genre_GENRE[Genre_Folder_Count_Max];
string Genre_FORECOLOR_[Genre_Folder_Count_Max][3];
int Genre_FORECOLOR[Genre_Folder_Count_Max][3];     //ジャンル名の文字色(R,G,B)

string Genre_BACKCOLOR_[Genre_Folder_Count_Max][3];
int Genre_BACKCOLOR[Genre_Folder_Count_Max][3];     //ジャンル名の縁取り色(R,G,B)


//ジャンルImage
//Back,Bar,Chara,CourseBox,Course_Bar,Course_Bar_Picture
int Genre_Image_File_[Genre_Folder_Count_Max][6];
string Genre_Image_File_Path[Genre_Folder_Count_Max][6];
int TJA_Folder_Number_Plus_TJA_Image[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][6];//フォルダが開かれてる時の画像 [ジャンル + 曲 + とじる][画像ID]
int TJA_Folder_Number_Plus_TJA_ID[Genre_Folder_Count_Max];//ジャンルID(ジャンル+曲)



//TJAの中身
int TJA_FILE_LINE_cnt;

string ID_All_Names[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];

string TJA_Folder_In_Genre_Folders_Path_In_To_TJA_line_Sub;//取得用

int TJA_Song_TITLE_cnt;
string TJA_Song_TITLE[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//曲タイトル(ジャンル分け)
string TJA_Song_TITLE_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//曲タイトル

int TJA_Song_SUBTITLE_cnt;
string TJA_Song_SUBTITLE[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//サブタイトル(ジャンル分け)
string TJA_Song_SUBTITLE_All_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//サブタイトル
string ID_All_SUBTITLEs[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//サブタイトル(ID分け)
int TJA_Song_SUBTITLE_Strlen;//サブタイトルの文字数
int ID_All_SUBTITLEs_Width[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//サブタイトルの文字間(ID分け)
int ID_All_SUBTITLEs_Width_cnt;//文字間カウント
bool TJA_Song_SUBTITLE_Check;

int TJA_Song_WAVE_cnt;
string TJA_Song_WAVE[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//音源(ジャンル分け)
string TJA_Song_WAVE_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//音源

int TJA_Song_SETDEMOSTARTSOUND_cnt;
bool TJA_Song_SETDEMOSTARTSOUND_Check;
string TJA_Song_SETDEMOSTARTSOUND[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//音源2(ジャンル分け)
string TJA_Song_SETDEMOSTARTSOUND_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//音源2
string TJA_Song_SETDEMOSTARTSOUND_;

int TJA_Song_DEMOSTART_cnt;
string TJA_Song_DEMOSTART_[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//DEMOSTART(ジャンル分け)
string TJA_Song_DEMOSTART_All_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//DEMOSTART
double TJA_Song_DEMOSTART[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//DEMOSTART(ジャンル分け)
double TJA_Song_DEMOSTART_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//DEMOSTART
double ID_TJA_Song_DEMOSTART[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//DEMOSTART(ID分け)

int TJA_Song_Change_DisPlay_Course_cnt;
bool TJA_Song_Change_DisPlay_Course_Check;
string TJA_Song_Change_DisPlay_Course_Sub;
bool TJA_Song_Change_DisPlay_Course_Sub2;
string TJA_Song_Change_DisPlay_Course_[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//反転フラグ(ジャンル分け)
string TJA_Song_Change_DisPlay_Course_All_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//反転フラグ(ジャンル分け)
bool TJA_Song_Change_DisPlay_Course[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//反転フラグ(ジャンル分け)
bool TJA_Song_Change_DisPlay_Course_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//反転フラグ(ジャンル分け)
bool ID_TJA_Song_Change_DisPlay_Course_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//反転フラグ(ID分け)


int TJA_Song_COURSE_Loaded_cnt;
int TJA_Song_COURSE_cnt;
int TJA_Song_COURSE_C;
std::string TJA_Song_COURSE_Substr;
int TJA_FILE_CourseLINE[TJA_FILE_COURSE_NUMBER];//#CORSEの行取得
int TJA_FILE_CourseLINE_START_END[TJA_FILE_COURSE_NUMBER][3];//各コースのCOUSEと#STARTと#ENDの行
bool TJA_FILE_CourseLINE_START_END_Check[TJA_FILE_COURSE_NUMBER][3];//各コースのCOUSEと#STARTと#ENDの行チェック
bool ID_TJA_Song_COURSE_Check_SUB[TJA_FILE_COURSE_NUMBER][3];
//LEVEL
std::string TJA_Song_LEVEL_Substr;
int ID_TJA_Song_LEVEL_SUB[TJA_FILE_COURSE_NUMBER];
bool ID_TJA_Song_LEVEL_Check_SUB[TJA_FILE_COURSE_NUMBER];
bool ID_TJA_Song_LEVEL_Check_SUB2[TJA_FILE_COURSE_NUMBER];


//譜面分岐
std::string TJA_Song_BRANCHSTART_Substr;
bool ID_TJA_Song_BRANCHSTART_Check_SUB[TJA_FILE_COURSE_NUMBER];
int TJA_FILE_BRANCHSTARTLINE[TJA_FILE_COURSE_NUMBER];//各コースの譜面分岐の行(一つだけ)

//仮
bool ID_TJA_Song_COURSE_Check_[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//COURSEが存在するか(Course、ID分け)
bool ID_TJA_Song_COURSE_BRANCH_Check_[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//譜面分岐が存在するか(Course、ID分け)
int ID_TJA_Song_COURSE_START_END_[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max][3];//各コースの始まりと終わりまでの行を取得情報(Course、ID分け、COURSE,START,END)
int ID_TJA_Song_LEVEL_[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//各コースのレベル


//本
bool ID_TJA_Song_COURSE_Check[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//COURSEが存在するか(Course、ID分け)
bool ID_TJA_Song_COURSE_BRANCH_Check[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//譜面分岐が存在するか(Course、ID分け)
int ID_TJA_Song_COURSE_START_END[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max][3];//各コースの始まりと終わりまでの行を取得情報(Course、ID分け、COURSE,START,END)
int ID_TJA_Song_LEVEL[TJA_FILE_COURSE_NUMBER][Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//各コースのレベル




int TJA_Song_DEMOSTART_All_int_T;
bool TJA_Song_DEMOSTART_Check_;

//音源ID
int TJA_Song_WAVE_ID[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];
bool SelectSong_PlaySound_Check;
bool SelectSong_PlaySound_Loop_Check = TRUE;
bool SelectSong_PlaySound_Looped_Check;
int SelectSong_PlaySound_Loop_Timer[3];
bool SelectSong_PlaySound_Looped_Check_;

//デモ音源ID
int TJA_Song_SETDEMOSTARTSOUND_ID[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];



int TJA_Song_FORECOLOR_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max][3];//テキストの文字色(R,G,B)
int TJA_Song_BACKCOLOR_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max][3];//テキストの背景色(R,G,B)

bool TJA_Song_Font_Buffer_Check = FALSE;//ドン用
bool TJA_Song_Font_Buffer_Check_ = FALSE;//カッ用1
bool TJA_Song_Font_Buffer_Check__ = FALSE;//カッ用2
double TJA_Song_Font_Size_Default = 40.0;//フォントサイズ

int TJA_Song_Font_Buffer[9];//フォントバッファー
int TJA_Song_Font_Buffer_cnt[9];//フォントバッファー登録用
double TJA_Song_FontSize_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//フォントサイズ(横)
double TJA_Song_BACKSize_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//縁取りサイズ
int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_1_;




//スコアデータ読み込み
int Player_Score_Data_Path_Sub_strlen;
std::string Player_Score_Data_Path;
std::string Player_Score_Data_Path_line_Sub;
std::string Player_Score_Data_Path_line_Sub2;
int Player_Score_Data_Loading_PassID;
int Player_Score_Data_Loading_Course;












//開発用処理
bool White_Genre_Song_ID = TRUE;

string Genre_Back_TJA_Name_[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];




//ToneConfig
std::string Tone_Config_Line_T;
std::string Tone_Config_Line_Tones;//大元
const int Tone_Config_Line_Num = 1010;//読み込める文字数
int Tone_Config_Line_length;//文字列の長さ

//数取得用
std::string Tone_Config_Line_T1;//一文字だけ読み込む
int Tone_Config_S_Position[SoundFile_Tones_Max];//何処に「/」が存在しているか


int Tone_Config_Tones = 1;//音色の数
std::string Tone_Config_Tone_Name[SoundFile_Tones_Max];//音色の名前


//音色音源読み込み
std::string Tone_Config_Tones_Tone;
int Tone_Config_Tones_Tone_Load_dong[SoundFile_Tones_Max];
int Tone_Config_Tones_Tone_Load_ka[SoundFile_Tones_Max];


//演奏オプション用文字列

//はやさ
const int Option_Speed_Max = 15;
std::string Option_Speed[Option_Speed_Max] = {"1.0","1.1","1.2","1.3","1.4","1.5","1.6","1.7","1.8","1.9","2.0","2.5","3.0","3.5","4.0" };
std::string Option_Speed_Str;
int Option_Speed_FontSize_Width[Option_Speed_Max];
int Option_Speed_FontSize_WidthY[Option_Speed_Max];


//ドロン
const int Option_Disappear_Max = 2;
std::string Option_Disappear[Option_Disappear_Max] = { "しない", "する"};
int Option_Disappear_FontSize_Width[Option_Disappear_Max];
int Option_Disappear_FontSize_WidthY[Option_Disappear_Max];



//あべこべ
const int Option_Inverse_Max = 2;
std::string Option_Inverse[Option_Inverse_Max] = { "しない", "する" };
int Option_Inverse_FontSize_Width[Option_Inverse_Max];
int Option_Inverse_FontSize_WidthY[Option_Inverse_Max];


//ランダム
const int Option_Random_Max = 3;
std::string Option_Random[Option_Random_Max] = { "なし", "きまぐれ","でたらめ"};
int Option_Random_FontSize_Width[Option_Random_Max];
int Option_Random_FontSize_WidthY[Option_Random_Max];


//演奏スキップ
const int Option_Skip_Max = 2;
std::string Option_Skip[Option_Skip_Max] = { "しない", "する"};
int Option_Skip_FontSize_Width[Option_Skip_Max];
int Option_Skip_FontSize_WidthY[Option_Skip_Max];


//音符位置調整
const int Option_Adjustment_Max = 2;
std::string Option_Adjustment[Option_Adjustment_Max] = { "しない", "する" };
int Option_Adjustment_FontSize_Width[Option_Adjustment_Max];
int Option_Adjustment_FontSize_WidthY[Option_Adjustment_Max];


//音符位置調整の値
const int Option_Adjustment_Value_Max = 11;
std::string Option_Adjustment_Value[Option_Adjustment_Value_Max] = { "左5", "左4", "左3", "左2", "左1", "0", "右1", "右2", "右3", "右4","右5"};

//ボイス
const int Option_Voice_Max = 2;
std::string Option_Voice[Option_Voice_Max] = { "なし","あり"};
int Option_Voice_FontSize_Width[Option_Voice_Max];
int Option_Voice_FontSize_WidthY[Option_Voice_Max];


//フォントサイズ
const int Option_FontSize_Default = 25;
int Option_Tone_FontSize[SoundFile_Tones_Max];
int Option_Tone_FontSize_Width[SoundFile_Tones_Max];
int Option_Tone_FontSize_WidthY[SoundFile_Tones_Max];

int Option_Font_Default;
int Option_Font_Tone;
int Option_Font_Tone2;


bool Option_Font_Tone_Check;
bool Option_Font_Tone_Check2;

int Option_Font_OutLine = 1;//縁取りサイズ



bool Option_Changed[8];

bool Option_C_Animation_Check[2];
bool Option_C_Animation_Timer_Check[2];
double Option_C_Animation_PosX_Plus[2];
int Option_C_Animation_PosX_cnt[2];
int Option_C_Animation_Timer_cnt[2][3];


