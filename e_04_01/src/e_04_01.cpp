/*演習4-1
 * すべての文字について、数字／英大文字／英小文字／記号文字などの文字種がわかる一覧表を出力するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//CHAR_MAXを取得するためのヘッダ。
#include <climits>
//文字種テスト関数を読み込むためのヘッダ。
#include <cctype>

using namespace std;

int main()
{
	//「この処理系の文字と文字コード」と表示。
	cout <<"この処理系の文字と文字コード\n";

	//すべての文字種を表示するための無限ループ。
	for (char i = 0; ; i++) {
		//charが逆斜線文字を表す時の分岐。
		switch(i) {
			//\\を二つ付けることにより、逆斜線文字を表示。
			//文字コードが\aの時。
			case '\a'	:	cout	<<"\\a";	break;
			//文字コードが\bの時。
			case '\b'	:	cout	<<"\\b";	break;
			//文字コードが\fの時。
			case '\f'	:	cout	<<"\\f";	break;
			//文字コードが\nの時。
			case '\n'	:	cout	<<"\\n";	break;
			//文字コードが\rの時。
			case '\r'	:	cout	<<"\\r";	break;
			//文字コードが\tの時。
			case '\t'	: 	cout	<<"\\t";	break;
			//文字コードが\vの時。
			case '\v'	:	cout	<<"\\v";	break;
			//逆斜線文字以外の時の分岐（そのまま表示できる文字の時。）
			//iが逆斜線文字以外かつ、そのまま表示できる文字の時はそのまま表示、それ以外は空欄とする。
			default 	:	cout	<<' '	<<(isprint(i) ? i : ' ');
		}

		//char型から整数型にキャストしたもの、すなわち文字の文字コードを10進数で表示。
		cout	<<' '	<<dec	<<int(i)	<<'\n';

		//charが表しうるすべての文字コードが表示されたら無限ループを強制終了。
		if(i == CHAR_MAX) break;
	}

	//0を返す。
	return 0;
}
