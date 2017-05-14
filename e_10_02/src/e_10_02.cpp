/*演習10-2
 * 自動車クラスにデータメンバやメンバ関数を自由に追加せよ。
 * 作成日：2017年5月15日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//自作ヘッダを読み込む。
#include "e_10_02.h";

using namespace std;

int main()
{
	string	name, number;			//名前・ナンバーの定義。
	int		width, length, height;	//車幅・車長・車高・の定義。
	double	gas;					//ガソリンの定義。

	//車のスペックの入力を促す。
	cout	<<"車のデータを入力せよ。\n";

	//名前の入力を促す。
	cout	<<"名前は：";
	//名前の入力。
	cin		>>name;

	//ナンバーの入力を促す。
	cout	<<"ナンバーは：";
	//ナンバーの入力。
	cin		>>number;

	//車幅の入力を促す。
	cout	<<"車幅は：";
	//車幅の入力。
	cin		>>width;

	//車長の入力。
	cout	<<"車長は：";
	//車長の入力。
	cin		>>length;

	//車高の入力を促す。
	cout	<<"車高は：";
	//車高の入力。
	cin		>>height;

	//ガソリンの量の入力を促す。
	cout	<<"ガソリン量は：";
	//ガソリン量の入力。
	cin		>>gas;

	//コンストラクタに渡す。
	Car myCar(name, number, width, length, height, gas);

	//スペックを表示。
	myCar.print_spec();

	//移動をしなくなるまで繰り返す。
	while (true) {
		//現在位置の表示。
		cout	<<"現在地（"	<<myCar.x()	<<", "	<<myCar.y()	<<")\n";

		//残り燃料の表示。
		cout	<<"残り燃料："	<<myCar.fuel()	<<'\n';

		//移動するかどうかの確認。
		cout	<<"移動[0…No／1…Yes]：";

		//移動するか判定するための変数を定義。
		int	move;

		//移動するかどうかを入力。
		cin		>>move;

		//移動しないを選択したら終わり。
		if(move == 0) {
			break;
		}

		//移動量を入力するための変数を定義。
		double dx, dy;

		//X方向の移動量の入力を促す。
		cout	<<"X方向の移動距離は：";
		//移動距離の入力。
		cin		>>dx;

		//Y方向の移動量の入力を促す。
		cout	<<"Y方向の移動距離は：";
		//移動距離の入力。
		cin		>>dy;

		//移動距離から燃料を計算する関数を呼び出し、燃料がなくなった場合燃料が足りないことを表示する。
		//関数はbool型なのでTrueかFalseかで判定。
		if(!myCar.move(dx, dy)) {
			//燃料が足りませんと表示。
			cout	<<"燃料が足りません。！\n";
		}

		//残り燃料の表示。
		cout	<<"残り燃料："	<<myCar.fuel()	<<'\n';

		//給油するかどうかの確認。
		cout	<<"給油[0…No／1…Yes]：";

		//給油するかどうかの判定のための変数を定義。
		int	charge;

		//給油するかどうかを選択。
		cin		>>charge;

		//給油する場合は給油する関数を呼び出す。
		if(charge == 1) {
			//関数を呼び出す。
			myCar.fuel_charge();
		}
	}
}
