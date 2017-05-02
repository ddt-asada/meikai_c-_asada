/*演習2-15
 * 乱数に応じて「大吉」、「中吉」、「小吉」、「吉」、「末吉」、「凶」、「大凶」のいずれかを表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	//乱数の種を時間を参照にする。
	srand(time(NULL));

	//0～6の範囲（7種類の値）の乱数を生成する。
	int a = rand() % 7;

	//乱数の値に応じて結果を表示。
	switch(a){
	//0の時、末尾にswitch文から抜けるためのbreakを配置。
	case 0 : cout <<"大吉\n";	break;
	//1の時、末尾にswitch文から抜けるためのbreakを配置。
	case 1 : cout <<"中吉\n";	break;
	//2の時、末尾にswitch文から抜けるためのbreakを配置。
	case 2 : cout <<"吉\n";		break;
	//3の時、末尾にswitch文から抜けるためのbreakを配置。
	case 3 : cout <<"末吉\n";	break;
	//4の時、末尾にswitch文から抜けるためのbreakを配置。
	case 4 : cout <<"凶\n";		break;
	//5の時、末尾にswitch文から抜けるためのbreakを配置。
	case 5 : cout <<"大凶\n";	break;
	//上記に当てはまらない時、switch文最後のため、breakは配置しない。
	default : cout <<"小吉\n";
	}
}
