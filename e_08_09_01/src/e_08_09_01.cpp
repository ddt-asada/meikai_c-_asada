/*演習8-9
 * strcpy関数と同等の関数を作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理を行うライブラリ関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
void mystrcpy(char* paste, const char* copy);

int main()
{
	const char*	copy = "abcdef";	//コピー元のポインタによる文字列を生成。

	char*		paste = "ghijklmno";	//コピー先のポインタによる文字列を生成。

	//文字列をコピーする関数を呼び出す。
	mystrcpy(paste, copy);

	//0を返す。
	return 0;
}

/*関数名：void mystrcpy(char* paste, const char* copy)
 * 文字列をコピーする関数。
 * 引数char* paste：コピー先の文字列。
 * 引数const char* cpy：コピー元の文字列。
 * 返却値：なし。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 */

void mystrcpy(char* paste, const char* copy)
{
	paste = (char*)copy;

	//コピーした文字列の表示。
	cout	<<paste	<<'\n';
}
