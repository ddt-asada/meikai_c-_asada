/*演習3-26
 * 人間とコンピュータが対戦できるじゃんけんプログラム。
 * ・人間が望む限り何度でも繰り返せるもの。
 * ・いずれか一方が3回勝つまで繰り返すもの。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダを読み込む。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダを読み込む。
#include <cstdlib>
//文字列を利用するためのヘッダを読み込む。
#include <string>

using namespace std;

int main()
{
	//繰り返しを判定するための文字列の型。
	string retry;

	//勝利数をカウントするための型。
	int w , l = 0;
	//乱数の種を時間を参照に決定。
	srand(time(NULL));

	//じゃんけんの手を選ぶための型。
	int hand;

	//望む限り何度でも対戦できるじゃんけん。
	do{
		//コンピュータのじゃんけんの手を判定するための乱数。
		int cpu = rand()%3;

		//三つのうちのいずれかが入力されるまで繰り返す。
		do{
		//人間のじゃんけんの手を選ぶ。
		cout << "じゃんけん（グー…0／チョキ…1／パー…2）";
		cin >> hand;
		}while(hand < 0 || hand > 2);

		//人間の手によって3パターンに分岐。
		switch(hand){
		//グーの時。
		case 0 : switch(cpu){
		//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0 : cout <<"あいこ。\n"; break;
					//チョキの時。
					case 1 : cout <<"勝ち。\n"; break;
					//パーの時。
					case 2 : cout <<"負け。\n"; break;
		} break;
		//チョキの時。
		case 1 : switch(cpu){
		//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0 : cout <<"負け。\n"; break;
					//チョキの時。
					case 1 : cout <<"あいこ。\n"; break;
					//パーの時。
					case 2 : cout <<"勝ち。\n"; break;
		} break;
		//パーの時。
		case 2 : switch(cpu){
		//コンピュータの手によって3パターンに分岐。
					//グーの時。
					case 0 : cout <<"勝ち。\n"; break;
					//チョキの時。
					case 1 : cout <<"負け。\n"; break;
					//パーの時。
					case 2 : cout <<"あいこ。\n"; break;
		} break;
		}
		//もう一度繰り返すかの確認。
		cout <<"もう一度？（Yes…Y／No…N）";
		cin >> retry;
		//じゃんけんを繰り返すか判定。
	}while(retry == "y" || retry == "Y");

//いずれか一方が3回勝つまで繰り返すじゃんけん。
	do{
	//コンピュータのじゃんけんの手を判定するための乱数。
	int cpu = rand()%3;

	//三つのうちのいずれかが入力されるまで繰り返す。
	do{
	//人間のじゃんけんの手を選ぶ。
	cout << "じゃんけん（グー…0／チョキ…1／パー…2）";
	cin >> hand;
	}while(hand < 0 || hand > 2);

	//人間の手によって3パターンに分岐。
	switch(hand){
	//グーの時。
	case 0 : switch(cpu){
	//コンピュータの手によって3パターンに分岐。
				//グーの時。
				case 0 : cout <<"あいこ。\n"; break;
				//チョキの時。
				case 1 : cout <<"勝ち。\n"; w++; break;
				//パーの時。
				case 2 : cout <<"負け。\n"; l++; break;
	} break;
	//チョキの時。
	case 1 : switch(cpu){
	//コンピュータの手によって3パターンに分岐。
				//グーの時。
				case 0 : cout <<"負け。\n"; l++; break;
				//チョキの時。
				case 1 : cout <<"あいこ。\n"; break;
				//パーの時。
				case 2 : cout <<"勝ち。\n"; w++; break;
	} break;
	//パーの時。
	case 2 : switch(cpu){
	//コンピュータの手によって3パターンに分岐。
				//グーの時。
				case 0 : cout <<"勝ち。\n"; w++; break;
				//チョキの時。
				case 1 : cout <<"負け。\n"; l++; break;
				//パーの時。
				case 2 : cout <<"あいこ。\n"; break;
	} break;
	}
	//じゃんけんを繰り返すか判定。
}while(w < 3 || l < 3);

}
