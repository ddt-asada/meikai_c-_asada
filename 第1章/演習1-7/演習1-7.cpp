/*演習1-7
 * 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int Cal1, Cal2, Cal3;	//計算に使う型。

	//計算するための値を入力。
	Cal1 = 10;
	Cal2 = 21;
	Cal3 = 77;

	//変数Cal1の値を確認。。
	cout	<<"Cal1の値は"	<<Cal1						<<"です。\n";

	//変数Cal2の値を確認。。
	cout	<<"Cal2の値は"	<<Cal2						<<"です。\n";

	//変数Cal3の値を確認。
	cout	<<"Cal3の値は"	<<Cal3						<<"です。\n";

	//Cal1、Cal2、Cal3の合計を表示。
	cout	<<"合計は"		<<Cal1 + Cal2 + Cal3		<<"です。\n";

	//Cal1、Cal2、Cal3の平均値を表示。
	cout	<<"平均は"		<<(Cal1 + Cal2 + Cal3) / 3 	<<"です。\n";

	//0を返す。
	return 0;
}
/*実行結果
 * Cal1の値は10です。
 * Cal2の値は21です。
 * Cal3の値は77です。
 * 合計は108です。
 * 平均は36です。
 */
