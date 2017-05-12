/*演習8-14
 * 文字列sの文字の並びを反転する関数str_rvsを作成。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数の宣言。
char* str_rvs(char* s);

int main()
{
	char	s[] = "ABCDEFG";	//反転させたい文字列の入力。

	//文字列を反転させる関数から帰ってきた文字列を表示
	//今回の場合「GFEDCBA」になる。
	cout	<<"文字列を反転させました。\n"	<<str_rvs(s)	<<'\n';

	//0を返す。
	return 0;
}

/*関数名：char* str_rvs(char* s)
 * 受け取った文字列を反転させる関数。
 * 引数char* s：反転させたい文字列。
 * 返却値：反転させた文字列。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

char* str_rvs(char* s)
{
	char pre;				//文字列を反転させる処理に使う仮の置き場。

	int len = strlen(s);	//繰り返しの上限値として文字列の長さを取得。

	//文字列を反転させる。繰り返し回数は文字列の長さの半分でよい。
	for(int i = 0; i < len / 2; i++) {

		pre = s[i];			//仮の置き場に置く。
		s[i] = s[len -1 - i];	//後ろの文字と入れ替える。
		s[len - 1 -i] = pre;	//仮に置いていた文字を戻す。

	}

	//反転後の文字列を返す。
	return s;
}
