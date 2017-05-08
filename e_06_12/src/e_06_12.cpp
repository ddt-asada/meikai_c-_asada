/*演習6-12
 * b以上a以下の全整数の和を求める関数sumを作成せよ。
 * なお、bに対する実引数が省略されて呼び出された場合は、bを1とみなして合計を求めること。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*int sum(int a, int b);
 * b以上a以下の全整数の和を求める関数。bに対する引数が省略された場合はbを1とみなす。
 * 引数a：和を求める範囲の上限値。
 * 引数b：和を求める範囲の下限値。
 * 返却値：b以上a以下の全整数の和。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

//合計を求める関数。
int sum(int MAX, int MIN = 1)
{

	int Sum;	//求めた和を入れるための整数の型。

	//b以上a以下の全整数の和を求める繰り返し。
	for(int i = MIN; i <= MAX; i++) {

		Sum += i;	//合計値を計算。

	}

	//求めた和を返却する。
	return Sum;
}

int main()
{

	int MIN, MAX;	//求める整数の範囲を入力するための型。

	//求めたい整数の範囲の下限値の入力を促す。
	cout	<<"求めたい整数の範囲の下限値：";
	//下限値の入力。
	cin		>>MIN;

	//求めたい整数の範囲の上限値の入力を促す。
	cout	<<"求めたい整数の範囲の上限値：";
	//上限値の入力。
	cin		>>MAX;

	//入力した下限値から上限値までの間の全整数の和を求める関数を呼び出し、返却された値を出力する。
	cout	<<MIN	<<"以上"	<<MAX	<<"以下の全整数の和は"	<<sum(MAX, MIN)	<<"です。\n";

	//０を返す。
	return 0;
}