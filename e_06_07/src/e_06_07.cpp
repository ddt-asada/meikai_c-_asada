/*演習6-7
 * 引数mで指定された月の季節を表示する関数print_seasonを作成する。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言
void print_season(int Month);

int main()
{

	int	Month;	//月を入力する型。

	//現在の月の入力を促す。
	cout	<<"今は何月ですか？：";
	//月を入力。
	cin		>>Month;

	//月から季節を求める関数に入力した月を渡す。
	print_season(Month);

	//0を返す。
	return 0;
}

/*関数名：void print_season(int Month)
 * 受け取った月に応じた季節を表示する関数。
 * 引数Month：月を表す引数。
 * 返却値：なし。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

//受け取った月に応じて季節を表示する関数。
void print_season(int Month)
{
	//月に応じて分岐。
	//3月から5月の時。
	if(Month > 3 && Month <=5) {

		//「それは春です。」と表示。
		cout	<<"それは春です。\n";

	//6月から8月の時。
	} else if (Month > 5 && Month <= 8) {

		//「それは夏です。」と表示。
		cout	<<"それは夏です。\n";

	//9月から11月の時。
	} else if (Month > 8 && Month <= 11) {

		//「それは秋です。」と表示。
		cout	<<"それは秋です。\n";
	//上記以外の時。
	} else if (Month == 12 || Month == 1 || Month == 2) {

		//「それは冬です。」と表示。
		cout	<<"それは冬です。\n";

	}
}
