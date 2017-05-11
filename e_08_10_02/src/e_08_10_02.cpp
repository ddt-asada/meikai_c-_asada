/*演習8-10-2
 * strncat関数の作成。
 * 作成日：2017年5月11日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字列処理関数を提供するヘッダ。
#include <cstring>

using namespace std;

//関数宣言。
char* mystrncat(char* cat1, const char* cat2,int range);

int main()
{
	const char*	cat2 = "abcdefg";	//末尾に連結する文字列。

	char*		cat1 = "12345";		//先頭に連結する文字列。

	int			range = 5;			//末尾に連結する文字列の長さを指定。

	//文字列を連結して表示。
	cout	<<"文字列を連結しました。連結後の文字列は\n"<<mystrncat(cat1, cat2, range)	<<"です。";

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
 */

char* mystrncat(char* cat1, const char* cat2, int range)
{
	int lenCat1 = strlen(cat1);	//先頭に連結する文字列の長さ。

	int lenCat2 = strlen(cat2);	//末尾に連結する文字列の長さ。

	//文字列を連結する繰り返し。
	//文字列が指定された長さよりも長い場合。
	if(lenCat2 >= range) {
		for(int i = 0; i <= range + 1; i++) {

		//処理が最後の時。
			if(i == lenCat1 + range + 1) {

				cat1[i + lenCat1] += '\0';		//末尾にナル文字を連結。

			//それ以外の時。
			} else {

				cat1[i + lenCat1] += cat2[i];	//末尾に連結していく。

			}
		}

	//指定された長さ未満の時。
	} else {
		for(int i = 0; i <= lenCat2; i++) {

			//処理が最後の時。
			if(i == lenCat2) {

				cat1[i + lenCat1] += '\0';		//末尾にナル文字を連結。

			//それ以外の時。
			} else {

				cat1[i + lenCat1] += cat2[i];	//末尾に連結していく。

			}
		}
	}

	//連結後の文字列を返す。
	return cat1;
}
