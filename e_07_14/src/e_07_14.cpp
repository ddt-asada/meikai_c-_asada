/*演習7-14
 * 要素数noの配列Array内のkeyと等しい全要素の展示を配列KEYに格納する関数search_KEYを作成せよ。
 * 返却するのはkeyと等しい要素の個数。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数の宣言。
int search_KEY(const int* Array, int key, int no);

int main()
{
	const int	no = 7;		//配列の要素数を宣言。

	int			Array[no];	//線形探索する配列。任意の値を入力。

	int			key;		//比較する値。

	//配列に任意の値を入力する。
	for(int i = 0; i < no; i++) {

		//配列に値の入力を促す。
		cout	<<"Array["	<<i	<<"]=";
		//値の入力。
		cin		>>Array[i];

	}

	//どの値を探したいかの入力を促す。
	cout	<<"どの値を探しますか：";
	//探したい値の入力。
	cin		>>key;

	//何個含まれていたかを表示。
	cout	<<"配列Arrayに"	<<key	<<"は"	<<search_KEY(Array, key, no)	<<"個ありました。\n";

	//0を返す。
	return 0;
}

/*関数名：search_KEY(const int* Array, Key,no)
 * 引数Array：線形探索する配列。
 * 引数key：探索する値。
 * 引数no：配列の要素数。
 * 返却値：配列Arrayに存在するkeyと等しい要素の数。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

int search_KEY(const int* Array, int key, int no)
{
	int	KEY[no];	//keyと等しい値が格納されている要素の添字を格納する配列。

	int	Count = 0;	//keyと等しい値が含まれている数を数えるための変数。

	//配列の全要素を線形探索する。
	for(int i = 0; i < no; i++) {

		//keyと等しい値を見つけたとき。
		if(Array[i] == key) {

			KEY[Count] = i;		//等しい値が含まれていた場所を覚えさせる。

			Count++;			//見つけた回数をカウント。

		}
	}

	//配列のどこに同じ値が含まれていたかを表示する。
	for(int i = 0; i < Count; i++) {

		//配列のどこに同じ値が含まれていたかを表示する。
		cout	<<key	<<"と同じ値は配列Arrayの"	<<KEY[i]	<<"番目に含まれていました。\n";

	}

	//見つけた個数を返す。
	return Count;
}
