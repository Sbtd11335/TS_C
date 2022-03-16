# TS_C-

//TaikoS_C++////////////////////////////////////////////////////////////////////////////////////////////
x64のみ対応
言語:C++(DxLib)
推奨性能
メモリ:8GB以上
CPU:Core i7-1165G7での動作確認済み、Core i5以上を推奨
ディスプレイ:60Hz以上(設定すれば60Hz以下での動作も可)、1920x1080のFHD
DirectX:最新版を推奨


//操作方法////////////////////////////////////////////////////////////////////////////////////////////
Entry
1~3の内どれかのキーを押してデータを読み込ませてください
読み込みが終わったらQキーを押して選曲画面に飛んでください

//キー
1P
ドン:FGHJ
カッ:SDKL

2P
ドン:VBNM
カッ:XC,.

//Config.ini////////////////////////////////////////////////////////////////////////////////////////////
NotePad++で開くと見やすいです。

//Screen
WindowMode:TRUEでウィンドウモード、FALSEでフルスクリーン。(FALSE,TRUE)
White_FPS:FPSを測定して画面左下に描写します。 (FALSE,TRUE)
VSync:垂直同期設定。FALSEで無効、TRUEで有効。 (FALSE,TRUE)
FPS:FPS値を設定できます。垂直同期が無効になっている時はWhite_FPSによって得たFPS値を入力してください、有効になっている時はモニターのリフレッシュレートにあった値を入力してください。 (int)

//Game
Coins_Plus:EntryでCキーを押したときに増えるコインの枚数。特に意味ないです。 (int)
Play_Songs:1クレジット当たりにプレイできる曲数。 (int)

//File
Texture:テクスチャファイルの設定。初期値:Texture/ (str)
Sound:サウンドファイルの設定。初期値:Sound/ (str)
TJA:譜面ファイルの設定。初期値:TJA/ (str)
Pass_Data:バナパスデータの設定。初期値:Pass_Data/ (str)

//Timer

//GameTexture
_CommonDonChan_Clear_In:(int)
_CommonDonChan_Clear_Loop:(int)
_CommonDonChan_Daiseikou_In:(int)
_CommonDonChan_Daiseikou_Loop:(int)
_CommonDonChan_Failed_In:(int)
_CommonDonChan_Failed_Loop:(int)
_CommonDonChan_Normal_Loop:(int)
_CommonDonChan_Skip:(int)
_CommonDonChan_StartSong:(int)
_Enso_Chara_10combo:(int)
_Enso_Chara_10combo_Max:(int)
_Enso_Chara_Balloon_Breaking:(int)
_Enso_Chara_Balloon_Broke:(int)
_Enso_Chara_Balloon_Miss:(int)
_Enso_Chara_Clear:(int)
_Enso_Chara_Clearin:(int)
_Enso_Chara_GoGo:(int)
_Enso_Chara_GoGoStart:(int)
_Enso_Chara_Kusu_In:(int)
_Enso_Chara_Kusu_Loop:(int)
_Enso_Chara_Kusu_Miss:(int)
_Enso_Chara_Miss:(int)
_Enso_Chara_Miss6:(int)
_Enso_Chara_Normal:(int)
_Enso_Chara_Revival:(int)
_Enso_Chara_Soulin:(int)
_Enso_Chara_Surprised:(int)

//軽量化設定
Sound_Load_Memory_All:TRUE選曲時に流す曲を全てメモリに読み込みます。全て読み込ませるとメモリ使用量が増える一方、デモ曲を流す時にラグは発生しません。 (FALSE,TRUE)

//キー設定
KeySetting_1P:1P側のキー設定。 (0,1)
KeySetting_2P:2P側のキー設定。 (0)

//開発者向け
_White_Genre_Song_ID:デバッグモード。 (FALSE,TRUE)
※その他の値の説明は省きます。


//譜面ファイル追加命令
SETDEMOSTARTSOUND:選曲時に流す曲の設定。 (str)
Change_DisPlay_Course:選曲時に表と裏のスコア情報を入れ替えて表示させます。 (FALSE,TRUE)


//Pass_Data設定方法////////////////////////////////////////////////////////////////////////////////////////////
拡張子.Bdataで保存されています。

//Infomation
Player_Name:プレイヤー名の設定。 (str)
Player_Title:称号の設定。 (str)
Player_Title_Type:称号タイプの設定。 0でノーマル、1で木、2で虹、3で金、4で紫 (0~4)
Play_Display_Course:スコア情報を表示させる難易度。 (int)
Play_Display_Omote_Ura_Course:表と裏の両方をスコア情報として表示させる。 (FALSE,TRUE)

//Skin
Player_CommonDonChanSkin:CommonDonChanの画像を指定させる。 (FALSE,TRUE)
Player_CharaDonChanSkin:Charaの画像を指定させる。 (FALSE,TRUE)
Player_Petit_Chara:ぷちきゃらの設定。 (未実装)
Player_SelectSong_HiScoreBoard:ハイスコアボード画像の設定。 (FALSE,TRUE)
Player_SelectSong_ScoreBoard:スコアボード画像の設定。 (FALSE,TRUE)
Player_Plate_Effect_Flag:称号プレートにエフェクトを設定する。 (FALSE,TRUE)
Player_Dan_Flag:段位を表示する。

//各画像の格納方法
CommonDonChan
Pass_Data/Skin/(バナパスID)/CommonDonChan/(各フォルダ)
として保存してください。

CharaDonChanSkin
Pass_Data/Skin/(バナパスID)/Enso/Chara/(各フォルダ)
として保存してください。

Petit_Chara
未実装です

HiScoreBoard
Pass_Data/Skin/(バナパスID)/SelectSong/HiScoreBoard.png
として保存してください。

ScoreBoard
Pass_Data/Skin/(バナパスID)/SelectSong/ScoreBoard.png
として保存してください。

//Option
Speed:速さの設定。 (0:1.0 1:1.1 2:1.2 3:1.3 4:1.4 5:1.5 6:1.6 7:1.7 8:1.8 9:1.9 10:2.0 11:2.5 12:3.0 13:3.5 14:4.0)
Disappear:ドロンの設定。 (FALSE,TRUE)
Inverse:あべこべの設定。 (FALSE,TRUE)
Random:ランダムの設定。 (0:しない 1:きまぐれ 2:でたらめ)
Skip:演奏スキップの設定。 (FALSE,TRUE)
Adjustment:音符位置調整の設定。 (FALSE,TRUE)
Adjustment_Value:音符位置調整の値の設定。 (0:左5 1:左4 2:左3 3:左2 4:左1 5:中央 6:右1 7:右2 8:右3 9:右4 10:右5)
Voice:ボイスの設定。 (FALSE,TRUE)
Tone:音色の設定

//音色の設定
音色を追加したい場合はSound/Tone/ToneConfig.iniを開き、
Tone_Name:をいじってください。
複数設定してい場合は「/」を間に入れてください。


//スコアデータ/////////////////////////////////////////////////////////////////////////////////////////////////////////
拡張子.Stja
Pass_ID:バナパスID (int)
Course:難易度 (Easy,Normal,Hard,Oni,Edit)
Played:プレイ回数 (int)
ScoreRank:スコアランク (0:無印 1:白粋 2:銅粋 3:銀粋 4:金雅 5:桜雅 6:紫雅 7:極)
HiScore:ハイスコア (int)
Great:良の数
Good:可の数
Bad:不可の数
Grades:成績 (0:無し 1:銀冠 2:金冠 3:虹冠)
RepeatedHits:連打数 (int)
Combo:最大コンボ数 (int)
Hits:叩けた数 (int)
