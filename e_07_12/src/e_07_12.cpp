/*演習7-12
 * 要素数noの配列arrayの全要素にsubを代入する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者；浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数の宣言。
void fill(int* array, int no, int sub);

int main()
{
	const int	no = 5;							//配列の要素数。

	int			array[no] = {1, 2, 3, 4, 5};	//要素数noの配列。

	int			sub;							//配列に代入したい整数。

	//配列の全要素の確認。
	for(int i = 0; i < no; i++) {

		//配列の要素の表示。
		cout	<<"array["	<<i	<<"] = "	<<array[i]	<<'\n';

	}

	//代入する値の入力を促す。
	cout	<<"いくら代入しますか：";
	//値の入力。
	cin		>>sub;

	//配列の全要素にsubを代入する関数を呼び出す。
	fill(array, no, sub);

	//代入後の配列の表示。
	cout	<<"配列の全要素に"	<<sub	<<"を代入しました。\n";

	//配列の全要素の確認。
	for(int i = 0; i < no; i++) {

		//配列の要素の表示。
		cout	<<"array["	<<i	<<"] = "	<<array[i]	<<'\n';

	}

	//0を返す。
	return 0;
}

/*関数名：void fill(int* array, int no, int sub)
 * 要素数noの配列arrayの全要素にsubを代入する関数。
 * 引数array：要素数noの配列。
 * 引数no：配列の要素数。
 * 引数sub：代入する値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者；浅田　知嗣
 */

void fill(int* array, int no, int sub)
{
	//全要素にsubを代入。
	for(int i = 0; i < no; i++) {

		*array++ = sub;	//ポインタが指している配列の要素にsubを代入しつつアドレスをインクリメント。

	}
}
