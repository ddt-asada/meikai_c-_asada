/*演習8-5
 * 文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数putvを作成。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数を宣言。
void putv(const char* s);

int main()
{
	char* test = "ABCDEFG";		//ポインタによる文字列を生成し、中身を表示する関数に渡すための適当な文字列で初期化。

	//文字列を先頭から1行に1文字ずつ表示する関数を呼び出す。
	putv(test);

	//0を返す。
	return 0;
}

/*関数名：void putv(const char* s)
 * 引数const char* s：改行しながら表示する文字列。
 * 返却値：なし。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

void putv(const char* s)
{
	//文字列がある限り繰り返す。
	for(int i = 0; s[i]; i++) {
		//改行しつつ文字列を表示。
		cout	<<s[i]	<<'\n';
	}
}
