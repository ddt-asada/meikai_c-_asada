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

	//添字範囲エラーを検出するためのクラス。
	class IdxRngErr
	{
	private:
		//クラスの定義。
		IntArray* ident;
		int idx;

	public:
		IdxRngErr(IntArray* p, int i) : ident(p), idx(i){}
		//要素数を返す関数の定義。
		int index()
		{
			return idx;
		}
	};

	//デフォルトコンストラクタの宣言。
	IntArray();

	//明示的コンストラクタの定義。
	explicit IntArray(int size) : nelem(size) {vec = new int[nelem];}

	//コピーコンストラクタの宣言。
	IntArray(const IntArray& x);

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
		//データ数が要素数を超えていたら。
		if(i < 0 || i >= nelem) {
			throw IdxRngErr(this, i);	//添字範囲エラーを送出。
		}
		return vec[i];
	}


};

#endif
