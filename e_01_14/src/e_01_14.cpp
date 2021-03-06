/*演習1-14
 * キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//C言語のライブラリ関数を利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	//時間を参照に乱数の種を決定。
	srand(time(NULL));

	int	Ran;	//生成した乱数を入れる型。

	//「整数値：」と表示。。
	cout	<<"整数値：";
	//任意の整数値の入力。
	cin		>>Ran;

	//読み込んだ整数値±5の乱数を生成し、表示する。
	//乱数を0～10の範囲で生成し、その値にRan-5を加算する。
	cout	<<"入力された値の±5の乱数を生成しました。それは"	<<rand() % 11 + Ran - 5	<<" です。\n";

	//0を返す。
	return 0;
}
