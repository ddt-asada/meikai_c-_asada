/*演習7-13
 * 要素数がnoである配列array1の全要素を配列array2にコピーする関数を作成。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名：void ary_cpy(int* array1, const int* array2, int no)
 *
 * 引数*array1：コピー元の配列。
 * 引数*array2：コピー先の配列。
 * 引数no：配列の要素数。
 * 返却値：なし。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

void ary_cpy(int* array1, const int* array2, int no)
{
	//配列のコピー
	for(int i = 0; i < no; i++) {

		array1[i] = array2[i];	//コピー元からコピー先へ。

	}
}

int main()
{
	const int	no = 5;			//配列の要素数。

	int			array1[no];		//コピー先の配列。

	int			array2[no];		//コピー元の配列。

	//コピー元の配列への値の入力を促す。
	cout	<<"配列へ値を入力してください。\n";
	//配列の全要素へ入力する。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array2["	<<i	<<"]=";
		//値の入力。
		cin		>>array2[i];

	}

	//配列をコピーすることを明示する。
	cout	<<"配列のコピーを行いました。\n";

	//配列をコピーする関数を呼び出す。
	ary_cpy(array1, array2, no);

	//コピー後の配列の値を表示し、確認する。
	for(int i = 0; i < no; i++) {

		//コピー後の配列の各要素。
		cout	<<"array1["	<<i	<<"]="	<<array1[i]	<<'\n';

	}

	//0を返す。
	return 0;

}
