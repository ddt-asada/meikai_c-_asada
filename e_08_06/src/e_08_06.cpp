/*演習8-6
 * 文字列sに含まれる文字cの個数を返す関数strch_cntを作成せよ。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数の宣言。
int strch_cnt(const char* test, char key);

int main()
{
	const char*	test = "abcabc";	//線形走査の対象となる文字列の生成。

	char	key = 'a';			//文字列の中から探す文字。今回は仮にaを指定してみる。

	//走査の結果文字列testに何個文字keyが含まれていたかを表示。。
	cout	<<"文字列testの中に文字keyは"	<<strch_cnt(test, key)<<"個含まれていました。\n";

	//0を返す。
	return 0;
}

/*関数名：int strch_cnt(const char* test, char key)
 * 文字列testを走査し、その結果文字keyが何個含まれていたかを返す関数。
 * 引数const char* key：走査の対象となる文字列。
 * 引数char test：走査を行う文字。
 * 返却値：文字列keyの中に含まれていたcの個数。
 */

int strch_cnt(const char* test, char key)
{
	int	Count = 0;	//見つけた文字cの数を数える変数。

	//文字列sを走査する。
	for(int i = 0; test[i]; i++) {

		//文字cを見つけたとき。
		if(test[i] == key) {

			Count++;	//カウントを一つ加算。
		}
	}

	//見つけた数を返す。
	return Count;
}
