/*演習4-6
 * 3種類の浮動小数点型の大きさをsizeof演算子によって表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//3種類の浮動小数点型を生成する。
	float a =1.23456;
	double b =1.23456;
	long double c =1.23456;

	//それぞれの大きさを表示。
	cout <<"変数aの大きさ："<<sizeof (a)<<'\n';
	cout <<"変数bの大きさ："<<sizeof (b)<<'\n';
	cout <<"変数cの大きさ："<<sizeof (c)<<'\n';
}
