/*演習5-5
 * 異なる要素が同じ値とならないように、1～10の乱数を要素数6の配列に代入するプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月6日
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

	int	Array[6] = {0, 0, 0, 0, 0, 0};			//乱数を入れるための配列を生成。

	int	Check[6] = {-1, -1, -1, -1, -1, -1};	//乱数を入れた配列を走査するための配列。

	//a[0]～a[5]までの配列に1～10までの乱数で埋め尽くす繰り返し。
	for(int i = 0; i < 6; i++) {

		//異なる要素と同じ値でどうかを確認する繰り返し。
		for( ;Array[i] == Check[0] || Array[i] == Check[1] || Array[i] == Check[2] || Array[i] == Check[3] || Array[i] == Check[4]; ) {

			Array[i] = rand () % 11;	//0～10の乱数を代入。
			//同じ値の場合、再度乱数を代入。
		}

		Check[i] = Array[i];	//すでに入力された乱数を除外するために走査用の配列に代入。

		//配列の中身を表示。
		cout	<<"Array["	<<i	<<"]="	<<Array[i]	<<'\n';
	}

	//0を返す。
	return 0;
}
