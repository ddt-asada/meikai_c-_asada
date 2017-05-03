/*演習6-4
 * 半径rの円の面積を求めて返却する関数circ_areaを作成する。円周率は3.14とする。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//受け取った引数を半径とした円の面積を求める関数。
double circ_area(double dr)
{
	//答えとなる面積の型を生成。
	double darea;

	//円の面積を求める。
	darea = dr * dr * 3.14;

	//求めた円の面積を返す。
	return darea;
}

int main()
{
	//求めたい円の半径の型。
	double dr;

	//求めたい円の半径を入力する。
	cout << "円の半径は：";
	cin >> dr;

	//円の半径を円の面積を求める関数に渡し、返された値を表示する。
	cout << "円の面積は" << circ_area(dr) << "です。\n";
}
