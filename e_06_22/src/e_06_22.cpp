/*演習6-22
 * 渡された引数の2乗を求めるインライン関数、3乗を求めるインライン関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名inline double square(double power)
 * 受け取った引数を2乗して返すインライン関数。
 * 引数power：2乗したい値。
 * 返却値：引数の2乗。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

inline double square(double power)
{
	return power * power;	//引数の2乗を返す。
}

/*関数名inline double cube(double power)
 * 受け取った引数を3乗して返すインライン関数。
 * 引数power：3乗したい値。
 * 返却値：引数の3乗。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

inline double cube(double power)
{
	return power * power * power;	//引数の2乗を返す。
}

int main()
{
	double	power;	//2乗と3乗したい変数の型。

	//2乗と3乗したい変数の入力を促す。
	cout	<<"変数power：";
	//入力・
	cin		>>power;

	//変数を2乗して表示。
	cout	<<power	<<"の2乗は"	<<square(power)	<<"です。\n";

	//変数を3乗して表示。
	cout	<<power	<<"の3乗は"	<<cube(power)	<<"です。\n";

	//0を返す。
	return 0;
}
