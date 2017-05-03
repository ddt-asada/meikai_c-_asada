/*演習5-2
 * 要素型がdouble型で要素数が5の配列の全要素に0.0を代入して表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//要素数5のdouble型配列を0.0で初期化。
	double a[5] = {0.0};

	//配列を表示するための繰り返し。
	for(int i = 0; i < 5; i++)
		cout << "a[" << i << "]=" << a[i] << '\n';
}
