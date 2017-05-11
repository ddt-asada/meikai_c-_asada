/*演習8-9
 * strncpy関数と同等の関数を作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
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
	const char*	copy = "abcdef";		//コピー元のポインタによる文字列を生成。

	char*		paste = "ghijklmnopqr";	//コピー先のポインタによる文字列を生成。

	int			range = 5;			//何文字までコピーするかの範囲を設定。

	//文字列をコピーする関数を呼び出す。
	mystrncpy(paste, copy, range);

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
 */

void mystrncpy(char* paste, const char* copy,int range)
{

	int a =strlen(copy);
	//コピーするための繰り返し。
	for(int i = 0; i < range; i++) {
		//コピーの範囲が文字列の長さ未満の時。
		if(a >= range) {

			paste[i] = copy[i];	//文字列をコピーしていく。

		//コピーの範囲が文字列の長さを超えた場合。
		} else {

			paste[i] = '\0';	//ナル文字で埋め尽くす。

		}
	}

	//コピーした文字列の表示。
	cout	<<"コピーが終わりました。コピー後の文字列は"	<<copy	<<'\n'	<<paste	<<'\n';
}
