/*演習4-9
 * 三つの整数値を読み込んで合計と平均を表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//計算に使用する三つの整数値の型を生成。
	int a,b,c;

	//計算したい整数値の入力を促す。
	cout <<"整数a：";
	cin >>a;
	cout <<"整数b：";
	cin >>b;
	cout <<"整数c：";
	cin >>c;

	//キャスト記法により型の変換を行う。
	cout <<"合計は"<<(double)(a + b + c)<<"です。\n";
	cout <<"平均は"<<(double)(a + b + c)/3<<"です。\n";

	//関数的記法により型の変換を行う。
	cout <<"合計は"<<double(a + b + c)<<"です。\n";
	cout <<"平均は"<<double(a + b + c)/3<<"です。\n";

	//staticcast演算子を用いて型の変換を行う。
	cout <<"合計は"<<static_cast<double>(a + b + c)<<"です。\n";
	cout <<"平均は"<<static_cast<double>(a + b + c)/3<<"です。\n";
}
