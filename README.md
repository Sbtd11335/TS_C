# TS_C-

//TaikoS_C++
x64のみ対応
言語:C++(DxLib)
推奨性能
メモリ:8GB以上
CPU:Core i7-1165G7での動作済み、Core i5以上を推奨
ディスプレイ:60Hz以上(設定すれば60Hz以下での動作も可)、1920x1080のFHD
DirectX:最新版を推奨


//操作方法
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

//Config.ini
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
Sound_Load_Memory_All:TRUE選曲時に流す曲を全てメモリに読み込みます。全て読み込ませるとメモリ使用量が増える一方、デモ曲を流す時にラグは発生しません。(FALSE,TRUE)

//キー設定
KeySetting_1P:1P側のキー設定。(0,1)
KeySetting_2P:2P側のキー設定。(0)

//開発者向け
_White_Genre_Song_ID:デバッグモード。(FALSE,TRUE)
※その他の値の説明は省きます。


//譜面ファイル追加命令
SETDEMOSTARTSOUND:選曲時に流す曲の設定。(str)
Change_DisPlay_Course:選曲時に表と裏のスコア情報を入れ替えて表示させます。(FALSE,TRUE)








