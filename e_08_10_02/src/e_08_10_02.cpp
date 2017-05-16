/*演習8-10-2
 * strncat関数の作成。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
char* mystrncat(char* cat1, const char* cat2,int range);

int main()
{
	//末尾に連結する文字列が連結したい長さより長い時の動作を確認。
	const char	cat2[] = "abcdefg";		//末尾に連結する文字列（7文字）。

	char		cat1[] = "123";		//先頭に連結する文字列（3文字）。

	int			range1 = 5;			//末尾に連結する文字列の長さを指定（5文字）。

	//文字列を連結して表示。
	cout	<<"文字列を連結しました。連結後の文字列は\n"<<mystrncat(cat1, cat2, range1)	<<"です。\n";

	//末尾に連結する文字列が連結したい長さよりとき短いときの動作を確認。。
	const char	cat4[] = "abc";		//末尾に連結する文字列（3文字）。

	char		cat3[] = "123";		//先頭に連結する文字列（3文字）。

	int			range2 = 5;			//末尾に連結する文字列の長さを指定（5文字）。

	//文字列を連結して表示。
	cout	<<"文字列を連結しました。連結後の文字列は\n"<<mystrncat(cat3, cat4, range2)	<<"です。\n";

	//0を返す。
	return 0;
}

/*関数名：char* mystrcat(char* cat1, const char* cat2,int range)
 * 二つの文字列を連結する文字列。
 * 引数char* cat1：先頭に連結する文字列。
 * 引数const char* cat2：末尾に連結する文字列。
 * 引数int range：末尾に連結する文字列の長さを指定。
 * 返却値：連結後の文字列cat1。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月12日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月15日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

char* mystrncat(char* cat1, const char* cat2, int range)
{
	int lenCat1 = strlen(cat1);	//先頭に連結する文字列の長さ。
	int lenCat2 = strlen(cat2);	//末尾に連結する文字列の長さ。

	//文字列を連結する繰り返し。
	for(int i = 0; i <= cat2[i]; i++) {

		//ナル文字より先に指定範囲まで来てしまった（指定範囲が文字列より短い）場合。
		if(i == range) {

			cat1[i + lenCat1] = '\0';		//末尾にナル文字を連結。

			i = lenCat2;					//iに文字列cat2に長さを代入することにより、ループから抜ける。

		//それ以外の時。
		} else {

			cat1[i + lenCat1] = cat2[i];	//末尾にナル文字にたどり着くまで連結していく（末尾にはナル文字が代入される）。
		}
	}

	//連結後の文字列を返す。
	return cat1;
}
