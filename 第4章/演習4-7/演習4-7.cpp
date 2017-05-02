/*演習4-7
 * 3種類の浮動小数点型の情報をtypeid演算子によって表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//typeid演算子を利用するためのヘッダ。
#include <typeinfo>

using namespace std;

int main()
{
	//3種類の浮動小数点型を生成する。
	float a =1.23456;
	double b =1.23456;
	long double c =1.23456;

	//それぞれの型情報を表示。
	cout <<"変数aの型："<<typeid(a).name()<<'\n';
	cout <<"変数bの型："<<typeid(b).name()<<'\n';
	cout <<"変数cの型："<<typeid(c).name()<<'\n';
}
