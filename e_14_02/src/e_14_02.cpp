/*演習14-2
 * 自己初期化が行われたときに不定値で素沖化しないようにコピーコンストラクタを改良する。
 * 作成日：2017年5月18日
 * 作成者：浅田　知嗣
 */

#include <new>
#include <iomanip>
#include <iostream>
#include "e_14_02_Array.h"

using namespace std;

//プログラムのメイン部に当たる。
int main()
{
	int n;
	cout	<<"aの要素数：";
	cin		>>n;

	IntArray a = a;
	IntArray b = b;
	IntArray c = c;

	for(int i = 0; i < a.size(); i++) {
		a[i] = i;
	}

	cout	<<"    a    b    c\n";
	cout	<<"-----------------\n";

	for(int i = 0; i < n; i++) {
		cout	<<setw(5)	<<a[i]	<<setw(5)	<<b[i]	<<setw(5)	<<c[i]	<<'\n';
	}
}
