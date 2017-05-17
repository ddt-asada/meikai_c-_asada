/*演習12-3
 * 時刻クラスに各種の演算子関数を追加したものを作成せよ。
 * 作成日：2017年5月17日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <string>
#include <ctime>

//時刻を表す時刻クラスを定義。
class Time
{
	int	h;	//時刻を定義。
	int	m;	//分を定義。
	int	s;	//秒を定義。

//コンストラクタの定義。
public:
	//デフォルトコンストラクタ。
	Time()
	{
		time_t current = time(NULL);				//現在の暦時刻。

		struct tm* timer = localtime(&current);	//要素別の時刻（地方時）

		h = timer -> tm_hour;		//現在時を取得。

		m = timer -> tm_min;	//現在分を取得。

		s = timer -> tm_sec;	//現在秒を取得。
	}

	Time(int hour, int minute = 0, int secon = 0)
	{
		time_t current = time(NULL);				//現在の暦時刻。

		struct tm* timer = localtime(&current);	//要素別の時刻（地方時）

		//もし時刻が0～24以外の範囲であれば。
		if(hour >= 24 || hour < 0) {

			hour = timer -> tm_hour;		//現在時を取得。
		}

		h = hour;

		//もし分が0～59以外の範囲であれば。
		if(minute >= 60 || minute < 0) {

			minute = timer -> tm_min;	//現在分を取得。
		}

		m = minute;

		//もし秒が0～59以外の範囲であれば。
		if(secon >= 59 || secon < 0) {

			secon = timer -> tm_sec;	//現在秒を取得。
		}

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

	//複合代入演算子+=を定義。
	Time& operator+=(const Time& x)
	{
		h += x.h;
		m += x.m;
		s += x.s;
		return *this;
	}

	//複合代入演算子-=を定義。
	Time& operator-=(const Time& x)
		{
		h -= x.h;
		m -= x.m;
		s -= x.s;
		return *this;
		}

	//等価演算子==を定義。
	friend bool operator==(const Time& x, const Time& y)
	{
		return x.h == y.h && x.m == y.m && x.s == y.s;
	}

	//等価演算子-=を定義。
	friend bool operator!=(const Time& x, const Time& y)
	{
		return !(x == y);
	}

	//2項+演算子を定義。
	friend Time operator+(const Time& x, const Time& y)
	{
		return Time(x.h + y.h, x.m + y.m, x.s + y.s);
	}

	//2項+演算子を定義。
	friend Time operator+(double x, const Time& y)
	{
		return Time(x + y.h, x + y.m, x + y.s);
	}

	//2項+演算子を定義。
	friend Time operator+(const Time& x, double y)
	{
		return Time(x.h + y, x.m + y, x.s + y);
	}

	std::string to_string() const;
};

std::ostream& operator << (std::ostream& st, const Time x);
