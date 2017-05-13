/*演習9-1
 * 再起呼び出しを用いずに階乗を求める関数を作成。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
int factorial(int num);

int main()
{
	int num;	//階乗したい変数の型。

	//階乗したい変数の入力を促す。
	cout	<<"整数値：";
	//変数の入力。
	cin		>>num;

	//階乗を求める関数を呼び出し、表示。
	cout	<<num	<<"の階乗は"	<<factorial(num)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：int factorial(int num)
 * 与えられた引数の階乗を求める関数。
 * 引数int num：階乗を求めたい整数値。
 * 返却値：numの階乗。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 */

int factorial(int num)
{
	int	fact = 1;	//階乗を求めるのに使う変数の型。計算に使うので1で初期化。


	//与えられた引数が0以下かかそれ以上かで分岐。
	//0以下の時。
	if(num <= 0) {

		fact = 1;	//階乗の定義より1を返す。

	//それ以外の時。
	} else {

		//階乗を求めるための繰り返し。
		for(int i = num; i >= 1; i--) {

			fact *= i;		//階乗を求めていく。

		}
	}

	//求めた階乗を返す。
	return fact;

}