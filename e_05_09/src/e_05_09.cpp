/*演習5-9
 * 配列aの全要素を配列bに対して逆順にコピーするプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月6日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	const int	Element = 5;	//配列の要素数。

	int			Copy[Element];	//コピー元の配列。

	int			Paste[Element];	//コピー先の配列。

	//コピー元の配列へ値を入力する繰り返し。
	for(int i = 0; i < Element; i++) {

		//「Copy［i］：」と表示。
		cout	<<"Copy["	<<i	<<"]：" ;
		//コピーしたい値の入力。
		cin		>>Copy[i];

	}

	//逆順にコピーする繰り返し。
	for(int i = 0; i < Element; i++) {

		Paste[Element - i - 1] = Copy[i];	//コピー

	}

	//コピーし終わった配列を表示。
	for(int i = 0; i < Element; i++) {

		//配列を表示。
		cout	<<"paste["	<<i	<<"]="	<<Paste[i]	<<'\n';

	}

	//0を返す。
	return 0;
}
