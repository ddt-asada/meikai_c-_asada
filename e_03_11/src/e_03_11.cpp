/*演習3-11
 * 1からnまでの和を求めるプログラム（for文使用）。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Lim;		//求めたい和の終わりの型。

	int	Sum;		//求めた和を代入する型。

	//「整数値：」と表示。
	cout	<<"整数値：";
	//求めたい和の終わりの入力。
	cin		>>Lim;

	//1からnまでの総和を求めるための繰り返し。
	for(int i = 1; i <= Lim; i++) {
		Sum += i;	//sumにiを加算していく。
	}

	//求めた和を表示。
	cout	<<"1から"	<<Lim	<<"までの和は"	<<Sum	<<"です。\n";

	//0を返す。
	return 0;
}
