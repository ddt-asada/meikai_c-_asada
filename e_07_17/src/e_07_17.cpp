/*演習7-17
 * ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数を作成。
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//関数宣言。
void mem_set(void* p, const int n, unsigned char v);

int main()
{
	short*			p = new short[5];		//配列を指す。

	const int		n = 5;					//ポインタが指すオブジェクトの先頭何バイトに値を代入するか。

	unsigned char	v = 1;					//代入したい値。


	for(int i = 0; i < n; i++) {

		p[i] = 0;		//配列を初期化。

		//代入前の配列を表示。
		cout	<<"p["	<<i	<<"] = "	<<p[i]	<<'\n';

	}

	//関数を呼び出す。
	mem_set(p, n, v);

	//ポインタが指す先をインクリメントする。
	for(int i = 0; i < n; i++) {

		cout	<<"p["	<<i	<<"] = "	<<p[i]	<<'\n';

	}

	//生成したオブジェクトを削除。
	delete p;

	//0を返す。
	return 0;
}

/*関数名void mem_set(void* p, int n, unsigned char v)
 * ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数。
 * 引数void* p：ポインタ。
 * 引数int n：先頭何バイトに代入するか。
 * 引数unsigned char v：代入する値。
 * 返却値：なし。
 * 作成日：2017年5月10日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月11日
 * 更新者：浅田　知嗣
 */

void mem_set(void* p, const int n, unsigned char v)
{

	//voidへのポインタをunsigned char型へのポインタへ強制的に変換し、代入。
	unsigned char* tmp = reinterpret_cast<unsigned char*>(p);

	//ポインタが指す先をインクリメントする。
	for(int i = 0; i < n; i++) {

		//ポインタが指す先をインクリメントしつつ代入。
		*tmp++ = v;

	}
}
