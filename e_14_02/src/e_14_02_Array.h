/*演習14-2
 * 自己初期化が行われたときに不定値で素沖化しないようにコピーコンストラクタを改良する。
 * 作成日：2017年5月18日
 * 作成者：浅田　知嗣
 */

#ifndef ___Class_IntArray
#define ___Class_IntArray

//整数配列のクラスを定義する。
class IntArray
{
	int		nelem;			//配列の要素数。
	int*	vec;			//先頭要素へのポインタ。

public:
	//エラーを検出するためのクラスの定義。
	class IdxRngErr {
	private:
		IntArray*	ident;		//エラーが出た場所へのポインタ。
		int			idx;		//エラーが出た要素。
	public:
		IdxRngErr(IntArray* p, int i) : ident(p), idx(i) {}

		//エラーが出た配列の要素数を返す。
		int index()
		{
			return idx;
		}
	};

	//明示的コンストラクタの定義。
	explicit IntArray(int size) : nelem(size) {vec = new int[nelem];}

	//コピーコンストラクタの定義。
	IntArray(const IntArray& x)
	{
		//もし代入元が同じものが呼び出されたら
	//	if(&x == this) {
		//	nelem = 0;
		//	vec = 0;
	//	} else {
			nelem = x.nelem;
			vec = new int[nelem];
			for(int i = 0; i < nelem; i++) {
				vec[i] = x.vec[i];
			}
		}
	}

	//デストラクタの定義。
	~IntArray()
	{
		delete[] vec;
	}

	//要素数を返す。
	int size() const
	{
		return nelem;
	}

	//代入演算子=
	IntArray& operator=(const IntArray& x);

	//添字演算子[]
	int& operator[](int i)
	{
		if(i < 0 || i >= nelem) {

			//添字範囲エラーを送出。
			throw IdxRngErr(this, i);
		}
		return vec[i];
	}
};

#endif
