#pragma once
#include <stdio.h>
#include<iostream>
#include<string> //stringクラスを使用可能にする
#include<fstream> //stringクラスを使用可能にする

using namespace std;

//変数登録
//int型は%d
//double型は%lg
//strは%s

/*
シーン
Error:0
Entry:100
SelectSong:200

*/

int SceneNum = 0;
const int Num_Entry = 100;//Entry
const int Num_SelectSong_Load = 200;//フェードアウトなどの処理
const int Num_SelectSong_Load2 = 201;//画像やファイルの読み込み
const int Num_SelectSong = 202;//画像やファイルの読み込み
const int Num_LoadSong = 300;//読み込み
const int Num_LoadSong2 = 301;//曲再読み込み
const int Num_PlaySong = 400;//曲再生
const int Num_SaveScore = 500;//スコア情報の保存


//Bar
const int Num_Bar_Closed_Normal = 100;//バーが閉じてる時(Normal)
const int Num_Bar_Closed_Right = 101;//バーが閉じてる時(右スクロール)
const int Num_Bar_Closed_Left = 102;//バーが閉じてる時(左スクロール)
const int Num_Bar_Opened_Normal = 200;//バーが開いてる時(Normal)
const int Num_Bar_Opened_Right = 201;//バーが開いてる時(右スクロール)
const int Num_Bar_Opened_Left = 202;//バーが開いてる時(左スクロール)
const int Num_Bar_Moving_Closed = 300;//バーが閉じている時(Moving)
const int Num_Bar_Moving_Opened = 301;//バーが開いている時(Moving)


//Bar_Center

//Animation_PicText_Jump_Num
const int Num_Animation_PicText_Jump_B1P = 0;//風船タイマー(1P)
const int Num_Animation_PicText_Jump_B2P = 1;//風船タイマー(2P)








std::string BanaPass_Data_New_Whiting = "Pass_ID:1\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nPass_ID:2\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nPass_ID:3\nCourse:Easy\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Normal\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Hard\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Oni\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\nCourse:Edit\nPlayed:0\nScoreRank:0\nHiScore:0\nGreat:0\nGood:0\nBad:0\nGrades:0\nRepeatedHits:0\nCombo:0\nHits:0\n\n";


//Texture(連番画像読み込みはMainの中に記述)
std::string Texture_Entry_Back_;//Texture_Entry_Back
std::string Texture_Entry_Bar_;//Texture_Entry_Bar
std::string Texture_Entry_Coin_Text_;//Texture_Entry_Coin_Text

std::string Texture_Online_Mark_Online_;//Texture_Online_Mark_Online
std::string Texture_Online_Mark_Offline_;//Texture_Online_Mark_Offline

//Sound
std::string Sound_Title_Meinongen_;//Sound_Title_Meinongen
std::string Sound_Title_Kurejitto_;//Sound_Title_Kurejitto
std::string Sound_Title_TaikoWotataitesutato_;//Sound_Title_Kurejitto
std::string Sound_S_Dong_;//Sound_S_Dong
std::string Sound_S_Ka_;//Sound_S_Ka


//譜面読み込み用
const int ID_TJA_Folder_In_Genre_Number_Name_Path_fin_int = 10000;
std::ifstream ID_TJA_Folder_In_Genre_Number_Name_Path_fin[ID_TJA_Folder_In_Genre_Number_Name_Path_fin_int];

int ID_TJA_Folder_In_Genre_Number_Name_Path_fin_cnt;

//判定

double J_Great[5] = { 41.708 , 41.708 , 25.025 , 25.025 , 25.025 };
double J_Good[5] = { 108.442 , 108.442  , 75.075 , 75.075 , 75.075 };
double J_Bad[5] = { 125.125 , 125.125  , 108.442 , 108.442 , 108.442 };

int Di_Combo[5] = { 5,5,10,10,10 };
int Di_Combo_1[5] = { 10,10,30,50,50 };
int Di_Combo_2[5] = { 30,30,50,100,100 };




double FPS = 60.0;
double FPS_Flesh = 1000.0 / FPS;
double FPS_Flesh_60FPS = 1000.0 / 60.0;
double FPS_ = 60.0 / FPS;

bool VSync = TRUE;

bool UseWaitTimer = FALSE;
int UseWaitTImer_V = 16;
int UseWaitVSync_V = 1;

double _OFFSET;
int Add_TitleType = 0;
int Add_TitleType_Pic_Load[300];
int Add_SongTag_Pic_Load[300];





int Play_Song_FPS;

int FPS_Count_Timer[3];
int FPS_Count_Timer_;
int FPS_Count_Timer_DisPlay;
bool FPS_Count_Timer_Check;
bool White_FPS;
int White_FPS_Font;
bool White_Setting;

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
bool _PlaySong_Metronome = FALSE;

bool Restart_init_Flug = TRUE;



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

//SkinPic
//CommonDonChanint 
double Player_T_CommonDonChanSkin_Postion[2] = { 0,0 };
double Player_T_CommonDonChanSkin_Postion_2P[2] = { 0,0 };

double Player_T_CommonDonChanSkin_Magnification = 1.0;


int Player_T_CommonDonChanSkin_Pic_Clear_In = 0;
int Player_T_CommonDonChanSkin_Pic_Clear_Loop = 0;
int Player_T_CommonDonChanSkin_Pic_Daiseikou_In = 0;
int Player_T_CommonDonChanSkin_Pic_Daiseikou_Loop = 0;
int Player_T_CommonDonChanSkin_Pic_Failed_In = 0;
int Player_T_CommonDonChanSkin_Pic_Failed_Loop = 0;
int Player_T_CommonDonChanSkin_Pic_Normal_Loop = 0;
int Player_T_CommonDonChanSkin_Pic_Skip = 0;
int Player_T_CommonDonChanSkin_Pic_StartSong = 0;
//Enso
double Player_T_CharaDonChanSkin_Postion[2] = { 0,0 };
double Player_T_CharaDonChanSkin_Magnification = 1.0;
int Player_T_CharaDonChanSkin_Pic_10combo = 0;
int Player_T_CharaDonChanSkin_Pic_10combo_Max = 0;
int Player_T_CharaDonChanSkin_Pic_Balloon_Breaking = 0;
int Player_T_CharaDonChanSkin_Pic_Balloon_Broke = 0;
int Player_T_CharaDonChanSkin_Pic_Balloon_Miss = 0;
int Player_T_CharaDonChanSkin_Pic_Clear = 0;
int Player_T_CharaDonChanSkin_Pic_Clearin = 0;
int Player_T_CharaDonChanSkin_Pic_GoGo = 0;
int Player_T_CharaDonChanSkin_Pic_GoGoStart = 0;
int Player_T_CharaDonChanSkin_Pic_Kusu_In = 0;
int Player_T_CharaDonChanSkin_Pic_Kusu_Loop = 0;
int Player_T_CharaDonChanSkin_Pic_Kusu_Miss = 0;
int Player_T_CharaDonChanSkin_Pic_Miss = 0;
int Player_T_CharaDonChanSkin_Pic_Miss6 = 0;
int Player_T_CharaDonChanSkin_Pic_Normal = 0;
int Player_T_CharaDonChanSkin_Pic_Revival = 0;
int Player_T_CharaDonChanSkin_Pic_Soulin = 0;
int Player_T_CharaDonChanSkin_Pic_Surprised = 0;



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

int Player_Option_Display_Pos_Plus;
int Player_Option_Display_Pos_PlusX = 43;
int Player_Option_Display_Pos_PlusX2 = 44;
int Player_Option_Display_Pos_PlusY2 = 44;


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


//Setting
int White_Setting_PosY;

//Auto (0:F 1:1P 2:2P 3:T)
int Player_AutoPlay_I = 0;//int
int Player_AutoPlay_IM = 4;//int (Max:3)
bool Playing_Auto_LR_Check[2];//(FALSE:右 TRUE:左)

//BRANCH (0:F 1:1P 2:2P 3:T)
int Player1_BRANCH_I = 0;//int
int Player1_BRANCH_IM = 4;//int (Max:3)
int Player2_BRANCH_I = 0;//int
int Player2_BRANCH_IM = 4;//int (Max:3)

//Constant Velocity (0:F 1:1P 2:2P 3:T)
int Player_Constant_Velocity_Mode_I = 0;//int
int Player_Constant_Velocity_Mode_IM = 4;//int (Max:3)
double Player_Constant_Velocity_Mode_BPM[2] = { 120.0,120.0 };














//読み込み関連
const int Genre_Folder_Count_Max = 30; //読み込めるジャンル数
const int TJA_Folder_In_Genre_Count_Max = 400; //読み込める譜面数
const int TJA_Folder_In_Genre_Close_Count_Max = Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max; //とじるボタンの最大数
const int TJA_Folder_In_Genre_Count_Max2 = 1; //読み込める譜面数2
const int TJA_FILE_COURSE_NUMBER = 5; //読み込めるコース数
const int TJA_FILE_BRANCH_NUMBER = 1000; //読み込める譜面分岐数
const int SoundFile_Tones_Max = 100; //読み込める音色の数
const int Hints_Max = 100;//読み込めるヒント画像の枚数
const int SongLoadTJA_Line_Max = 5000;//読み込める行数
const int Result_STJA_Line_Max = 1000;//読み込める行数



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

std::string Texture_SelectSong_Level_Panel_Black = "SelectSong/Level_Panel_Black.png";
std::string Texture_SelectSong_Level_Panel_Black_;
int Texture_SelectSong_Level_Panel_Black_Load;//Texture_SelectSong_Level_Panel_Black

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

std::string Texture_SelectSong_CourseSelect_Main_Panel_T = "SelectSong/CourseSelect/Main_Panel_T.png";
std::string Texture_SelectSong_CourseSelect_Main_Panel_T_;
int Texture_SelectSong_CourseSelect_Main_Panel_T_Load;//Texture_SelectSong_CourseSelect_Main_Panel_T

std::string Texture_SelectSong_CourseSelect_Main_Panel_Black = "SelectSong/CourseSelect/Main_Panel_Black.png";
std::string Texture_SelectSong_CourseSelect_Main_Panel_Black_;
int Texture_SelectSong_CourseSelect_Main_Panel_Black_Load;//Texture_SelectSong_CourseSelect_Main_Panel_Black


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

std::string Texture_SelectSong_CourseSelect_Crown_M = "SelectSong/CourseSelect/Crown_M.png";
std::string Texture_SelectSong_CourseSelect_Crown_M_;
int Texture_SelectSong_CourseSelect_Crown_M_Load;//Texture_SelectSong_CourseSelect_Crown_M

std::string Texture_SelectSong_CourseSelect_ScoreRank_M = "SelectSong/CourseSelect/ScoreRank_M.png";
std::string Texture_SelectSong_CourseSelect_ScoreRank_M_;
int Texture_SelectSong_CourseSelect_ScoreRank_M_Load;//Texture_SelectSong_CourseSelect_ScoreRank_M

std::string Texture_SelectSong_CourseSelect_BRANCH = "SelectSong/CourseSelect/BRANCH.png";
std::string Texture_SelectSong_CourseSelect_BRANCH_;
int Texture_SelectSong_CourseSelect_BRANCH_Load;//Texture_SelectSong_CourseSelect_BRANCH

//Option_Mark
std::string Texture_Option_Mark_main = "Option_Mark/main.png";
std::string Texture_Option_Mark_main_;
int Texture_Option_Mark_main_Load;//Texture_Option_Mark_main

std::string Texture_Option_Mark_speed = "Option_Mark/speed.png";
std::string Texture_Option_Mark_speed_;
int Texture_Option_Mark_speed_Load;//Texture_Option_Mark_speed



std::string Texture_LoadingSong_Open = "LoadingSong/Open.png";
std::string Texture_LoadingSong_Open_;
int Texture_LoadingSong_Open_Load;//Texture_LoadingSong_Open

std::string Texture_LoadingSong_Wait = "LoadingSong/Wait.png";
std::string Texture_LoadingSong_Wait_;
int Texture_LoadingSong_Wait_Load;//Texture_LoadingSong_Wait

std::string Texture_LoadingSong_DonChan_L = "LoadingSong/DonChan_L.png";
std::string Texture_LoadingSong_DonChan_L_;
int Texture_LoadingSong_DonChan_L_Load;//Texture_LoadingSong_DonChan_L

std::string Texture_LoadingSong_DonChan_R = "LoadingSong/DonChan_R.png";
std::string Texture_LoadingSong_DonChan_R_;
int Texture_LoadingSong_DonChan_R_Load;//Texture_LoadingSong_DonChan_R

std::string Texture_LoadingSong_Hint = "LoadingSong/Hint.png";
std::string Texture_LoadingSong_Hint_;
int Texture_LoadingSong_Hint_Load;//Texture_LoadingSong_Hint

std::string Texture_LoadingSong_Lame = "LoadingSong/Lame.png";
std::string Texture_LoadingSong_Lame_;
int Texture_LoadingSong_Lame_Load;//Texture_LoadingSong_Lame

std::string Texture_LoadingSong_IMG_9196 = "LoadingSong/IMG_9196.png";
std::string Texture_LoadingSong_IMG_9196_;
int Texture_LoadingSong_IMG_9196_Load;//Texture_LoadingSong_IMG_9196

std::string Texture_LoadingSong_BackWhite = "LoadingSong/BackWhite.png";
std::string Texture_LoadingSong_BackWhite_;
int Texture_LoadingSong_BackWhite_Load;//Texture_LoadingSong_BackWhite


//Enso
std::string Texture_Enso_Line_White = "Enso/Line_White.png";
std::string Texture_Enso_Line_White_;
int Texture_Enso_Line_White_Load;//Texture_Enso_Line_White

std::string Texture_Enso_Line_Yellow = "Enso/Line_Yellow.png";
std::string Texture_Enso_Line_Yellow_;
int Texture_Enso_Line_Yellow_Load;//Texture_Enso_Line_Yellow

std::string Texture_Enso_Playing_Bar = "Enso/Playing_Bar.png";
std::string Texture_Enso_Playing_Bar_;
int Texture_Enso_Playing_Bar_Load;//Texture_Enso_Playing_Bar

std::string Texture_Enso_Judge = "Enso/Judge.png";
std::string Texture_Enso_Judge_;
int Texture_Enso_Judge_Load;//Texture_Enso_Judge

std::string Texture_Enso_SENotes = "Enso/SENotes.png";
std::string Texture_Enso_SENotes_;
int Texture_Enso_SENotes_Load;//Texture_Enso_SENotes

std::string Texture_Enso_Now_Ward_Number = "Enso/Now_Ward_Number.png";
std::string Texture_Enso_Now_Ward_Number_;
int Texture_Enso_Now_Ward_Number_Load;//Texture_Enso_Now_Ward_Number

std::string Texture_Enso_Now_Ward_Panel_1P = "Enso/Now_Ward_Panel_1P.png";
std::string Texture_Enso_Now_Ward_Panel_1P_;
int Texture_Enso_Now_Ward_Panel_1P_Load;//Texture_Enso_Now_Ward_Panel_1P

std::string Texture_Enso_Now_Ward_Panel_2P = "Enso/Now_Ward_Panel_2P.png";
std::string Texture_Enso_Now_Ward_Panel_2P_;
int Texture_Enso_Now_Ward_Panel_2P_Load;//Texture_Enso_Now_Ward_Panel_2P


//Enso_Effect
std::string Texture_Enso_Effect_HitEffect = "Enso/Effect/HitEffect.png";
std::string Texture_Enso_Effect_HitEffect_;
int Texture_Enso_Effect_HitEffect_Load;//Texture_Enso_Effect_HitEffect

