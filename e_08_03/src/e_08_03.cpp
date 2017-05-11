/*演習8-3
 * 文字列中の大文字を小文字に変換したうえで表示する関数put_lowerを作成。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//C言語標準ライブラリ関数を利用するためのヘッダ。
#include <cctype>

using namespace std;

//関数を宣言。
void put_lower(const char test[]);

int main()
{
	char	test[] = "ABCDEFG";	//大文字を小文字に変換する関数の動作を確認したいので配列を宣言し、英大文字で初期化。

	//英大文字を英子文字にする関数を読み込む。
	put_lower(test);

	//0を返す。
	return 0;
}

/*関数名：void put_lower(const char test[])
 * 受け取った文字列中の大文字を小文字に変換して表示する関数。
 * 引数test[]：変換を行う文字列。
 * 返却値：なし
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

void put_lower(const char test[])
{
	//受け取った文字列を一つ一つ処理するための繰り返し。
	for(int i = 0; test[i]; i++) {

		//文字列中の大文字を小文字にしつつ表示して確認する。
		cout	<<static_cast<char>(tolower(test[i]));

	}
}
