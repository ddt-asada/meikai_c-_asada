/*演習2-7
 * 実数値の大小を判定するプログラム
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int a,b;

	//入力を促す。
	cout <<"整数値a：";
	cin >>a;

	cout <<"整数値b：";
	cin >>b;

	//読み込んだ値の大小を判定すし、大きいほうを表示。
	cout <<"大きいのは"<< (a>b ? a : b) <<"です。\n";
}
