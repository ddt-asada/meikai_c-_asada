/*演習5-12.
 * 3次元配列の要素数を求める式を示すプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{

	int	Element[5][3][5];	//要素数を確かめるための配列を作る。

	//行数を求める。
	cout	<<"1次元配列の要素数："	<<"1次元配列全体の大きさ / 構成要素の大きさ。 "	<<sizeof(Element) / sizeof(Element[5])	<<'\n';

	//列数を求める。
	cout	<<"2次元配列の要素数："	<<"2次元配列全体の大きさ / 構成要素の大きさ。 "	<<sizeof(Element[5]) / sizeof(Element[5][3])	<<'\n';

	//行数を求める。
	cout	<<"3次元配列の要素数："	<<"3次元配列全体の大きさ / 構成要素の大きさ。 "	<<sizeof(Element[5][3]) / sizeof(Element[5][3][5])	<<'\n';

	//0を返す。
	return 0;
}
