/*演習3-10
 * 正の整数値を0からカウントアップするプログラム（for文使用）。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int n;

	//カウントアップの終わりの入力を促す。
	cout <<"整数値：";
	cin >>n;

	//カウントアップするためのif文。
	for(int i = 0; i <= n; i++)
		cout <<i<<'\n';
}
