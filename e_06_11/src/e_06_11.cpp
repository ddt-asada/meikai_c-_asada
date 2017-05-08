/*演習6-11
 * 4種類の問題をランダムに出題する暗算トレーニングプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダ。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダ。
#include <cstdlib>

using namespace std;

/*関数名：bool confirm_retry();
 * キーボードから1または0を読み込み（1または0以外が入力された場合は再入力させる）返却する関数。
 * 返却値retry;キーボードから入力された1または0を返却する。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

int confirm_retry()
{

	int	Retry = 100;		//キーボードから値を読み込むための型。繰り返しの判定で使うため適当な値で初期化。

	//0か1が入力されるまで再入力させる繰り返し。
	for( ; Retry != 1 && Retry != 0; ) {
		//キーボードから数値の入力を促す。
		cout	<<"もう一度？＜Yes…1／No…0＞：";
		cin		>>Retry;

	}

	//キーボードから読み込んだ値を返却する。
	return Retry;
}

/*関数名：void QUESTION1(int Cal1, int Cal2, int Cal3)
 * 与えられた引数を利用してCal1 + Cal2 + Cal3という問題を生成し、正解するまで繰り返す関数。
 * 引数Cal1：計算に使用する変数。
 * 引数Cal2:計算に使用する変数。
 * 引数Cal3：計算に使用する変数。
 * 返却値：なし
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

//問題を掲示し、正解するまで繰り返す関数。
void QUESTION1(int Cal1, int Cal2, int Cal3)
{
	int	Answer;		//答えを入力するための型。

	//正解するまで繰り返す。
	for( ; Answer != Cal1 + Cal2 + Cal3; ) {

		//問題を掲示。
		cout	<<Cal1	<<" + "	<<Cal2	<<" + "	<<Cal3	<<" = ";
		//答えの入力を促す。
		cin		>>Answer;

		//正解の時。
		if(Answer == Cal1 + Cal2 + Cal3) {

			//「正解です。」と表示。
			cout	<<"正解です。\n";

		//それ以外の時。
		} else {

			//「不正解です。」と表示。
			cout	<<"不正解です。\n";
		}
	}
}

/*関数名：void QUESTION2(int Cal1, int Cal2, int Cal3)
 * 与えられた引数を利用してCal1 + Cal2 - Cal3という問題を生成し、正解するまで繰り返す関数。
 * 引数Cal1：計算に使用する変数。
 * 引数Cal2:計算に使用する変数。
 * 引数Cal3：計算に使用する変数。
 * 返却値：なし
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

//問題を掲示し、正解するまで繰り返す関数。
void QUESTION2(int Cal1, int Cal2, int Cal3)
{
	int	Answer;		//答えを入力するための型。

	//正解するまで繰り返す。
	for( ; Answer != Cal1 + Cal2 - Cal3; ) {

		//問題を掲示。
		cout	<<Cal1	<<" + "	<<Cal2	<<" - "	<<Cal3	<<" = ";
		//答えの入力を促す。
		cin		>>Answer;

		//正解の時。
		if(Answer == Cal1 + Cal2 - Cal3) {

			//「正解です。」と表示。
			cout	<<"正解です。\n";

		//それ以外の時。
		} else {

			//「不正解です。」と表示。
			cout	<<"不正解です。\n";
		}
	}
}

/*関数名：void QUESTION3(int Cal1, int Cal2, int Cal3)
 * 与えられた引数を利用してCal1 - Cal2 + Cal3という問題を生成し、正解するまで繰り返す関数。
 * 引数Cal1：計算に使用する変数。
 * 引数Cal2:計算に使用する変数。
 * 引数Cal3：計算に使用する変数。
 * 返却値：なし
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

//問題を掲示し、正解するまで繰り返す関数。
void QUESTION3(int Cal1, int Cal2, int Cal3)
{
	int	Answer;		//答えを入力するための型。

	//正解するまで繰り返す。
	for( ; Answer != Cal1 - Cal2 + Cal3; ) {

		//問題を掲示。
		cout	<<Cal1	<<" - "	<<Cal2	<<" + "	<<Cal3	<<" = ";
		//答えの入力を促す。
		cin		>>Answer;

		//正解の時。
		if(Answer == Cal1 - Cal2 + Cal3) {

			//「正解です。」と表示。
			cout	<<"正解です。\n";

		//それ以外の時。
		} else {

			//「不正解です。」と表示。
			cout	<<"不正解です。\n";
		}
	}
}

/*関数名：void QUESTION4(int Cal1, int Cal2, int Cal3)
 * 与えられた引数を利用してCal1 - Cal2 - Cal3という問題を生成し、正解するまで繰り返す関数。
 * 引数Cal1：計算に使用する変数。
 * 引数Cal2:計算に使用する変数。
 * 引数Cal3：計算に使用する変数。
 * 返却値：なし
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

//問題を掲示し、正解するまで繰り返す関数。
void QUESTION4(int Cal1, int Cal2, int Cal3)
{
	int	Answer;		//答えを入力するための型。

	//正解するまで繰り返す。
	for( ; Answer != Cal1 - Cal2 - Cal3; ) {

		//問題を掲示。
		cout	<<Cal1	<<" - "	<<Cal2	<<" - "	<<Cal3	<<" = ";
		//答えの入力を促す。
		cin		>>Answer;

		//正解の時。
		if(Answer == Cal1 - Cal2 - Cal3) {

			//「正解です。」と表示。
			cout	<<"正解です。\n";

		//それ以外の時。
		} else {

			//「不正解です。」と表示。
			cout	<<"不正解です。\n";
		}
	}
}


int main()
{
	//乱数の種を時間により決定する。
	srand(time(NULL));

	//暗算トレーニングの開始を宣言する。
	cout	<<"暗算トレーニング開始！！\n";

	//ユーザーが終了を選択するまで繰り返す。
	for( ; confirm_retry() != 0; ) {

		int Cal1 = rand() % 900 + 100;	//問題に使用する3桁の乱数を生成する。

		int Cal2 = rand() % 900 + 100;	//問題に使用する3桁の乱数を生成する。

		int Cal3 = rand() % 900 + 100;	//問題に使用する3桁の乱数を生成する。

		int Question = rand() % 4;		//問題を決定するための0～3の乱数を生成する。

		//問題の種類によって分岐。
		//Questionが0の時。
		if(Question == 0) {

			//Cal1＋Cal2＋Cal3の問題を呼び出す関数。
			QUESTION1(Cal1, Cal2, Cal3);

		//Questionが1の時。
		} else if (Question == 1) {

			//Cal1＋Cal2-Cal3の問題を呼び出す関数。
			QUESTION2(Cal1, Cal2, Cal3);

		//Questionが2の時。
		} else if (Question == 2) {

			//Cal1-Cal2＋Cal3の問題をよびだす関数。
			QUESTION3(Cal1, Cal2, Cal3);

		//Questionが3の時。
		} else if (Question == 3) {

			//Cal1-Cal2-Cal3の問題を呼び出す関数。
			QUESTION4(Cal1, Cal2, Cal3);

		}
	}

	//0を返す。
	return 0;
}
