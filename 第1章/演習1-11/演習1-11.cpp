/*演習1-11
 * 二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	double	dCal1, dCal2;	//計算に使う実数値の型。

	//実数値dCal1の入力を促す。
	cout	<<"実数値dCal：";
	//キーボードから実数値dCal1を読み込む。
	cin		>>dCal1;

	//実数値dCal2の入力を促す。
	cout	<<"実数値dCal2：";
	//キーボードから実数値dCal2を読み込む。
	cin		>>dCal2;

	//実数値dCal1とdCal2の合計を表示。
	cout	<<"合計は"	<<dCal1 + dCal2			<<"です。\n";

	//実数値dCal1とdCal2の平均を表示。
	cout	<<"平均は"	<<(dCal1 + dCal2) / 2	<<"です。\n";

	//0を返す。
	return 0;
}
