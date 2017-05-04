/*演習1-12
 * 三角形の面積を求めるプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	double	dBase, dHeight;	//計算に使用する実数値の型。

	//三角形の面積を求めることを表示。
	cout	<<"三角形の面積を求めます。\n";

	//「底辺：」と表示。。
	cout	<<"底辺：";
	//面積を求めたい三角形の底辺を入力。
	cin		>>dBase;

	//「高さ：」と表示。
	cout	<<"高さ：";
	//面積を求めたい三角形の高さを入力。
	cin		>>dHeight;

	//三角形の面積を計算し、表示。
	cout	<<"面積は"	<<dBase * dHeight / 2	<<"です。\n";
}
