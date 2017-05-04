/*演習2-3
 * 二つの値を読み込んで、大小関係をひょうじするプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int a, b;

	//変数aへの入力を促す。
	cout	<< "整数値a：";
	cin		>> a;

	//変数bへの入力を促す。
	cout	<< "整数値b：";
	cin		>> b;

	//整数aとbの大小関係を比較するためのif文。
	//a>bか判定。
	if(a > b) {
		cout <<"aのほうが大きいです。\n";
	//b<aか判定。
	} else if(a<b) {
		cout <<"bのほうが大きいです。\n";
	//上記に当てはまらない場合。
	} else {
		cout <<"aとbは同じ値です。";
	}
}
