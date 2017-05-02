/*演習2-14
 * 0，1，2のいずれかを乱数により生成し、それに応じて「グー」、「パー」、「チョキ」と表示するプログラム。
 *作成日：2017年5月1日
 *作成者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//C言語のライブラリ関数を利用するためのヘッダを読み込む。
#include <cstdlib>

using namespace std;

int main()
{
	//乱数の種を時間を参照にする。
	srand(time(NULL));

	//0～2の範囲で乱数を生成し、変数に代入。
	int a =rand()%3;

	//乱数の値に応じて「グー」、「パー」、「チョキ」を表示するための分岐。
	switch(a){
	//0の場合の処理、末尾にswitch文から抜けるためのbreakを配置。
	case 0 : cout <<"グー\n"; break;
	//1の場合の処理、末尾にswithc文から抜けるためのbreakを配置。
	case 1 : cout <<"パー\n"; break;
	//上記にあてはまらないばあいの処理、switch文の最後のため、breakは配置しない。
	default : cout <<"チョキ\n";
	}
}
