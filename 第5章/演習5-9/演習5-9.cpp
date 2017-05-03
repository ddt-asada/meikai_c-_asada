/*演習5-9
 * 配列aの全要素を配列bに対して逆順にコピーするプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//配列の要素数。
	const int n = 5;

	//コピー元の配列。
	int a[n];

	//コピー先の配列。
	int b[n];

	//コピー元の配列へ値を入力する繰り返し。
	for(int i = 0 ; i < n ; i++){

		//コピー元の配列への値の入力を促す。
		cout << "a[" << i << "]：" ;
		cin >> a[i];
	}

	//逆順にコピーする繰り返し。
	for(int i = 0 ; i < n ; i++)
		//コピー
		b[n - i - 1] = a[i];

	//コピーし終わった配列を表示。
	for(int i = 0 ; i < n ; i++)
		cout << "b[" << i << "]=" << b[i] << '\n';
}
