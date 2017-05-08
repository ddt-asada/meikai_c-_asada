/*演習7-5
 * 配列の要素を反転させる関数を2要素の交換を行う関数の呼び出しによって行うように変更したプログラム。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名：void swap(int* swap1, int* swap2)
 * 渡された引数を入れ替える関数。
 * 引数swap1：入れ替える値。
 * 引数swap2：入れ替える値。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

void swap(int* swap1, int* swap2)
{
	int	swap3  = *swap1;	//値を入れ替えるための仮の置き場に、swap1を代入。
		*swap1 = *swap2;	//値を入れ替える。
		*swap2 = swap3;	//値を入れ替える。

}

/*関数名：void reverse(int a[], int n)
 * 要素数nの配列aの並びを反転させる関数。
 * 引数a[]：配列のポインタ。
 * 引数n  ：配列の要素数。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

void reverse(int array[], int no)
{
	//配列の要素を反転させる。
	for(int i = 0; i < no / 2; i++) {

		//渡した値を入れ替える関数を呼び出す。
		swap(&array[i], &array[no - i - 1]);

	}
}

int main()
{
	const int	no = 5;		//配列の要素数。

	int			array[no];	//要素数noの配列。

	//配列の各要素に値を入力する。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array["	<<i	<<"]：";
		//値の入力。
		cin		>>array[i];

	}

	//配列の要素の並びを反転させる。
	reverse(array, no);

	//反転させた配列を表示。
	cout	<<"要素の並びを反転しました。\n";

	//配列の要素を表示。
	for(int i = 0; i < no; i++) {

		//配列の要素を表示。
		cout	<<"array["	<<i	<<"]="	<<array[i]	<<'\n';

	}

	//0を返す。
	return 0;
}
