/*演習6-2
 * 三つのint型引数a,b,cの最小値を求める関数minを作成せよ。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//受け取った引数の中央値を返す関数。
int med_of(int nMed, int nmEd, int nmeD)
{
	//比較するための変数。
	int nmed = nMed;

	//初めに、nmeD>=nmed>=nmEdで比較する。
	//成立していればそのまま。
	if(nmeD >= nmed && nmEd <= nmed) {
		nmed = nMed;
	}


	//不成立ならnmeDを代入。
	else {
		nmed = nmeD;
	}

	//次に、nmEd>=nmed>=nmeDを比較する。
	//成立していればnMedを。
	if(nmEd >= nmed && nmeD <= nmed) {
		nmed = nMed;
	}

	//不成立ならnmEdを代入。
	else {
		nmed = nmEd;
	}

	//中央値を返す。
	return nmed;
}

int main()
{
	//中央値を調べたい整数の型。
	int nMed, nmEd, nmeD;

	//中央値を調べたい三つの整数を入力する。
	cout << "整数を三つ入力してください。";

	//一つ目の整数値。
	cout << "整数値nMed：";
	cin >> nMed;

	//二つ目の整数値。
	cout << "整数値nmEd：";
	cin >> nmEd;

	//三つめの整数値。
	cout << "整数値nmeD：";
	cin >> nmeD;

	//入力した三つの整数を中央値を調べる関数に渡し、帰ってきた値を表示。
	cout << "中央値は" << med_of(nMed, nmEd, nmeD) << "です。\n";
}
