/*演習3-16
 * １からnまでの整数値の2乗値を表示するプログラムを作成せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Squ;	//求めたい2乗値。

	//「Squの値：」と表示。。
	cout	<<"Squの値：";
	cin		>>Squ;

	//１からnまで2乗する繰り返し文。
	for(int i = 1; i <= Squ; i++) {
		//iの乗値を出力。
		cout	<<i	<<"の2乗は"	<<i * i	<<'\n';
	}

	//0を返す。
	return 0;
}
