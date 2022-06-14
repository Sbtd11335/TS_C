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

//キー(変更可能)
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
UseWaitTImer:画面更新毎に数秒待機するかのフラグのセットを行います。(FAlSE,TRUE)
UseWaitTImer_V:垂直同期が切られている時の待つ秒数(ms)、仮に16とするとFPS値が60に近い状態になります。この場合、「FPS:」の設定欄に60と入力してください。
UseWaitVSync_V:垂直同期が切られていない時用、モニターのリフレッシュレートの最小値を入力された値で割った数字がFPS値となります。例えば、リフレッシュレートの最小値が60Hzの場合2と入力すると60/2=30FPSとなり30FPSでのゲームプレイが可能となります。その場合、「FPS:」の設定欄に30と入力してください。

//Game
Coins_Plus:EntryでCキーを押したときに増えるコインの枚数。特に意味ないです。 (int)
Play_Songs:1クレジット当たりにプレイできる曲数。 (int)
Hints:表示するヒントの数。 (int)
PlaySong_Lane_ALPHA:レーンの透明度 (double)
PlaySong_DonChan_ALPHA:どんちゃんの透明度 (double)
PlaySong_DrawBackGround:背景を描写するか (FALSE,TRUE)(未実装)
PlaySong_BARLINEOFF_Visualization:#BARLINEOFFで指定されている小節を表示させるか (FALSE,TRUE)

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
Texture_Load_Chara_DonChan_All:演奏時にEnso/Chara/にある画像を全て読み込むか。全て読み込ませるとメモリ使用量が大幅に増えてしまうため非推奨。 (FALSE,TRUE)

//キー設定
KeySetting_1P_~: (int,int)
KeySetting_2P_~: (int,int)
int...KeyCodeChecker.exeにより取得した値を入力してください。なお、キーは必ず2つ設定してください。じゃないとバグります。
どうしても1つだけ設定したい場合は片方の設定を「-2」と書いたり、存在しないキーコードを入力してください。


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

称号画像の表示
Pass_Data/Skin/(バナパスID)/Dan_Plate.png
として保存してください。画像サイズ(79x33)

//Option
Speed:速さの設定。 (0:1.0 1:1.1 2:1.2 3:1.3 4:1.4 5:1.5 6:1.6 7:1.7 8:1.8 9:1.9 10:2.0 11:2.5 12:3.0 13:3.5 14:4.0)
Disappear:ドロンの設定。 (FALSE,TRUE)
Inverse:あべこべの設定。 (FALSE,TRUE)
Random:ランダムの設定。 (0:しない 1:きまぐれ 2:でたらめ)
Skip:演奏スキップの設定。 (FALSE,TRUE)
Adjustment:音符位置調整の設定。 (FALSE,TRUE)
Adjustment_Value:音符位置調整の値の設定。 (0:左5 1:左4 2:左3 3:左2 4:左1 5:中央 6:右1 7:右2 8:右3 9:右4 10:右5)
Voice:ボイスの設定。 (FALSE,TRUE)
Tone:音色の設定 (int)

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

//譜面ファイルについて
Ver0.4.0から譜面再生テストを行っております。一応必要な命令の読み込みは行えるようにはなっています。
今後修正予定
・OFFSETの値が0より大きい場合に正常に譜面を再生できるようにする。
・#DREAY対応
・#SCROLLが0より小さいときの挙動の対応

現在使用可能な命令一覧
#SCROLL (double , 0.001~) スクロール速度の変更。
#BPMCHANGE (double , 0.001~) BPMの変更。
#MEASURE (int/int) 拍子の変更。
#BARLINEOFF 小節線を非表示にする。
#BARLINEON 小節線を表示する。
#N 普通譜面
#E 玄人譜面
#M 達人譜面

現在使用不可
#GOGOSTART ゴーゴータイムの開始
#GOGOEND ゴーゴータイムの終了
#SECTION 譜面分岐情報のリセット。
#LEVELHOLD 分岐後の譜面のレベルを保つ。
#DELAY (double) 指定された時間待機
#BRANCHSTART (ID,double,double) 譜面分岐の開始
#BRANCHEND 譜面分岐の終了

譜面分岐条件の追加について
譜面分岐を行う際の条件を追加しています。
#BRANCHSTART (ID,double,double)
ID:p,a,r,s,c,g,t,d,b
p:精度(double%)(double%)
a:精度(double%)(double%)
r:連打数(int1)(int2)
s:点数(int1)(int2)
c:コンボ数(int1)(int2)
g:ゲージの量(int1%)(int2%)
t:良の数(int1)(int2)
d:可の数(int1)(int2)
b:不可の数(int1)(int2)

pとaの違い
pは#BRANCHSTARTで指定した小節線前の2つ前までの精度を基に分岐する設定となっていますが、
aは#BRANCHSTARTで指定した小節線前の1つ前までの精度を基に分岐する設定となっています。
これにより一小節目の精度も基に譜面分岐を行うことが可能です。




