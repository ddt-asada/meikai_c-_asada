/*演習1-13
 * 1桁の正の整数値をランダムに生成。
 * 1桁の負の整数値をランダムに生成。
 * 2桁の正の整数値をランダムに生成。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を取得するためのヘッダを読み込む。
#include <ctime>
//C言語のライブラリ関数を利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	//乱数の種を時間を参照に設定。
	srand(time(NULL));

	//1桁の正の整数値をランダムに生成。
	//乱数を9で割った余りに1を加算することにより生成する。
	int a = rand() % 9 + 1;
	cout << "正の整数値：" << a << "\n";

	//1桁の負の整数値をランダムに生成。
	//乱数を9で割った余りから1を減算することにより求める。
	int b = -rand() % 9 - 1;
	cout << "負の整数値：" << b << "\n";

	//2桁の正の整数値を生成。
	//乱数を90で割った余りに10加算することにより生成する。
	int c = rand() % 90 + 10;
	cout << "2桁の正の整数値：" << c << "\n";

}
