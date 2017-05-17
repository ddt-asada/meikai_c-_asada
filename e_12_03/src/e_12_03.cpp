/*演習12-3
 * 時刻クラスに各種の演算子関数を追加したものを作成せよ。
 * 作成日：2017年5月17日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <sstream>
//時刻クラスを定義した自作ヘッダを読み込む。
#include"e_12_03_Time.h"

using namespace std;

int main()
{

	//デフォルトコンストラクタから呼び出す。
	Time now;

	//任意の値を代入し、コンストラクタから呼び出す。
	Time night(0, 30, 20);

	//nowの中身を確認する。
	cout	<<"now："	<<now.to_string()	<<'\n';

	//nightの中身を確認する。
	cout	<<"night"	<<night.to_string()	<<'\n';

	//代入演算子を適用する。
	now += Time(2, 4, 1);
	night -= 10;

	//nowの中身を確認する。
	cout	<<"now："	<<now.to_string()	<<'\n';

	//nightの中身を確認する。
	cout	<<"night"	<<night.to_string()	<<'\n';

	//等価演算子を適用する。
	if(now == night) {

		//等しいと表示。
		cout	<<"二つは等しいです。\n";
	//等価演算子がきちんと機能するかを確かめるためにあえてelse if使用。
	} else if (now != night) {

		//等しくないと表示。
		cout	<<"二つは等しくないです。\n";
	}

	//2項演算子を適用。
	now = now + night;

	//nowの中身を確認する。
	cout	<<"now："	<<now.to_string()	<<'\n';

	//nightの中身を確認する。
	cout	<<"night"	<<night.to_string()	<<'\n';

	/*
	//抽出子を追加。
	string st = "21/23/28";	//入力される文字。

	istringstream is(st);		//文字列からの入力を行うためのストリーム。

	int h, m, s;

	char	ch;					//スラッシュを空読みするための定義。

	is	>>h	>>ch	>>m	>>ch	>>s;

	cout	<<h	<<"時"	<<m	<<"分"	<<s	<<"秒\n";
	*/
}
