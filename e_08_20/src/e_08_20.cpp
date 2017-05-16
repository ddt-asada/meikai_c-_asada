/*演習8-20
 * 二つの文字列を指すポインタを交換する関数。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字処理ライブラリ関数を扱うヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
void swap_string(const char** swap1, const char** swap2);

int main()
{
	const char* swap1 = "ABC";		//入れ替えを行う文字列。

	const char* swap2 = "123";			//入れ替えを行う文字列。

	//文字列のポインタの入れ替え前の状態を確認する。
	cout	<<"入れ替え前は\n";
	cout	<<"swap1："	<<swap1	<<"\nアドレス："	<<&swap1	<<'\n';
	cout	<<"swap2："	<<swap2	<<"\nアドレス："	<<&swap2	<<'\n';

	//文字列のポインタを交換する関数を呼び出す。
	swap_string(&swap1, &swap2);
	//ポインタが入れ替えられたことを確認する。
	cout	<<"入れ替え後は\n";
	cout	<<"swap1："	<<swap1	<<"\nアドレス："	<<&*swap1	<<'\n';
	cout	<<"swap2："	<<swap2	<<"\nアドレス："	<<&*swap2	<<'\n';
}

/*関数名：swap_string(char* swap1, char* swap2)
 * 二つの文字列の内容を入れ替える関数。
 * 引数char* swap1：入れ替える文字列。
 * 引数char* swap2：入れ替える文字列。
 * 返却値：なし。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

void swap_string(const char** swap1, const char** swap2)
{
	//const char*	swap3;	//文字列を入れ替えるときの仮の置き場。

	const char*	swap3 = *swap2;	//文字列を仮の置き場に格納。
	*swap2 = *swap1;	//文字列を入れ替える。
	*swap1 = swap3;	//文字列を戻す。

}


