/*演習4-12
 * トランプの記号の四つの列挙子をもつ列挙体を定義せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//トランプの列挙体を宣言。列挙子の最後に編集しやすいようにInvaildを追加。
	enum trump {Diya, Heart, Club, Spade, Invaild};

	//列挙子を呼び出すための変数の型。
	int type;

	//列挙体の数字以外が入力されたときに、再度入力させるための繰り返し。
	do{
		//列挙子の宣言を促す。
		cout << "0…ダイヤ　1…ハート　2…クラブ　3…スペード　4…終了：";
		cin >> type;
	}while (type < Diya || type > Invaild);

	//終了以外の数値が入力されたときの分岐。
	if(type != Invaild){
		//trump型の変数にstatic_castにより、入力した変数を文字に変換。
		trump selected = static_cast<trump>(type);

		//変数を列挙子に変換したものを用いて分岐。
		switch(selected){
		case Diya	: cout <<"ダイヤです\n";	break;
		case Heart	: cout <<"ハートです。\n";	break;
		case Club	: cout <<"クラブです。\n";	break;
		case Spade	: cout <<"スペードです。\n";break;
		}
	}
}
