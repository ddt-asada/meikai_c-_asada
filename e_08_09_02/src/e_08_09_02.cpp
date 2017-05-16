/*演習8-9
 * strncpy関数と同等の関数を作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 */
#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
void mystrncpy(char* paste, const char* copy, int range);

int main()
{
	//コピー元の文字数がnより長いパターンの確認。
	const char	copy1[] = "abcde";		//コピー元のポインタによる文字列を生成（5文字）。

	char		paste1[] = "123456789";	//コピー先のポインタによる文字列を生成（9文字）。

	int			range1 = 3;			//何文字までコピーするかの範囲を設定（3文字）。

	//文字列をコピーする関数を呼び出す。
	mystrncpy(paste1, copy1, range1);

	//コピーした文字列の表示。
	cout	<<"コピーが終わりました。コピー後の文字列は\n"	<<paste1	<<"です。\n";


	//コピー元の文字数がnより短いパターンの確認。
	const char	copy2[] = "abcde";		//コピー元のポインタによる文字列を生成（5文字）。

	char		paste2[] = "123456789";	//コピー先のポインタによる文字列を生成（9文字）。

	int			range2 = 7;			//何文字までコピーするかの範囲を設定（7文字）。

	//文字列をコピーする関数を呼び出す。
	mystrncpy(paste2, copy2, range2);

	//コピーした文字列の表示。
	cout	<<"コピーが終わりました。コピー後の文字列は\n"	<<paste2	<<"です。\n";


	//0を返す。
	return 0;
}

/*関数名：void mystrncpy(char* paste, const char* copy, int range)
 * 文字列をコピーする関数。
 * 引数char* paste：コピー先の文字列。
 * 引数const char* cpy：コピー元の文字列。
 * 引数int range：何文字までコピーするかを指定する変数。
 * 返却値：なし。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 */

void mystrncpy(char* paste, const char* copy,int range)
{

	int copyLen = strlen(copy);		//コピー元の文字列の長さを求める。コピー範囲との比較を行いたいため。

	//コピーするための繰り返し。
	for(int i = 0; i < range; i++) {
		//コピーの範囲が文字列の長さ未満の時。
		if(copyLen >= i) {

			paste[i] = copy[i];	//文字列をコピーしていく。

		//コピーの範囲が文字列の長さを超えた場合。
		} else if(copyLen < i) {

			paste[i] = '\0';	//ナル文字で埋め尽くす。

			i = range;			//ループを抜ける。

		}
	}
}
