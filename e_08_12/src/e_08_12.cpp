/*演習8-13
 * 文字列に含まれる最も先頭に位置する文字cの展示を返す関数を作成。文字cが含まれない場合は-1を返却。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
int strchr_idx(const char* s, char c);

int main()
{
	const char*	s = "ABSZXYX";	//走査したい文字列。

	char		c = 'X';		//探す文字。

	//走査した結果を表示。
	cout	<<"文字"	<<c	<<"は文字列"	<<s	<<"の"	<<strchr_idx(s, c)	<<"番目にありました。\n";

	//0を返す。
	return 0;
}

/*関数名：int strchr_idx(const char* s, char c)
 * 引数cnost char*s：走査したい文字列。
 * 引数char c：探す文字。
 * 返却値：格納されている添字、見つからなかった場合は-1をかえす。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 */

int strchr_idx(const char* s, char c)
{
	int place;	//目的の文字の添字を入力する型。

	//文字列の全要素を走査する。途中で目的の文字を見つけた場合はそこでループ終了。
	for(int i = 0; i < strlen(s) || s[i] != c; i++) {

		//目的の文字が見つかったとき。
		if(s[i] == c) {

			place = i;	//見つけた場所を代入。

		//見つからないとき。
		} else {

			place = -1;	//見つからない限りずっと-1を代入。

		}
	}

	//見つけた場所を返す。
	return place;
}
