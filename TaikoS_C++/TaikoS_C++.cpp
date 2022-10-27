//Include
#include<windows.h>
#include"DxLib.h"
#include<float.h>
#include"Config.h"
#include<iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "dirent.h"
#include <stdlib.h>
#include <cstring>
#include <filesystem>
#include <random>
#include <iomanip>
#include <numeric>
#include"Function.h"


//Load
#include"Load.h"
#include"Load_Texture.h"
#include"Load_Sound.h"
#include"Load_Song.h"

//Scene
#include"Scene_Entry.h"
#include"Scene_SelectSong.h"
#include"Scene_PlaySong.h"
#include"Scene_Result.h"





using namespace std;
using std::cout; using std::cin;
using std::endl; using std::string;
using std::endl; using std::ifstream;

using std::cout;
using std::endl;
using std::vector;
using std::setw;

//処理




int WINAPI WinMain( //メイン処理
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR lpCmdLine,
	int nCmdShow) {


	//Configとか読み込み
	Load_Configs();



	SetOutApplicationLogValidFlag(FALSE);
	ChangeWindowMode(Config_WindowMode);
	SetWindowSizeChangeEnableFlag(TRUE);
	SetWindowSizeExtendRate(0.7);
	SetGraphMode(Window_Size_X, Window_Size_Y, 32, FPS);
	SetWaitVSyncFlag(VSync);
	SetUseTransColor(FALSE);

	DxLib_Init();

	//Window_Init
	SetWindowText("TaikoS_C++");
	SetBackgroundColor(255, 255, 255);
	SetDrawScreen(DX_SCREEN_BACK);
	SetAlwaysRunFlag(TRUE);

	//フォント設定
	Load_Font_Entry();

	//画像、音源読み込み
	Load_Texture_Entry();
	Load_Sound_Entry();

	
	//SelectSong_SelectDifficult_Star_Font = CreateFontToHandle("ＤＦＰ勘亭流", 28, -1, DX_FONTTYPE_ANTIALIASING_8X8);



	PlaySoundMem(Sound_Title_Meinongen_Load, DX_PLAYTYPE_LOOP); //ループ音源再生

	CoinText_Alpha_Waitime1 = GetNowCount(); //コインテキスト用タイマー1



	//画像配備
	//CommonDonchan
	//Daiseikou_Loop
	//Normal_Loop
	//Daiseikou_In

	//シーン
	SceneNum = Num_Entry;


	while (ScreenFlip() == 0 && ProcessMessage() == 0) //本ループ
	{
		switch (SceneNum)
		{
		case Num_Entry://Entry
			ClearDrawScreen();
			//画像描写
			Scene_Entry();
			//キー入力
			Key_Entry();
			//デバッグ
			Debugs_Entry();
			ToSelectSong_Fonts_Loaded_Check = FALSE;
			break;

		case Num_SelectSong_Load://SelectSong_Load
			ClearDrawScreen();
			//フォント読み込み
			if (ToSelectSong_Fonts_Loaded_Check == FALSE)Load_Font_SelectSong();
			ToSelectSong_Fonts_Loaded_Check = TRUE;
			Scene_SelectSong_Load();
			break;

		case Num_SelectSong_Load2://スコア読み込みなど

			Load_Font_SelectSong();
			//画像読み込み処理
			Load_Texture_SelectSong();
			//スコア再読み込み
			Load_Stja();
			SelectSong_DonChan_Skin_Timer1_cnt[0] = GetNowCount();
			SelectSong_DonChan_Skin_Timer1_cnt[1] = GetNowCount();
			SelectSong_DonChan_Skin_Timer1_cnt[2] = SelectSong_DonChan_Skin_Timer1_cnt[1] - SelectSong_DonChan_Skin_Timer1_cnt[0];
			SelectSong_Genre_Bar_Scroll_Timer1 = GetNowCount();
			SelectSong_PlaySound_Loop_Timer[0] = GetNowCount();//SelectSong_BGM用タイマー1
			//シーン切替
			SceneNum = Num_SelectSong;
			break;

		case Num_SelectSong://選曲画面
			ClearDrawScreen();
			//メイン
			if (SelecrtSong_FontLoadTest_B == FALSE)
			{
				//通常描写
				Scene_SelectSong();
			}
			else {
				//テスト描写
				Scene_SelectSong_Test();
			}



			//Debug
			Debugs_SelectSong();
			break;

		case Num_LoadSong://曲読み込み
			Reset_LoadSong();
			SceneNum = Num_LoadSong2;
			break;

		case Num_LoadSong2://曲読み込み
			//値初期化
			Reset_LoadSong_Value();
			//コンボ音声読み込み
			Load_PlaySong_Combo();
			//画像読み込み
			Load_PlaySong_Texture();
			//TJA読み込み
			Load_Tja();
			//その他処理
			Load_TJA_etc();

			SceneNum = Num_PlaySong;
			break;

		case Num_PlaySong:
			ClearDrawScreen();
			Scene_PlaySong_Timer();//タイマー処理
			Scene_PlaySong_BackGround();//背景描写
			Scene_PlaySong_BRANCH_etc();//譜面分岐とかの処理
			Key_PlaySong();//キー入力
			Scene_PlaySong_Auto_etc();//オートとかの処理
			KeyCheck_PlaySong();//キーチェック
			Scene_PlaySong_Auto_etc2();//オートとかの処理2
			Scene_PlaySong_MainDraw();//メイン描写
			Debugs_PlaySong();//デバッグ
			break;

		case Num_SaveScore:
			Result_SaveScore();//スコア保存
			SceneNum = Num_SelectSong_Load2;

			break;

		default:
			ClearDrawScreen();
			DrawBox(0, 0, 1920, 1080, GetColor(17, 113, 171), TRUE);
			DrawStringToHandle(0, 0, "Error!\nPlease close this application.\n\nERROR:SCENE_NOT_FOUND", GetColor(255, 255, 255), White_FPS_Font);
			break;


		}

	}




	DxLib_End();
	return 0;



}






