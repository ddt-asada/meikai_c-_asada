/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 */

//文字列クラスを使用したプログラムのメイン部。

#include <iostream>
#include "e_14_03_String.h"

using namespace std;

int main()
{
	//クラス型オブジェクトの生成。
	String test1 = "こんにちは!!";

	//クラス型オブジェクトの生成。
	String test2 = "Hello!!";

	//コピーコンストラクタを用いて初期化。
	String test3 = test1;

	//一度すべて表示して中身を確認する。
	cout	<<"test1「"	<<&test1	<<'\n';

}
