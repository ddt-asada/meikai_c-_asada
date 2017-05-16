/*演習11-3
 * 時・分・秒のデータメンバで構成される時刻クラスに挿入子と抽出子を追加して作成せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <sstream>
//時刻クラスを定義した自作ヘッダを読み込む。
#include"e_11_03.h"

using namespace std;

int main()
{
	//挿入子を追加。
	const Time clock(23,25,22);
	//clockの表示。
	//cout	<<"clock："	<<clock	<<"\n";
	//clockの文字列表現。
	cout	<<"clockの文字列表現：\""	<<clock.to_string()	<<"\"\n";

	//抽出子を追加。
	string st = "21/23/28";	//入力される文字。

	istringstream is(st);		//文字列からの入力を行うためのストリーム。

	int h, m, s;

	char	ch;					//スラッシュを空読みするための定義。

	is	>>h	>>ch	>>m	>>ch	>>s;

	cout	<<h	<<"時"	<<m	<<"分"	<<s	<<"秒\n";
}