std::string Texture_Enso_Effect_HitFlush = "Enso/Effect/HitFlush.png";
std::string Texture_Enso_Effect_HitFlush_;
int Texture_Enso_Effect_HitFlush_Load;//Texture_Enso_Effect_HitFlush

std::string Texture_Enso_Effect_ChipEffect = "Enso/Effect/ChipEffect.png";
std::string Texture_Enso_Effect_ChipEffect_;
int Texture_Enso_Effect_ChipEffect_Load;//Texture_Enso_Effect_ChipEffect

std::string Texture_Enso_Effect_GoGoFire = "Enso/Effect/GoGoFire.png";
std::string Texture_Enso_Effect_GoGoFire_;
int Texture_Enso_Effect_GoGoFire_Load;//Texture_Enso_Effect_GoGoFire


//Enso_Notes_N
std::string Texture_Enso_Notes_N_Notes_Flame = "Enso/Notes/N/Notes_Flame.png";
std::string Texture_Enso_Notes_N_Notes_Flame_;
int Texture_Enso_Notes_N_Notes_Flame_Load;//Texture_Enso_Notes_N_Notes_Flame

std::string Texture_Enso_Notes_N_Notes_Dong0 = "Enso/Notes/N/Notes_Dong0.png";
std::string Texture_Enso_Notes_N_Notes_Dong0_;
int Texture_Enso_Notes_N_Notes_Dong0_Load;//Texture_Enso_Notes_N_Notes_Dong0

std::string Texture_Enso_Notes_N_Notes_Dong1 = "Enso/Notes/N/Notes_Dong1.png";
std::string Texture_Enso_Notes_N_Notes_Dong1_;
int Texture_Enso_Notes_N_Notes_Dong1_Load;//Texture_Enso_Notes_N_Notes_Dong1

std::string Texture_Enso_Notes_N_Notes_Dong2 = "Enso/Notes/N/Notes_Dong2.png";
std::string Texture_Enso_Notes_N_Notes_Dong2_;
int Texture_Enso_Notes_N_Notes_Dong2_Load;//Texture_Enso_Notes_N_Notes_Dong2

std::string Texture_Enso_Notes_N_Notes_Ka0 = "Enso/Notes/N/Notes_Ka0.png";
std::string Texture_Enso_Notes_N_Notes_Ka0_;
int Texture_Enso_Notes_N_Notes_Ka0_Load;//Texture_Enso_Notes_N_Notes_Ka0

std::string Texture_Enso_Notes_N_Notes_Ka1 = "Enso/Notes/N/Notes_Ka1.png";
std::string Texture_Enso_Notes_N_Notes_Ka1_;
int Texture_Enso_Notes_N_Notes_Ka1_Load;//Texture_Enso_Notes_N_Notes_Ka0

std::string Texture_Enso_Notes_N_Notes_Ka2 = "Enso/Notes/N/Notes_Ka2.png";
std::string Texture_Enso_Notes_N_Notes_Ka2_;
int Texture_Enso_Notes_N_Notes_Ka2_Load;//Texture_Enso_Notes_N_Notes_Ka0

std::string Texture_Enso_Notes_N_Notes_BDong0 = "Enso/Notes/N/Notes_BDong0.png";
std::string Texture_Enso_Notes_N_Notes_BDong0_;
int Texture_Enso_Notes_N_Notes_BDong0_Load;//Texture_Enso_Notes_N_Notes_BDong0

std::string Texture_Enso_Notes_N_Notes_BDong1 = "Enso/Notes/N/Notes_BDong1.png";
std::string Texture_Enso_Notes_N_Notes_BDong1_;
int Texture_Enso_Notes_N_Notes_BDong1_Load;//Texture_Enso_Notes_N_Notes_BDong1

std::string Texture_Enso_Notes_N_Notes_BDong2 = "Enso/Notes/N/Notes_BDong2.png";
std::string Texture_Enso_Notes_N_Notes_BDong2_;
int Texture_Enso_Notes_N_Notes_BDong2_Load;//Texture_Enso_Notes_N_Notes_BDong2

std::string Texture_Enso_Notes_N_Notes_BKa0 = "Enso/Notes/N/Notes_BKa0.png";
std::string Texture_Enso_Notes_N_Notes_BKa0_;
int Texture_Enso_Notes_N_Notes_BKa0_Load;//Texture_Enso_Notes_N_Notes_BKa0

std::string Texture_Enso_Notes_N_Notes_BKa1 = "Enso/Notes/N/Notes_BKa1.png";
std::string Texture_Enso_Notes_N_Notes_BKa1_;
int Texture_Enso_Notes_N_Notes_BKa1_Load;//Texture_Enso_Notes_N_Notes_BKa1

std::string Texture_Enso_Notes_N_Notes_BKa2 = "Enso/Notes/N/Notes_BKa2.png";
std::string Texture_Enso_Notes_N_Notes_BKa2_;
int Texture_Enso_Notes_N_Notes_BKa2_Load;//Texture_Enso_Notes_N_Notes_BKa2

std::string Texture_Enso_Notes_N_Notes_Roll0 = "Enso/Notes/N/Notes_Roll0.png";
std::string Texture_Enso_Notes_N_Notes_Roll0_;
int Texture_Enso_Notes_N_Notes_Roll0_Load;//Texture_Enso_Notes_N_Notes_Roll0

std::string Texture_Enso_Notes_N_Notes_Roll1 = "Enso/Notes/N/Notes_Roll1.png";
std::string Texture_Enso_Notes_N_Notes_Roll1_;
int Texture_Enso_Notes_N_Notes_Roll1_Load;//Texture_Enso_Notes_N_Notes_Roll1

std::string Texture_Enso_Notes_N_Notes_Roll2 = "Enso/Notes/N/Notes_Roll2.png";
std::string Texture_Enso_Notes_N_Notes_Roll2_;
int Texture_Enso_Notes_N_Notes_Roll2_Load;//Texture_Enso_Notes_N_Notes_Roll2

std::string Texture_Enso_Notes_N_Notes_Roll_Bar = "Enso/Notes/N/Notes_Roll_Bar.png";
std::string Texture_Enso_Notes_N_Notes_Roll_Bar_;
int Texture_Enso_Notes_N_Notes_Roll_Bar_Load;//Texture_Enso_Notes_N_Notes_Roll_Bar

std::string Texture_Enso_Notes_N_Notes_BRoll0 = "Enso/Notes/N/Notes_BRoll0.png";
std::string Texture_Enso_Notes_N_Notes_BRoll0_;
int Texture_Enso_Notes_N_Notes_BRoll0_Load;//Texture_Enso_Notes_N_Notes_BRoll0

std::string Texture_Enso_Notes_N_Notes_BRoll1 = "Enso/Notes/N/Notes_BRoll1.png";
std::string Texture_Enso_Notes_N_Notes_BRoll1_;
int Texture_Enso_Notes_N_Notes_BRoll1_Load;//Texture_Enso_Notes_N_Notes_BRoll1

std::string Texture_Enso_Notes_N_Notes_BRoll2 = "Enso/Notes/N/Notes_BRoll2.png";
std::string Texture_Enso_Notes_N_Notes_BRoll2_;
int Texture_Enso_Notes_N_Notes_BRoll2_Load;//Texture_Enso_Notes_N_Notes_Roll2

std::string Texture_Enso_Notes_N_Notes_BRoll_Bar = "Enso/Notes/N/Notes_BRoll_Bar.png";
std::string Texture_Enso_Notes_N_Notes_BRoll_Bar_;
int Texture_Enso_Notes_N_Notes_BRoll_Bar_Load;//Texture_Enso_Notes_N_Notes_BRoll_Bar

std::string Texture_Enso_Notes_N_Notes_Balloon0 = "Enso/Notes/N/Notes_Balloon0.png";
std::string Texture_Enso_Notes_N_Notes_Balloon0_;
int Texture_Enso_Notes_N_Notes_Balloon0_Load;//Texture_Enso_Notes_N_Notes_Balloon0

std::string Texture_Enso_Notes_N_Notes_Balloon1 = "Enso/Notes/N/Notes_Balloon1.png";
std::string Texture_Enso_Notes_N_Notes_Balloon1_;
int Texture_Enso_Notes_N_Notes_Balloon1_Load;//Texture_Enso_Notes_N_Notes_Balloon1

std::string Texture_Enso_Notes_N_Notes_Balloon2 = "Enso/Notes/N/Notes_Balloon2.png";
std::string Texture_Enso_Notes_N_Notes_Balloon2_;
int Texture_Enso_Notes_N_Notes_Balloon2_Load;//Texture_Enso_Notes_N_Notes_Balloon2


//Enso_Notes_F
std::string Texture_Enso_Notes_F_NotesFly_Flame = "Enso/Notes/F/NotesFly_Flame.png";
std::string Texture_Enso_Notes_F_NotesFly_Flame_;
int Texture_Enso_Notes_F_NotesFly_Flame_Load;//Texture_Enso_Notes_F_NotesFly_Flame

std::string Texture_Enso_Notes_F_NotesFly_Dong0 = "Enso/Notes/F/NotesFly_Dong0.png";
std::string Texture_Enso_Notes_F_NotesFly_Dong0_;
int Texture_Enso_Notes_F_NotesFly_Dong0_Load;//Texture_Enso_Notes_F_NotesFly_Dong0

std::string Texture_Enso_Notes_F_NotesFly_Dong1 = "Enso/Notes/F/NotesFly_Dong1.png";
std::string Texture_Enso_Notes_F_NotesFly_Dong1_;
int Texture_Enso_Notes_F_NotesFly_Dong1_Load;//Texture_Enso_Notes_F_NotesFly_Dong1

std::string Texture_Enso_Notes_F_NotesFly_Dong2 = "Enso/Notes/F/NotesFly_Dong2.png";
std::string Texture_Enso_Notes_F_NotesFly_Dong2_;
int Texture_Enso_Notes_F_NotesFly_Dong2_Load;//Texture_Enso_Notes_F_NotesFly_Dong2

std::string Texture_Enso_Notes_F_NotesFly_Ka0 = "Enso/Notes/F/NotesFly_Ka0.png";
std::string Texture_Enso_Notes_F_NotesFly_Ka0_;
int Texture_Enso_Notes_F_NotesFly_Ka0_Load;//Texture_Enso_Notes_F_NotesFly_Ka0

std::string Texture_Enso_Notes_F_NotesFly_Ka1 = "Enso/Notes/F/NotesFly_Ka1.png";
std::string Texture_Enso_Notes_F_NotesFly_Ka1_;
int Texture_Enso_Notes_F_NotesFly_Ka1_Load;//Texture_Enso_Notes_F_NotesFly_Ka1

std::string Texture_Enso_Notes_F_NotesFly_Ka2 = "Enso/Notes/F/NotesFly_Ka2.png";
std::string Texture_Enso_Notes_F_NotesFly_Ka2_;
int Texture_Enso_Notes_F_NotesFly_Ka2_Load;//Texture_Enso_Notes_F_NotesFly_Ka2

std::string Texture_Enso_Notes_F_NotesFly_BDong0 = "Enso/Notes/F/NotesFly_BDong0.png";
std::string Texture_Enso_Notes_F_NotesFly_BDong0_;
int Texture_Enso_Notes_F_NotesFly_BDong0_Load;//Texture_Enso_Notes_F_NotesFly_BDong0

std::string Texture_Enso_Notes_F_NotesFly_BDong1 = "Enso/Notes/F/NotesFly_BDong1.png";
std::string Texture_Enso_Notes_F_NotesFly_BDong1_;
int Texture_Enso_Notes_F_NotesFly_BDong1_Load;//Texture_Enso_Notes_F_NotesFly_BDong1

std::string Texture_Enso_Notes_F_NotesFly_BDong2 = "Enso/Notes/F/NotesFly_BDong2.png";
std::string Texture_Enso_Notes_F_NotesFly_BDong2_;
int Texture_Enso_Notes_F_NotesFly_BDong2_Load;//Texture_Enso_Notes_F_NotesFly_BDong2

std::string Texture_Enso_Notes_F_NotesFly_BKa0 = "Enso/Notes/F/NotesFly_BKa0.png";
std::string Texture_Enso_Notes_F_NotesFly_BKa0_;
int Texture_Enso_Notes_F_NotesFly_BKa0_Load;//Texture_Enso_Notes_F_NotesFly_BKa0

std::string Texture_Enso_Notes_F_NotesFly_BKa1 = "Enso/Notes/F/NotesFly_BKa1.png";
std::string Texture_Enso_Notes_F_NotesFly_BKa1_;
int Texture_Enso_Notes_F_NotesFly_BKa1_Load;//Texture_Enso_Notes_F_NotesFly_BKa1

std::string Texture_Enso_Notes_F_NotesFly_BKa2 = "Enso/Notes/F/NotesFly_BKa2.png";
std::string Texture_Enso_Notes_F_NotesFly_BKa2_;
int Texture_Enso_Notes_F_NotesFly_BKa2_Load;//Texture_Enso_Notes_F_NotesFly_BKa2

//Enso_Notes_W
std::string Texture_Enso_Notes_W_NotesWhite_Flame = "Enso/Notes/W/NotesWhite_Flame.png";
std::string Texture_Enso_Notes_W_NotesWhite_Flame_;
int Texture_Enso_Notes_W_NotesWhite_Flame_Load;//Texture_Enso_Notes_W_NotesWhite_Flame

std::string Texture_Enso_Notes_W_NotesWhite_S = "Enso/Notes/W/NotesWhite_S.png";
std::string Texture_Enso_Notes_W_NotesWhite_S_;
int Texture_Enso_Notes_W_NotesWhite_S_Load;//Texture_Enso_Notes_W_NotesWhite_S

std::string Texture_Enso_Notes_W_NotesWhite_B = "Enso/Notes/W/NotesWhite_B.png";
std::string Texture_Enso_Notes_W_NotesWhite_B_;
int Texture_Enso_Notes_W_NotesWhite_B_Load;//Texture_Enso_Notes_W_NotesWhite_B


//Enso_Chara
std::string Texture_Enso_Chara_Chara_MaxEffect = "Enso/Chara/Chara_MaxEffect.png";
std::string Texture_Enso_Chara_Chara_MaxEffect_;
int Texture_Enso_Chara_Chara_MaxEffect_Load;//Texture_Enso_Chara_Chara_MaxEffect


//Enso_End
std::string Texture_Enso_End_Bachi = "Enso/End/Bachi.png";
std::string Texture_Enso_End_Bachi_;
int Texture_Enso_End_Bachi_Load;//Texture_Enso_End_Bachi

std::string Texture_Enso_End_Clear_Text = "Enso/End/Clear_Text.png";
std::string Texture_Enso_End_Clear_Text_;
int Texture_Enso_End_Clear_Text_Load;//Texture_Enso_End_Clear_Text

std::string Texture_Enso_End_Clear_Text_Effect = "Enso/End/Clear_Text_Effect.png";
std::string Texture_Enso_End_Clear_Text_Effect_;
int Texture_Enso_End_Clear_Text_Effect_Load;//Texture_Enso_End_Clear_Text_Effect

std::string Texture_Enso_End_Clear_Text_White = "Enso/End/Clear_Text_White.png";
std::string Texture_Enso_End_Clear_Text_White_;
int Texture_Enso_End_Clear_Text_White_Load;//Texture_Enso_End_Clear_Text_White

std::string Texture_Enso_End_Star = "Enso/End/Star.png";
std::string Texture_Enso_End_Star_;
int Texture_Enso_End_Star_Load;//Texture_Enso_End_Star

