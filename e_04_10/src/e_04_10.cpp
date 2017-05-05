/*演習4-10
 * float型の変数を0.0から1.0まで0.001ずつ増やしていく様子と
 * int型の変数を0から1000までインクリメントしていた値を1000で割った値を求める様子を、
 * 横に並べて表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ
#include <iomanip>

using namespace std;

int main()
{
	double	dTest = 0;	//インクリメントする整数値を0で初期化。

	//表を見やすくするため、setw操作子により10文字幅を確保。
	//10文字の間隔に「float」と表示。
	cout	<<setw(10)	<<"float";

	//10文字の間隔に「int」と表示。
	cout	<<setw(10)	<<"int\n";

	//表題との境目。
	cout	<<"-----------------\n";

	//浮動小数点の精度を指定。
	cout	<<	fixed	<<setprecision(6);

	//0.001～1.000までの繰り返しを宣言。
	for(float fTest = 0.0F; fTest <= 1.0F; fTest += 0.001F) {
		//見やすくするため10文字幅を確保。
		cout	<<setw(10)	<<fTest;
		//見やすくするため10文字幅を確保。
		cout	<<setw(10)	<<(dTest/1000)	<<'\n';
		dTest++;
	}

	//0を返す。
	return 0;
}
