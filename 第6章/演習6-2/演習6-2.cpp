/*演習6-2
 * 三つのint型引数a,b,cの最小値を求める関数minを作成せよ。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//受け取った引数の最小値を返す関数。
int min_of(int nMin, int nmIn, int nmiN)
{
	//比較するための変数。
	int nmin = nMin;

	//比較する。
	if(nmin > nmIn) {
		nmin = nmIn;
	}
	if(nmin > nmiN) {
		nmin = nmiN;
	}

	//最小値を返す。
	return nmin;
}

int main()
{
	//最小値を調べたい整数の型。
	int nMin, nmIn, nmiN;

	//最小値を調べたい三つの整数を入力する。
	cout << "整数を三つ入力してください。";

	//一つ目の整数値。
	cout << "整数値nMin：";
	cin >> nMin;

	//二つ目の整数値。
	cout << "整数値nmIn：";
	cin >> nmIn;

	//三つめの整数値。
	cout << "整数値nmiN：";
	cin >> nmiN;

	//入力した三つの整数を最小値を調べる関数に渡し、帰ってきた値を表示。
	cout << "最小値は" << min_of(nMin, nmIn, nmiN) << "です。\n";
}
