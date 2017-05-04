/*演習2-3
 * 二つの値を読み込んで、大小関係を表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Com1, Com2;	//大小を比較する整数の型。

	//大小を比較したい整数値の入力を促す。
	cout	<<"整数値Com1：";
	cin		>>Com1;

	//大小を比較したい整数値の入力を促す。
	cout	<<"整数値Com2：";
	cin		>>Com2;

	//入力された整数値Com1とCom2の大小関係を比較するためのif文。
	//Com1のほうが大きい場合。
	if(Com1 > Com2) {
		cout	<<"Com1のほうが大きいです。\n";
	//Com2のほうが大きい場合。
	} else if(Com1 < Com2) {
		cout	<<"Com2のほうが大きいです。\n";
	//Com1とCom2が同じ値の場合。
	} else {
		cout	<<"Com1とCom2は同じ値です。";
	}
}
