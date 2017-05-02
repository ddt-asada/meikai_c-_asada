/*演習2-16
 * 1～12の整数を読み込んで、それに対応する季節をひょうじするプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int month ;

	//入力を促す。
	cout <<"何月ですか？：";
	cin >>month;

	switch(month){
	//monthが3～5の時の分岐、switch文は下に落ちていく性質を利用し、breakを途中に配置し、簡略化。
	case 3 :;
	case 4 :;
	case 5 : cout <<"それは春です。\n";	break;
	//monthが6～8の時の分岐、switch文は下に落ちていく性質を利用し、breakを途中に配置し、簡略化。
	case 6 :;
	case 7 :;
	case 8 : cout <<"それは夏です。\n";	break;
	//monthが9～11の時の分岐、switch文は下に落ちていく性質を利用し、breakを途中に配置し、簡略化。
	case 9 :;
	case 10:;
	case 11: cout <<"それは秋です。\n";	break;
	default 		  : cout <<"それは冬です。\n";
	}
}
