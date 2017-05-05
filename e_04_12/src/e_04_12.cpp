/*演習4-12
 * トランプの記号の四つの列挙子をもつ列挙体を定義せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	enum	trump{Diya, Heart, Club, Spade, Invaild};	//トランプの列挙体を宣言。列挙子の最後に編集しやすいようにInvaildを追加。

	int		type = 5;									//列挙子を呼び出すための変数を5で初期化（繰り返しの判定で利用するため）。

	//列挙体の数字以外が入力されたときに、再度入力させるための繰り返し。
	for( ; type < Diya || type > Invaild; ) {
		//「0…ダイヤ　1…ハート　2…クラブ　3…スペード　4…終了：」と表示。
		cout	<<"0…ダイヤ　1…ハート　2…クラブ　3…スペード　4…終了：";
		//列挙隊の入力。
		cin		>>type;
	}

	//終了以外の数値が入力されたときの分岐。
	if(type != Invaild) {
		//trump型の変数にstatic_castにより、入力した変数を文字に変換。
		trump selected =static_cast<trump>(type);

		//変数を列挙子に変換したものを用いて分岐。
		switch(selected) {
			//Diyaの時の分岐。
			case Diya	:	cout	<<"ダイヤです\n";		break;
			//Heartの時の分岐。
			case Heart	:	cout	<<"ハートです。\n";		break;
			//Clubの時の分岐。
			case Club	:	cout	<<"クラブです。\n";		break;
			//Spadeの時の分岐。
			case Spade	:	cout	<<"スペードです。\n";	break;
		}
	}

	//0を返す。
	return 0;
}
