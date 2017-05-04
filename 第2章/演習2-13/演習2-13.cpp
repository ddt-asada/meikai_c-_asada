/*演習2-13
 * 二つの整数値を読み込んで降順に並べるプログラム
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	min1, min2;	//降順に並べるための整数値の型。

	int	MIN;		//値を交換するときに使用する仮の置き場となる整数値の型。

	//「整数値min1：」と表示。
	cout	<<"整数値min1：";
	//降順に並べ替えたい整数値の入力。
	cin		>>min1;

	//「整数値min2：」と表示。
	cout	<<"整数値min2：";
	//降順に並べ替えたい整数値の入力。
	cin		>>min2;

	//二つの変数の大小を判定し降順に入れ替えるためのif文。
	if(min1 < min2) {
		MIN  = min1;	//仮の置き場MINにmin1を代入。
		min1 = MIN;		//min1とmin2を交換。
		min2 = MIN;		//min2にMIN（交換前のmin1）を代入。
	}

	//降順に入れ替えた値を表示。
	//「二つの整数を降順にソートしました。」と表示。
	cout	<<"二つの整数を降順にソートしました。\n";
	//「変数min1はmin1です。」と表示。
	cout	<<"変数min1は"	<<min1	<< "です。\n";
	//「変数min2はmin2です。」と表示。
	cout	<<"変数min2は"	<<min2	<< "です。\n";
}
