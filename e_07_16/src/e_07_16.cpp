/*演習7-16
 * double型の配列を動的に生成するプログラム。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//空ポインタ定数を定義するためのヘッダ。
#include <cstddef>

using namespace std;

int main()
{
	int	no;		//配列を動的に生成した場合要素数を実行時に決定できることを確認するため要素数はint型で宣言。

	//配列の要素数の入力を促す。
	cout	<<"要素数：";
	//要素数を入力。
	cin		>>no;

	//配列を動的に生成。
	int*	Array = new int[no];

	//配列の生成に失敗した場合の処理。
	if(Array == NULL) {
		//プログラムの中断を明言。
		cout	<<"配列の生成に失敗しましたのでプログラムを中断します。\n";
		//中断。
		return 0;
	}

	//配列の各要素に値を入れる。
	for(int i = 0; i < no; i++) {

		Array[i] = i;	//値の代入。

		//配列を表示して実際にどのようになっているかを確認。
		cout	<<"Array["	<<i	<<"]="	<<Array[i]	<<'\n';

	}

	//生成した配列を破棄。
	delete[] Array;

	//0を返す。
	return 0;
}
