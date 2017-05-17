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

#include <ctime>
#include <sstream>
#include <iostream>
#include "e_13_01_Date.h"

using namespace std;

//日付クラスのコンストラクタ及び関数の定義をここで行っている。

//平年の各月の日数を持っている静的な非公開メンバの配列。
int	Date::dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};

//y年m月の日数を求める静的なメンバ関数。
int	Date::days_of_month(int y, int m)
{
	//基本的にはdmax[]配列に収められている日数を見ながら日数を求める。
	//閏年の2月の時のみ、判定からTrueすなわち1が帰ってきて+されるので、自動的に29日になる。
	return dmax[m - 1] + (leap_year(y) && m == 2);
}

//日付クラスDateのデフォルトコントラスタの定義。
Date::Date()
{
	time_t current = time(NULL);				//現在の暦時刻を取得。
	struct tm* local = localtime(&current);		//要素別の時刻に変換。

	y = local -> tm_year + 1900;				//年
	m = local -> tm_mon + 1;					//月
	d = local -> tm_mday;						//日
}

//日付クラスDateのコンストラクタ
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}

//年内の経過日数を返却する関数の定義（宣言はe_13_01_Date.hにて行っている）。
int Date::day_of_year() const
{
	int	days = d;	//年内の経過日数。

	//1月～(m - 1)月前の日数を加える。
	for(int i = 1; i < m; i++) {

		days += days_of_month(y,i);
	}
	//求めた日付を返却する。
	return days;
}

//前日の日付を返却する関数の定義（宣言はe_13_01_Date.hにて行っている）。
Date Date::preceding_day() const
{
	Date temp = *this;//メンバ関数を呼び出したオブジェクトと同一の日付を取得。

	//日付が1より大きい、引いても0日にならないときは
	if(temp.d > 1) {

		temp.d--;	//そのまま1を引く。
	//そうでないときは
	} else {
		//もしまだ月より大きい、引いても0月にならないときは
		if(--temp.d < 1) {

			//年数を一つ減らしたうえで、新たに12月を取る。
			temp.y--;
			temp.m = 12;

		}

		temp.d = days_of_month(temp.y, temp.m);		//日数を求める関数より日数を取得する。
	}

	//前日の日付を返す。
	return temp;
}

//翌日の日付を返却する関数の定義（宣言はe_13_01_Date.hにて行っている）。
Date Date::following_day() const
{
	Date temp = *this;	//メンバ関数を呼び出したオブジェクトと同一の日付を取得。

	//日数がその月の範囲を超えない場合。
	if(temp.d < days_of_month(temp.y, temp.m)) {

		temp.d++;	//そのまま日数をインクリメントする。
	//そうでないとき。
	} else {
		//さらに月が年の範囲を超える場合、前置インクリメントなので判定に入ると必ず先に月が1＋される。
		if(++temp.m > 12) {

			temp.y++;	//年数をインクリメントする。
			temp.m = 1;	//月を1月にリセットする。
		}
	}

	//求めた翌日の日付を返却する。
	return temp;
}

//文字列表現を返却する関数の定義（宣言はe_13_01_Date.hにて行っている）。
string Date::to_string() const
{
	ostringstream s;

	s	<<y	<<"年"	<<m	<<"月"	<<d	<<"日";

	return s.str();
}

//曜日を返却する関数を定義（宣言はe_13_01_Date.hにて行っている）。
int Date::day_of_week() const
{
	int	yy = y;		//年数を取得。
	int	mm = m;		//月を取得。

	//もし1月か2月なら計算の都合上あらかじめ年数を一つ減らしたうえで12を足しておく。
	if(mm == 1 || mm == 2) {

		yy--;
		mm += 12;
	}

	//曜日に応じた数字を返す。
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

//出力ストリームにsを挿入
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}
