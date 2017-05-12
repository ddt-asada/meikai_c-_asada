/*演習7-7
 * 要素数noの配列arrayから任意の要素array[rmv]を削除する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void aryrmv(int array[], int no, int rmv);

int main()
{
	const int	no = 6;		//配列の要素数。

	int			array[no];	//関数に渡す配列。

	int			rmv;		//削除したい要素の変数の型。

	//配列の要素への値の入力。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array["	<<i	<<"]：";
		//値の入力。
		cin		>>array[i];

	}

	//配列の何番目の要素を削除するかの確認。
	cout	<<"何番目の要素を削除しますか？：";
	//削除したい要素の入力。
	cin		>>rmv;

	//任意の要素を削除する関数を呼び出す。
	aryrmv(array, no, rmv);

	//削除された後の配列を表示。
	cout	<<rmv	<<"番目の要素を削除しました。\n";

	//配列の全要素を表示。
	for(int i= 0; i < no; i++) {

		//配列の表示。
		cout	<<"array["	<<i	<<"]="	<<array[i]	<<'\n';

	}

	//0を返す。
	return 0;
}

/*関数名：void aryrmv(int array[], int no, int rmv)
 * 受け取った配列array[no]のうちarray[rmv]を削除し、前方に数字を詰める関数。
 * 引数array[]：削除を行うための配列。
 * 引数no：配列の要素数。
 * 引数rmv：削除したい配列の要素。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

void aryrmv(int array[], int no, int rmv)
{
	//任意の要素を削除して前に詰める。
	//末尾要素の値は変更しないので繰り返しの終わりは要素数-1としている。
	for(int i = rmv; i < no - 1; i++) {

		array[i] = array[i + 1];	//任意の要素をその一つ後ろの要素で上書き（数字を前に詰める）。

	}
}
