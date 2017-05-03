/*演習5-12
 * 3次元配列の要素数を求める式を示すプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//要素数を確かめるための配列を作る。
	int nSample[5][3][5];

	//要素数を求める。
	cout<< "要素数は"<< sizeof(nSample) / sizeof(nSample[0][0][0])<< "です。\n";
}
