/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */

//文字列クラスを使用したプログラムのメイン部。

#include <iostream>
#include "e_14_03_String.h"

using namespace std;

int main()
{
	//クラス型オブジェクトの生成。
	String name1("asada");

	//クラス型オブジェクトの生成。
	String name2("kazushi");

	//コピーコンストラクタを用いて初期化。
	String name3 = name2;

	//それぞれの中身を表示して確認。
	cout	<<"name1："	<<name1.strings()	<<"　　文字列の長さは："<<name1.length()	<<'\n';
	cout	<<"name2："	<<name2.strings()	<<"　　文字列の長さは："<<name2.length()	<<'\n';
	cout	<<"name3："	<<name3.strings()	<<"　　文字列の長さは："<<name3.length()	<<'\n';

	//代入演算子を用いて代入。
	name3 = name1;
	//表示して中身を確認。
	cout	<<"name3："	<<name3.strings()	<<"　　文字列の長さは："<<name3.length()	<<'\n';

	//文字列の長さを足す関数を呼び出す。
	name3 = name1 + name2;

	cout	<<"name3："	<<name3.strings()	<<"　　文字列の長さは："<<name3.length()	<<'\n';
}
