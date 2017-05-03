/*演習6-8
 * List6-8の関数put_starsを、その内部でList6-9の関数put_ncharを呼び出すことによって表示を行うように書き換えたプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//引数nが0になるまで文字cを表示する関数。
void put_nchar(int n, char c)
{
	//nが0になるまで文字列を出力。
	for(int i = n; i > 0; i--) {
		cout << c;
	}
}

//引数nが0になるまで文字cを表示する関数を呼び出す関数。
void put_stars(int n)
{
	put_nchar(n, '*');
}

int main()
{
	//任意の変数の型。
	int n;

	//何段の直角三角形を表示するかの入力を促す。
	cout << "左下直角の三角形を表示します。\n";
	cout << "段数は：";
	cin >> n;

	//文字を表示する関数を繰り返す。
	for(int i = 1; i <= n; i++) {
		put_stars(i);

		//一段表示が終わるたびに改行。
		cout << '\n';
	}
}
