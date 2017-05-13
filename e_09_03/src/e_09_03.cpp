/*演習9-3
 * xの2乗をも求める関数テンプレートsquareを作成する。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//テンプレート関数宣言。
template <class Type> Type square(Type x);

int main()
{
	int		test = 10;		//2乗したい任意の整数まずはint型を宣言。

	double	dtest = 5.5;	//2乗したい任意の値。double型を宣言。

	//上の二つをテンプレート関数に渡し、どのように値が帰ってくるか確認する。
	//関数を呼び出して帰ってきた値を表示。
	//int型の場合
	cout	<<test	<<"の2乗は"	<<square(test)	<<"です。\n";

	//double型の場合
	cout	<<dtest	<<"の2乗は"	<<square(dtest)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：template <class Type> Type square(Type x)
 * 受け取った引数と同じ型の2乗値を求める関数。
 * 引数Type x：関数が呼び出された時に渡された値と同じ型の数値。
 * 返却値：2乗したType型の数値。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 */

template <class Type> Type square(Type x)
{

	return x * x;	//受け取った引数を2乗した値を返却。

}