std::string Texture_Enso_End_DondaFull_Bachi_God = "Enso/End/DondaFull/Bachi_God.png";
std::string Texture_Enso_End_DondaFull_Bachi_God_;
int Texture_Enso_End_DondaFull_Bachi_God_Load;//Texture_Enso_End_DondaFull_Bachi_God

//Enso_Renda
std::string Texture_Enso_Renda_Utchiwa = "Enso/Renda/Utchiwa.png";
std::string Texture_Enso_Renda_Utchiwa_;
int Texture_Enso_Renda_Utchiwa_Load;//Texture_Enso_Renda_Utchiwa

std::string Texture_Enso_Renda_Roll_Text = "Enso/Renda/Roll_Text.png";
std::string Texture_Enso_Renda_Roll_Text_;
int Texture_Enso_Renda_Roll_Text_Load;//Texture_Enso_Renda_Roll_Text

std::string Texture_Enso_Renda_Number = "Enso/Renda/Number.png";
std::string Texture_Enso_Renda_Number_;
int Texture_Enso_Renda_Number_Load;//Texture_Enso_Renda_Number

std::string Texture_Enso_Renda_Balloon = "Enso/Renda/Balloon.png";
std::string Texture_Enso_Renda_Balloon_;
int Texture_Enso_Renda_Balloon_Load;//Texture_Enso_Renda_Balloon

std::string Texture_Enso_Renda_BalloonFrame = "Enso/Renda/BalloonFrame.png";
std::string Texture_Enso_Renda_BalloonFrame_;
int Texture_Enso_Renda_BalloonFrame_Load;//Texture_Enso_Renda_BalloonFrame

std::string Texture_Enso_Renda_Balloon_Number = "Enso/Renda/Balloon_Number.png";
std::string Texture_Enso_Renda_Balloon_Number_;
int Texture_Enso_Renda_Balloon_Number_Load;//Texture_Enso_Renda_Balloon_Number

//Enso_Taiko
std::string Texture_Enso_Taiko_MTaiko_1P_1 = "Enso/Taiko/MTaiko_1P_1.png";
std::string Texture_Enso_Taiko_MTaiko_1P_1_;
int Texture_Enso_Taiko_MTaiko_1P_1_Load;//Texture_Enso_Taiko_MTaiko_1P_1

std::string Texture_Enso_Taiko_MTaiko_1P_2 = "Enso/Taiko/MTaiko_1P_2.png";
std::string Texture_Enso_Taiko_MTaiko_1P_2_;
int Texture_Enso_Taiko_MTaiko_1P_2_Load;//Texture_Enso_Taiko_MTaiko_1P_2

std::string Texture_Enso_Taiko_MTaiko_2P = "Enso/Taiko/MTaiko_2P.png";
std::string Texture_Enso_Taiko_MTaiko_2P_;
int Texture_Enso_Taiko_MTaiko_2P_Load;//Texture_Enso_Taiko_MTaiko_2P

std::string Texture_Enso_Taiko_Dong = "Enso/Taiko/Dong.png";
std::string Texture_Enso_Taiko_Dong_;
int Texture_Enso_Taiko_Dong_Load;//Texture_Enso_Taiko_Dong

std::string Texture_Enso_Taiko_Ka = "Enso/Taiko/Ka.png";
std::string Texture_Enso_Taiko_Ka_;
int Texture_Enso_Taiko_Ka_Load;//Texture_Enso_Taiko_Ka

std::string Texture_Enso_Taiko_Course = "Enso/Taiko/Course.png";
std::string Texture_Enso_Taiko_Course_;
int Texture_Enso_Taiko_Course_Load;//Texture_Enso_Taiko_Course

std::string Texture_Enso_Taiko_Taiko = "Enso/Taiko/Taiko.png";
std::string Texture_Enso_Taiko_Taiko_;
int Texture_Enso_Taiko_Taiko_Load;//Texture_Enso_Taiko_Taiko

std::string Texture_Enso_Taiko_Score = "Enso/Taiko/Score.png";
std::string Texture_Enso_Taiko_Score_;
int Texture_Enso_Taiko_Score_Load;//Texture_Enso_Taiko_Score

//Enso_Taiko_HiScore

std::string Texture_Enso_Taiko_HiScore_Light1 = "Enso/Taiko/HiScore/Light1.png";
std::string Texture_Enso_Taiko_HiScore_Light1_;
int Texture_Enso_Taiko_HiScore_Light1_Load;//Texture_Enso_Taiko_HiScore_Light1




//Enso_Lane
std::string Texture_Enso_Lane_Base = "Enso/Lane/Base.png";
std::string Texture_Enso_Lane_Base_;
int Texture_Enso_Lane_Base_Load;//Texture_Enso_Lane_Base

std::string Texture_Enso_Lane_Red = "Enso/Lane/Red.png";
std::string Texture_Enso_Lane_Red_;
int Texture_Enso_Lane_Red_Load;//Texture_Enso_Lane_Red

std::string Texture_Enso_Lane_Blue = "Enso/Lane/Blue.png";
std::string Texture_Enso_Lane_Blue_;
int Texture_Enso_Lane_Blue_Load;//Texture_Enso_Lane_Blue

std::string Texture_Enso_Lane_Normal_Text = "Enso/Lane/Normal_Text.png";
std::string Texture_Enso_Lane_Normal_Text_;
int Texture_Enso_Lane_Normal_Text_Load;//Texture_Enso_Lane_Normal_Text

std::string Texture_Enso_Lane_Expert = "Enso/Lane/Expert.png";
std::string Texture_Enso_Lane_Expert_;
int Texture_Enso_Lane_Expert_Load;//Texture_Enso_Lane_Expert

std::string Texture_Enso_Lane_Expert_Text = "Enso/Lane/Expert_Text.png";
std::string Texture_Enso_Lane_Expert_Text_;
int Texture_Enso_Lane_Expert_Text_Load;//Texture_Enso_Lane_Expert_Text

std::string Texture_Enso_Lane_Master = "Enso/Lane/Master.png";
std::string Texture_Enso_Lane_Master_;
int Texture_Enso_Lane_Master_Load;//Texture_Enso_Lane_Master

std::string Texture_Enso_Lane_Master_Text = "Enso/Lane/Master_Text.png";
std::string Texture_Enso_Lane_Master_Text_;
int Texture_Enso_Lane_Master_Text_Load;//Texture_Enso_Lane_Master_Text

std::string Texture_Enso_Lane_GoGo = "Enso/Lane/GoGo.png";
std::string Texture_Enso_Lane_GoGo_;
int Texture_Enso_Lane_GoGo_Load;//Texture_Enso_Lane_GoGo





//Enso_Lane_Gauge
std::string Texture_Enso_Lane_Gauge_Gauge_Base_1P = "Enso/Lane/Gauge/Gauge_Base_1P.png";
std::string Texture_Enso_Lane_Gauge_Gauge_Base_1P_;
int Texture_Enso_Lane_Gauge_Gauge_Base_1P_Load;//Texture_Enso_Lane_Gauge_Gauge_Base_1P

std::string Texture_Enso_Lane_Gauge_Gauge_Base_1P_2 = "Enso/Lane/Gauge/Gauge_Base_1P_2.png";
std::string Texture_Enso_Lane_Gauge_Gauge_Base_1P_2_;
int Texture_Enso_Lane_Gauge_Gauge_Base_1P_2_Load;//Texture_Enso_Lane_Gauge_Gauge_Base_1P_2

std::string Texture_Enso_Lane_Gauge_Gauge_Base_2P = "Enso/Lane/Gauge/Gauge_Base_2P.png";
std::string Texture_Enso_Lane_Gauge_Gauge_Base_2P_;
int Texture_Enso_Lane_Gauge_Gauge_Base_2P_Load;//Texture_Enso_Lane_Gauge_Gauge_Base_2P

std::string Texture_Enso_Lane_Gauge_Gauge_Line_1P = "Enso/Lane/Gauge/Gauge_Line_1P.png";
std::string Texture_Enso_Lane_Gauge_Gauge_Line_1P_;
int Texture_Enso_Lane_Gauge_Gauge_Line_1P_Load;//Texture_Enso_Lane_Gauge_Gauge_Line_1P

std::string Texture_Enso_Lane_Gauge_Gauge_Line_2P = "Enso/Lane/Gauge/Gauge_Line_2P.png";
std::string Texture_Enso_Lane_Gauge_Gauge_Line_2P_;
int Texture_Enso_Lane_Gauge_Gauge_Line_2P_Load;//Texture_Enso_Lane_Gauge_Gauge_Line_2P

std::string Texture_Enso_Lane_Gauge_Clear_Text = "Enso/Lane/Gauge/Clear_Text.png";
std::string Texture_Enso_Lane_Gauge_Clear_Text_;
int Texture_Enso_Lane_Gauge_Clear_Text_Load;//Texture_Enso_Lane_Gauge_Clear_Text

std::string Texture_Enso_Lane_Gauge_Soul = "Enso/Lane/Gauge/Soul.png";
std::string Texture_Enso_Lane_Gauge_Soul_;
int Texture_Enso_Lane_Gauge_Soul_Load;//Texture_Enso_Lane_Gauge_Soul

std::string Texture_Enso_Lane_Gauge_Soul_Light = "Enso/Lane/Gauge/Soul_Light.png";
std::string Texture_Enso_Lane_Gauge_Soul_Light_;
int Texture_Enso_Lane_Gauge_Soul_Light_Load;//Texture_Enso_Lane_Gauge_Soul_Light

std::string Texture_Enso_Lane_Gauge_Gauge = "Enso/Lane/Gauge/Gauge.png";
std::string Texture_Enso_Lane_Gauge_Gauge_;
int Texture_Enso_Lane_Gauge_Gauge_Load;//Texture_Enso_Lane_Gauge_Gauge

std::string Texture_Enso_Lane_Gauge_Fire = "Enso/Lane/Gauge/Fire.png";
std::string Texture_Enso_Lane_Gauge_Fire_;
int Texture_Enso_Lane_Gauge_Fire_Load;//Texture_Enso_Lane_Gauge_Fire

std::string Texture_Enso_Lane_Gauge_GaugeUpdate = "Enso/Lane/Gauge/GaugeUpdate.png";
std::string Texture_Enso_Lane_Gauge_GaugeUpdate_;
int Texture_Enso_Lane_Gauge_GaugeUpdate_Load;//Texture_Enso_Lane_Gauge_GaugeUpdate


//Enso_Combo
std::string Texture_Enso_Combo_Combo_Lame = "Enso/Combo/Combo_Lame.png";
std::string Texture_Enso_Combo_Combo_Lame_;
int Texture_Enso_Combo_Combo_Lame_Load;//Texture_Enso_Combo_Combo_Lame

std::string Texture_Enso_Combo_Combo_Text = "Enso/Combo/Combo_Text.png";
std::string Texture_Enso_Combo_Combo_Text_;
int Texture_Enso_Combo_Combo_Text_Load;//Texture_Enso_Combo_Combo_Text

std::string Texture_Enso_Combo_combonumber_0 = "Enso/Combo/combonumber_0.png";
std::string Texture_Enso_Combo_combonumber_0_;
int Texture_Enso_Combo_combonumber_0_Load;//Texture_Enso_Combo_combonumber_0

std::string Texture_Enso_Combo_combonumber_1 = "Enso/Combo/combonumber_1.png";
std::string Texture_Enso_Combo_combonumber_1_;
int Texture_Enso_Combo_combonumber_1_Load;//Texture_Enso_Combo_combonumber_1

std::string Texture_Enso_Combo_combonumber_2 = "Enso/Combo/combonumber_2.png";
std::string Texture_Enso_Combo_combonumber_2_;
int Texture_Enso_Combo_combonumber_2_Load;//Texture_Enso_Combo_combonumber_2


int Texture_Enso_Combo_combonumber_0_Load_2[10];
int Texture_Enso_Combo_combonumber_1_Load_2[10];
int Texture_Enso_Combo_combonumber_2_Load_2[10];





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

std::string Sound_S_Balloon = "Balloon.ogg";
std::string Sound_S_Balloon_;
int Sound_S_Balloon_Load;//Sound_S_Clear

std::string Sound_S_Miss = "Miss.ogg";
std::string Sound_S_Miss_;
int Sound_S_Miss_Load;//Sound_S_Miss

std::string Sound_S_Clear = "Clear.ogg";
std::string Sound_S_Clear_;
int Sound_S_Clear_Load;//Sound_S_Clear

std::string Sound_S_FullCombo = "FullCombo.ogg";
std::string Sound_S_FullCombo_;
int Sound_S_FullCombo_Load;//Sound_S_FullCombo

std::string Sound_S_DonDaFullCombo = "DonDaFullCombo.ogg";
std::string Sound_S_DonDaFullCombo_;
int Sound_S_DonDaFullCombo_Load;//Sound_S_DonDaFullCombo



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


//Combo
int Sound_Combo_Combos_1P[54];//Sound_Combo_Combos_1P
int Sound_Combo_Combos_2P[54];//Sound_Combo_Combos_2P
bool Sound_Combo_Combos_Played[2][54];//Sound_Combo_Combos_1P
int Sound_Combo_Combos_Played_cnt;




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
int Add_SongTag = 0; //追加のタグ

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
bool Goto_SongSelect_Pic_Load = FALSE;
bool Goto_SongSelect_All_Check = FALSE;
int Goto_SongSelect_FadeOut = 0;
int Goto_SongSelect_FadeOut_Plus = 7;
int Goto_SongSelect_FadeOut_Back;

double SelectSong_Back_PlusX = 0.5;

double SelectSong_Back_PlusX1;

int KeySetting_1P;
int KeySetting_2P;

int KeySetting_1P_LeftDong[2];
int KeySetting_1P_RightDong[2];
int KeySetting_1P_LeftKa[2];
int KeySetting_1P_RightKa[2];
int KeySetting_2P_LeftDong[2];
int KeySetting_2P_RightDong[2];
int KeySetting_2P_LeftKa[2];
int KeySetting_2P_RightKa[2];




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

double _BanaPass_Select_DonChanTimer[3];
double _BanaPass_Select_DonChanTimer_1 = 730.0;






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

int SelectSong_Genre_Bar_int;
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

bool SelectSong_SelectDifficult_StartSong_Check;


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

double SelectSong_DonChan_Skin_Timer1_cnt[3];
double SelectSong_DonChan_Skin_Timer1_Clear_Loop = 960.0;
double SelectSong_DonChan_Skin_Timer1_Daiseikou_In = 1050.0;
double SelectSong_DonChan_Skin_Timer1_Skip = 710.0;
double SelectSong_DonChan_Skin_Timer1_StartSong = 360.0;





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

bool SelectSong_SelectDifficult_Decided_;

//曲読み込み
bool SelectSong_To_Song_Load_Timer_Check;
int SelectSong_To_Song_Load_Timer_cnt[3];

bool SelectSong_To_Song_Load_Timer1_1_Check;
bool SelectSong_To_Song_Load_Timer1_2_Check;
bool SelectSong_To_Song_Load_Timer1_3_Check;

bool SelectSong_To_Song_Load_Font_Check;

double SelectSong_To_Song_Load_Timer1_1 = 2560.0;//幕が閉じ始める時間
double SelectSong_To_Song_Load_Timer1_2 = 3050.0;//幕が閉じ終わる時間
double SelectSong_To_Song_Load_Timer1_3_1 = 3210.0;//どんちゃんが一番上に滞在した時の時間
double SelectSong_To_Song_Load_Timer1_3_2 = 3250.0;//曲名などがフェードイン始める時間
double SelectSong_To_Song_Load_Timer1_3 = 3410.0;//どんちゃんが移動し終わる時間


