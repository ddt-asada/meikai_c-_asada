/*演習6-16
 * 静的記憶域期間をもつ配列の全要素が0で初期化されることを確認するプログラム。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int	Array1[5];		//静的記憶域期間をもつ配列。

int main()
{
	static int	Array2[5];	//静的記憶域期間をもつ配列。

	int			Array3[5];	//動的記憶域期間をもつ配列。

	//配列を表示して確認。
	for(int i = 0; i < 5; i++) {

		//配列を表示。
		cout	<<"Array1["	<<i	<<"]="	<<Array1[i]	<<'\n';

	}

	//配列を表示して確認。
	for(int i = 0; i < 5; i++) {

		//配列を表示。
		cout	<<"Array2["	<<i	<<"]="	<<Array2[i]	<<'\n';

	}

	//配列を表示して確認。
	for(int i = 0; i < 5; i++) {

		//配列を表示。
		cout	<<"Array3["	<<i	<<"]="	<<Array3[i]	<<'\n';

	}

	//0を返す。
	return 0;
}

/*実行結果は次のようになった。
 * Array1[0]=0
 * Array1[1]=0
 * Array1[2]=0
 * Array1[3]=0
 * Array1[4]=0
 * Array2[0]=0
 * Array2[1]=0
 * Array2[2]=0
 * Array2[3]=0
 * Array2[4]=0
 * Array3[0]=1
 * Array3[1]=0
 * Array3[2]=4200569
 * Array3[3]=0
 * Array3[4]=0
 * この結果より、静的記憶域期間をもつ配列Array1とArray2はすべて0で初期化されていることが確認できた。
 * 一方、動的記憶域期間をもつ配列Array3は不定値で初期化されている。
 */
