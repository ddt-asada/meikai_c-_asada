/*演習2-4
 * 正の整数値を読み込んで、5で割り切れるかどうか判定するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Sample;	//5で割り切れるかを確認する整数の型。

	//「整数値：」と表示。
	cout	<<"整数値：";
	//5で割り切れるかどうか確認したい整数値の入力。
	cin		>>Sample;

	//入力した整数値が5で割り切れるかどうか判定する。
	//if文は上から順に判定される性質を利用し、まず初めに正の整数値であるか判定する。
	if(Sample < 0) {
		//「正でない値が入力されました。」と表示。
		cout	<<"正でない値が入力されました。\n";
	//整数値を5で割った余りが0かどうかを判定。
	} else if (Sample % 5 == 0) {
		//「その値は5で割り切れます。」と表示。
		cout	<<"その値は5で割り切れます。\n";
	//上記以外の場合（正の整数かつ、5で割り切れない場合）。
	} else {
		//「その値は5で割り切れません。」と表示。
		cout	<<"その値は5で割り切れません。\n";
	}

	//0を返す。
	return 0;
}
