/*演習2-11
 * 三つの値の中央値を求め、表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int a,b,c;

	//入力を促す。
	cout <<"整数値a：";
	cin >>a;

	cout <<"整数値b：";
	cin >>b;

	cout <<"整数値c：";
	cin >>c;

	//判定用の変数medを生成し、aで初期化する。
	int med=a;
	//medを判定し、cとbの間にあればbを代入する。そうでなければcを代入する。
	if(c>=med && med>=b)
		med =b;
	else
		med=c;
	//medを判定し、bとcの間にあればcを代入し、そうでなければbを代入する。
	if(b>= med && med>=c)
		med =c;
	else
		med=b;

	//判定を抜けた変数med（すなわち三つの値の中央値）を表示する。
	cout <<"三つの値の中央値は"<<med<<"です。\n";
}
