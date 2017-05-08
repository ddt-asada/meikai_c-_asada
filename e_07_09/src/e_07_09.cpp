/*演習7-9
 * 要素数noの配列arrayの要素array[ins]に任意の整数INSを代入する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

/*関数名：void aryins(int array[], int no, int ins, int INS)
 * 受け取った配列array[no]の要素array[ins]に、INSを挿入する関数。
 * 引数array[]：任意の配列。
 * 引数no：配列の要素数。
 * 引数rmv：挿入先の配列の要素。
 * 引数INS：挿入する整数。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

void aryins(int array[], int no, int ins, int INS)
{
	//配列の要素を後ろにずらす。
	for(int i = no - 1; i > ins; i--) {

		array[i] = array[i - 1];	//配列の要素をその一つ前の要素で上書き。。

	}

	array[ins] = INS;	//配列の挿入したい場所に変数を挿入。

}

int main()
{
	const int	no = 6;		//配列の要素数。

	int			array[no];	//関数に渡す配列。

	int			ins;		//挿入場所の要素の型。

	int			INS;		//挿入したい変数の型。

	//配列の要素への値の入力。
	for(int i = 0; i < no; i++) {

		//値の入力を促す。
		cout	<<"array["	<<i	<<"]：";
		//値の入力。
		cin		>>array[i];

	}

	//配列のどこに挿入するかの確認。
	cout	<<"何番目に挿入しますか：";
	//場所を指定。。
	cin		>>ins;

	//挿入したい値の入力を促す。
	cout	<<"いくらを代入しますか：";
	//値の入力。
	cin		>>INS;

	//任意の値をを任意の要素に挿入する関数を呼び出す。
	aryins(array, no, ins-1, INS);

	//挿入後の配列を表示。
	cout	<<ins	<<"番目の要素に"	<<INS	<<"を挿入しました。\n";

	//配列の全要素を表示。
	for(int i= 0; i < no; i++) {

		//配列の表示。
		cout	<<"array["	<<i	<<"]="	<<array[i]	<<'\n';

	}

	//0を返す。
	return 0;
}
