/*演習2-11
 * 三つの値の中央値を求め、表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	med1, med2, med3;	//中央値を求めたい整数値の型。

	int	MED;				//中央値を判定するための型。

	//「整数値med1：」と表示。
	cout	<<"整数値med1：";
	//中央値を求めたい整数値の入力。
	cin		>>med1;

	//「整数値med2：」と表示。
	cout	<< "整数値med2：";
	//中央値を求めたい整数値の入力。
	cin		>> med2;

	//「整数値med3：」と表示。
	cout	<< "整数値med3：";
	//中央値を求めたい整数値の入力。
	cin		>> med3;

	//まず三つの整数値を昇順にソートする。
	//med1とmed2を入れ替える。
	if(med1	>= med2) {
		MED  = med2;	//MEDにmed2を代入する。
		med2 = med1;	//med2にmed1を代入する。
		med1 = MED;		//med1にMEDを代入する。
	}

	//med2とmed3を入れ替える。
	if(med2	>= med3) {
		MED  = med3;	//MEDにmed3を代入する。
		med3 = med2;	//med3にmed2を代入する。
		med2 = MED;		//med2にMEDを代入する。
	}

	//med1とmed2を入れ替える。
	if(med1	>= med2) {
		MED  = med2;	//MEDにmed2を代入する。
		med2 = med1;	//med2にmed1を代入する。
		med1 = MED;		//med1にMEDを代入する。
	}

	//昇順に並べられた値の真ん中の数値が中央値である。
	//真ん中の数字med2を表示する。
	cout	<< "三つの値の中央値は" << med2 << "です。\n";
}
