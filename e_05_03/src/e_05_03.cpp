/*演習5-3
 * 要素型がint型で要素数が6の配列の全要素を1～10の乱数で埋め尽くすプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダ。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダ。
#include <cstdlib>

using namespace std;

int main()
{
	//乱数の種を時間を参照に決定。
	srand(time(NULL));

	int	Rand[6];	//乱数を入れるための配列を生成。

	//a[0]～a[5]までの配列に1～10までの乱数で埋め尽くす繰り返し。
	for(int i = 0; i < 6; i++) {
		//乱数を代入。
		Rand[i] = rand() % 10 + 1;

		//配列の中身を表示。
		cout	<<"Rand["	<<i	<<"] = "	<<Rand[i]	<<'\n';
	}

	//0を返す。
	return 0;
}
