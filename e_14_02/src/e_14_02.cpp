/*演習14-2
 * 自己初期化が行われたときに不定値で素沖化しないようにコピーコンストラクタを改良する。
 * 作成日：2017年5月18日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月23日
 * 更新者：浅田　知嗣
 */

#include <new>
#include <iomanip>
#include <iostream>
#include "e_14_02_Array.h"

using namespace std;

int size;	//ほかの場所で使いたいので要素数はここで宣言。

//関数宣言。
void f(int size, int num);

//プログラムのメイン部に当たる。
int main()
{
	int num;		//要素数とデータ数の入力に使う変数。


	cout	<<"aの要素数：";
	//cin		>>size;

	cout	<<"aのデータ数：";
//	cin		>>num;

	size = 21121424521411313;
	num = 123;


	//例外を検知する関数を呼び出す。
	f(size, num);

	//自己初期化するときには、0で初期化するように改良。
	IntArray c = c;

	cout	<<"   c    \n";
	cout	<<"--------\n";

	for(int i = 0; i < size; i++) {
		cout	<<setw(5)	<<c[i]	<<'\n';
	}
}

void f(int size,int num)
{
	try {
		//コンストラクタを呼び出す。
		IntArray a(size);

		//配列の各要素にiを代入しながらを中身を表示して確認する。
		for(int i = 0; i < num; i++) {
			a[i] = i;
			cout	<<"a["	<<i	<<"] = "	<<a[i]	<<'\n';
		}
	}
	//メモリの確保に失敗したとき。
	catch(bad_alloc &) {
		//メモリの確保にしたことを表示し、強制終了する。
		cout	<<"メモリの確保に失敗しました。\n";
		exit(1);
	}
	//例外を検知した時。
	catch(IntArray::IdxRngErr& a) {
		//添字がオーバーフローしてることを表示し、要素数を返す。
		cout	<<"添字オーバーフロー："	<<a.index()	<<'\n';
		return;
	}
}
