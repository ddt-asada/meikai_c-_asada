/*演習9-5
 * 配列の全要素の最小値を求める関数テンプレートを作成する。
 * なお、最も小さい文字列を求められるように明示的に特殊化したものも作成する。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <cstring>

using namespace std;

/*関数名：template <class Type> Type min_of(Type min[], const int n)
 * 受け取った引数の配列のの最小値を求める関数。
 * 引数Type min[]：最小値をもとめたい配列。
 * 引数Type n：配列の要素数。
 * 返却値：最小値をかえす。
 * 作成日：2017年5月13日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

template <class Type> Type min_of(Type* min, const int n)
{
	Type	MIN = min[0];	//最小値を代入するための型。

	//全配列を比較するための繰り返し。
	for(int i = 1; i < n; i++) {

	//もし今の最小値より比較した要素のほうが小さければそれを最小値として採用。
		if(MIN > min[i]) {

		MIN = min[i];	//最小値を新たに代入。

		}
	}

	//求めた最小値を返す。
	return MIN;
}

//明示的に特殊化した定義。
template <> const char* min_of<const char*>(const char** cmin, const int n)
{
	int	MIN = 0;	//最小値を代入するための型。

	//全配列を比較するための繰り返し。
	for(int i = 1; i < n; i++) {

	//もし今の最小値より比較した要素のほうが小さければそれを最小値として採用。
		if(strcmp(cmin[MIN], cmin[i]) > 0) {

			MIN = i;	//最小値を新たに代入。

		}
	}

		//求めた最小値を返す。
		return cmin[MIN];
}


int main()
{
	int	 n = 5;								//配列の要素数。

	int				min[n] = {1, 2, 5, 3, 8};			//最小値を比較したい配列を宣言。int型を宣言。

	double			dmin[n] = {1.1, 1.2, 1.5, 0.5, 11.1};	//最小値を威嚇したい変数を宣言。double型を宣言。

	const char*		cmin[3] = {"XYZ", "ABCD", "opq"};	//最小値を比較文字列を宣言。

	//上の二つをテンプレート関数に渡し、どのように値が帰ってくるか確認する。
	//関数を呼び出して帰ってきた値を表示。
	//int型の場合
	cout	<<"int型配列minの中の最小値は"		<<min_of(min, n)				<<"です。\n";

	//double型の場合
	cout	<<"double型配列dminの中の最小値は"	<<min_of<double>(dmin, n)				<<"です。\n";

	//文字列の場合。
	cout	<<"文字列のうち最小値は"			<<min_of<const char*>(cmin, 3)	<<"です。\n";

	//0を返す。
	return 0;
}
