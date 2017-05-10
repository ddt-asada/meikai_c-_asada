/*演習4-1
 * すべての文字について、数字／英大文字／英小文字／記号文字などの文字種がわかる一覧表を出力するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月9日
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
	cout <<"この処理系の文字種と文字コード\n";

	//すべての文字種を表示するための無限ループ。
	for (char i = 0; ; i++) {
		//空白類文字を表示。
		switch(i) {
		//空白類文字を表示。
		case '\a'	:cout	<<"\\a";	break;
		//空白類文字を表示。
		case '\b'	:cout	<<"\\b";	break;
		//空白類文字を表示。
		case '\f'	:cout	<<"\\f";	break;
		//空白類文字を表示。
		case '\n'	:cout	<<"\\n";	break;
		//空白類文字を表示。
		case '\r'	:cout	<<"\\r";	break;
		//空白類文字を表示。
		case '\t'	:cout	<<"\\t";	break;
		//空白類文字を表示。
		case '\v'	:cout	<<"\\v";	break;
		//空白類文字でないときは文字コードであるか判定し文字コードの場合文字コードを表示。
		default		:cout	<<' '	<<(isprint(i) ? i : ' ');
		}

		//文字コードのときの判定。
		if(isprint(i) != 0) {
			//返り値を調べる。
			switch(isprint(i)) {
			//1のときは英大文字と表示。
			case 1		:cout	<<" 英大文字\n";	break;
			//2のときは英子文字と表示。
			case 2		:cout	<<" 英小文字\n";	break;
			//4のときは数字と表示。
			case 4		:cout	<<" 数字\n";		break;
			//16のときは記号と表示。
			case 16 	:cout	<<" 記号\n";		break;
			}
		//空白類文字の時
		} else if (isspace(i) != 0) {
			//空白類文字と表示。
			cout	<<" 空白類文字\n";
		//何もないとき
		} else {
			//空白と表示。
			cout	<<" 空白\n";
		}
		//charが表しうるすべての文字コードが表示されたら無限ループを強制終了。
		if(i == CHAR_MAX) break;
	}

	//0を返す。
	return 0;
}
