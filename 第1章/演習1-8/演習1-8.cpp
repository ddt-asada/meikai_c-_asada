/*演習1-8
 * int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//初期化子を与えたときの処理を確認する為に値を代入。
	int x = 10;

	//初期化子をあたえたxがどうなるかの確認。
	cout << "int型の変数x：" << x << '\n';
}
/*実行結果
 * int型の変数x：10
 * この結果より、初期化子を与えた場合その変数が初期化子の値で初期化されることが確認できた。
 */
