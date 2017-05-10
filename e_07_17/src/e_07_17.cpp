/*演習7-17
 * ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数を作成。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void mem_set(void* p, int n, unsigned char v);

int main()
{
	int*	p;			//intへのポインタを定義。
	p = new int;		//int型オブジェクトを生成。。

	int		n;			//ポインタが指すオブジェクトの先頭何バイトに値を代入するか。

	unsigned char	v;	//代入したい値。

	//関数を呼び出す。
	mem_set(p, n, v);

	//指定した場所へ値が入力されているかを確認。

}
