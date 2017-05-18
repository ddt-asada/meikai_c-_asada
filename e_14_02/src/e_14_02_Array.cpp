/*演習14-2
 * 自己初期化が行われたときに不定値で素沖化しないようにコピーコンストラクタを改良する。
 * 作成日：2017年5月18日
 * 作成者：浅田　知嗣
 */

#include "e_14_02_Array.h"


//コピーコンストラクタの定義。
IntArray::IntArray(const IntArray& x)
{
	if(&x == this) {
		nelem = x.nelem;
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
