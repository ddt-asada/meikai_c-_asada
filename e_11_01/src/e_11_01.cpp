/*演習11-1
 * 時・分・秒のデータメンバで構成される時刻クラスを作成せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include<iostream>
//時刻クラスを定義した自作ヘッダを読み込む。
#include"e_11_01.h"

using namespace std;

int main()
{
	Time test1(23, 50, 30);		//時刻クラスを初期化。
	Time test2 = test1;			//時刻クラスtest2をtest1で初期化。
	Time test3(0, 10,30);		//時刻クラスtest3を初期化。

	//初期化したtest3に新たに値を代入しどうなるかを確認する。
	test3= Time(12, 40, 50);

	//それぞれを表示して中身を確認する。
	//test1の表示。
	cout	<<"test1："	<<test1.Hour()	<<"時"	<<test1.Minute()	<<"分"	<<test1.Secon()	<<"秒\n";
	//test2の表示。
	cout	<<"test2："	<<test2.Hour()	<<"時"	<<test2.Minute()	<<"分"	<<test2.Secon()	<<"秒\n";
	//test3の表示。
	cout	<<"test3："	<<test3.Hour()	<<"時"	<<test3.Minute()	<<"分"	<<test3.Secon()	<<"秒\n";
}
