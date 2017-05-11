/*演習8-11
 * strncmp関数を作成。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
int mystrncmp(const char* cmp1, const char* cmp2, int range);

int main()
{
	const char*	cmp1 = "ABC";	//比較したい文字列。

	const char*	cmp2 = "DEF";	//比較したい文字列。

	int			range = 5;		//先頭何文字までを比較するか。

	//文字列を比較して結果を表示。
	cout	<<"文字列の比較を行いました。結果は"	<<mystrncmp(cmp1, cmp2, range)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：int mystrcmp(const char* cmp1, const char* cmp2, int range)
 * 文字列の大小関係を比較する関数。比較は文字コードに基づいて行う。
 * 引数const char* cmp1：比較したい文字列。
 * 引数const char* cmp2：比較したい文字列。
 * 引数int range：先頭何文字までを比較するか。
 * 返却値：等しければ0、cmp1が大きければ1を、cmp2が大きければ-1を返す。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 */

int mystrncmp(const char* cmp1, const char* cmp2, int range)
{
	int min;		//大小の判定を入力する型。

	//文字列が比較したい長さより長ければ後ろを削除。
	if(strlen(cmp1) > range) {

		cmp1[range + 1] = '\0';		//末尾にナル文字を入力して削除。

	}

	//文字列が比較したい長さより長ければ後ろを削除。
	if(strlen(cmp2) > range) {

		cmp2[range + 1] = '\0';		//末尾にナル文字を入力して削除。

	}

	//大小を比較。
	if(cmp1 > cmp2) {

		min = 1;	//1を代入。。

	//大小を比較。
	} else if (cmp1 < cmp2) {

		min = -1;	//-1を代入。

	//等しいとき。
	} else if (cmp1 == cmp2) {

		min = 0;	//0を代入。

	}

	//判定を返す。
	return min;
}
