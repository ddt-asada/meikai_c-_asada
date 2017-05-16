/*演習9-9
 * 数あてゲームを以下の使用で作成する。
 * ・充てるべき数を0～999とする。
 * プレイヤーが数値を入力できる回数を最大で10回までに制限する。
 * 入力ミスを行ったばあい（0～999以外の数を入力した）場合は回数としてカウントしない。
 * 正解した場合は何回で正解したのかを表示し、最後まで正解しなかった場合は正解を表示する。
 * 作成日：2017年5月14日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//自作したヘッダの読み込み。
#include "e_09_09.h"

using namespace std;

int	max_no = 999;	//当てるべき数の最大値。

int main()
{
	int Answer;			//回答を入れる宣言。

	int	hantei;			//答えの判定を行うための型。

	int	inp = 0;		//入力回数をカウントするための型。

	//乱数の種を設定する関数を呼び出す。
	initialize();

	//数あてゲームの開始を宣言。
	cout	<<"数あてゲーム開始！！\n";

	//やめることを宣言するまで問題を繰り返す。繰り返しの判定は最後にbool confirm_retry()を呼び出して行う。
	do {
		//問題を生成する関数を呼び出す。
		Answer = gen_no();

		//正解するまで繰り返す。
		do {
			hantei = judge(input());		//回答を入力する関数を呼び出し、その入力された値を正解を判定する関数にそのままわたし、その判定結果を代入。

			inp++;							//入力回数をカウント。

			//判定した結果が入力した答えより回答が小さかった時。
			if (hantei == 1) {

				//答えはもっと小さい数字であることを表示する。
				cout	<<"もっと小さい数字ですよ。\n";

			//判定した結果が入力した答えより回答が大きかった時。
			} else if (hantei == 2) {

				//答えはもっと大きい数字であることを表示する。
				cout	<<"もっと大きい数字ですよ。\n";

			}

		//正解だった場合はループを抜けて正解と表示。
		} while (hantei != 0 && inp != 10);

			//問題に正解した時。
			if(hantei == 0) {

				//正解と表示。
				cout	<<"正解です。\n";
				//何回目で正解したかを表示。
				cout	<<inp	<<"回目で正解しました。\n";

				//不正解のまま規定回数を超えた場合。
			} else {

				//答えを表示。
				cout	<<"不正解です。答えは"	<<Answer	<<"です。\n";
			}

		//答えた回数をカウントする型の初期化。
		inp = 0;

	//繰り返しを判定する関数を呼び出し、その結果に応じて繰り返すかどうかを判定する。
	}while (confirm_retry());

	//0を返す。
	return 0;
}
