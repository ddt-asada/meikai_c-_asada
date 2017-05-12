/*演習7-3
 * 値を昇順に並び替える関数をポインタの値渡しによって行うプログラム。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void swap(int* swap1, int* swap2);

//関数宣言。
void sort(int* sort1, int* sort2, int* sort3);

int main()
{
	int	sort1, sort2, sort3;	//昇順に並び替えたい変数の型。

	//並び替えたい変数の入力を促す。
	cout	<<"sort1：";
	//変数の入力。
	cin		>>sort1;

	//並び替えたい変数の入力を促す。
	cout	<<"sort2：";
	//変数の入力。
	cin		>>sort2;

	//並び替えたい変数の入力を促す。
	cout	<<"sort3：";
	//変数の入力。
	cin		>>sort3;

	//昇順にソートする関数。
	sort(&sort1, &sort2, &sort3);

	//値を並び替えたことを確認。
	cout	<<"値を昇順に並び替えました。\n";

	//並び替えた値を表示。
	cout	<<"sort1："	<<sort1	<<'\n';

	//並び替えた値を表示。
	cout	<<"sort2："	<<sort2	<<'\n';

	//並び替えた値を表示。
	cout	<<"sort3："	<<sort3	<<'\n';

	//0を返す。
	return 0;
}

/*関数名：void swap(int* swap1, int* swap2)
 * 渡された引数を入れ替える関数。
 * 引数swap1：入れ替える値。
 * 引数swap2：入れ替える値。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

void swap(int* swap1, int* swap2)
{
	int	swap3  = *swap1;	//値を入れ替えるための仮の置き場に、swap1を代入。
		*swap1 = *swap2;	//値を入れ替える。
		*swap2 = swap3;	//値を入れ替える。

}

/*関数名：void sort(int* sort1, int* sort2, int* sort3)
 * 受け取った引数を昇順に並び替える関数。
 * 引数sort1：並び替えたい変数。
 * 引数sort2：並び替えたい変数。
 * 引数sort3：並び替えたい変数。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

void sort(int* sort1, int* sort2, int* sort3)
{
	//大小を比較して昇順にソート。
	if(*sort1 > *sort2) {
		//値を入れ替える関数に渡す。
		swap(sort1, sort2);

	}

	//大小を比較して昇順にソート。
	if(*sort2 > *sort3) {
		//値を入れ替える関数に渡す。
		swap(sort2, sort3);

	}

	//大小を比較して昇順にソート。
	if(*sort1 > *sort2) {
		//値を入れ替える関数に渡す。
		swap(sort1, sort2);

	}
}

