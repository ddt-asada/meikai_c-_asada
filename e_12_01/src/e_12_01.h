/*演習12-1
 * 前置演算子から後置演算子を呼び出すか、もしくは後置演算子関数から前置演算子関数を呼び出すかのいずれかに変更せよ。
 * なお、どちらの実現が好ましいかも検討すること。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//カウンタクラスの定義。
class Counter
{
	unsigned cnt;	//カウンタの定義。

public:
	//コンストラクタの定義。
	Counter()
	:cnt(0)
	{

	}

	//unsigned型への変換関数。
	operator unsigned () const
		{
		//unsigned型へ変換したカウンタを返す。
		return cnt;
		}

	//論理否定演算子
	bool operator! () const
		{
		//カウンタが0ならTrueをそれ以外ならFalseを返す。
		return cnt == 0;
		}

	//前置増分演算子から後置演算子関数を呼び出す。
	Counter& operator++(int)
		{
		//カウンタの上限をUINT_MAXにするためのif文。
		if(cnt < UINT_MAX) {
			cnt++;
		}
		//自分自身への参照を返す。
		return *this;
		}

	//前置演算子関数。
	Counter operator++()
		{
		//カウンタの上限をUINT_MAXにするためのif文。
		if(cnt < UINT_MAX) {
			cnt++;
		}
		//自分自身への参照を返す。
		return *this;
		}

	//後置減分演算子から前置演算子関数を呼び出す。
	Counter& operator--()
		{
		//デクリメント前の値を保存。
		Counter x = *this;
		//カウンタの下限を0とするためのif文。
		if(cnt > 0 ) {
			cnt--;
		}
		//保存していた値を返却。
		return x;
		}

	//後置減分演算子
	Counter operator--(int)
		{
		//デクリメント前の値を保存。
		Counter x = *this;
		//カウンタの下限を0とするためのif文。
		if(cnt > 0 ) {
			cnt--;
		}
		//保存していた値を返却。
		return x;
		}
};

#endif
