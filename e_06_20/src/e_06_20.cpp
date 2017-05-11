/*演習6-20
 * 二つのint型整数の最小値、三つのint型整数の最小値を求める多重定義された関数群。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
int MIN(int min1, int min2);

//関数宣言。
int MIN(int min1, int min2, int min3);

int main()
{
	int min1, min2, min3;	//最小値を比較したい変数の型。

	//最小値を比較したい変数の入力を促す。
	cout	<<"min1：";
	//最小値を比較したい変数の入力。
	cin		>>min1;

	//最小値を比較したい変数の入力を促す。
	cout	<<"min2：";
	//最小値を比較したい変数の入力。
	cin		>>min2;

	//最小値を比較したい変数の入力を促す。
	cout	<<"min3：";
	//最小値を比較したい変数の入力。
	cin		>>min3;

	//2値の最小値を求める、表示。
	cout	<<"min1とmin2の最小値は"		<<MIN(min1, min2)		<<"です。\n";

	//3値の最小値を求める、表示。
	cout	<<"min1とmin2とmin3の最小値は"	<<MIN(min1, min2, min3)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：int MIN(int min1, int min2)
 * 渡された引数の最小値を求める関数。
 * 引数min1：最小値を比較する変数。
 * 引数min2：最小値を比較する変数。
 * 返却値：求めた最小値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

int MIN(int min1, int min2)
{
	//最小値を返す。
	return min1 < min2 ? min1 : min2;

}

/*関数名：int MIN(int min1, int min2, int min3)
 * 渡された引数の最小値を求める関数。
 * 引数min1：最小値を比較する変数。
 * 引数min2：最小値を比較する変数。
 * 引数min3：最小値を比較する変数。
 * 返却値：求めた最小値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

int MIN(int min1, int min2, int min3)
{
	int	MIN = min1;	//最小値を求めるための変数。最初にmin1で初期化。

	//min2がMINより小さいときの処理。
	if(min2 < MIN) {

		MIN = min2;	//min2を新たな最小値として代入。

	}

	//min3がMINより小さいときの処理。
	if(min3 < MIN) {

		MIN = min3;	//min3を新たな最小値として代入。

	}

	//求めた最小値を返す。
	return MIN;
}
