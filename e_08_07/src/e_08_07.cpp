/*演習8-7
 * 文字列sに含まれる数字文字の個数をカウントして、各数字文字の個数を配列に格納する関数を作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
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
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 */

void count_digits(const char* Digits, int Num[])
{
	//0～9の数字がどこにあるか調べるための繰り返し。
	//文字列を走査するための繰り返し。
		for(int i = 0; Digits[i]; i++) {

			//同じ文字があったとき。
			switch(static_cast<int>(Digits[i])) {
			//0があったとき。
			case '0'	:Num[0]++;	break;
			//1があったとき。
			case '1'	:Num[1]++;	break;
			//2があったとき。
			case '2'	:Num[2]++;	break;
			//3があったとき。
			case '3'	:Num[3]++;	break;
			//4があったとき。
			case '4'	:Num[4]++;	break;
			//5があったとき。
			case '5'	:Num[5]++;	break;
			//6があったとき。
			case '6'	:Num[6]++;	break;
			//7があったとき。
			case '7'	:Num[7]++;	break;
			//8があったとき。
			case '8'	:Num[8]++;	break;
			//9があったとき。
			case '9'	:Num[9]++;	break;
			}
		}

		//配列の中身をすべて表示して確認。
		for(int i = 0; i < 10; i++) {
			//配列を表示。
			cout	<<"Num["	<<i	<<"] = "	<<Num[i]	<<'\n';
		}

}
