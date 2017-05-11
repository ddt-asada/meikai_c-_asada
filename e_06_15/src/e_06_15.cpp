/*演習6-15
 * x時y分の時刻を、そのdy分後の時刻へと更新する関数spendを作成する。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void spend(int& Hour, int& Minute, int After);

int main()
{
	int	Hour;	//時間を入力する型。

	int	Minute;	//分を入力する型。

	int	After;	//何分進めるかの型。

	//時刻の入力を促す。
	cout	<<"時刻を入力してください。\n";

	//24以上の値が入力されないようにループする。
	do {

		//時間の入力を促す。
		cout	<<"時間：";
		//時間を入力。
		cin		>>Hour;

	} while(Hour > 23);

	//60分以上の値が入力されないようにループする。
	do {

		//分の入力を促す。
		cout	<<"分：";
		//分を入力。
		cin		>>Minute;

	} while(Minute > 59);

	//何分進めるかの入力を促す。
	cout	<<"何分進めますか？：";
	//何分進めるかの入力。
	cin		>>After;

	//入力した時刻の確認。
	cout	<<Hour	<<"時"	<<Minute	<<"分の"	<<After	<<"分後は\n";

	//時間を進める関数に参照渡しする。
	spend(Hour, Minute, After);

	//進めた時間を表示。
	cout	<<Hour	<<"時"	<<Minute	<<"分です。\n";

	//0を返す。
	return 0;
}

/*関数名：void spend(int& Hour, int& Minute, int After);
 * x時y分の時刻を、dy分後の時刻へと更新する関数。
 * 時刻の表現は24時間制。
 * 引数Hour：渡された引数を参照した時間を表す。
 * 引数Minute：渡された引数を参照した分を表す。
 * 引数：After：時計を何分進めるかを表す。
 * 返却値：なし（参照されているため自動的に同じ値になる）。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

//時間を進める関数。
void spend(int& Hour, int& Minute, int After)
{
	Minute += After;	//分を進める。

	//60分を超えないようにループ。
	do {

		Hour ++;		//時間を1加算。

		Minute -= 60;	//1時間加算されたので60分を引く。

	} while(Minute >= 60);

	//時間が24時間を超えないようにループ。
	do {

		Hour -= 24;		//時間を0時に戻す。

	} while (Hour >= 24);
}
