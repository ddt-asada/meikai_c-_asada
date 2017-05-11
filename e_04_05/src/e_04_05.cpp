/*演習4-5
 * float型の変数とdouble型の変数にキーボードから読み込んでその値の動作を検証せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月9日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダを読み込む。
#include <iomanip>

using namespace std;

int main()
{
	//float型とdouble型をそれぞれ生成する。
	//検証のため今回は三つずつ生成する。
	float	fTest1 = 1;						//1桁の整数値。

	float	fTest2 = 1.234567890;			//10桁の整数値。

	float	fTest3 = 1.234567890123456789;	//19桁の整数値。

	double	dTest1 = 1;						//1桁の整数値。

	double	dTest2 = 1.234567890;			//10桁の整数値。

	double	dTest3 = 1.234567890123456789;	//19桁の整数値。

	//それぞれの整数値がどのように表示されるか確認する。
	//精度は20桁とする。
	//fTest1を表示。。
	cout	<<"変数fTest1："	<<setprecision(20)	<<fTest1	<<'\n';

	//fTest2を表示。
	cout	<<"変数fTest2："	<<setprecision(20)	<<fTest2	<<'\n';

	//fTest3を表示。
	cout	<<"変数fTest3："	<<setprecision(20)	<<fTest3	<<'\n';

	//dTest1を表示。
	cout	<<"変数dTest1："	<<setprecision(20)	<<dTest1	<<'\n';

	//dTest2を表示。
	cout	<<"変数dTest2："	<<setprecision(20)	<<dTest2	<<'\n';

	//dTest3を表示。
	cout	<<"変数dTest3："	<<setprecision(20)	<<dTest3	<<'\n';

	//0を返す。
	return 0;
}

/*実行結果は次のようになる。
 * 変数fTest1：1
 * 変数fTest2：1.2345678806304931641
 * 変数fTest3：1.2345678806304931641
 * 変数dTest1：1
 * 変数dTest2：1.2345678899999998901
 * 変数dTest3：1.2345678901234566904
 * これらよりfloat型は小数点以下7桁までは表示されるがそれ以降の数については正しく表示できていない。
 * double型は小数点以下15桁までは表示されるがそれ以降の数については正しく表示できていないことがわかった。
 */
