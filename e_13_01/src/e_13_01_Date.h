/*演習13-1
 * 日付クラスDateに対して、以下の演算子関数を追加した日付クラスを作成せよ。
 * ・二つの日付が等しいかどうかを判定する等価演算子==
 * ・二つの日付が等しくないかどうかを判定する等価演算子!=
 * ・二つの日付の大小関係を判定する関係演算子>, >=, <, <=
 * 　※判定の仕方としてはより新しい日付の方を大きいと判定する。
 * ・二つの日付の減算を行う（何日離れているかを求める）減算演算子-
 * 　※左オペランドから右オペランドを引くこと。左右のオペランドの日付が等しければ0を返し、
 * 　左オペランドの方が新しい日付であれば、日付の差を正の値として返し、より古い日付であれば、
 * 　日付の差を負の値として返すこと。
 * 日付を翌日の日付に更新する増分演算子++（前置及び後置）
 * 日付を前日の日付に更新する減分演算子--（前置及び後置）
 * 日付をn日進めた日付に更新する複合代入演算子+=
 * 日付をn日戻した日付に更新する複合代入演算子-=
 * 日付のn日後の日付を求める加算演算子+
 * 日付のn日前の日付を求める減算演算子-
 * 作成日：2017年5月17日
 * 作成者：浅田　知嗣
 */

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//日付に関する情報、関数が宣言された日付クラス。
class Date
{
	int			y;								//西暦年
	int			m;								//月
	int			d;								//日

	static int	dmax[];							//任意の年月の日数を求めるための配列。
	static int	days_of_month(int y, int m);	//y年n月の日数を求める非公開の静的メンバ関数の宣言。

public:
	Date();										//デフォルトコンストラクタの宣言。
	Date(int yy, int mm = 1, int dd = 1);		//コンストラクタの宣言。

