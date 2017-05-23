/*演習12-2
 * クラスBooleanに対して、vがFalaseであればbool型のtrueを、Trueであればbool型のFalseを返却する演算子関数！を追加せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include <string>
#include <iostream>
#include "e_12_02.h"

using namespace std;

//二つの整数値が等しいかどうか。
Boolean int_eq(int x, int y)
{
	//等しければ真を等しくなければ偽を返す。
	return x == y;
}

int main()
{
	int	n;
	Boolean	a;			//値がないのでデフォルトコンストラクタに放り込まれ、Falseを持つ。
	Boolean	b = a;		//Falseをもつaのコピーコンストラクタ。
	Boolean	c = 100;	//値を持つのでTrueを持つ。
	Boolean	x[8];		//値がないのでデフォルトコンストラクタに放り込まれ、Falseを持つ

	cout	<<"整数値：";
	cin		>>n;

	x[0] = int_eq(n, 5);		//二つの値が等しいかどうかでTrueまたはFalseを判定する。
	x[1] = (n != 3);			//3と等しくなければTrueを等しければFalseを持つ。
	x[2] = Boolean::False;		//クラスBooleanに属するFalseを呼び出す。
	x[3] = 1000;				//値を持つのでTrueになる。
	x[4] = c == Boolean::True;	//値を持つのでTrueになる。

	cout	<<"aの値："	<<int(a)	<<'\n';
	cout	<<"bの値："	<<static_cast<const char*>(b)	<<'\n';

	for(int i = 0; i < 8; i++) {
		cout	<<"！演算子適用前：x["	<<i	<<"] = "	<<x[i]	<<'\n';

		x[i] = int(!x[i]);
		//x[i]をbool型のTrueまたはFalseに変換する関数を呼び出し、その値をint型に戻した値を表示。
		cout	<<"！演算子適用後：x["	<<i	<<"] = "	<<x[i]	<<'\n';
	}
}
