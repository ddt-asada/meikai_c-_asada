/*演習6-18
 * 0以上9以下の乱数を返却する関数rand1を作成せよ。
 * 複数回呼び出された場合に、連続して同じ値を返さないようにする。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダ。
#include <ctime>
//C言語ライブラリ関数を利用するためのヘッダ。
#include <cstdlib>

using namespace std;

/*関数名：int rand1();
 * 0以上9以下の乱数を求め、返却する関数。
 * ただし、複数回呼び出された場合は、連続して同じ値を返さないようにする。
 * 引数：なし。
 * 返却値：0以上9以下の乱数。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

int rand1()
{

	int	Rand;				//求めた乱数を代入するための変数。

	static int	RAND = 10;	//呼び出した乱数を記憶するための変数（初回の判定でのことを考慮して0以上9以下の数値で初期化）。

	//連続して同じ値を返さないようにするための繰り返す。
	for( ; ; ) {

		Rand = rand() % 10;	//0以上9以下の乱数を代入。

		//前回呼び出した時とおなじ値でない場合。
		if(Rand != RAND) {

			RAND = Rand;	//同じ値が代入されないようにするために求めた乱数を判定用の型に代入。

			//求めた乱数を返す。
			return Rand;
		}
	}

	//求めた乱数を返す。
	return Rand;
}

int main()
{
	//乱数の種を時間により決定する。
	srand(time(NULL));

	const int	Call = 5;	//乱数を求める関数を呼び出す回数を指定。

	//乱数を求める関数を指定された回数呼び出す。
	for(int i = 1; i <= Call; i++) {

		//乱数を求める関数を呼び出し、返却された値を表示。
		cout	<<i	<<"回目："	<<rand1()	<<'\n';

	}

	//0を返す。
	return 0;
}