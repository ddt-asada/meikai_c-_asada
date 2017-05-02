/*演習3-17
 * 1～12の月を入力し、季節を求めるプログラム（1～12以外の値が入力された場合には再入力するように促す。）。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字列を利用するためのヘッダを読み込む。
#include <string>

using namespace std;

int main()
{
	//繰り返しを判定するための文字列の型を生成。
	string retry;

	//季節をもう一度求めるための繰り返し。
	do{
		//月を入力する型の生成。
		int month;

		//月の入力を促す。
		//1～12以外が入力されたとき、繰り返すための繰り返し文。
		do{
		cout <<"季節を求めます。\n何月ですか：";
		cin >> month;
		}while (month < 1 || month > 12);
		//月に応じて季節を表示する分岐。
		//3～5の時の分岐。
		if(month >=3 && month <= 5)
			cout <<"それは春です。\n";
		//6～8の時の分岐。
		else if(month >= 6 && month <= 8)
			cout <<"それは夏です。\n";
		//9～11の時の分岐。
		else if(month >= 9 && month <= 11)
			cout <<"それは冬です。\n";
		//1，2，12のときの分岐。
		else if (month ==12 || month == 1 || month == 2)
			cout <<"それは冬です。\n";

		//繰り返しを判定する文字列の入力を促す。
		cout <<"もう一度？　Y…Yes／N…No：";
		cin >> retry;
	}while(retry == "Y" || retry == "y");
}
