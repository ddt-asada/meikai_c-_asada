/*演習7-15
 * double型のオブジェクトを生成して0.0で初期化するプログラム。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	//オブジェクトを生成して0.0で初期化。
	double* Test = new double(0.0);

	//小数点以下の精度を指定。
	cout	<<fixed	<<setprecision(1);

	//表示して確認。
	cout	<<*Test;

	//生成したオブジェクトを削除。
	delete Test;

	//0を返す。
	return 0;
}
