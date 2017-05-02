/*演習3-23
 * 任意の数の整数の合計及び平均を求めるプログラム（0が入力されると途中で計算終了するプログラム。）。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//任意の数の整数を入力する型。
	int n;

	//何個の整数が入力されたか管理する型。
	int m;

	//何個加算したいかの入力を促す。
	cout <<"整数の合計及び平均を求めます。\n";
	cout <<"何個ですか？：";
	cin >>n;

	//合計値を計算するための型。
	int sum = 0;
	//平均値を計算するための型。
	int ave = 0;

	//合計及び平均を求める繰り返し。
	for(int i= 0; i < n; i++){
		//加算する値の型。
		int t;
		//加算したい値の入力を促す。
		cout <<"整数（0で終了）：";
		cin >> t;
		//tに0が入力されたとき計算を終了する。
		if(t == 0) break;
		//合計を求める。
		sum += t;
		m++;
	}
	//平均を求める。
	ave = sum / m;
	//求めた合計を表示する。
	cout << "合計は" << sum << "です。\n";
	//求めた平均を表示。
	cout << "平均は" << ave << "です。\n";
}
