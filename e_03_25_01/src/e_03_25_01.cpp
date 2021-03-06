/*演習3-25
 * 数当てゲームのプレイヤーが値を入力できる回数に制限を設け、制限回数内（今回は10回に設定）にあてられなかった場合は、正解を表示するプログラム（go to文使用）。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//c言語の関数ライブラリを利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	//乱数の種を時間を参照に設定。
	srand(time(NULL));

	int	Question = rand() % 100;	//数当てゲームの答えを0～99の乱数で設定。

	int	Ans;						//予想した答えの型。

	//10回まで数当てゲームの予測が打ち込める繰り返し。
	for(int i = 0; i < 10; i++) {
		//「いくつかな？：」と表示。
		cout	<<"いくつかな？：";
		//予想した答えを入力。
		cin		>>Ans;

		//予想より答えが小さかったとき。
		if(Ans > Question) {
			//もっと小さな数だよ。」と表示。
			cout	<<"もっと小さな数だよ。\n";

		//予想より答えが大きかった時。
		} else if (Ans < Question) {
			//「もっと大きな数だよ。」と表示。
			cout	<<"もっと大きな数だよ。\n";

		//答えに正解したとき。
		} else if (Ans == Question) {
			//「正解です。」と表示。
			cout	<<"正解です。\n";
			//プログラムの最後尾まで移動し終了する。
			goto Exit;
		}
	}

	//不正解の時は答えを表示。
	cout	<<"不正解です。答えは"	<<Question	<<"です。\n";

	//goto文の行先。
	Exit:
	;

	//0を返す。
	return 0;
}
