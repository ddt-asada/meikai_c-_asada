/*演習5-2
 * 要素型がdouble型で要素数が5の配列の全要素に0.0を代入して表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	double	dArray[5] = {0.0};	//要素数5のdouble型配列を0.0で初期化。

	//小数点以下の精度を指定。
	cout	<<fixed	<<setprecision(1);

	//配列を表示するための繰り返し。
	for(int i = 0; i < 5; i++) {
		//配列の全要素を表示。
		cout	<<"dArray["	<<i	<<"]="	<<dArray[i]	<<'\n';
	}

	//0を返す。
	return 0;

}
