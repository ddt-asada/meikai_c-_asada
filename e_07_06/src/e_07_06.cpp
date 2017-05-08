/*演習7-6
 * 要素数noの配列arrayの全要素の合計を求めて返却する関数sum_ofを作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名：int sum_of(const int array[], int no)
 * 要素数noの配列の全要素の合計を求めて表示する関数。
 * 引数array[]：配列。
 * 引数no：配列の要素数。
 * 返却値：全要素数の合計。
 * 作成日2017年5月8日
 * 作成者：浅田　知嗣
 */

int sum_of(const int array[], int no)
{
	int	SUM = 0;	//求めた合計を代入するための変数。

	//全要素の合計を求める。
	for(int i= 0; i < no; i++) {

		SUM += array[i];	//合計を求める。

	}

	//求めた合計を返す。
	return SUM;
}

int main()
{
	const int	no = 5;		//配列の要素数。

	int			array[no];	//合計を求めるための配列。

	//配列の各要素に値を入力する。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array["	<<i	<<"]：";
		//値の入力。
		cin		>>array[i];

	}

	//合計を求める関数に配列と要素数を渡して帰ってきた値を表示。
	cout	<<"全要素の合計は"	<<sum_of(array, no)	<<"です。\n";

	//0を返す。
	return 0;
}
