/*演習6-7
 *引数mで指定された月の季節を表示する関数print_seasonを作成する。
 *作成日：2017年5月3日
 *作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//受け取った月に応じて季節を表示する関数。
void print_season(int nM)
{
	//月に応じて分岐。
	//2月から5月の時。
	if(nM > 2 && nM <=5) {
		cout << "それは春です。\n";
	}

	//6月から8月の時。
	else if(nM > 5 && nM <= 8) {
		cout << "それは夏です。\n";
	}

	//9月から11月の時。
	else if(nM > 8 && nM <= 11){
		cout << "それは秋です。\n";
	}

	//上記以外の時。
	else {
		cout << "それは冬です。\n";
	}
}

int main()
{
	//月を入力する型。
	int nMonth;

	//現在の月の入力を促す。
	cout << "今は何月ですか？：";
	cin >> nMonth;

	//月から季節を求める関数に入力した月を渡す。
	print_season(nMonth);
}
