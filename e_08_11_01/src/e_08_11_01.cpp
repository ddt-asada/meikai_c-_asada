/*演習8-11
 * strcmp関数を作成。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
int mystrcmp(const char* cmp1, const char* cmp2);

int main()
{
	//cmp1のほうが小さいパターンを確認。
	//ただしく関数が動作していれば「-3」が帰ってくる。
	const char	cmp1[] = "ABCDE";	//比較したい文字列（文字数5）。

	const char	cmp2[] = "FGH";		//比較したい文字列。（文字数3）

	//文字列を比較して結果（等しければ0、cmp1が大きければ正の値を、cmp2が大きければ負の値を）を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrcmp(cmp1, cmp2)	<<"です。\n";

	//cmp3のほうが大きいパターンを確認。
	//ただしく関数が動作していれば「3」が帰ってくる。
	const char	cmp3[] = "XYZ";	//比較したい文字列（文字数3）。

	const char	cmp4[] = "ABCDE";		//比較したい文字列。（文字数5）

	//文字列を比較して結果（等しければ0、cmp3が大きければ正の値を、cmp4が大きければ負の値を）を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrcmp(cmp3, cmp4)	<<"です。\n";

	//等しいパターンを確認。
	//ただしく関数が動作していれば「0」が帰ってくる。
	const char	cmp5[] = "AAA";	//比較したい文字列（文字数3）。

	const char	cmp6[] = "AAA";		//比較したい文字列。（文字数3）

	//文字列を比較して結果（等しければ0、cmp5が大きければ正の値を、cmp6が大きければ負の値を）を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrcmp(cmp5, cmp6)	<<"です。\n";



	//0を返す。
	return 0;
}

/*関数名：int mystrcmp(const char* cmp1, const char* cmp2)
 * 文字列の大小関係を比較する関数。比較は文字コードに基づいて行う。
 * 引数const char* cmp1：比較したい文字列。
 * 引数const char* cmp2：比較したい文字列。
 * 返却値：等しければ0、cmp1が大きければ正の値を、cmp2が大きければ負の値を返す。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 */

int mystrcmp(const char* cmp1, const char* cmp2)
{
	int	num;			//繰り返しを行う数を入力する型。今回はcmp1とcmp2のどちらか短い方を繰り返し回数の上限とする。

	int max = 0;		//大小の判定を入力する型。

	//繰り返しを行う回数を求める。どちらか短い方の文字列の文字数を上限とする。
	if(strlen(cmp1) <= strlen(cmp2)) {

		num = strlen(cmp1);		//cmp1の文字列の長さを繰り返しの上限として採用。

	//cmp2のほうが短いとき
	} else {

		num = strlen(cmp2);		//cmp2の文字列の長さを繰り返しの上限として採用。

	}

	//どちらかの文字列がナル文字にたどり着くまで文字列1つ1つの大きさを比較していく。
	for(int i = 0; i < num; i++) {

		//大小を比較。
		if(cmp1[i] > cmp2[i]) {

			max++;	//maxをカウントする。

		//大小を比較。
		} else if (cmp1[i] < cmp2[i]) {

			max--;	//maxをひとつへらす。

		}
	}

	//最後に比較した結果を返す。
	//cmp1が大きければmaxは正の値そうでなければ負の値、等しければ0になっているはず。
	return max;
}
