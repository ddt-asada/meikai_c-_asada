/*演習6-8
 * List6-8の関数put_starsを、その内部でList6-9の関数put_ncharを呼び出すことによって表示を行うように書き換えたプログラム。
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
void put_nchar(int Num, char Letter);

//関数宣言。
void put_stars(int Num);

int main()
{

	int	Num;	//表示したい三角形の段数の型。

	//何段の直角三角形を表示するかの入力を促す。
	cout	<<"左下直角の三角形を表示します。\n段数は：";
	//段数を入力する。
	cin		>>Num;

	//文字を表示する関数を繰り返す。
	for(int i = 1; i <= Num; i++) {
		//文字を表示する関数に繰り返したい数を渡す。
		put_stars(i);

		//関数の処理がが終わるたびに改行。
		cout	<<'\n';

	}

	//0を返す。
	return 0;
}

/*関数名：void put_nchar(int Num, char Letter)
 * 受け取った引数Numが0になるまで受け取った文字Letterを表示する関数。
 * 引数Num：繰り返す回数。
 * 引数Letter：表示する文字。
 * 返却値：なし。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

//引数Numが0になるまで文字Letterを表示する関数。
void put_nchar(int Num, char Letter)
{
	//Numが0になるまで文字列を出力。
	for(int i = Num; i > 0; i--) {

		//文字Letterを表示。
		cout	<<Letter;

	}
}

/*関数名：void put_stars(int Num)
 * 受け取った引数を引数が0になるまで文字Letterを表示する関数に渡す関数。
 * 引数Num：繰り返す回数。
 * 返却値：なし。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

//引数Numが0になるまで文字cを表示する関数を呼び出す関数。
void put_stars(int Num)
{
	//関数に繰り返したい回数、表示したい文字を渡す。
	put_nchar(Num, '*');

}
