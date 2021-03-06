/*演習2-10
 * 三つの値の最小値を求めて表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	min1, min2, min3;	//最小値を求めたい整数値の型。

	int	MIN;				//最小値を判定するための型。

	//「整数値min1：」と表示。
	cout	<<"整数値min1：";
	//最小値を求めたい整数値の入力。
	cin		>>min1;

	//「整数値min2：」と表示。
	cout	<<"整数値min2：";
	//最小値を求めたい整数値の入力。
	cin		>>min2;

	//「整数値min3：」と表示。
	cout	<<"整数値min3：";
	//最小値を求めたい整数値の入力。
	cin		>>min3;

	MIN = min1;				//最小値を判定する型をmin1で初期化。

	//判定用の変数を用いて大小を判定。
	//判定よりmin2が小さいとき。
	if(	MIN > min2) {
		MIN = min2;			//より小さいmin2でMINを初期化。
	}
	//判定用の変数を用いて大小を判定。
	//判定よりmin3が小さいとき。
	if(	MIN > min3) {
		MIN = min3;			//より小さいmin3でMINを初期化。
	}

	//上記の判定を終え、そのときにMINに入っていた値（すなわち最小値）を表示。
	cout	<<"三つの値の最小値は"	<<MIN	<<"です。\n";

	//0を返す。
	return 0;
}
