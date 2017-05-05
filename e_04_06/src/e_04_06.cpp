/*演習4-6
 * 3種類の浮動小数点型の大きさをsizeof演算子によって表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//3種類の浮動小数点型を生成する。
	float			fTest =1.23456;		//float型に1.23456を代入。

	double			dTest =1.23456;		//double型に1.23456を代入。

	long double 	ldTest =1.23456;	//long_double型に1.23456を代入。

	//それぞれの大きさを表示。
	//floatの大きさを表示。
	cout	<<"変数fTestの大きさ："	<<sizeof(fTest)	<<'\n';

	//doubleの大きさを表示。
	cout	<<"変数dtestの大きさ："	<<sizeof(dTest)	<<'\n';

	//long_doubleの大きさを表示。
	cout	<<"変数ldTestの大きさ："<<sizeof(ldTest)	<<'\n';

	//0を返す。
	return 0;
}
