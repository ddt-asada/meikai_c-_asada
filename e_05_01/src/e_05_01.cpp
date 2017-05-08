/*演習5-1
 * 要素型がint型で要素数が5の配列の要素に対して、先頭から順に5，4，3，2，1を代入して表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Array[5] = {5, 4, 3, 2, 1};	//要素数5の配列を宣言し、5，4，3，2，1で初期化。

	//配列を先頭から順に表示するための繰り返し。
	for(int i = 0; i < 5; i++) {
		//配列の要素をすべて表示。
		cout	<<"Array["	<<i	<<"]="	<<Array[i]	<<'\n';
	}

	//0を返す。
	return 0;
}