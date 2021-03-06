/*演習3-7
 * 正の整数値を読み込んで、その桁数を出力するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月9日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Num;	//桁数を調べたい整数の型。

	int	i = 0;	//繰り返しを判定するための整数を0で初期化。

	//「正の整数値：」と表示。
	cout	<<"正の整数値：";
	//桁数を調べたい整数の入力。
	cin		>> Num;

	//桁数を数えるためのwhile文。
	while(Num > 0) {
		//Numを10で割った値を次のNumとすることにより、桁数を1ずつ減らしていく。
		//このnを10で割った値が0、すなわち桁数がなくなった時点で繰り返しを終了する。
		Num = Num / 10;

		//桁数が1つ減るたびに、桁数を数える変数をインクリメントする。
		i++;
	}

	//最後に整数値の桁数を出力。
	cout	<<"その値は"	<<i	<<	"桁です。\n";

	//0を返す。
	return 0;
}