	//year年は閏年かどうかを判定するための静的メンバ関数。
	//後述の関数と多重定義されている。
	static bool leap_year(int year)
	{
		/*閏年かどうかを判定し、閏年であればTrueをそれ以外はFalseを返す。
		 * 判定方法としては
		 * ・年が4で割り切れる年は閏年。
		 * ・年が100で割り切れる年は平年。
		 * ・400で割り切れる年は閏年とする。
		 */
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

	//年を返却する関数。
	int year() const
	{
		return y;
	}

	//月を返却する関数。
	int month() const
	{
		return m;
	}

	//日を返却する関数。
	int day() const
	{
		return d;
	}

	//year年は閏年かどうかを判定するための非静的メンバ関数。
	//前述の関数と多重定義されている。
	bool leap_year() const
	{
		return leap_year(y);
	}

	//前日の日付を返却する関数の宣言（定義はe_13_01_Date.cppで行っている）。
	Date preceding_day() const;

	//翌日の日付を返却する関数の宣言（定義はe_13_01_Date.cppで行っている）。
	Date following_day() const;

	//年内の経過日数を返却する関数の宣言（定義はe_13_01_Date.cppで行っている）。
	int day_of_year() const;

	//曜日を返却する関数の宣言（定義はe_13_01_Date.cppで行っている）。
	int day_of_week() const;

	//文字列表現を返却する関数の宣言（定義はe_13_01_Date.cppで行っている）。
	std::string to_string() const;

	//等価演算子==を定義。
	friend bool operator==(const Date& x, const Date& y)
	{
		return x.y == y.y && x.m == y.m && x.d == y.d;
	}

	//等価演算子-=を定義。
	friend bool operator!=(const Date& x, const Date& y)
	{
		return !(x == y);
	}

	//関係演算子>を&&と||を使わずに定義。
	friend bool operator >(const Date& x, const Date& y)
	{
		int judge = 0;		//判定用の整数。

		//おおきかった場合は1を返す。
		if (x.y > y.y) {
			judge = 1;
		//同じだった場合は月の比較に移る。
		} else if(x.y == y.y) {
			//おおきかった場合は1を返す。
			if(x.m > y.m) {
				judge = 1;
			//同じだった場合は日の比較に移る。
			} else if (x.m == y.m) {
				if(x.d < y.d) {
					judge =1;
				}
			}
		}

		//判定の終わった数値が入る。
		return judge;
	}

	//関係演算子>=を&&と||を使わずに定義。
	friend bool operator>=(const Date& x, const Date& y)
	{
		int judge = 0;		//判定用の整数。

		//おおきかった場合は1を返す。
		if (x.y > y.y) {
			judge = 1;
		//同じだった場合は月の比較に移る。
		} else if(x.y == y.y) {
			//おおきかった場合は1を返す。
			if(x.m > y.m) {
				judge = 1;
			//同じだった場合は日の比較に移る。
			} else if (x.m == y.m) {
				if(x.d <= y.d) {
					judge =1;
				}
			}
		}

		//判定の終わった数値が入る。
		return judge;
	}

	//関係演算子<を&&と||を使わずに定義。
	friend bool operator <(const Date& x, const Date& y)
	{
		int judge = 0;		//判定用の整数。

		//小さかった場合は1を返す。
		if (x.y < y.y) {
			judge = 1;
		//同じだった場合は月の比較に移る。
		} else if(x.y == y.y) {
			//小さかった場合は1を返す。
			if(x.m < y.m) {
				judge = 1;
			//同じだった場合は日の比較に移る。
			} else if (x.m == y.m) {
				if(x.d < y.d) {
					judge =1;
				}
			}
		}

		//判定の終わった数値が入る。
		return judge;
	}

	//関係演算子<=を&&と||を使わずに定義。
	friend bool operator<=(const Date& x, const Date& y)
	{
		int judge = 0;		//判定用の整数。

		//小さかった場合は1を返す。
		if (x.y < y.y) {
			judge = 1;
			//同じだった場合は月の比較に移る。
		} else if(x.y == y.y) {
			//小さかった場合は1を返す。
			if(x.m < y.m) {
				judge = 1;
				//同じだった場合は日の比較に移る。
			} else if (x.m == y.m) {
				//同じか小さかった時は1を返す。
				if(x.d <= y.d) {
					judge =1;
				}
			}
		}

		//判定の終わったら返す。
		return judge;
	}

	//減算演算子-を定義(Date - Date)。
	friend Date operator-(Date& x,Date& y)
	{
		//減算した結果が1より小さくなる時。
		if(x.d - y.d < 1) {

			x.m--;								//月を一つ減らし、
			x.d += days_of_month(x.y, x.m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。
		}

		if(x.m - y.m < 1) {

			x.y--;		//年数を一つ減らし、
			x.m += 12;	//月に12を加算する。。
		}
		//最後に処理し終わった値で計算を行う。
		//もし年数の部分が負になる場合はあえてそのまま残すこととする。
		return Date(x.y - y.y, x.m - y.m, x.d - y.d);
	}

	//前置増分演算子++を定義。
	Date& operator++() {
		d++;			//日付を1加算する。

		//日付がその年月に対応した値に収まるように月と年を調整する。
		if(d > days_of_month(y, m)) {
			m++;		//月を一つ加算し、
			d = 1;		//1に戻す。
		}

		if(m > 12) {

			y++;		//年数を一つ加算し、
			m -= 12;	//月に12を減算する。
		}
		return *this;
	}

	//後置増分演算子++を定義。
	Date operator++(int) {
		Date x = *this;		//適当なDate型の変数へこの関数を呼び出したときのオブジェクトの値を保存する。
		d++;
		if(d > days_of_month(y, m)) {
			m++;		//月を一つ加算し、
			d = 1;		//日にちを1に戻す。
		}

		if(m > 12) {

			y++;		//年数を一つ加算し、、
			m -= 12;	//月から12を減算する。
		}
		//保存していた値を返却する。内部的には加算されているが返されるのは呼び出したときの数字ということになる。
		return x;
	}

	//前置減分演算子--を定義。
	Date& operator--() {
	d--;
	if(d < 1) {
		m--;							//月を一つ減算し、
		d += days_of_month(y, m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。
	}

	if(m < 1) {

		y--;		//年数を一つ減らし、
		m = 12;		//月を12にする。。
	}

	//処理し終わった値を返却する。
	return *this;
	}

	//後置減分演算子--を定義。
	Date operator--(int) {
		Date x = *this;		//適当なDate型の変数へこの関数を呼び出したときのオブジェクトの値を保存する。
		d--;
		if(d < 1) {
			m--;							//月を一つ減算し、
			d += days_of_month(y, m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。
		}

		if(m < 1) {

			y--;		//年数を一つ減らし、
			m = 12;		//月を12にする。。
		}

		//保存していた値を返却する。内部的には減算されているが返されるのは呼び出したときの数字ということになる。
		return x;
	}

	//複合代入演算子+=を定義。
	Date& operator+=(const Date& x)
	{
		d += x.d;

		for( ;d > days_of_month(y, m); ) {
			//減算した結果が1より小さくなる時。
			if(d > days_of_month(y, m)) {
				m++;		//月を一つ加算し、
				d = 1;		//日にちを1に戻す。
			}

			if(m > 12) {

				y++;		//年数を一つ加算し、、
				m -= 12;	//月から12を減算する。
			}
		}
		//最後に処理し終わった値で計算を行う。
		//もし年数の部分が負になる場合はあえてそのまま残すこととする。
		return *this;
	}

	//複合代入演算子-=を定義。
	Date& operator-=(const Date& x)
	{
		d -= x.d;

		for( ;d < 1; ) {
			//減算した結果が1より小さくなる時。
			if(d < 1) {
				m--;							//月を一つ減算し、
				d += days_of_month(y, m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。
			}

			if(m < 1) {

				y--;		//年数を一つ減らし、
				m = 12;		//月を12にする。。
			}
		}
		//最後に処理し終わった値で計算を行う。
		//もし年数の部分が負になる場合はあえてそのまま残すこととする。
		return *this;
	}

	//加算演算子+を定義(Date + int)。
	friend Date operator+(Date& x,int n)
	{
		//加算した結果がその月に対応した日数より大きい限り繰り返す。
		for( ; x.d + n > days_of_month(x.y, x.m); ) {
			//for文は前判定なので、ここに落ちてくるということはif(x.d + n > days_of_month(x.y, x.m))をかならず満たしているのでここはif文なし。
			x.d -= days_of_month(x.y, x.m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。
			x.m++;								//月を一つ加算する。

			if(x.m > 12) {

				x.y++;		//年数を一つ加算し、
				x.m = 1;	//月を1にする。。
			}
		}
		//最後に処理し終わった値で計算を行う。
		//もし年数の部分が負になる場合はあえてそのまま残すこととする。
		return Date(x.y, x.m, x.d + n);
	}

	//加算演算子-を定義(Date - int)。
		friend Date operator-(Date& x,int n)
		{
			//減算した結果が1より小さくになる限り繰り返す。
			for( ; x.d - n < 1; ) {
				//for文は前判定なので、ここに落ちてくるということはif(x.d - n < 1)をかならず満たしているのでここはif文なし。
				x.m--;								//月を一つ減算する。
				x.d += days_of_month(x.y, x.m);		//前の月の日数を加算する(前の月の日数を求める関数は（e_13_01_Date.cppにて定義）。

				if(x.m > 12) {

					x.y--;		//年数を一つ減算する。し、
					x.m = 12;	//月を1にする。
				}
			}
			//最後に処理し終わった値で計算を行う。
			//もし年数の部分が負になる場合はあえてそのまま残すこととする。
			return Date(x.y, x.m, x.d - n);
		}

};



//挿入子の宣言（定義はe_13_01_Date.cppで行っている）。
std::ostream& operator<<(std::ostream& s, const Date& x);

#endif
