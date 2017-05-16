/*演習11-5
 * 日付を読み込んで、その曜日を求めて表示するプログラムを作成せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

//このプログラムのメイン部。
#include <ctime>
#include <sstream>
#include <iostream>
//クラスの定義がされた自作ヘッダの読み込み。
#include "e_11_05_Date.h"

using namespace std;

int main()
{
	//デフォルトコンストラクタを呼び出す。
	Date today;

	//コンストラクタに値を代入、試しに自分の誕生日を入れてみる。
	Date birthday(1993, 9, 11);

	//今日の日付を表示。
	cout	<<"today = "	<<today.to_string()	<<'\n';

	//曜日を判定する関数を呼び出し、曜日を表示（関数はe_11_05_Date.cppにて定義）。
	switch (today.day_of_week()) {
	//0の時は日曜日。
	case 0:	cout	<<"日曜日です。\n";	break;
	//1の時は月曜日。
	case 1:	cout	<<"月曜日です。\n";	break;
	//2の時は火曜日。
	case 2:	cout	<<"火曜日です。\n";	break;
	//3の時は水曜日。
	case 3:	cout	<<"水曜日です。\n";	break;
	//4の時は木曜日。
	case 4:	cout	<<"木曜日です。\n";	break;
	//5の時は金曜日。
	case 5:	cout	<<"金曜日です。\n";	break;
	//6の時は土曜日。
	case 6:	cout	<<"土曜日です。\n";	break;
	}

	//誕生日を表示。
	cout	<<"birthday = "	<<birthday.to_string()	<<'\n';

	//曜日を判定する関数を呼び出し、曜日を表示（関数はe_11_05_Date.cppにて定義）。
	switch (birthday.day_of_week()) {
	//0の時は日曜日。
	case 0:	cout	<<"日曜日です。\n";	break;
	//1の時は月曜日。
	case 1:	cout	<<"月曜日です。\n";	break;
	//2の時は火曜日。
	case 2:	cout	<<"火曜日です。\n";	break;
	//3の時は水曜日。
	case 3:	cout	<<"水曜日です。\n";	break;
	//4の時は木曜日。
	case 4:	cout	<<"木曜日です。\n";	break;
	//5の時は金曜日。
	case 5:	cout	<<"金曜日です。\n";	break;
	//6の時は土曜日。
	case 6:	cout	<<"土曜日です。\n";	break;
	}

	//0を返す。
	return 0;
}
