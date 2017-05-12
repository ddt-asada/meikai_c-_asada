/*演習7-8
 * 要素数noの配列arrayから要素array[rmv]を先頭とするmany個の要素を削除する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void aryrmv(int array[], int no, int rmv, int many);

int main()
{
	const int	no = 6;		//配列の要素数。

	int			array[no];	//関数に渡す配列。

	int			rmv;		//削除したい要素の変数の型。

	int			many;		//何個要素を削除するかの変数の型。

	//配列の要素への値の入力。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array["	<<i	<<"]：";
		//値の入力。
		cin		>>array[i];

	}

	//配列の何番目の要素を先頭に削除するかの確認。
	cout	<<"何番目の要素を先頭に：";
	//先頭としたい要素の入力。
	cin		>>rmv;

	//何個削除するかの入力を促す。
	cout	<<"何個削除しますか？：";
	//何個削除するかを入力。
	cin		>>many;

	//任意の要素を削除する関数を呼び出す。
	aryrmv(array, no, rmv, many);

	//削除された後の配列を表示。
	cout	<<rmv	<<"任意の要素を削除しました。\n";

	//配列の全要素を表示。
	for(int i= 0; i < no; i++) {

		//配列の表示。
		cout	<<"array["	<<i	<<"]="	<<array[i]	<<'\n';

	}

	//0を返す。
	return 0;
}

/*関数名：void aryrmv(int array[], int no, int rmv, int many)
 * 受け取った配列array[no]のうちarray[rmv]を先頭とするmany個の要素を削除し、前方に数字を詰める関数。
 * 引数array[]：削除を行うための配列。
 * 引数no：配列の要素数。
 * 引数rmv：削除したい配列の要素。
 * 引数many：何個削除するか。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

void aryrmv(int array[], int no, int rmv, int many)
{
	//任意の要素を先頭とするmanyこの要素を削除して前に詰める。
	for(int i = rmv; i < no; i++) {

		//処理する要素が末尾要素に達した時（前方にずらすべき要素が存在していない）。
		if(i + many > no - 1) {

			array[i] = array[no - 1];	//末尾の要素を代入。

		//後ろに要素がある場合。
		} else {

			array[i] = array[i + many];	//任意の要素をi + many個後ろの要素で上書き（数字を前に詰める）。

		}
	}
}
