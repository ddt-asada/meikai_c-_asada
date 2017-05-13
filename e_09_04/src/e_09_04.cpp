/*演習9-4
 * 二値の最小値を求める関数テンプレートminofを作成する。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//テンプレート関数宣言。
template <class Type> Type min_of(Type min1, Type min2 );

int main()
{
	int		min1 = 10;		//最小値を比較したい変数を宣言。int型を宣言。

	int		min2 = 15;		//最小値を比較したい変数を宣言。int型を宣言。

	double	dmin1 = 9.9;	//最小値を威嚇したい変数を宣言。double型を宣言。

	double	dmin2 = 11.1;	//最小値を比較したい変数を宣言。double型を宣言。

	//上の二つをテンプレート関数に渡し、どのように値が帰ってくるか確認する。
	//関数を呼び出して帰ってきた値を表示。
	//int型の場合
	cout	<<min1	<<"と"	<<min2	<<"のうち小さい方は"	<<min_of(min1, min2)	<<"です。\n";

	//double型の場合
	cout	<<dmin1	<<"と"	<<dmin2	<<"のうち小さい方は"	<<min_of(dmin1, dmin2)	<<"です。\n";

	//double型とint型の場合(double型が最小値になる場合）。
	cout	<<dmin1	<<"と"	<<min1	<<"のうち小さい方は"	<<min_of<double>(dmin1, min1)	<<"です。\n";

	//double型とint型の場合(int型が最小値になる場合）。
	cout	<<dmin2	<<"と"	<<min1	<<"のうち小さい方は"	<<min_of<double>(dmin2, min1)	<<"です。\n";


	//0を返す。
	return 0;
}

/*関数名：template <class Type> Type min_of(Type min1, Type min2)
 * 受け取った引数の二値の最小値を求める関数。
 * 引数Type min1：関数が呼び出された時に渡された値と同じ型の数値。
 * 引数Type min2：関数が呼び出された時に渡された値と同じ型の数値。
 * 返却値：最小値をかえす。。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 */

template <class Type> Type min_of(Type min1, Type min2)
{

	return min1 <= min2 ? min1 : min2;	//受け取った引数の最小値を返却。

}