int SelectSong_To_Song_Load_Open_PosX_cnt;
double SelectSong_To_Song_Load_Open_PosX_cnt_d;
double SelectSong_To_Song_Load_Open_PosX_cnt_d2;
double SelectSong_To_Song_Load_Open_PosX;

double SelectSong_To_Song_Load_DonChan_L_PosX;
double SelectSong_To_Song_Load_DonChan_L_PosY;

int SelectSong_To_Song_Load_DonChan_L_PosX_cnt;
double SelectSong_To_Song_Load_DonChan_L_PosX_cnt_d;
double SelectSong_To_Song_Load_DonChan_L_PosX_cnt_d2;
int SelectSong_To_Song_Load_DonChan_L_PosY_cnt;
double SelectSong_To_Song_Load_DonChan_L_PosY_cnt_d;
double SelectSong_To_Song_Load_DonChan_L_PosY_cnt_d2;

double SelectSong_To_Song_Load_Song_Title_Alpha;
int SelectSong_To_Song_Load_Song_Title_Alpha_cnt;

double SelectSong_To_Song_Load_Song_DonChan_Alpha;
int SelectSong_To_Song_Load_Song_DonChan_Alpha_cnt;

int Hints;
std::string Texture_LoadingSong_Hints_ = "LoadingSong/Hints/";
std::string Texture_LoadingSong_Hints__;
int Texture_LoadingSong_Hints__Load[Hints_Max];//Texture_LoadingSong_Hints_
int Display_Hint_Number;
int Goto_SongLoading_Back;

//TJA読み込み
std::string SongLoading_TJA_FileName;
//行取得
std::string _Song_TJA_Lines_Sub;//一行分取得
std::string _Song_TJA_Lines_Sub__Info_substr;//一文字取得

std::string _Song_TJA_Lines_Sub_substr;//一文字取得
int Song_TJA_Lines_Sub_length;//_Song_TJA_Lines_Subで読み取った文の長さ
int Song_TJA_Lines_Sub_length_cnt;

std::string _Song_TJA_Lines_str[2][SongLoadTJA_Line_Max];//行の取得(Player_Pos,Line)

std::string _Song_TJA_Lines_Sub_PlusSS[20000];
int _Song_TJA_Lines_Sub_PlusSS_cnt;






bool _Song_TJA_Lines_Pass_Flug;
bool _Song_TJA_Lines_Passing_Flug;
bool _Song_TJA_Lines_Passing_Flug_sub;

bool _Song_TJA_Lines_Pass_Flug_2P;
bool _Song_TJA_Lines_Passing_Flug_2P;
bool _Song_TJA_Lines_Passing_Flug_sub_2P;
int _Song_TJA_Lines_Pass_cnt_save[2];

bool _Song_TJA_Lines_END_Flug;

bool TJA_Song_Load_BARLINE = TRUE;//BARLINE(FALSE:非表示 TRUE:表示)
std::string TJA_Song_Load_MEASURE_Substr;
std::string TJA_Song_Load_MEASURE_Substr1;
std::string TJA_Song_Load_MEASURE_Substr_Plus;
int TJA_Song_Load_MEASURE_Substr_length;
int TJA_Song_Load_MEASURE_Substr_cnt;
int TJA_Song_Load_MEASURE_Substr_cnt2P;

string TJA_Song_Load_MEASURE_str[2] = { "4" , "4"};
int TJA_Song_Load_MEASURE_int[2] = { 4,4 };


//記憶
int TJA_Song_Load_MEASURE_Line_int[2][SongLoadTJA_Line_Max];
int TJA_Song_Load_MEASURE_Line_int2[2][SongLoadTJA_Line_Max];

int TJA_Song_Load_MEASURE_Line_M[2];
int TJA_Song_Load_MEASURE_Line_M2[2];
int TJA_Song_Load_MEASURE_Line_M_[2];
int TJA_Song_Load_MEASURE_Line_int_cnt[2];
int TJA_Song_Load_MEASURE_Line_int_cnt_P[2];
int TJA_Song_Load_MEASURE_Line_NN[2];
int TJA_Song_Load_MEASURE_Line_NN_ALL[2][2];//Id,3
int TJA_Song_Load_MEASURE_Line_NN_ALL_gcd[2][2];//Id,3


string TJA_Song_Load_MEASURE_Line_NN_ALL_string[2][2];
string TJA_Song_Load_MEASURE_Line_NN_ALL_string1[2][2];





int Song_TJA_Lines[2];//行数の取得(Player_Pos)

int Song_TJA_Lines_cnt;


string Song_TJA_sprintf_Put_Line_S;
const int Song_TJA_Commands_Max = 15;//コマンドの数
string Song_TJA_Commands_Str[Song_TJA_Commands_Max] = { "#BPMCHANGE" , "#GOGOSTART" ,"#GOGOEND" , "#MEASURE" , "#SCROLL" , "#DERAY" , "#SECTION" , "#BRANCHSTART" , "#BRANCHEND" , "#N" , "#E" , "#M" , "#LEVELHOLD" , "#BARLINEOFF" , "#BARLINEON" };
int Song_TJA_Commands_Str_length[Song_TJA_Commands_Max] = { 10, 10, 8,8,7,6,8,12,10,2,2,2,10,11,10 };
int Song_TJA_Commands_cnt;


bool TJA_Load_BARLINE_Flug;//小節線を隠すか
bool TJA_Load_BRANCHSTART_Flug;//#BRANCHSTARTが書かれているか

//Loaded
bool Play_Song_Play_BPM_Loaded;
bool Play_Song_Play_MEASURE_Loaded;
bool Play_Song_Play_OFFSET_Loaded;


//Ptja_Loading
int Ptja_Loading_Ms_length;
int Ptja_Loading_Ms_length2;

bool Ptja_Loading_BARLINE1_Flug[2];
bool Ptja_Loading_BARLINE_Flug[2] = { TRUE , TRUE};//BARLINE読み込み
int Ptja_Loading_Ms_B[2] = { 0,0 };//譜面データ読み込み(分岐)
double Ptja_Loading_SCROLL[2] = { 1.0 , 1.0 };//SCROLL読み込み
double Ptja_Loading_BPM[2] = { 120.0 , 120.0 };//BPM読み込み
bool Ptja_Loading_GOGO_Flug[2] = { FALSE , FALSE };//GOGO読み込み
bool Ptja_Loading_SECTION_Flug[2] = { FALSE , FALSE };//SECTION読み込み
bool Ptja_Loading_BRANCHSTART_Flug[2] = { FALSE , FALSE };//BRANCHSTART読み込み
bool Ptja_Loading_BRANCHEND_Flug[2] = { FALSE , FALSE };//BRANCHEND読み込み
bool Ptja_Loading_BRANCHSTART_Flug2[2];//printf用
bool Ptja_Loading_BRANCHSTART_Flug3[2];//分岐中か

bool Ptja_Loading_LEVELHOLD_Flug[2] = { FALSE , FALSE };//LEVELHOLD読み込み

double Ptja_DERAY_BPM_0 = 120.0;




//譜面分岐情報
const int BRANCH_Max = 1000;//譜面分岐設定が可能な回数

int Ptja_Loading_BRANCHSTART_string_cnt[2];
int Ptja_Loading_BRANCHSTART_string_comma[2];

string Ptja_Loading_BRANCHSTART_string[2];
string Ptja_Loading_BRANCHSTART_string_Plus[2];
string Ptja_Loading_BRANCHSTART_string_Plus2[2];
string Ptja_Loading_BRANCHSTART_string1[2];
int Ptja_Loading_BRANCHSTART_length[2];
int Ptja_Loading_BRANCHSTART_string_lengthCount[2];

int Ptja_Loading_BRANCHSTART_cnt[2];



string Ptja_Loading_BPM_str_2P;

//MEASURE読み込み
string Ptja_Loading_MEASURE_string_A[2];
string Ptja_Loading_MEASURE_string_Plus[2];
string Ptja_Loading_MEASURE_string[2][2] = {{ "4" , "4" }, { "4","4" }};
string Ptja_Loading_MEASURE_string_1[2];
int Ptja_Loading_MEASURE_string_length[2];
int Ptja_Loading_Command_string_length[2];
int Ptja_Loading_Line_Number_Count;//小節カウント
int Ptja_Loading_Line_BRANCH_Count[2];//譜面分岐する回数
int Ptja_Loading_Line_BRANCH_Line_Count[2];//譜面分岐上の小節カウント
int Ptja_Loading_Line_BRANCHON_Line_Count[2];//見える小節線のカウント
int Ptja_Loading_Line_BRANCH_Line_Count_Save[2][SongLoadTJA_Line_Max];//小節数保存


int Ptja_Loading_Line_Number_Count2P;




double Ptja_Loading_BRANCHSTART[2][3][BRANCH_Max]; //譜面分岐情報[Player_ID][普通,玄人,達人][BRANCHSTART_ID]
int Ptja_Loading_BRANCHSTART_Info[2][BRANCH_Max];//譜面分岐条件情報[Player_ID][BRANCHSTART_ID] = 0:p 1:r 2:s 3:c 4:g 
int Ptja_Loading_Save_3BRANCH_All[2];




//PlaySong
string Play_Song_Play_Ms_string[2][3][SongLoadTJA_Line_Max];//譜面データ格納(string)[Player_ID][MsID(0:#N 1:#E 2:#M)][小節]

int Play_Song_Play_Ms[2][3][SongLoadTJA_Line_Max];//譜面データ格納[Player_ID][MsID(0:#N 1:#E 2:#M)][小節]
int Play_Song_Play_Ms_length[2][3][SongLoadTJA_Line_Max];//譜面データの密度[Player_ID][MsID(0:#N 1:#E 2:#M)][小節]


int Play_Song_Play_M;//音源
int Play_Song_Play_Lines[2];//小節数
int Play_Song_Play_Lines_BARLINE[2];//小節数(BARLINEOFFで指定された小節線含む)

double Play_Song_Play_BPM[2][3][SongLoadTJA_Line_Max];//BPM[Player_ID][MsID][小節]
int Play_Song_Play_MEASURE[2][3][SongLoadTJA_Line_Max][2];//MEASURE[Player_ID][MsID][小節][分子/分母]
double Play_Song_Play_SCROLL[2][3][SongLoadTJA_Line_Max];//SCROLL[Player_ID][MsID][小節]
bool Play_Song_Play_BARLINE[2][3][SongLoadTJA_Line_Max];//BARLINE[Player_ID][MsID][小節]
bool Play_Song_Play_GOGO[2][3][SongLoadTJA_Line_Max];//GOGO[Player_ID][MsID][小節]
bool Play_Song_Play_GOGOSTART[2][3][SongLoadTJA_Line_Max];//GOGO[Player_ID][MsID][小節]
bool Play_Song_Play_GOGOEND[2][3][SongLoadTJA_Line_Max];//GOGO[Player_ID][MsID][小節]


bool Play_Song_Play_BRANCHSTART[2][3][SongLoadTJA_Line_Max];//BRANCHSTART[Player_ID][MsID][小節]
int Play_Song_Play_BRANCHSTART_Info[2][3][SongLoadTJA_Line_Max];//BRANCHSTART_Info[Player_ID][MsID][小節]
double Play_Song_Play_BRANCHSTART_Info_double[2][3][SongLoadTJA_Line_Max];//BRANCHSTART_Info_double[Player_ID][普通譜面、玄人譜面、達人譜面][小節]
double Play_Song_Play_LineMoveTime[2][3][SongLoadTJA_Line_Max];//小節が移動しきる時間[Player_ID][普通譜面、玄人譜面、達人譜面][小節]
double Play_Song_Play_LineMoveTime_SCROLL[2][3][SongLoadTJA_Line_Max];//小節が移動しきる時間(*SCROLL)[Player_ID][普通譜面、玄人譜面、達人譜面][小節]
double Play_Song_Play_LineMoveTime_SCROLL1[2][3][SongLoadTJA_Line_Max];//小節が移動しきる時間(*SCROLL)[Player_ID][普通譜面、玄人譜面、達人譜面][小節]

double Play_Song_Play_LineDisplayTime_Plus[2][3][SongLoadTJA_Line_Max];//小節が表示される時間[Player_ID][普通譜面、玄人譜面、達人譜面][小節]
double Play_Song_Play_LineDisplayTime[2][3][SongLoadTJA_Line_Max];//小節が表示される時間[Player_ID][普通譜面、玄人譜面、達人譜面][小節]

double Play_Song_Play_Line_Flame_Center_Time[2][3][SongLoadTJA_Line_Max];//小節が判定枠の中心に表示される時間[Player_ID][普通譜面、玄人譜面、達人譜面][小節]

double _PlaySong_Line_F_C_Pos = 1650.0;


double Play_Song_Play_BPM_1[2][3][SongLoadTJA_Line_Max];//1拍にかかる時間
double Play_Song_Play_BPM_MEASURE_1[2][3][SongLoadTJA_Line_Max];//一小節

double Play_Song_Play_BPM_Notes_1_Timer[2]; 
int Play_Song_Play_BPM_Notes_1_cnt[2];//カウント


bool Play_Song_Play_BRANCHEND[2][3][SongLoadTJA_Line_Max];//BRANCHEND[Player_ID][MsID][小節]
bool Play_Song_Play_SECTION[2][3][SongLoadTJA_Line_Max];//SECTION[Player_ID][MsID][小節]
bool Play_Song_Play_LEVELHOLD[2][3][SongLoadTJA_Line_Max];//LEVELHOLD[Player_ID][MsID][小節]

int Play_Song_Play_BRANCHSTART_string_cnt[2];

double PlaySong_BarLine_Moveing_cnt_C;

int Play_Song_Play_MaxScore[5];//天井スコア
int Play_Song_Play_PlusScore[2][2];//1コンボ当たりのスコア(PlayerID,良、可)
int Play_Song_Play_Combo_Ncnt;//コンボカウント
int Play_Song_Play_Combo_N[2];//コンボ数


double LineSpace_Save_test[2][2];
string TJAINFO_FILESAVE_TEST_Plus;
string TJAINFO_FILESAVE_TEST;




int Play_Song_Play_TJA_COURSE_Count;
bool Play_Song_Play_TJA_MAXSCORE_FIND;
bool Play_Song_Play_TJA_MAXSCORE_FINDed[5];


string Play_Song_Play_PlusScore_Str;//算出用
int Play_Song_Play_PlusScore_Str2;

//どんちゃんとか
double TJA_Loaded_Lame_ALPHA = 255.0;
int TJA_Loaded_Lame_ALPHA_cnt;
double TJA_Loaded_Lame_ALPHA_cnt_d;
double TJA_Loaded_Lame_ALPHA_cnt_d2;

double TJA_Loaded_IMG_9196_ALPHA = 255.0;
int TJA_Loaded_IMG_9196_ALPHA_cnt;
double TJA_Loaded_IMG_9196_ALPHA_cnt_d;
double TJA_Loaded_IMG_9196_ALPHA_cnt_d2;

double TJA_Loaded_BackWhite_PosX = 0.0;
double TJA_Loaded_BackWhite_PosY = 0.0;
int TJA_Loaded_BackWhite_Pos_cnt;
double TJA_Loaded_BackWhite_Pos_cnt_d;
double TJA_Loaded_BackWhite_Pos_cnt_d2;

double TJA_Loaded_To_PlaySong_Open_PosX;
int TJA_Loaded_To_PlaySong_Open_PosX_cnt;
double TJA_Loaded_To_PlaySong_Open_PosX_cnt_d;
double TJA_Loaded_To_PlaySong_Open_PosX_cnt_d2;

