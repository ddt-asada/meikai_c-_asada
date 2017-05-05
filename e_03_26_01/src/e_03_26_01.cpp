/*演習3-26-1
 * 人間とコンピュータが望む限り何度でも対戦できるじゃんけんプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	int	retry;		//繰り返しを判定するための型。

	int	Hand;		//人間のじゃんけんの手を選ぶための型。

	int	Cpu;		//コンピュータのじゃんけんの手を選ぶための型。

	//乱数の種を時間を参照に決定。
	srand(time(NULL));

	//望む限り何度でも対戦できるじゃんけん。
	for( ; retry != 0; ) {

		Cpu = rand() % 3;	//コンピュータのじゃんけんの手を決定するための乱数。

		//じゃんけんの手以外が選ばれたとき以外ループする（判定のため最初にHandを3で初期化）。
		for(Hand =3; Hand < 0 || Hand > 2; ) {
		//じゃんけん（グー…0／チョイ…1／パー…2）」と表示。
		cout	<<"じゃんけん（グー…0／チョキ…1／パー…2）";
		cin		>>Hand;
		}

		//人間の手によって3パターンに分岐。
		switch(Hand) {
		//人間の手がグーの時。
		case 0	:	switch(Cpu) {
					//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0	:	cout	<<"あいこ。\n";	break;
					//チョキの時。
					case 1	:	cout	<<"勝ち。\n";	break;
					//パーの時。
					case 2	:	cout	<<"負け。\n";	break;
					//終了判定に移る。
					}	break;

		//人間の手がチョキの時。
		case 1	:	switch(Cpu) {
					//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0	:	cout	<<"負け。\n";	break;
					//チョキの時。
					case 1 :	cout	<<"あいこ。\n";	break;
					//パーの時。
					case 2 :	cout	<<"勝ち。\n";	break;
					//終了判定に移る。
					}	break;

		//人間の手がパーの時。
		case 2	:	switch(Cpu) {
					//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0	:	cout	<<"勝ち。\n";	break;
					//チョキの時。
					case 1	:	cout	<<"負け。\n";	break;
					//パーの時。
					case 2	:	cout	<<"あいこ。\n";	break;
					//終了判定に移る。
					}	break;
		}

		//「もう一度？（Yes…Y／No…N）：」と表示。
		cout	<<"もう一度？（Yes…1／No…0）：";
		//どちらかを入力。
		cin		>>retry;
	}

	//0を返す。
	return 0;
}
