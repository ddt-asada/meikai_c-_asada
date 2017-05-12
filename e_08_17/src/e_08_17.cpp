/*演習8-17
 * 二つの文字列の内容をそっくり入れ替える関数を作成。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字処理ライブラリ関数を扱うヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
void swap_string(char* swap1, char* swap2);

int main()
{
	char	swap1[] = "ABCDEF";	//入れ替えたい文字列。

	char	swap2[] = "XYZ";	//入れ替えたい文字列。

	//文字をそっくり入れ替える関数を呼び出す。
	swap_string(swap1, swap2);

	//入れ替えた後の文字列を表示。
	cout	<<"文字列を入れ替えました。\n";
	//swap1を表示。
	cout	<<"swap1："	<<swap1	<<'\n';
	//swap2を表示。
	cout	<<"swap2："	<<swap2	<<'\n';

	//0を返す。
	return 0;
}

/*関数名：swap_string(char* swap1, char* swap2)
 * 二つの文字列の内容を入れ替える関数。
 * 引数char* swap1：入れ替える文字列。
 * 引数char* swap2：入れ替える文字列。
 * 返却値：なし。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

void swap_string(char* swap1, char* swap2)
{
	char	swap3[] = "AAA";	//文字列を入れ替えるときの仮の置き場。

	strcpy(swap3, swap2);	//文字列を仮の置き場に格納。
	strcpy(swap2, swap1);	//文字列を入れ替える。
	strcpy(swap1, swap3);	//文字列を戻す。

}
