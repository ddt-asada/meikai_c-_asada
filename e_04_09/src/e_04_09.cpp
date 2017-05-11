/*演習4-9
 * 三つの整数値を読み込んで合計と平均を表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Cal1, Cal2, Cal3;	//計算に使用する三つの整数値の型を生成。

	//「整数Cal1：」と表示。
	cout	<<"整数Cal1：";
	//計算に使用する整数値の入力。
	cin		>>Cal1;

	//「整数Cal2：」と表示。
	cout	<<"整数Cal2：";
	//計算に使用する整数値の入力。
	cin		>>Cal2;

	//「整数Cal3：」と表示。
	cout	<<"整数Cal3：";
	//計算に使用する整数値の入力。
	cin		>>Cal3;

	//キャスト記法により型の変換を行う
	//合計をdouble型に変換して表示。
	cout	<<"合計は"	<<(double)(Cal1 + Cal2 + Cal3)		<<"です。\n";
	//平均をdouble型に変換して表示。
	cout	<<"平均は"	<<(double)(Cal1 + Cal2 + Cal3) / 3	<<"です。\n";

	//関数的記法により型の変換を行う。
	//合計をdouble型に変換して表示。
	cout	<<"合計は"	<<double(Cal1 + Cal2 + Cal3)		<<"です。\n";
	//平均をdouble型に変換して表示。
	cout	<<"平均は"	<<double(Cal1 + Cal2 + Cal3) / 3	<<"です。\n";

	//staticcast演算子を用いて型の変換を行う。
	//合計をdouble型に変換して表示。
	cout	<<"合計は"	<<static_cast<double>(Cal1 + Cal2 + Cal3)		<<"です。\n";
	//平均をdouble型に変換して表示。
	cout	<<"平均は"	<<static_cast<double>(Cal1 + Cal2 + Cal3) / 3	<<"です。\n";

	//0を返す。
	return 0;
}
