/*演習8-4
 * 各配列の文字列の個数を計算によって求めるプログラム。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	char	test2[][5] = {"LISP", "C", "Ada"};	//配列による文字列の配列。適当な文字列で初期化。この文字列の要素数を計算で求める。

	char*	test1[] ={"PAUL", "X", "MAC"};		//ポインタによる文字列の配列を宣言し、適当な文字列で初期化。この文字列の要素数を計算で求める。

	//要素数を求めつつ文字列を表示。
	for(int i = 0; i < sizeof(test2) / sizeof(test2[0]); i++) {
		//文字列を表示。
		cout	<<"test2["	<<i	<<"]= \""	<<test2[i]	<<"\"\n";
	}

	//要素数を求めつつ文字列を表示。
	for(int i = 0; i < sizeof(test1) / sizeof(test1[0]); i++) {
		//文字列を表示。
		cout	<<"test1["	<<i	<<"]= \""	<<test1[i]	<<"\"\n";
	}

	//0を返す。
	return 0;
}
