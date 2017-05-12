/*演習7-4
 * typeid演算子を用いて型を表示することによって、関数の仮引数aが配列でなくポインタであることを確認する。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//typeid演算子を利用するためのヘッダ。
#include <typeinfo>

using namespace std;

//関数宣言。
void reverse(int array[], int no);

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

/*関数名：void reverse(int a[], int n)
 * 要素数nの配列aの並びを反転させる関数。
 * 引数a[]：配列のポインタ。
 * 引数n  ：配列の要素数。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

void reverse(int array[], int no)
{
	int	swap;	//配列の要素を反転させるための仮の置き場の型。

	//仮引数arrayの型を確認。
	cout	<<"仮引数arrayの型："<<typeid(array).name()	<<'\n';

	//配列の要素を反転させる。
	for(int i = 0; i < no / 2; i++) {

		swap 		 = array[i];		//仮の置き場に代入。
		array[i]		 = array[no - i -1];	//配列の要素を入れ替える。
		array[no - i - 1] = swap;		//仮の置き場の数値を配列に戻す。

	}
}
