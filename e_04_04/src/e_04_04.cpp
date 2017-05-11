/*演習4-4
 * 文字リテラルと整数リテラルに対してsizeof演算子を適用した値を表示するプログラムを作成せよ。実行結果に対する考察を行うこと。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字リテラルを扱うためのヘッダ。
#include <string>

using namespace std;

int main()
{
	//文字リテラルと整数リテラルの型をそれぞれ生成する。
	//検証のため今回は三つずつ生成する。
	int	Test1 = 1;					//検証のための整数。

	int	Test2 = 11;					//検証のための整数。

	int	Test3 = 111111111;			//検証のための整数。

	string	Test4 = "A";			//検証のための文字。

	string	Test5 = "AB";			//検証のための文字。

	string	Test6 = "ABCDEFGHIJK";	//検証のための文字。

	//それぞれの変数の大きさを調べる。
	//変数Test1の大きさを表示。
	cout	<<"変数Test1の大きさ："	<<sizeof(Test1)	<<'\n';

	//変数Test2の大きさを表示。
	cout	<<"変数Test2の大きさ："	<<sizeof(Test2)	<<'\n';

	//変数Test3の大きさを表示。
	cout	<<"変数Test3の大きさ："	<<sizeof(Test3)	<<'\n';

	//文字Test4の大きさを表示。
	cout	<<"文字Test4の大きさ："	<<sizeof(Test4)	<<'\n';

	//文字Test5の大きさを表示。
	cout	<<"文字Test5の大きさ："	<<sizeof(Test5)	<<'\n';

	//文字Test6の大きさを表示。
	cout	<<"文字Test6の大きさ："	<<sizeof(Test6)	<<'\n';

	//0を返す。
	return 0;
}

/*実行結果は次のようになる。
 *変数Test1の大きさ：4
 *変数Test2の大きさ：4
 *変数Test3の大きさ：4
 *文字Test4の大きさ：32
 *文字Test5の大きさ：32
 *文字Test6の大きさ：32
 *これより文字リテラルと整数リテラルとの間ではバイト数が違うものの、型によってないと数は同じである。。
 *sizeof演算子の結果から、返却される値はバイト数で 1byte = 8  bit   ですから、int型の変数は  最低 32bit の大きさを持っていて、string型の文字列は  最低 64bit の大きさを持っているということです
 */
