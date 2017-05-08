/*演習7-1
 * List7-2に&ptrの表示を追加したプログラム。
 * 作成日：2017年ｎ5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int		no = 135;	//任意の整数。

	int*	ptr = &no;	//noへのポインタ。

	//noの値を表示。
	cout	<<"no     ："	<<no	<<'\n';

	//noのアドレスを表示。
	cout	<<"&no    ："	<<&no	<<'\n';

	//ptrの値すなわちnoのアドレスを表示。
	cout	<<"ptr    ："	<<ptr	<<'\n';

	//ptrの指すオブジェクトすなわちnoの値を表示。
	cout	<<"*ptr   ："	<<*ptr	<<'\n';

	//ptrのアドレスを表示。
	cout	<<"&ptr   ："	<<&ptr	<<'\n';

	//0を返す。
	return 0;
}

/*実行結果は次のようになった。
 *  * no     ：135
 * &no    ：0x62fe3c
 * ptr    ：0x62fe3c
 * *ptr   ：135
 * &ptr   ：0x62fe30
 * これより&ptrはptrのアドレスすなわちnoのアドレスのアドレスを指していることが確認できた。
 */
