/*演習14-2
 * 自己初期化が行われたときに不定値で素沖化しないようにコピーコンストラクタを改良する。
 * 作成日：2017年5月18日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月23日
 * 更新者：浅田　知嗣
 */

#include <new>
#include <iostream>
#include "e_14_02_Array.h"

//デフォルトコントラスタの定義。
IntArray::IntArray()
{
	nelem = 1;		//配列の要素数。

	vec = new int[nelem];

	for(int i = 0; i < nelem; i++) {
		vec[i] = i;
	}
}

//コピーコンストラクタの定義。
IntArray::IntArray(const IntArray& x)
{
	if(&x == this) {
		nelem = 10;
		vec = new int[nelem];
		for(int i = 0; i < nelem; i++) {
			vec[i] = 0;
		}
	} else {
		nelem = x.nelem;
		vec = new int[nelem];
		for(int i = 0; i < nelem; i++) {
			vec[i] = x.vec[i];
		}
	}
}

//代入演算子の定義。
IntArray& IntArray::operator=(const IntArray& x)
{
	if(&x != this) {
		if(nelem != x.nelem) {
			delete[] vec;
			nelem = x.nelem;
			vec = new int[nelem];
		}

		for(int i = 0; i < nelem; i++) {
			vec[i] = x.vec[i];
		}
	}
	return *this;


}
