/*演習7-2
 * 二つの引数を交換する関数swapを参照渡しではなく、ポインタの値渡しによって行うプログラム。
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

int main()
{
	int	swap1, swap2;	//値を入れ替える変数の型。

	//値を入れ替えたい変数の入力を促す。
	cout	<<"swap1：";
	//入れ替えたい値を入力。
	cin		>>swap1;

	//値を入れ替えたい変数の入力を促す。
	cout	<<"swap2：";
	//入れ替えたい値を入力。
	cin		>>swap2;

	//値を入れ替える関数にポインタを渡す。
	swap(&swap1, &swap2);

	//入れ替えた値の表示。
	cout	<<"swap1："	<<swap1	<<'\n';

	//入れ替えた値の表示。
	cout	<<"swap2："	<<swap2	<<'\n';

	//0を返す。
	return 0;
}
