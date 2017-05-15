/*演習11-1
 * 時・分・秒のデータメンバで構成される時刻クラスを作成せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include<iostream>

//時刻を表す時刻クラスを定義。
class Time
{
	int	h;	//時刻を定義。
	int	m;	//分を定義。
	int	s;	//秒を定義。

//コンストラクタの定義。
public:
	Time(int hour, int minute, int secon) {
		h = hour;
		m = minute;
		s = secon;
	}

	//時刻を返す関数の定義。
	int Hour()
	{
		//時間を返す。
		return h;
	}

	//分を返す関数の定義。
	int Minute()
	{
		//分を返す。
		return m;
	}

	//秒を返す関数の定義。
	int Secon()
	{
		//秒を返す。
		return s;
	}
};
