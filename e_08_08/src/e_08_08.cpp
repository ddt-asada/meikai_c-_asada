/*演習8-8
 * 文字列内の文字を末尾から先頭へと逆順に表示する関数put_revを作成。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理のためのヘッダを読み込む。
#include <cstring>

using namespace std;

//関数宣言。
void put_rev(const char* rev);

int main()
{
	const char* rev = "abc";	//逆順に表示したいポインタによる文字列。今回はabcとする。

	//文字列を逆順に表示する関数を呼び出す。
	put_rev(rev);

	//0を返す。
	return 0;
}

/*関数名：void put_rev(const char* rev)
 * 受け取った文字列を逆順に表示する関数。
 * 引数const char* rev：逆順に表示したいポインタによる文字列。
 * 返却値：なし。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

void put_rev(const char* rev)
{
	int	len = strlen(rev);		//文字列の長さを取得。

	//文字列を逆順に表示するための繰り返し。
	for(int i = len - 1; i >= 0; i--) {
		//文字列を逆順に表示。
		cout	<<rev[i];
	}
}
