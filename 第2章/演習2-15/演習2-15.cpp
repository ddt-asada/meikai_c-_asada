/*演習2-15
 * 乱数に応じて「大吉」、「中吉」、「小吉」、「吉」、「末吉」、「凶」、「大凶」のいずれかを表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
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

	int hand = rand() % 7;	//0～6の範囲の乱数を生成し、じゃんけんの手の判定用の型に代入。

	//乱数の値に応じて結果を表示。
	switch(hand) {
	//0の時、末尾にswitch文から抜けるためのbreakを配置。
	case 0		:	cout	<< "大吉\n";	break;
	//1の時、末尾にswitch文から抜けるためのbreakを配置。
	case 1		:	cout	<< "中吉\n";	break;
	//2の時、末尾にswitch文から抜けるためのbreakを配置。
	case 2		:	cout	<< "吉\n";		break;
	//3の時、末尾にswitch文から抜けるためのbreakを配置。
	case 3		:	cout	<< "末吉\n";	break;
	//4の時、末尾にswitch文から抜けるためのbreakを配置。
	case 4		:	cout	<< "凶\n";		break;
	//5の時、末尾にswitch文から抜けるためのbreakを配置。
	case 5		:	cout	<< "大凶\n";	break;
	//上記に当てはまらない時、switch文最後のため、breakは配置しない。
	default	:	cout	<< "小吉\n";
	}
}
