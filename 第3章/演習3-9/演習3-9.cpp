/*演習3-9
 * 正の整数値を0までカウントダウンするプログラム（for文使用）。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int n;

	//カウントダウンの始まりの入力を促す。
	cout <<"整数値：";
	cin >>n;

	//カウントダウンするためのif文。
	for(int i = 10; i >= 0; i--)
		cout <<i<<'\n';
}
