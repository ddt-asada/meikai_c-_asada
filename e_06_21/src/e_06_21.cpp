/*演習6-21
 * それぞれのデータ型の変数の絶対値を求めるたじゅ定義された関数群を作成する。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
short absolute(short abs);

//関数宣言。
int absolute(int abs);

//関数宣言。
long absolute(long abs);

//関数宣言。
float absolute(float abs);

//関数宣言。
double absolute(double abs);

//関数宣言。
long double absolute(long double abs);

int main()
{
	short		sabs = -1;		//絶対値を求めたいshort型の変数。

	int 		nabs = -1;		//絶対値を求めたいint型の変数。

	long		labs = -1;		//絶対値を求めたいlong型の変数。

	float		fabs = -1;		//絶対値を求めたいfloat型の変数。

	double		dabs = -1;		//絶対値を求めたいdouble型の変数。

	long double	ldabs = -1;		//絶対値を求めたいlong double型の変数。

	//関数に渡す前の数値と渡した後の数値（絶対値）をならべて比較。
	//short型変数
	cout	<<"sabs　前："		<<sabs	<<"　後："	<<absolute(sabs)	<<'\n';

	//int型変数
	cout	<<"nabs　前："		<<nabs	<<"　後："	<<absolute(nabs)	<<'\n';

	//long型変数
	cout	<<"labs　前："		<<labs	<<"　後："	<<absolute(labs)	<<'\n';

	//float型変数
	cout	<<"fabs　前："		<<fabs	<<"　後："	<<absolute(fabs)	<<'\n';

	//double型変数
	cout	<<"dabs　前："		<<dabs	<<"　後："	<<absolute(dabs)	<<'\n';

	//long double型変数
	cout	<<"ldabs　前："	<<ldabs	<<"　後："<<absolute(ldabs)	<<'\n';

	//0を返す。
	return 0;
}

/*関数名：short absolute(short abs)
 * short型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいshort型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

short absolute(short abs)
{
	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*関数名：int absolute(int abs)
 * int型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいint型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

int absolute(int abs)
{

	abs *= 2;	//この関数が読み込まれたことを判別するために引数に2倍をかける。

	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*関数名：long absolute(long abs)
 * long型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいlong型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

long absolute(long abs)
{

	abs *= 3;	//この関数が読み込まれたことを判別するために引数に3倍をかける。

	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*関数名：float absolute(float abs)
 * float型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいfloat型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

float absolute(float abs)
{

	abs *= 4;	//この関数が読み込まれたことを判別するために引数に4倍をかける。

	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*関数名：double absolute(double abs)
 * double型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいdouble型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

double absolute(double abs)
{
	abs *= 5;	//この関数が読み込まれたことを判別するために引数に5倍をかける。

	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*関数名：long double absolute(long double abs)
 * long double型の整数absの絶対値を求める関数。
 * 引数abs：絶対値を求めたいlong double型の整数。
 * 返却値：絶対値。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

long double absolute(long double abs)
{
	abs *= 6;	//この関数が読み込まれたことを判別するために引数に6倍をかける。

	//受け取った引数の絶対値を返す。
	return abs < 0 ? -abs : abs;

}

/*実行結果は次のようになった。
 * sabs　前：-1　後：1
 * nabs　前：-1　後：2
 * labs　前：-1　後：3
 * fabs　前：-1　後：4
 * dabs　前：-1　後：5
 * ldabs　前：-1　後：6
 *
 * これより、多重定義した関数のそれぞれ型に応じて対応した関数に値が渡されていることが確認できた。
 */
