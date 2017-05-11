/*演習8-10
 * strcat関数を作成。
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
char* mystrcat(char* cat1, const char* cat2);

int main()
{
	const char*	cat2 = "abcdefg";	//末尾に連結する文字列。

	char*		cat1 = "12345";		//先頭に連結する文字列。

	//文字列を連結して表示。
	cout	<<"文字列を連結しました。連結後の文字列は\n"<<mystrcat(cat1, cat2)	<<"です。";

	//0を返す。
	return 0;
}

/*関数名：char* mystrcat(char* cat1, const char+ cat2)
 * 二つの文字列を連結する文字列。
 * 引数char* cat1：先頭に連結する文字列。
 * 引数const char* cat2：末尾に連結する文字列。
 * 返却値：連結後の文字列cat1。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 */

char* mystrcat(char* cat1, const char* cat2)
{
	int lenCat1 = strlen(cat1);

	int lenCat2 = strlen(cat2);

	//文字列を連結する繰り返し。
	for(int i = 0; i < lenCat2; i++) {

		cat1[i + lenCat1] += cat2[i];

	}

	return cat1;
}