double TJA_Loaded_To_PlaySong_DonChan_PosY;
int TJA_Loaded_To_PlaySong_DonChan_PosY_cnt;
double TJA_Loaded_To_PlaySong_DonChan_PosY_cnt_d;
double TJA_Loaded_To_PlaySong_DonChan_PosY_cnt_d2;

double TJA_Loaded_To_PlaySong_DonChan_2PosY;
int TJA_Loaded_To_PlaySong_DonChan_2PosY_cnt;
double TJA_Loaded_To_PlaySong_DonChan_2PosY_cnt_d;
double TJA_Loaded_To_PlaySong_DonChan_2PosY_cnt_d2;

double TJA_Loaded_DonChan_ALPHA = 255.0;
int TJA_Loaded_DonChan_ALPHA_cnt;
double TJA_Loaded_DonChan_ALPHA_cnt_d;
double TJA_Loaded_DonChan_ALPHA_cnt_d2;

bool TJA_Loaded_To_PlaySong_Timer1_Check;
long long TJA_Loaded_To_PlaySong_Timer1_cnt[3];

double TJA_Loaded_To_PlaySong_Timer1_1 = 60.0;
double TJA_Loaded_To_PlaySong_Timer1_2 = 150.0;
double TJA_Loaded_To_PlaySong_Timer1_3 = 310.0;
double TJA_Loaded_To_PlaySong_Timer1_3_2 = 560.0;
double TJA_Loaded_To_PlaySong_Timer1_4 = 810.0;


bool TJA_Loaded_To_PlaySong_Timer1_NULL_Check;//0~60
bool TJA_Loaded_To_PlaySong_Timer1_1_Check;//60~150
bool TJA_Loaded_To_PlaySong_Timer1_2_Check;//150~310
bool TJA_Loaded_To_PlaySong_Timer1_3_Check;//310~810








//画像描写
double PlaySong_Lane_ALPHA = 255.0;//レーンとかの透明度
double PlaySong_Gauge_Line_ALPHA = 85.0;//Lineの透明度
double PlaySong_DonChan_ALPHA = 255.0;//どんちゃんの透明度
bool PlaySong_DrawBackGround = TRUE;

int PlaySong_DonChan_Pic_cnt[2];
double PlaySong_DonChan_Pic_cnt_d[2];
double PlaySong_DonChan_Pic_cnt_d2[2];
string PlaySong_DonChan_Pic_Pass[2];

bool PlaySong_DonChan_Pic0_cnt_Check;
long long PlaySong_DonChan_Pic0_Timer_cnt[3];
double PlaySong_DonChan_Pic0_Start_Timer_cnt[3];//
double PlaySong_DonChan_Pic0_Start_Timer_cnt2[3];//
long long int PlaySong_DonChan_Pic0_Start_Timer_cnt3[3];//


double PlaySong_Song_Playing_Timer_cnt[3];
double PlaySong_Song_Playing_Timer_cnt2[3];
double PlaySong_Song_Playing_Timer_cnt2_dd[3];
double PlaySong_Song_Playing_Timer_cnt2_2;
string Play_Song_Play_BPM_1_string;
int Play_Song_Play_BPM_1_cnt;

double PlaySong_Song_Playing_Timer_cnt_2P[3];
double PlaySong_Song_Playing_Timer_cnt2_2P[3];
double PlaySong_Song_Playing_Timer_cnt2_dd_2P[3];

double PlaySong_Song_Playing_Timer_cnt2_2_2P;


int PlaySong_Song_Playing_Timer_cnt2_int[2];





string Play_Song_Play_BPM_1_string_2P;
int Play_Song_Play_BPM_1_cnt_2P;

//グラデーション
bool _PlaySong_Lane_G_Check[2] = { FALSE , FALSE};
bool _PlaySong_Lane_G_Timer1_NULL_Check[2] = { FALSE , FALSE };
bool _PlaySong_Lane_G_Timer1_1_Check[2] = { FALSE , FALSE };
double _PlaySong_Lane_G_Timer1_cnt[2][3];

double _PlaySong_Lane_G_Timer1_1 = 60.0;
double _PlaySong_Lane_G_Timer1_2 = 130.0;
double _PlaySong_Lane_G_ALPHA[2] = {0 , 0};
int _PlaySong_Lane_G_ALPHA_cnt[2];
double _PlaySong_Lane_G_ALPHA_cnt_d[2];
double _PlaySong_Lane_G_ALPHA_cnt_d2[2];
int _PlaySong_Lane_G_ID[2];//(0:左ドン 1:右ドン 2:左カッ 3:右カッ)

//Taiko
bool _PlaySong_Taiko_M_Check[2][4];
double _PlaySong_Taiko_M_ALPHA[2][4];
int _PlaySong_Taiko_M_ALPHA_cnt[2][4]; 
double _PlaySong_Taiko_M_ALPHA_cnt_d[2][4];
double _PlaySong_Taiko_M_ALPHA_cnt_d2[2][4];
double  _PlaySong_Taiko_M_Timer[2][3][4];

//コンボ数表示用
bool _PlaySong_Taiko_Combo_Animation_Flug[2];
bool _PlaySong_Taiko_Combo_Animation_Flug2[2];

double _PlaySong_Taiko_Combo_Animation_Pos_PlusX_Default[2] = { 8.0, 8.0};

double _PlaySong_Taiko_Combo_Animation_Pos_PlusX[2];
int _PlaySong_Taiko_Combo_Animation_PosX_cnt[2];
double _PlaySong_Taiko_Combo_Animation_PosX_cnt_d[2];
double _PlaySong_Taiko_Combo_Animation_PosX_cnt_d2[2];

double _PlaySong_Taiko_Combo_Animation_Timer1_1 = 16.0;
double _PlaySong_Taiko_Combo_Animation_Timer1_2 = 116.0;
double _PlaySong_Taiko_Combo_Animation_Timer1_cnt[2][3];






//値設定
double PlaySong_Set_BPM[2] = { 0,0 };//BPM
int PlaySong_Set_MEASURE[2][2] = { {4,4},{4,4} };//MEASURE[PlayerID][分子分母]
double PlaySong_Set_SCROLL[2] = { 1.0 , 1.0 };//SCROLL
bool PlaySong_Set_BARLINE[2] = { TRUE,TRUE };//BARLINE
bool PlaySong_Set_GOGO[2] = { FALSE,FALSE };//GOGO
double PlaySong_Set_OFFSET = 0.0;
double PlaySong_Set_OFFSET_Plus = 450.0;

double PlaySong_Set_BPM_1[2] = { 60000.0 / 60.0,60000.0 / 60.0 };//1拍間に経過する時間
double PlaySong_Set_BPM_LineMoveTime_1Line[2] = { 2020.0 , 2020.0};
double PlaySong_Set_BPM_LineMoveTime_1Line_SCROLL[2] = {2020.0 , 2020.0};
double PlaySong_Set_PlaySong_Timer = 0.0;
double PlaySong_Set_PlaySong_Timer2 = 0.0;
double PlaySong_Set_PlaySong_Timer_Plus_OFFSET = 0.0;

bool PlaySong_PlaySong_Check;//曲が再生されたか
bool PlaySong_PlaySong_Check_P;//曲が再生されたか(OFFSETが正の時)

bool PlaySong_OFFSET_Counted_Check = FALSE;
bool PlaySong_OFFSET_Counted_Check_2P = FALSE;


int PlaySong_NowLine[2];//BARLINEOFFを含めた小節をカウント
int PlaySong_NowLine_BARLINEON[2];//BARLINEONのみカウント
int PlaySong_NowBRANCH[2];

int PlaySong_Line_Display_cnt[2];


double PlaySong_BPMTimer_cnt_d;
double PlaySong_BPMTimer_cnt;

double PlaySong_BPMTimer_cnt_d_2P;
double PlaySong_BPMTimer_cnt_2P;


double PlaySong_Notes_Flame_Center_PosX[2] = { 616, 616 };//判定枠の中心(X)
double PlaySong_Notes_Flame_Center_PosY[2] = { 288, 552 };//判定枠の中心(Y)

double PlaySong_BarLine_Moveing_PosX[2][3][SongLoadTJA_Line_Max];
int PlaySong_BarLine_Moveing_cnt[2][3][SongLoadTJA_Line_Max];
double PlaySong_BarLine_Moveing_cnt_d[2][3][SongLoadTJA_Line_Max];
double PlaySong_BarLine_Moveing_cnt_d2[2][3][SongLoadTJA_Line_Max];
bool PlaySong_BarLine_Moveing_cnt_d_Check[2][3][SongLoadTJA_Line_Max];
double _PlaySong_BarLine_Moveing_cnt_d = 0.0;
double _PlaySong_BarLine_Moveing_cnt_d_Plus = 0.0;






bool PlaySong_BARLINEOFF_Visualization = FALSE;//BARLINEOFFで指定された小節線を可視化するか

double _PlaySong_Notes_Move_Start_Timer = 2630.0;
double _PlaySong_Notes_PicX = 350.0;
double _PlaySong_Notes_PicX_Timer_Plus = 30000.0;
double _PlaySong_Notes_CalculationX_Timer_Plus = 30000.0;


//譜面制御
const int Play_Song_Play_Ms_string_Notes_ = 500;//一小節におさまるノーツの最大数
const int Play_Song_Play_Ms_string_Rolls = 10000;//連打ノーツの最大数
string Play_Song_Play_Ms_string_Notes1[Play_Song_Play_Ms_string_Notes_];//ノーツstr
string Play_Song_Play_Ms_string_Playing_Notes1[2];//ノーツstr

bool Play_Song_Play_BPM_Notes_1_cnt_Check[2][Play_Song_Play_Ms_string_Notes_];

double PlaySong_Notes16_Space_Default = 88.375;

double PlaySong_Line_Space_Default = 1411.0;
double PlaySong_Notes_Space_Default = 1411.0;

double PlaySong_Line_Space = 1411.0;
double PlaySong_Notes_Space = 1411.0;
double PlaySong_NotesMax_Space_Default = PlaySong_Line_Space_Default / Play_Song_Play_Ms_string_Notes_;


double PlaySong_Notes_1_Timer_Set = 0.0;
double PlaySong_Notes_1_Timer_cnt[3];
double PlaySong_Notes_Timer_Di[2][3][SongLoadTJA_Line_Max];//時間差

bool PlaySong_Roll_End_Finding_Flug = FALSE;
int PlaySong_Roll_End_Finding_Line_cnt = 0;//行カウント
int PlaySong_Roll_End_Finding_str_cnt = 0;//文字カウント
string PlaySong_Roll_End_Finding_str1 = "";//文字

int PlaySong_Roll_End_Finding_str_length = 0;//行の文字数
int PlaySong_Roll_End_Finding_Roll_Pic_cnt = 0;//画像

int PlaySong_Roll_End_Finding_Roll_Pic_cnt0 = 0;//画像
double PlaySong_Roll_End_Finding_Roll_Pic_PosX;
double PlaySong_Roll_End_Finding_Roll_Pic_PosX_Plus;
double PlaySong_Line_Space_Roll = 1411.0;
double PlaySong_Notes_Space_Roll = 1411.0;
bool _CDon = FALSE;

bool PlaySong_BRANCHing_Check[2];//分岐中


bool PlaySong_Rolling_Check[2];//連打中
bool PlaySong_Rolling_Check_Big[2];//大連打か
bool PlaySong_Balloon_Rolling_Check[2];//連打中(風船)
int PlaySong_Balloon_Rolling_Line[2][Play_Song_Play_Ms_string_Rolls];//連打が始まる小節(風船)
int PlaySong_Balloon_Rolling_NotesID[2][Play_Song_Play_Ms_string_Rolls];//連打が始まるノーツ(風船)
int PlaySong_Balloon_Rolling_NowLine[2];
int PlaySong_Balloon_Rolling_NowNotesID[2];
double PlaySong_Balloon_Rolled_PosX_Plus[2][Play_Song_Play_Ms_string_Rolls];
double PlaySong_Balloon_Rolled_PosX_Plus2[2];
double PlaySong_Balloon_Rolled_PosX_Plus2_save[2];

double PlaySong_Balloon_Rolled_PosX_Plus_Position[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];
double PlaySong_Notes_Position[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];


int PlaySong_Balloon_Rolled_PosX_cnt[2];
int PlaySong_Balloon_Rolled_cnt[2];
int PlaySong_Balloon_Rolled_cnt_save[2];
int PlaySong_Balloon_Rolled_cnt2[2];
bool PlaySong_Balloon_Roll______Check[2];

bool PlaySong_Kusu_Rolling_Check[2];//連打中(くす玉)

double PlaySong_Timer2______ = 1.0;

int Play_Song_Balloon_Notes_Line[2][Play_Song_Play_Ms_string_Rolls];//風船ノーツのが表示されている小節
int Play_Song_Balloon_Notes_Line_N[2][Play_Song_Play_Ms_string_Rolls];//風船ノーツの位置
int Play_Song_Balloon_Notes_Line_B[2][Play_Song_Play_Ms_string_Rolls];//風船ノーツがある分岐
int Play_Song_Balloons[2];//風船ノーツの数



int Play_Song_Balloon_Number_[2][Play_Song_Play_Ms_string_Rolls];//風船ノーツの連打数記録(初期値5)
int Play_Song_Balloon_Number_2;//風船ノーツカウント
int Play_Song_Balloon_Number_intcnt;//計算用
string Play_Song_Balloon_Number_str1;//
string Play_Song_Balloon_Number_strPlus;
bool Play_Song_Balloon_Number_intcnt_flug;



double PlaySong_KeyInput_Time_Dong_Left[2];
bool PlaySong_KeyInput_Time_Dong_Left_Check[2];
double PlaySong_KeyInput_Time_Dong_Right[2];
bool PlaySong_KeyInput_Time_Dong_Right_Check[2];

double PlaySong_KeyInput_Time_Ka_Left[2];
bool PlaySong_KeyInput_Time_Ka_Left_Check[2];
double PlaySong_KeyInput_Time_Ka_Right[2];
bool PlaySong_KeyInput_Time_Ka_Right_Check[2];


double PlaySong_KeyInput_Time_ALL_NUM;


double PlaySong_KeyInput_Time_Plus[2];
double PlaySong_Notes1_Time_MM[2];
double PlaySong_Notes1_Time_MM2[2];

double PlaySong_Music_Started_Time_P;//曲が再生された時間
double PlaySong_Set_PlaySong_Timer_Plus_OFFSET_Playing;//計算用
double PlaySong_Set_PlaySong_Timer_Plus_OFFSET_Playing_Timer2[2];//計算用2

int PlaySong_Test_J[2];//判定テスト(0:無 1:不可 2:可 3:良)
double Play_Song_Play_BPM_Notes_1_cnt_N[2];//計算用
double Play_Song_Play_BPM_Notes_1_cnt_NBPM[2];//計算用

int Play_Song_Play_BPM_Notes_1_cnt_N_cnt[2];//計算用ノーツカウント
int Play_Song_Play_BPM_Notes_1_cnt_N_Line[2];//計算用小節カウント
string Play_Song_Play_BPM_Notes_1_cnt_N_string[2][Play_Song_Play_Ms_string_Notes_];//ノーツ保存

int Play_Song_Play_BPM_Notes_1_cnt_N_cnt_save[2];//計算用ノーツ保存
int Play_Song_Play_BPM_Notes_1_cnt_N_Line_save[2];//計算用小節保存

