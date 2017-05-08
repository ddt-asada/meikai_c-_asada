/*演習6-2
 * 三つのint型引数a,b,cの最小値を求める関数minを作成せよ。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名：int med_of(int Med1, int Med2, int Med3)
 * 受け取った引数の中央値を求め、求めた中央値を返却する関数。
 * 引数Med1：中央値を求めたい整数。
 * 引数Med2：中央値を求めたい整数。
 * 引数Med3：中央値を求めたい整数。
 * 返却値：求めた中央値。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

//受け取った引数の中央値を返す関数。
int	med_of(int Med1, int Med2, int Med3)
{

	int	MED;		//求めた中央値を代入する型。

	int MIN = Med1;	//受け取った引数を昇順にソートするための型。

	//まず三つの整数値を昇順にソートする。
	//Med1とMed2を比較する。
	//Med1がMed2より大きいとき。
	if(Med1	>= Med2) {

		MIN  = Med2;	//MINにMed2を代入する。
		Med2 = Med1;	//Med2にMed1を代入する。
		Med1 = MIN;		//Med1にMINを代入する。

	}

	//Med2とMed3を比較する。
	//Med2がMed3より大きいとき。
	if(Med2	>= Med3) {

		MIN  = Med3;	//MINにMed3を代入する。
		Med3 = Med2;	//Med3にMed2を代入する。
		Med2 = MIN;		//Med2にMINを代入する。

	}

	//Med1とMed2を比較する。
	//Med1がMed2より大きいとき。
	if(Med1	>= Med2) {

		MIN  = Med2;	//MINにMed2を代入する。
		Med2 = Med1;	//Med2にMed1を代入する。
		Med1 = MIN;		//Med1にMINを代入する。

	}

	MED = Med2;	//昇順に並べた中央の値が中央値であるのでそれを代入。

	//求めた中央値を返す。
	return MED;
}

int main()
{

	int Med1, Med2, Med3;	//求めたい中央値の型。

	//中央値を調べたい三つの整数の入力を促す。
	cout	<<"整数を三つ入力してください。\n";

	//一つ目の整数値。
	cout	<<"整数値Med1：";
	//一つ目の整数値の入力。
	cin		>>Med1;

	//二つ目の整数値。
	cout	<<"整数値Med2：";
	//二つ目の整数値の入力。
	cin		>>Med2;

	//三つめの整数値。
	cout	<<"整数値Med3：";
	//三つめの整数値の入力。
	cin		>>Med3;

	//入力した三つの整数を中央値を調べる関数に渡し、帰ってきた値を表示。
	cout	<<"中央値は"	<<med_of(Med1, Med2, Med3)	<<"です。\n";

	//0を返す。
	return 0;
}
