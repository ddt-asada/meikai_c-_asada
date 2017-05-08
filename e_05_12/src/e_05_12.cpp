/*演習5-12
 * 3次元配列の要素数を求める式を示すプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{

	int	Element[5][3][5];	//要素数を確かめるための配列を作る。

	//要素数を求める。
	cout	<<"要素数は"	<<sizeof(Element) / sizeof(Element[0][0][0])	<<"です。\n";

	//0を返す。
	return 0;
}
