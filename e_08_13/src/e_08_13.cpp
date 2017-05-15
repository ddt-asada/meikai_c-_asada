/*演習8-13
 * 文字列に含まれる最も先頭に位置する文字cのポインタを返す関数を作成。文字cが含まれない場合はNULLを返却。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
const char*strchr_ptr(const char* s, char c);

int main()
{
	const char	s[] = "ABSZXYX";	//走査したい文字列。

	char		c = 'Z';			//探す文字。

	const char* judge;

	judge = strchr_ptr(s, c);		//判定をする関数を呼び出し、結果を代入。

	//文字列が見つかった場合。
	if(judge != NULL) {
		//走査した結果を表示。
		cout	<<"文字列"	<<s	<<"の文字"	<<c	<<"へのアドレスは"	<<&judge	<<"。\n";

	//見つからなかった場合。
	} else {
		//見つからなかったと表示。
		cout	<<"見つかりませんでした。\n";

	}

	//0を返す。
	return 0;
}

/*関数名：const char* strchr_ptr(const char* s, char c)
 * 引数cnost char*s：走査したい文字列。
 * 引数char c：探す文字。
 * 返却値：格納されている文字へのポインタ、見つからなかった場合はNULLをかえす。
 * 作成日：2017年5月12日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 */
const char*strchr_ptr(const char* s, char c)
{
	int	len = strlen(s);		//文字列の長さを求める。

	const char* judge = NULL;			//走査の判定結果を入力する型。

	//文字列の全要素を走査する。途中で目的の文字を見つけた場合はそこでループ終了。
	for(int i = 0; i < len; i++) {

		//目的の文字が見つかったとき。
		if(s[i] == c) {

			judge = &s[i];	//文字cへのポインタを返す。

		}
	}

	//判定結果を返す。。
	return judge;
}
