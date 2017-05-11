/*演習8-7
 * 文字列sに含まれる数字文字の個数をカウントして、各数字文字の個数を配列に格納する関数を作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数の宣言。
void count_digits(const char* Digits, int Num[]);

int main()
{
	int		Num[10] = {0};			//走査した結果を入力する配列を生成し、0で初期化。

	const char*	 Digits = "W140S500L88";	//走査の対象となる文字列。今回は文字列の中から数字を探す関数を利用するため数字を含んだ文字列で初期化。

	//文字列を走査する関数を呼び出す。
	count_digits(Digits, Num);

	//0を返す。
	return 0;
}

/*関数名：void count_digits(const char* Digits, int Num[])
 * 文字列Digitsから数字文字を探し出し、どの数字が何個あったか配列Numに格納し、表示する関数。
 * 引数Digits：走査の対象となる文字列。
 * 引数Num：文字列の中から探す文字。
 * 返却値：なし。
 */

void count_digits(const char* Digits, int Num[])
{
	char key[] = "0123456789";	//走査用の文字を宣言。

	//0～9の数字がどこにあるか調べるための繰り返し。
	for(int i = 0; i < 10; i++) {

		//文字列を走査するための繰り返し。
		for(int j = 0; Digits[j] > 0 ; j++) {
			//同じ文字があったとき。
			if(Digits[j] == key[i]) {

				Num[i]++;	//見つけた数だけカウントする。

			}
		}

		//配列の中身を確認。
		cout	<<"Num["	<<i	<<"] = "	<<Num[i]	<<'\n';
	}

}
