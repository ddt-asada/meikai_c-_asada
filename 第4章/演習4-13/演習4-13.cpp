/*演習4-13
 * 曜日を表す列挙隊を定義し、プログラムを作成。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//曜日を表す列挙体を宣言。分かりやすくするためにあえてMonを1で初期化。
	enum Day{Mon=1, Tues, Wed, Thu, Fri, Sat, Sun, Invaild};

	//曜日を選択するための変数の型。
	int type;

	//曜日の範囲以外の変数が入力されたときは再入力させる。
	do{
		cout << "1…月曜日　2…火曜日　3…水曜日　4…木曜日　5…金曜日　6…土曜日　7…金曜日　8…終了：";
		cin >> type;
	}while(type < Mon || type > Invaild);

	//終了が選択されたとき以外の分岐。
	if(type != Invaild);

	//tint型変数をDay型変数に変換。
	Day selected = static_cast<Day>(type);

	//選択した曜日により分岐。
	switch(selected){
	case Mon	: cout <<"今日は月曜日です。\n";	break;
	case Tues	: cout <<"今日は火曜日です。\n";	break;
	case Wed	: cout <<"今日は水曜日です。\n";	break;
	case Thu	: cout <<"今日は木曜日です。\n";	break;
	case Fri	: cout <<"今日は金曜日です。\n";	break;
	case Sat	: cout <<"今日は土曜日です。\n";	break;
	case Sun	: cout <<"今日は日曜日です。\n";	break;
	}

}
