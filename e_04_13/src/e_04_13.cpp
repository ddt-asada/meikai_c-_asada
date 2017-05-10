/*演習4-13
 * 曜日を表す列挙体を定義し、プログラムを作成。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	enum	Day{Mon = 1, Tues, Wed, Thu, Fri, Sat, Sun, Invaild};	//曜日を表す列挙体を宣言。分かりやすくするためにあえてMonを1で初期化。

	int 	type = 0;												//曜日を選択するための変数を0で初期化（繰り返しの判定で利用するため）。

	//曜日の範囲以外の変数が入力されたときは再入力させる。
	for( ; type < Mon || type > Invaild; ) {
		//「"1…月曜日　2…火曜日　3…水曜日　4…木曜日　5…金曜日　6…土曜日　7…金曜日　8…終了：」と表示。
		cout	<<"1…月曜日　2…火曜日　3…水曜日　4…木曜日　5…金曜日　6…土曜日　7…金曜日　8…終了：";
		//曜日の入力を促す。
		cin		>>type;
	}

	//tint型変数をDay型変数に変換。
	Day selected = static_cast<Day>(type);

	//選択した曜日により分岐。
	switch(selected) {
		//月曜日の時の分岐。
		case Mon	:cout	<<"今日は月曜日です。\n";	break;
		//火曜日の時の分岐。
		case Tues	:cout	<<"今日は火曜日です。\n";	break;
		//水曜日の時の分岐。
		case Wed	:cout	<<"今日は水曜日です。\n";	break;
		//木曜日の時の分岐。
		case Thu	:cout	<<"今日は木曜日です。\n";	break;
		//金曜日の時の分岐。
		case Fri	:cout	<<"今日は金曜日です。\n";	break;
		//土曜日の時の分岐。
		case Sat	:cout	<<"今日は土曜日です。\n";	break;
		//日曜日の時の分岐。
		case Sun	:cout	<<"今日は日曜日です。\n";	break;
		//終了の時（1～8以外の数値がここに来ることはないのであえてdefaultではなくcaseではっきりと明示。
		case Invaild:										 ;
	}

	//0を返す。
	return 0;
}
