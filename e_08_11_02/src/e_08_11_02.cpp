/*演習8-11
 * strncmp関数を作成。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理を行うライブラリ関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
int mystrncmp(const char* cmp1, const char* cmp2, int range);

int main()
{
	//cmp1の方が大きく、rangeが一番短くなるパターンを確認。
	//正しく動作していれば「5」が返ってくる。
	const char	cmp1[] = "OPQRSTUVWXYZ";	//比較したい文字列。(12文字）

	const char	cmp2[] = "ABCDEFG";		//比較したい文字列。（7文字）

	int			range1 = 5;				//先頭何文字までを比較するか。（5文字）

	//文字列を比較して結果を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrncmp(cmp1, cmp2, range1)	<<"です。\n";

	//cmp2の方が大きく、cmp1が一番短くなるパターンを確認。
	//正しく動作していれば「-2」が返ってくる。
	const char	cmp3[] = "AB";			//比較したい文字列。(2文字）

	const char	cmp4[] = "CDEFG";		//比較したい文字列。（5文字）

	int			range2 = 5;				//先頭何文字までを比較するか。（5文字）

	//文字列を比較して結果を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrncmp(cmp3, cmp4, range2)	<<"です。\n";

	//両方の値が等しく、cmp2が一番短くなるパターンを確認。
	//正しく動作していれば「0」が返ってくる。
	const char	cmp5[] = "AAAA";		//比較したい文字列。(4文字）

	const char	cmp6[] = "AA";			//比較したい文字列。（2文字）

	int			range3 = 5;				//先頭何文字までを比較するか。（5文字）

	//文字列を比較して結果を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrncmp(cmp5, cmp6, range3)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：int mystrcmp(const char* cmp1, const char* cmp2, int range)
 * 文字列の大小関係を比較する関数。比較は文字コードに基づいて行う。
 * 引数const char* cmp1：比較したい文字列。
 * 引数const char* cmp2：比較したい文字列。
 * 引数int range：先頭何文字までを比較するか。
 * 返却値：等しければ0、cmp1が大きければ正の値を、cmp2が大きければ負の値を返す。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 */

int mystrncmp(const char* cmp1, const char* cmp2, int range)
{
	int	num;					//繰り返しを行う数を入力する型。今回はcmp1とcmp2とrangeのうちもっとも短いものを繰り返し回数の上限とする。

	int	cmp1Len = strlen(cmp1);	//cmp1の文字列の長さ。

	int	cmp2Len = strlen(cmp2);	//cmp2の文字列の長さ。

	int max = 0;				//大小の判定を入力する型。

	//繰り返しを行う回数を求める。どちらか短い方の文字列の文字数を上限とする。
	//まずrangeとほかの文字列を比較、rangeが短ければそのままrangeを採用。文字列の方が短ければ次の判定へ進む。
	if(range >= cmp1Len && range >= cmp2Len) {

		//文字列の長さの比較を行う。
		if(cmp1Len <= cmp2Len) {

			num = cmp1Len;		//cmp1の文字列の長さを繰り返しの上限として採用。

			//cmp2のほうが短いとき
		} else {

			num = cmp2Len;		//cmp2の文字列の長さを繰り返しの上限として採用。

		}

	//rangeが短い場合
	} else {

		num = range;					//rangeを繰り返しの上限として採用。

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