int Play_Song_Play_BPM_Notes_1_cnt_N_cnt2[2];//見つけたノーツをカウントする用
int Play_Song_Play_BPM_Notes_1_cnt_N_cnt3[2];//見つけたノーツをカウントする用2
int Play_Song_Play_BPM_Notes_1_cnt_N_cnt3_save[2];//見つけたノーツをカウントする用2

double Play_Song_KeyInput_Notes_Find_Time[2];//見つけたときの時間
bool Play_Song_KeyInput_Notes_Find_Flug[2];//見つけた


double PlaySong_J_PlusTime = 0.0;
double PlaySong_J_PlusTime2 = 0.0;
bool PlaySong_J_PlusTime2_Flug = TRUE;
double PlaySong_J_PlusTime3[2] = { 0.0 , 0.0};//差
bool PlaySong_Music_CurrentTime;



int TJA_P_Combo_3[2][3];//コンボ数






//演奏情報
bool PlaySong_Notes_Hide_Flug[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//ノーツを非表示にするか
bool PlaySong_Notes_J_Flug[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定されたか
int PlaySong_Notes_J_Info[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定(0:無 1:不可 2:可 3:良)
bool PlaySong_Notes_Hited_Animation_Flug[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーションを行うか

bool PlaySong_Notes_Hited_Animation_Timer_Set[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーション用タイマーセット
bool PlaySong_Notes_J_Flug_0_break;

double PlaySong_Notes_Hited_Animation_Timer1_cnt[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_][3];//判定アニメーション用タイマー
int PlaySong_Notes_Hited_Animation_Poscnt[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーション用カウント
double PlaySong_Notes_Hited_Animation_Poscnt_d[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーション用カウント
double PlaySong_Notes_Hited_Animation_Poscnt_d2[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーション用カウント
double PlaySong_Notes_Hited_Animation_PosY[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//判定アニメーション用座標

bool PlaySong_Notes_Hited_Animations_J[2];
string PlaySong_Notes_Hited_Animations_J_Str[2];
//判定アニメーション(花火)
double PlaySong_Notes_Hited_Animation2_Timer[2][3];//判定アニメーション(花火)を行うか(タイマー)
int PlaySong_Notes_Hited_Animation2_J[2];//判定アニメーション(花火)を行うか(判定)
string PlaySong_Notes_Hited_Animation2_Str[2];//判定アニメーション(花火)を行うか(どのノーツが判定されたか)


//花火表示
double PlaySong_Notes_Hited_Animation2_Timer1_1 = 60.0;
double PlaySong_Notes_Hited_Animation2_Timer1_2 = 310.0;
double PlaySong_Notes_Hited_Animation2_Timer2_1 = 0.0;
double PlaySong_Notes_Hited_Animation2_Timer2_2 = 130.0;


double PlaySong_Notes_Hited_Animation2_Timer_TestM1_check;
double PlaySong_Notes_Hited_Animation2_Timer_TestM1_cnt[3];
double PlaySong_Notes_Hited_Animation2_Timer_TestM1_1 = 500.0;
double PlaySong_Notes_Hited_Animation2_Timer_TestM1_2 = 800.0;
double PlaySong_Notes_Hited_Animation2_Timer_TestM = 0.0;
double PlaySong_Notes_Hited_Animation2_Timer_TestX = 0.0;
double PlaySong_Notes_Hited_Animation2_Timer_TestY = 0.0;
//NotesFly
const int PlaySong_NotesFly_NotesHited_cnt_Max = 500;
bool PlaySong_NotesFly_NotesHit_Check;
int PlaySong_NotesFly_NotesHited_ID;//(0:小ノーツ(ドン)  1:小ノーツ(カッ)  2:大ノーツ(ドン)  3:大ノーツ(カッ) 4:3:大ノーツ(虹))
int PlaySong_NotesFly_NotesHited_cnt[2];
double PlaySong_NotesFly_NotesHited_Timer_cnt[2][3][PlaySong_NotesFly_NotesHited_cnt_Max];//タイマー
bool PlaySong_NotesFly_NotesHited_Timer_cnt_Check[2][PlaySong_NotesFly_NotesHited_cnt_Max];//タイマーが動いているか
int PlaySong_NotesFly_NotesHited_Timer_ID[2][PlaySong_NotesFly_NotesHited_cnt_Max];//ID
//小
double PlaySong_Notes_Hited_Animation3_Timer1_1 = 500.0;
double PlaySong_Notes_Hited_Animation3_Timer1_2 = 650.0;
double PlaySong_Notes_Hited_Animation3_Timer1_3 = 800.0;
//大
double PlaySong_Notes_Hited_Animation3_Timer2_1 = 80.0;//初
double PlaySong_Notes_Hited_Animation3_Timer2_2 = 52.0;//間隔
//NotesFlyEffect
double PlaySong_Notes_Hited_Animation3_Timer3_1 = 530.0;//
double PlaySong_Notes_Hited_Animation3_Timer3_2 = 710.0;//
double PlaySong_Notes_Hited_Animation3_Timer3_3 = 780.0;//






//GoGoFire
double PlaySong_GoGoFire_Timer1_1 = 50.0;//Fire1
double PlaySong_GoGoFire_Timer1_2 = 310.0;//Fire2
double PlaySong_GoGoFire_Timer2_1 = 50.0;//Lane
double PlaySong_GoGoFire_Timer3_1 = 250.0;//all
//Lane
double PlaySong_GoGoLane_Timer1_1 = 50.0;//all
double PlaySong_GoGoLane_Timer1_2 = 130.0;//all



double PlaySong_GoGoFire_Timer1_cnt[2][3];//
double PlaySong_GoGoFire_Timer3_cnt[2][3];//

bool PlaySong_Fire_IN_Check[2];

int ADD_PLUS;





//判定表示
double PlaySong_Notes_Hited_Animation_Timer1_1 = 16.0;
double PlaySong_Notes_Hited_Animation_Timer1_2 = 80.0;
double PlaySong_Notes_Hited_Animation_Timer1_3 = 230.0;
double PlaySong_Notes_Hited_Animation_Timer1_4 = 310.0;


double PlaySong_Play_Perfect[2];//精度(合計)
int PlaySong_Play_Roll[2];//合計連打数
int PlaySong_Play_Combo[2];//コンボ
int PlaySong_Play_Combo_Max[2];//最大コンボ数
int PlaySong_Play_Score[2];//スコア
int PlaySong_Play_J[2][3];//不可、可、良の数
int PlaySong_Play_GaugeScore_1[2];//1コンボ当たりのゲージ点数(点)
int PlaySong_Play_GaugeScore_1_[2][3];//1コンボ当たりのゲージ点数(点)

int PlaySong_Play_GaugeScore[2];//ゲージ点数(点)
double PlaySong_Play_Gauge[2];//ゲージの量(%)
int PlaySong_Play_Ts[2];//叩けた数
double PlaySong_JBad_T_Time = 100.0;

int PlaySong_Roll_Now[2] = { 0, 0 };//現在の連打数(ノーツID:5,6)
int PlaySong_Roll_1[2] = { 0, 0 };//一個前の連打数(ノーツID:5,6)

bool PlaySong_Roll_Timer_Start[2] = { FALSE, FALSE };//一個前の連打数(ノーツID:5,6)
int PlaySong_Roll_Display[2] = { 0, 0 };//扇子の中に表示する連打数

double PlaySong_Roll_Uchiwa_Animation_Timer1_cnt[2][3];
double PlaySong_Roll_Uchiwa_Animation_Timer1_1 = 0.0;
double PlaySong_Roll_Uchiwa_Animation_Timer1_2 = 32.0;//扇子フェードイン終了
double PlaySong_Roll_Uchiwa_Animation_Timer1_3 = 64.0;//扇子を開き始める
double PlaySong_Roll_Uchiwa_Animation_Timer1_4 = 130.0;//扇子を開き終える&連打数フェードイン開始
double PlaySong_Roll_Uchiwa_Animation_Timer1_5 = 200.0;//連打数フェードイン終了

double PlaySong_Roll_Uchiwa_Animation_Timer2_cnt[2][3];
bool PlaySong_Roll_Uchiwa_Animation_Timer2_Check[2] = { FALSE, FALSE };
double PlaySong_Roll_Uchiwa_Animation_Timer2_1 = 1360.0;//連打終了してから待機
double PlaySong_Roll_Uchiwa_Animation_Timer2_2 = 1450.0;//連打数フェードアウト終了&扇子を閉じ始める
double PlaySong_Roll_Uchiwa_Animation_Timer2_3 = 1510.0;//扇子を閉じ終える&扇子フェードアウト開始
double PlaySong_Roll_Uchiwa_Animation_Timer2_4 = 1560.0;//扇子フェードアウト終了

double PlaySong_Roll_Uchiwa_Animation_Timer3_cnt[2][3];
double PlaySong_Roll_Uchiwa_Animation_Timer3_1 = 32.0;//山
double PlaySong_Roll_Uchiwa_Animation_Timer3_2 = 132.0;//





double PlaySong_Play_GaugeScore_Magnification[5] = { 0.666665,0.702955,0.733235,0.74986,0.74986 };
double PlaySong_Play_GaugeScore_Magnification2[5] = { 0.75,0.75,0.75,0.5,0.5 };
double PlaySong_Play_GaugeScore_Magnification3[5] = { -0.5,-0.75,-0.975,-1.8,-1.8 };
int PlaySong_Play_GaugeScore_TJA[5] = { -1 ,-1 ,-1 ,-1 ,-1 };
int PlaySong_Play_Gauge_Clear[5] = { 60 ,70 ,70 ,80 ,80 };





int PlaySong_Play_Combo_Length[2];//コンボ数の桁
int PlaySong_Play_BRANCH_States[2][SongLoadTJA_Line_Max];//進行状況記録(0:普通譜面 1:玄人譜面 2:達人譜面)
int PlaySong_Play_BRANCH_States_Edit[2];
int PlaySong_Play_BRANCH_States_Edit2[2];

bool PlaySong_Play_BRANCH_Changed_Check[2];//譜面進行状況を変更したか
bool PlaySong_Play_BRANCH_Animation_Check[2];//アニメーションを行うか
int PlaySong_Play_BRANCH_Changed_Num[2][2];//

double PlaySong_Play_BRANCH_Animation_Timer1_1 = 16.0;//待機
double PlaySong_Play_BRANCH_Animation_Timer1_2 = 100.0;
double PlaySong_Play_BRANCH_Animation_Timer1_3 = 250.0; 
double PlaySong_Play_BRANCH_Animation_Timer1_4 = 330.0;
double PlaySong_Play_BRANCH_Animation_Timer1_cnt[2][3];
bool PlaySong_Play_BRANCH_Animation_Timer1_Check[2][SongLoadTJA_Line_Max];

int PlaySong_Play_BRANCH_Animation_cnt1[2];
double PlaySong_Play_BRANCH_Animation_cnt1_d[2];
double PlaySong_Play_BRANCH_Animation_cnt1_d2[2]; 
double PlaySong_Play_BRANCH_Animation_PlusY[2];
bool PlaySong_Play_BRANCH_Animation_cnt_iniCheck1[2];
bool PlaySong_Play_BRANCH_Animation_cnt_iniCheck2[2];

double PlaySong_Play_BRANCH_Animation_Alpha[2];

int PlaySong_Play_GAUGE_draw_cnt[2];
bool PlaySong_Play_GAUGE_Animation_Check[2][50];
double PlaySong_Play_GAUGE_Animation_Alpha[2][50];





bool PlaySong_NotesPic_Depicted[2];//画像描写を行ったか

int Play_Song_Play_Data_Roll[2];//連打数記録


//風船ノーツ情報取得
int Play_Song_Ptja_Balloon_Load_cnt;//文字カウント用
int Play_Song_Ptja_Balloon_Load_cnt2;//ID付け用
int Play_Song_Play__Balloon_Start_cnt;







//譜面分岐情報格納用
double PlaySong_Playing_BRANCH_P[2];//精度格納
double PlaySong_Playing_BRANCH_R[2];//連打数格納
double PlaySong_Playing_BRANCH_S[2];//スコア格納
double PlaySong_Playing_BRANCH_C[2];//コンボ格納
double PlaySong_Playing_BRANCH_G[2];//ゲージ量格納
double PlaySong_Playing_BRANCH_T[2];//良の数格納
double PlaySong_Playing_BRANCH_D[2];//可の数格納
double PlaySong_Playing_BRANCH_B[2];//不可の数格納

//Play_Song_Play_LineData[PlayerID][Line]
//小節線ごとに記録を保存
double Play_Song_Play_LineData_BRANCH_P[2][SongLoadTJA_Line_Max];//精度格納
double Play_Song_Play_LineData_BRANCH_R[2][SongLoadTJA_Line_Max];//連打数格納
double Play_Song_Play_LineData_BRANCH_S[2][SongLoadTJA_Line_Max];//スコア格納
double Play_Song_Play_LineData_BRANCH_C[2][SongLoadTJA_Line_Max];//コンボ格納
double Play_Song_Play_LineData_BRANCH_G[2][SongLoadTJA_Line_Max];//ゲージ量格納
double Play_Song_Play_LineData_BRANCH_T[2][SongLoadTJA_Line_Max];//良の数格納
double Play_Song_Play_LineData_BRANCH_D[2][SongLoadTJA_Line_Max];//可の数格納
double Play_Song_Play_LineData_BRANCH_B[2][SongLoadTJA_Line_Max];//不可の数格納

//初期化用
int Play_Song_Play_LineData_BRANCH_J_Great[2];
int Play_Song_Play_LineData_BRANCH_J_Good[2];
int Play_Song_Play_LineData_BRANCH_J_Bad[2];
int Play_Song_Play_LineData_BRANCH_Roll[2];//連打数


//あべこべ
string Load_Inverse_Random_Str1;

string Load_Inverse_Random_Str;
//random
int Load_Random_P[2] = { 20,50 };//
int Load_Random_int;//



//SENotes
int PlaySong_SENotes_ID[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//ID (0:無 1:短音 2:複合 3:コ)
bool PlaySong_SENotes_ID_Seted[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//IDをセットしたか
double PlaySong_SENotes_ID_double[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//次のノーツまでの距離
int PlaySong_SENotes_ID_Seted_BRANCH = 0;
int PlaySong_SENotes_ID_Seted_Player = 0;


int SENotes_Test_Count;
int SENotes_Test_Count2;
int SENotes_Test_Count3;

double SENotes_Length_cnt;
int SENotes_Length_P[2];
double SENotes_Length_P1[3];
double SENotes_Length_P2;//足す
bool SENotes_Length_Check;//ラスト




bool SENotes_Notes_Fined;//ドンが検出されたか
bool SENotes_Notes_Fined2;

bool SENotes_Notes_Composite_Find;
bool SENotes_Notes_Composite_Find_8;//8分が検出されている時
int PlaySong_SENotes_ID_double_8notes[3];//距離が8の時用
bool SENotes_Notes_Composite_Find_17;//17分以上のもの

int SENotes_Notes_Composite_NotesID_;//最新
int SENotes_Notes_Composite_NotesLine_;
double SENotes_Notes_New_Notes_double;//最後に読み込まれたノーツの距離
double SENotes_Notes_New_Notes_double2;

//17分以降は最後にドンは出現しない
int SENotes_Notes_cnt_NotesID_;//最後に読み込んだノーツID特定用
int SENotes_Notes_cnt_NotesLine_;//最後に読み込んだノーツに含まれている小節特定用
int SENotes_Notes_cnt_NotesID;//最後に読み込んだノーツID特定用
int SENotes_Notes_cnt_NotesLine;//最後に読み込んだノーツに含まれている小節特定用
bool SENotes_Notes_cnt_NotsFind;
double SENotes_Play_SCROLL_Save = 1.0;

bool PlaySong_PlayerInfomation_DrawFlug = FALSE;


double _PlaySong_Roll_Average = 18.0;
double _PlaySong_Auto_Roll_Average = 18.0;

double _PlaySong_Auto_Roll_Timer_cnt[2][3];


bool PlaySong_To_SelectSong_PicLoad_Check;
bool _PlaySong_NOW_GOGO[2];//ゴーゴータイム中か


//ノーツ画像
int PlaySong_DonChanNotes_PicChange_PlayerID;

double PlaySong_DonChanNotes_PicChange_Timer1[2][3];
bool PlaySong_DonChanNotes_PicChange_Timer1_Check[2];



//どんちゃん
int PlaySong_DonChan_Pic_GoGo_Started_Pic_Int[2] = { 220,220 };// GoGoStartが終わったときの画像枚数目


bool PlaySong_DonChan_Pic_10combo_Started_Flug[2] = {FALSE ,FALSE};
bool PlaySong_DonChan_Pic_10combo_Max_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Balloon_Breaking_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Balloon_Broke_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Balloon_Miss_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Clear_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Clearin_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_GoGo_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_GoGoStart_Started_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Kusu_In_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Kusu_Loop_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Kusu_Miss_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Miss_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Miss6_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Revival_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Soulin_Started_Flug[2] = { FALSE ,FALSE };
bool PlaySong_DonChan_Pic_Surprised_Started_Flug[2] = { FALSE ,FALSE };

bool PlaySong_DonChan_Pic_10combo_Flug[2] = { FALSE , FALSE};
bool PlaySong_DonChan_Pic_10combo_Max_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Balloon_Breaking_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Balloon_Broke_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Balloon_Miss_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Clear_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Clearin_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_GoGo_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_GoGoStart_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Kusu_In_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Kusu_Loop_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Kusu_Miss_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Miss_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Miss6_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Normal_Flug[2] = { TRUE , TRUE};
bool PlaySong_DonChan_Pic_Soulin_Flug[2] = { FALSE , FALSE };
bool PlaySong_DonChan_Pic_Surprised_Flug[2] = { FALSE , FALSE };

//どんちゃんPic
int PlaySong_DonChan_Miss_Count[2];

bool PlaySong_BalloonTest = FALSE;

//1拍に対する画像の倍率
double PlaySong_DonChan_Pic_10combo_M[2] = { 1.2285714285714285714285714285714 ,1.2285714285714285714285714285714 };
double PlaySong_DonChan_Pic_GoGoStart_M[2] = { 1.9333333333333333333333333333333 ,1.9333333333333333333333333333333 };
double PlaySong_DonChan_Pic_Normal_M[2] = { 4.0 ,4.0 };
double PlaySong_DonChan_Pic_GoGo_M[2] = { 3.9846005774783445620789220404235 ,3.9846005774783445620789220404235 };

int PlaySong_Gauge_P____[2][2];//変化前、変化後のゲージチェック
bool PlaySong_Gauge_P_Animation___UP[2];//ゲージチェック(UP)
bool PlaySong_Gauge_P_Animation___DOWN[2];//ゲージチェック(DOWN)
int PlaySong_Gauge_P_Animation___DOWN_NUMBER[2];//ゲージ減少量

double PlaySong_Gauge_P_Animation_Timer_cnt[2][3];//タイマー
double PlaySong_Gauge_P_Animation_Timer_UP_1 = 50.0;
double PlaySong_Gauge_P_Animation_Timer_UP_2 = 150.0;
double PlaySong_Gauge_P_Animation_Timer_UP_3 = 450.0;
double PlaySong_Gauge_P_Animation_Timer_DOWN_1 = 260.0;
double PlaySong_Gauge_P_Animation_Timer_DOWN_2 = 410.0;

double PlaySong_Gauge_P_Animation_ALPHA[2];


//曲名とか
double PlaySong_Playing_Genre_DisplayTimer1_1 = 510.0;
double PlaySong_Playing_Genre_DisplayTimer1_2 = 1980.0;
double PlaySong_Playing_Genre_DisplayTimer1_3 = 2490.0;
double PlaySong_Playing_Genre_DisplayTimer1_4 = 4470.0;
double PlaySong_Playing_Genre_DisplayTimer1_cnt[3];








//PlaySong_End
double PlaySong_End_Chara_Animation_Start_Timer = 0.0;//曲が終わりキャラが表示される時間
double PlaySong_End_Chara_Animation_Start_Timer_Plus = 1530.0;
double PlaySong_End_Chara_Animation_Start_Timer_T[3];//仮
double PlaySong_End_Chara_Animation_Start_Timer_T2[2];//仮2
bool PlaySong_End_Chara_Animation_Start_Timer_T_bool;




//Chara(0~Charaフェードイン)
double PlaySong_End_Chara_Animation_Timer_1_1 = 200.0;//キャラ移動(加速度移動)
double PlaySong_End_Chara_Animation_Timer_1_2 = 660.0;//キャラ変形1
double PlaySong_End_Chara_Animation_Timer_1_3 = 710.0;//キャラ変形2
double PlaySong_End_Chara_Animation_Timer_1_4 = 800.0;//キャラ画像変更(開始)
double PlaySong_End_Chara_Animation_Timer_1_5 = 1030.0;//キャラ画像変更(終了)

//Miss
double PlaySong_End_Chara_Animation_Timer_2_1 = 200.0;//キャラ移動(加速度移動)
double PlaySong_End_Chara_Animation_Timer_2_2 = 660.0;//キャラ変形1
double PlaySong_End_Chara_Animation_Timer_2_3 = 710.0;//キャラ変形2
double PlaySong_End_Chara_Animation_Timer_2_4 = 800.0;//キャラ画像変更(開始)
double PlaySong_End_Chara_Animation_Timer_2_5 = 1030.0;//キャラ画像変更(終了)

//Full
double PlaySong_End_Chara_Animation_Timer_3_1 = 1150.0;//キャラ変形(加速度)
double PlaySong_End_Chara_Animation_Timer_3_2 = 1260.0;//変形したまま待機
double PlaySong_End_Chara_Animation_Timer_3_3 = 1310.0;//キャラ変形2(加速度)
double PlaySong_End_Chara_Animation_Timer_3_4 = 1660.0;//キャラ移動
double PlaySong_End_Chara_Animation_Timer_3_5 = 2010.0;//キャラ画像変更(終了)

double PlaySong_End_TextWhite_Animation_Timer_Full_1_1 = 1060.0;//テキスト(白フェードイン)
double PlaySong_End_TextWhite_Animation_Timer_Full_1_2 = 1230.0;//テキスト(白フェードイン)
double PlaySong_End_TextWhite_Animation_Timer_Full_1_3 = 1280.0;//テキスト(白フェードイン)
double PlaySong_End_TextWhite_Animation_Timer_Full_1_4 = 1430.0;//テキスト(白フェードイン)




//DondaFull
double PlaySong_End_Chara_Animation_Timer_4_1 = 1150.0;//キャラ変形(加速度)
double PlaySong_End_Chara_Animation_Timer_4_2 = 1260.0;//変形したまま待機
double PlaySong_End_Chara_Animation_Timer_4_3 = 1310.0;//キャラ変形2(加速度)
double PlaySong_End_Chara_Animation_Timer_4_4 = 1660.0;//キャラ移動
double PlaySong_End_Chara_Animation_Timer_4_5 = 2010.0;//キャラ画像変更(終了)

//
double PlaySong_End_Chara_Animation_PosM_4_1;//キャラ変形(加速度)

double PlaySong_End_Chara_Animation_PosX_4_1;//キャラ変形(加速度)
double PlaySong_End_Chara_Animation_PosY_4_1;//キャラ変形(加速度)






//テキスト
double PlaySong_End_Text_Animation_Timer_1_1 = 380.0;//テキストがフェードインまでの時間
double PlaySong_End_Text_Animation_Timer_2_1 = 170.0;//テキストフェードイン、文字変形(中間地点)
double PlaySong_End_Text_Animation_Timer_2_2 = 160.0;//テキストフェードイン、文字変形(中間から終了まで)
double PlaySong_End_Text_Animation_Timer_3_1 = 60.0;//次の文字がフェードインされるまでの間隔

//各条件での時間設定
double PlaySong_End_Etc_Animation_Timer_Clear_1_1 = 1834.0;//星が表示されるまでの時間
double PlaySong_End_Etc_Animation_Timer_Clear_1_2 = 100.0;//次の星が表示されるまでの時間
double PlaySong_End_Etc_Animation_Timer_Clear_2_1 = 160.0;//拡大
double PlaySong_End_Etc_Animation_Timer_Clear_2_2 = 160.0;//フェードアウト

double PlaySong_End_Etc_Animation_Timer_Clear_3_1 = 1080.0;//光フェードイン
double PlaySong_End_Etc_Animation_Timer_Clear_3_2 = 1250.0;//中間地点
double PlaySong_End_Etc_Animation_Timer_Clear_3_3 = 1450.0;//光フェードアウト






//フェードアウト
double PlaySong_End_Fade_Out_Timer_1_1 = 7040.0;//光フェードイン
double PlaySong_End_Fade_Out_Timer_1_2 = 8770.0;//光フェードイン












double PlaySong_End_Etc_Animation_Pos_Clear_1_1[7][2] = { {1175,283},{1359,283},{996,283},{1059,427},{1413,405},{936,400},{1281,427} };//次の星が表示されるまでの時間
double PlaySong_End_Etc_Animation_Pos_Clear_1_1_PlusX;
double PlaySong_End_Etc_Animation_Pos_Clear_1_1_PlusY;
int PlaySong_End_Etc_Animation_Pos_Clear_1_1_cnt;






double PlaySong_End_Chara_Animation_Timer_All_cnt[3];//タイマー

double PlaySong_End_Chara_Animation_Text_Pic_PosX_Plus = 0;
double PlaySong_End_Chara_Animation_Text_Pic_PosY_Plus = 0;

double PlaySong_End_Chara_Animation_Chara_Pic_PosX_Plus = 0;
double PlaySong_End_Chara_Animation_Chara_Pic_PosY_Plus = 0;

bool Sound_S_Clear_Played_Check;

int PlaySong_TJA_Roll_Score_ID;//ID
int PlaySong_TJA_Roll_All_BRANCH_save;
int PlaySong_TJA_Roll_All_BRANCH[2][3][SongLoadTJA_Line_Max][Play_Song_Play_Ms_string_Notes_];//ID
int PlaySong_TJA_Roll_All_BRANCH_cnt;
bool PlaySong_TJA_Roll_Score_Rolling_Check;//チェック
bool PlaySong_TJA_Roll_Score_Balloon_Rolling_Check;//チェック(風船)
int PlaySong_TJA_Roll_Score_T;//連打分のスコア

int PlaySong_TJA_Roll_Score[2];//連打分のスコア
double PlaySong_TJA_Roll_Score_Rolling_Time = 0.0;


//風船ノーツ4
bool PlaySong_Playing_GetBalloon_Number_Check[2] = { FALSE,FALSE };//連打数取得
int PlaySong_Playing_GetBalloon_Number[2] = { 0,0 };//連打数取得
int PlaySong_Playing_GetBalloon_Number2[2] = { 0,0 };//連打数取得(連打用)
int PlaySong_Playing_GetBalloon_Number_Pos[2][3];//位置取得(連打用) [ID][BRANCH, LINE, Pos]
bool PlaySong_Playing_Balloon_END[2] = { FALSE,FALSE };//連打数取得

int PlaySong_Playing_Roll_PlusScore = 100;



//スコアアニメーション
const int PlaySong_Playing_Score_Animation_Timer_Max = 500;
int PlaySong_Playing_Score_Animation_Timer_cnt_Score[2][PlaySong_Playing_Score_Animation_Timer_Max];//足された点数
int PlaySong_Playing_Score_Animation_Timer_cnt_Score_Plus__Check;
int PlaySong_Playing_Score_Animation_Timer_cnt_Score_PP;//足されたスコア
int PlaySong_Playing_Score_Animation_Timer_Max_cnt[2];



//白
double PlaySong_Playing_Score_Animation_Timer1_cnt[2][3];
double PlaySong_Playing_Score_Animation_Timer1_1 = 30.0;
double PlaySong_Playing_Score_Animation_Timer1_2 = 150.0;
double PlaySong_Playing_Score_Animation_Timer1_1_Y = 6.0;

//色付き
double PlaySong_Playing_ScorePlus_Animation_Timer1_cnt[2][PlaySong_Playing_Score_Animation_Timer_Max][3];//タイマー
bool PlaySong_Playing_ScorePlus_Animation_Timer1_cnt_Check[2][PlaySong_Playing_Score_Animation_Timer_Max];
double PlaySong_Playing_ScorePlus_Animation_Timer1__ = 30.0;
double PlaySong_Playing_ScorePlus_Animation_Timer1_1 = 100.0;
double PlaySong_Playing_ScorePlus_Animation_Timer1_2 = 150.0;
double PlaySong_Playing_ScorePlus_Animation_Timer1_3 = 280.0;
double PlaySong_Playing_ScorePlus_Animation_Timer1_4 = 350.0;

double PlaySong_Playing_ScorePlus_Animation_Timer2_1 = 16.0;//間隔
double PlaySong_Playing_ScorePlus_Animation_Timer2_2 = 64.0;//移動する時間
double PlaySong_Playing_ScorePlus_Animation_Timer2_PosY = 254.0;//消滅する場所
double PlaySong_Playing_ScorePlus_Animation_Timer2_PosY_Plus;//移動する時間
double PlaySong_Playing_ScorePlus_Animation_Timer2_PosY_Alpha;//移動する時間
int PlaySong_Playing_Score_Animation_Timer_Max_cntCheck1;

double PlaySong_Playing_ScorePlus_Animation_Timer1_4_Text_PosY_OFFSET = 2.0;


//スコアランクアニメーション
bool PlaySong_Playing_ScoreRank_Animation_Check[2][7];//チェック
double PlaySong_Playing_ScoreRank_Animation_Timer1_1 = 200.0;//
double PlaySong_Playing_ScoreRank_Animation_Timer1_2 = 280.0;//
double PlaySong_Playing_ScoreRank_Animation_Timer1_3 = 360.0;//
double PlaySong_Playing_ScoreRank_Animation_Timer1_4 = 2400.0;//
double PlaySong_Playing_ScoreRank_Animation_Timer1_5 = 2660.0;//
double PlaySong_Playing_ScoreRank_Animation_Timer1_cnt[2][3];//タイマー
bool PlaySong_Playing_ScoreRank_Animation_Timer1_cntCheck[2];//
int PlaySong_Playing_ScoreRank_Animation_Timer1_cntint[2];//

//コンボラメ
double PlaySong_Combo_Lame_Timer1_1 = 130.0;//ラメフェードアウト開始
double PlaySong_Combo_Lame_Timer1_2 = 180.0;//ラメフェードアウト終了
double PlaySong_Combo_Lame_Timer1_3 = 510.0;//ラメフェードアウト終了
double PlaySong_Combo_Lame_Timer2_1 = 16.0;
double PlaySong_Combo_Lame_Timer2_2 = 100.0;
double PlaySong_Combo_Lame_Timer2_3 = 250.0;

double PlaySong_Combo_Lame_Timer1_cnt[2][3];
int PlaySong_Combo_Lame_Timer1_PlayerID;


//ハイスコアアニメーション
bool PlaySong_HiScore_Animation1_Timer1_Check[2];
double PlaySong_HiScore_Animation1_Timer1_cnt[2][3];

double PlaySong_HiScore_Animation1_Timer1_1 = 180.0;
double PlaySong_HiScore_Animation1_Timer1_2 = 280.0;
double PlaySong_HiScore_Animation1_Timer1_3 = 400.0;
double PlaySong_HiScore_Animation1_Timer1_4 = 580.0;



bool Playsong_TestBB = FALSE; 



















//Result
//Stja読み込み
bool Result_PlayerID_Loading_Check = FALSE;
bool Result_Course_Loading_Check = FALSE;
int Result_Course_Loading_Now = 0;
string Result_Grades_Loading_Now = "0";
int Result_HiScore_Loading_Now = 0;
int Result_PlayerID_Loading_IDNum = 0;
int Result_PlayerID_Loading_ScoreRank = 0;
















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

bool Song_Decided_Check[2];
bool Option_Voice_Check[2];

bool Course_Song_Decided_Check[2];

bool Course_Song_Decided_Mark_Move_Check;
bool Course_Song_Decided_Mark_Move_Timer_Check;

int Course_Song_Decided_Timer_cnt[3];
double Course_Song_Decided_Timer1_1 = 160.0;
double Course_Song_Decided_Timer1_2 = 480.0;

bool Course_Song_Decided_Timer1_NULL_Check;
bool Course_Song_Decided_Timer1_1_Check;
bool Course_Song_Decided_Timer1_2_Check;

double SelectSong_SelectDifficult_Mark_White_[2];








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

int SelectSong_Bar_All_Moving_Pos[2];
int SelectSong_Bar_All_Moving_Pos3[2];
int SelectSong_Bar_All_Moving_Pos4[2];


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

int _Input_F1;
int _Input_F1_Count;

int _Input_F2;
int _Input_F2_Count;

int _Input_F3;
int _Input_F3_Count;

int _Input_F4;
int _Input_F4_Count;

int _Input_F5;
int _Input_F5_Count;

int _Input_F6;
int _Input_F6_Count;

int _Input_F7;
int _Input_F7_Count;

int _Input_F8;
int _Input_F8_Count;




int _Input_UP;
int _Input_UP_Count;

int _Input_DOWN;
int _Input_DOWN_Count;

int _Input_LEFT;
int _Input_LEFT_Count;

int _Input_RIGHT;
int _Input_RIGHT_Count;

int _Input_P_1P_LeftDong1;
int _Input_P_1P_LeftDong2;
int _Input_P_1P_RightDong1;
int _Input_P_1P_RightDong2;
int _Input_P_1P_LeftKa1;
int _Input_P_1P_LeftKa2;
int _Input_P_1P_RightKa1;
int _Input_P_1P_RightKa2;
int _Input_P_1P_LeftDong1_Count;
int _Input_P_1P_LeftDong2_Count;
int _Input_P_1P_RightDong1_Count;
int _Input_P_1P_RightDong2_Count;
int _Input_P_1P_LeftKa1_Count;
int _Input_P_1P_LeftKa2_Count;
int _Input_P_1P_RightKa1_Count;
int _Input_P_1P_RightKa2_Count;

int Taiko_Input_Q;
int Taiko_Input_Q_Count;

int Taiko_Input_W;
int Taiko_Input_W_Count;

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




int Test_Int2 = 500;
double Test_Int23 = 11.555555;
string Test_Int24 = "500";

//font
int Coins_Font;
int Coins_Font_Width;
int Coin_Font_OutLine = 2;

int Coins_Font2;
int Coin_Font2_OutLine = 5;
int Coins_Font3;

int Play_Songs_Font;

int Player_Name_Font;
int Player_Name_Font_OutLine = 2;



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

int SeleceSong_Names_Font_Default_Genre_Back;
int SeleceSong_Names_Font_Default_Genre_Back_OutLine_Default = 7;
int SeleceSong_Names_Font_Default_Genre_Back_FONTSPACE_Default = -18;
int SeleceSong_Names_Font_Default_Genre_Main_FONTSPACE_Default = -4;


int SongTitle_Font_T_Back;
int SongTitle_Font_T_Main;
double SongTitle_Font_T_FontSize = 40.0;
double SongTitle_Font_T_OutLine = 5.0;
double SongTitle_Font_T_FontSpace = -12.0;
double SongTitle_Font_T_FontSize_Default = 40.0;
double SongTitle_Font_T_OutLine_Default = 5.0;
double SongTitle_Font_T_FontSpace_Default = -12.0;

double SongTitle_Font_T_Back_Width;
double SongTitle_Font_T_Main_Width;



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

int SeleceSong_Names_Font_Default_Genre_Close_Back;

double SeleceSong_Names_Font_Default_Genre_Close_Up_Width_BackSize;






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

int NowSongNum_Font;
int NowSongNum_Font_OutLine = 3;
int Playing_NowSong_NUM = 1;
std::string Playing_NowSong_NUM_str;

int NowSongTitle_Font;
int NowSongTitle_Font_Main;
int NowSongTitle_Font_OutLine = 7;




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
std::string Config_Line_Substr2_1;

int Config_Line_Substr2_length;
int Config_Line_Substr2_length2;



int Config_Line_Cnt; //Configの行目
int Config_Line_Max; //Configの行数

bool Config_WindowMode = FALSE;
bool Config_Sound_Load_Memory_All = TRUE;
bool Texture_Load_Chara_DonChan_All = FALSE;
bool Texture_Chara_DonChan_Put = FALSE;

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
double _CommonDonChan_Postion_all_B[3][2];
double _CommonDonChan_Magnification_all_B[3];


int _CommonDonChan_Clear_In_all_B[3];
int _CommonDonChan_Clear_Loop_all_B[3];
int _CommonDonChan_Daiseikou_In_all_B[3];
int _CommonDonChan_Daiseikou_Loop_all_B[3];
int _CommonDonChan_Failed_In_all_B[3];
int _CommonDonChan_Failed_Loop_all_B[3];
int _CommonDonChan_Normal_Loop_all_B[3];
int _CommonDonChan_Skip_all_B[3];
int _CommonDonChan_StartSong_all_B[3];

int _Enso_Chara_PicPut_Graph[2];
double _Enso_Chara_Postion_all_B[3][2];
double _Enso_Chara_Magnification_all_B[3];
int _Enso_Chara_10combo_all_B[3];
int _Enso_Chara_10combo_Max_all_B[3];
int _Enso_Chara_Balloon_Breaking_all_B[3];
int _Enso_Chara_Balloon_Broke_all_B[3];
int _Enso_Chara_Balloon_Miss_all_B[3];
int _Enso_Chara_Clear_all_B[3];
int _Enso_Chara_Clearin_all_B[3];
int _Enso_Chara_GoGo_all_B[3];
int _Enso_Chara_GoGoStart_all_B[3];
int _Enso_Chara_Kusu_In_all_B[3];
int _Enso_Chara_Kusu_Loop_all_B[3];
int _Enso_Chara_Kusu_Miss_all_B[3];
int _Enso_Chara_Miss_all_B[3];
int _Enso_Chara_Miss6_all_B[3];
int _Enso_Chara_Normal_all_B[3];
int _Enso_Chara_Revival_all_B[3];
int _Enso_Chara_Soulin_all_B[3];
int _Enso_Chara_Surprised_all_B[3];

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
int _Enso_Chara_Balloon_Miss_all_BPlayer[Texture_Number1][3];
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

int SAVE_TJA_Folder_Number_cnt[3];


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
string TJA_Folder_In_Genre_Folders_Path_In_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(ID分け)
int TJA_Folder_In_Genre_Folders_Path_In_All_cnt;
string TJA_Folder_In_Genre_Folders_Path_In_ID[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(ID分け)
string ID_TJA_Folder_In_Genre_Folders_Path_In[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(曲分け)
string ID_TJA_Folder_In_Genre_Folders_Path_In2[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//Tjaフォルダまでのパス(デモ曲分け)

string ID_TJA_Folder_In_Genre_Folders_Path_In_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//Tjaフォルダまでのデモ曲パス(ID分け)
string ID_TJA_Folder_In_Genre_Folders_Path_In_2[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//Tjaフォルダまでの曲パス(ID分け)

string TJA_Folder_In_Genre_Folders_Path_In_To_TJA[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//Tjaファイルまでのパス
string TJA_Folder_In_Genre_Number_Name_sub_In[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max][TJA_Folder_In_Genre_Count_Max2];//Tjaファイルまでのパス
int TJA_Folder_In_Genre_Number_Name_sub_Find_In; //find

string ID_TJA_Folder_In_Genre_Number_Name_Path_SUB[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//IDSUB
string ID_TJA_Folder_In_Genre_Number_Name_Path[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//.tjaまでのパス

string ID_Score_In_Genre_Number_Name_Path_SUB[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//IDSUB
string ID_Score_In_Genre_Number_Name_Path[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max];//.Stjaまでのパス
int ID_TJA_Folder_In_Genre_Number_Name_Path_cnt;



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

double Test_Count_d;
double Test_Count2_d;
double Test_Count3_d;
double Test_Count4_d;

std::string Test_String = "";


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
//Back,Bar,Chara,CourseBox,Genre_Bar,Course_Bar_Picture
int Genre_Image_File_[Genre_Folder_Count_Max][6];
string Genre_Image_File_Path[Genre_Folder_Count_Max][6];
int TJA_Folder_Number_Plus_TJA_Image[Genre_Folder_Count_Max + TJA_Folder_In_Genre_Count_Max + TJA_Folder_In_Genre_Close_Count_Max][6];//フォルダが開かれてる時の画像 [ジャンル + 曲 + とじる][画像ID]
int TJA_Folder_Number_Plus_TJA_ID[Genre_Folder_Count_Max];//ジャンルID(ジャンル+曲)
int TJA_Folder_Number_Plus_TJA_Image_save[6];
string TJA_Folder_Number_Plus_TJA_Image_Back_save_str;
int TJA_Folder_Number_Plus_TJA_Image_Back_save;


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

bool TJA_Song_SONGTAG_Check_ = FALSE;
int TJA_Song_SONGTAG_cnt;
string TJA_Song_SONGTAG_[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//SONGTAG(ジャンル分け)
string TJA_Song_SONGTAG_All_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//SONGTAG
int TJA_Song_SONGTAG[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//SONGTAG(ジャンル分け)
int TJA_Song_SONGTAG_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//SONGTAG
int ID_TJA_Song_SONGTAG[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//SONGTAG(ID分け)

bool TJA_Song_SONGTAG_Check[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//SONGTAG(ジャンル分け)
bool TJA_Song_SONGTAG_Check_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//SONGTAG
bool ID_TJA_Song_SONGTAG_Check[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//SONGTAG


bool TJA_Song_BGMMOVIE_Check_ = FALSE;
int TJA_Song_BGMMOVIE_cnt;
string TJA_Song_BGMMOVIE_[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//BGMMOVIE(ジャンル分け)
string TJA_Song_BGMMOVIE_All_[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//BGMMOVIE
string TJA_Song_BGMMOVIE[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//BGMMOVIE(ジャンル分け)
string TJA_Song_BGMMOVIE_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//BGMMOVIE
string ID_TJA_Song_BGMMOVIE[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//BGMMOVIE(ID分け)

bool TJA_Song_BGMMOVIE_Check[Genre_Folder_Count_Max][TJA_Folder_In_Genre_Count_Max];//BGMMOVIE(ジャンル分け)
bool TJA_Song_BGMMOVIE_Check_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//BGMMOVIE
bool ID_TJA_Song_BGMMOVIE_Check[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//BGMMOVIE









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
int TJA_Song_Font_Buffer_int;//フォントバッファー登録用

double TJA_Song_FontSize_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//フォントサイズ(横)
double TJA_Song_BACKSize_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//縁取りサイズ

int SelectFong_FongBuffer_switch_int;


double TJA_Song_BACKSize_T_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//縁取りサイズ(仮)
double TJA_Song_FontSpace_Back_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//文字間隔
double TJA_Song_FontSpace_Main_All[Genre_Folder_Count_Max * TJA_Folder_In_Genre_Count_Max];//文字間隔

bool ToSelectSong_Fonts_Loaded_Check = FALSE;

int SeleceSong_Names_Font_Default_Genre_Close_Up_Width_1_;

int GENRE_TITLE_Back_Width, GENRE_TITLE_Main_Width;

int TJA_Song_Font_Buffer_Back[9];//フォントバッファー


//フォント読み込みテスト
bool SelecrtSong_FontLoadTest_B = FALSE;



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
std::string Option_Speed[Option_Speed_Max] = {"1.0","1.1","1.2","1.3","1.4","1.5","1.6","1.7","1.8","1.9","2.0","2.5","3.0","3.5","4.0"};
// const int Option_Speed_Max = 30;
//std::string Option_Speed[Option_Speed_Max] = { "1.0","1.1","1.2","1.3","1.4","1.5","1.6","1.7","1.8","1.9","2.0","2.5","3.0","3.5","4.0","5.0","6.0","7.0","8.0","9.0","9.9","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9" };



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







//スキンデータ
bool LoadSong_SkinLoaded_Check = FALSE;
int LoadSong_BGMOVIE_FILELOAD;
bool PlaySong_BGMOVIE_Played_Check;
int LoadSong_BGMOVIE_FILELOAD_SIZE[2];
double LoadSong_BGMOVIE_FILELOAD_SIZESet[2];
double PlaySong_BGMOVIE_Played_T[2];//ラグ



//画像
int Add_BackGround;
int Add_BackGround_Down;
int Add_BackGround_Footer;
int Add_BackGround_Dancer;

int Add_BackGround_IDrnd;
int Add_BackGround_Down_IDrnd;
int Add_BackGround_Footer_IDrnd;
int Add_BackGround_Dancer_IDrnd;


int Add_BackGround_Dancer_Position[5];
int Add_BackGround_Dancer_PicLoad_In[5][31];
int Add_BackGround_Dancer_PicLoad_Normal[5][100];                                                                                                        
int Add_BackGround_Dancer_PicLoad_Normal_PicsNum[100] = {14};





//				Add_BackGround_Dancer_SystemLoad.open(Texture_File + "Enso/BackGround/Dancer/" + to_string(Add_BackGround_Dancer_IDrnd) + "System.ini", std::ios::in);



const int PlaySong_BackGround_Pics_Max = 50;
//UPLoad
int PlaySong_BackGround_Pic_UP[PlaySong_BackGround_Pics_Max];
int PlaySong_BackGround_Pic_UP_2P[PlaySong_BackGround_Pics_Max];
int PlaySong_BackGround_Pic_DOWN[PlaySong_BackGround_Pics_Max];
int PlaySong_BackGround_Pic_Footer;
int PlaySong_BackGround_Pics_UP;
int PlaySong_BackGround_Pics_UP_2P;
int PlaySong_BackGround_Pics_DOWN;

//UP0
bool PlaySong_BackGround0_Pic_UP_Timer1_Check;
double PlaySong_BackGround0_Pic_UP_Timer1_cnt[3];

//Down0
bool PlaySong_BackGround0_Pic_DOWN_Light2_Timer1_Check;
double PlaySong_BackGround0_Pic_DOWN_Light2_Timer1_cnt[3];
//Down0_Light2
double PlaySong_BackGround0_Pic_DOWN_Light2_Timer1_1 = 90.0;





//座標計算
double PlaySong_BackGround_Pic_UP_PlusX = 0.0;
double PlaySong_BackGround_Pic_UP_PlusY = 0.0;
