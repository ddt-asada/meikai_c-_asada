/*演習3-16
 * １からnまでの整数値の2乗値を表示するプログラムを作成せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//2乗したい値を入力するための変数。
	int n;

	//2乗したい値の入力を促す。
	cout <<"nの値：";
	cin >>n;

	//１からnまで2乗する繰り返し文。
	for(int i = 1; i <= n; i++)
		//iの乗値を出力。繰り返し文が一行であるので｛｝は省略。
		cout << i <<"の2乗は"<< i*i <<'\n';
}
