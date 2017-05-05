/*演習4-7
 * 3種類の浮動小数点型の情報をtypeid演算子によって表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//typeid演算子を利用するためのヘッダ。
#include <typeinfo>

using namespace std;

int main()
{
	//3種類の浮動小数点型を生成する。
	float			fTest =1.23456;		//float型に1.23456を代入。

	double			dTest =1.23456;		//double型に1.23456を代入。

	long double 	ldTest =1.23456;	//long_double型に1.23456を代入。

	//それぞれの型を表示。
	//floatの型を表示。
	cout	<<"変数fTestの型："	<<typeid(fTest).name()	<<'\n';

	//doubleの型を表示。
	cout	<<"変数dtestの型："	<<typeid(dTest).name()	<<'\n';

	//long_doubleの型を表示。
	cout	<<"変数ldTestの型："<<typeid(ldTest).name()<<'\n';

	//0を返す。
	return 0;
}
