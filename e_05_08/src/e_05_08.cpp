/*演習5-8
 * 配列の要素の並びをシャッフルするプログラム。
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

	const int	Element = 10;	//配列の要素数。

	int			Rand[Element];	//乱数を入れるための配列。

	int			Shuffle;		//シャッフルする相手の判定に利用。

	int			Place;			//配列の要素の仮の置き場。

	//配列を0～100までの乱数で埋め尽くす繰り返し。
	for(int i = 0; i < Element; i++) {

		Rand[i] = rand() % 101;		//乱数を代入。

		//シャッフルする前の配列を表示。
		cout	<<"Rand["	<<i	<<"]="	<<Rand[i]	<<'\n';
	}

	//配列の要素をシャッフルする繰り返し。
	for(int i = 0; i < Element; i++) {

		//配列Rand[i]とシャッフルする相手を決定。
		//シャッフルする相手が同じ場合は再抽選。
		for( ; Shuffle == i; ) {

			Shuffle = rand() % Element;		//シャッフルする相手を決定。

		}

		//シャッフルする。
		Place			= Rand[i];			//配列の要素を置き場に代入。
		Rand[i]			= Rand[Shuffle];	//元の要素にシャッフルする相手を代入。
		Rand[Shuffle]	= Place;			//元の要素を代入。

	}

	//シャッフルし終わった配列を表示。
	for(int i = 0; i < Element; i++) {

		//配列を表示。
		cout	<<"Rand["	<<i	<<"]="	<<Rand[i]	<<'\n';

	}

	//0を返す。
	return 0;
}
