/*演習3-13
 * 身長と標準体重の対応表を表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int a,b,c;

	//求めたい身長の範囲の入力を促す。
	cout <<"何cmから：";
	cin >>a;

	cout <<"何cmまで：";
	cin >>b;

	//求めたい身長の間隔の入力を促す。
	cout <<"何cmごとに：";
	cin >> c;

	cout <<"身長	標準体重\n";

	//acmからbcmの範囲の標準体重をccmごとに表示するためのfor文
	for(int i = a; i <= b; i += c)
		//標準体重を出力。
		cout <<i<<"		"<<(i-100)*0.9<<'\n';

}
