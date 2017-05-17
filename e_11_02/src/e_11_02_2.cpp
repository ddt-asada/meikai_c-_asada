/*演習11-2
 * クラスDateに抽出子を追加。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月17日
 * 更新者：浅田　知嗣
 */

//関数の定義を行うソースファイル。

#include <ctime>
#include <sstream>
#include <iostream>
//クラスの定義がされた自作ヘッダの読み込み。
#include "e_11_02.h"

using namespace std;


//1月～12月の月ごとの日付を配列に代入。複数の関数で使いたいのでここで宣言し、静的記憶域期間を持たせている。
const int	dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//クラスのデフォルトコンストラクタの定義。
Date::Date()
{
	time_t current = time(NULL);				//現在の暦時刻を取得。

	struct tm* local = localtime(&current);	//要素別の時刻（グリニッジ標準時間を基準とする）に変換。

	y = local -> tm_year + 1900;				//年を代入（1970年～数えた年なので1900を＋）。
	m = local -> tm_mon + 1;					//月を代入（0～11が与えられるので＋１する）。
	d = local -> tm_mday;						//日を代入。
}


//クラスのコンストラクタ（引数が与えられた場合）
Date::Date(int yy, int mm, int dd)
{
	time_t current = time(NULL);				//現在の暦時刻を取得。

	struct tm* local = localtime(&current);	//要素別の時刻（グリニッジ標準時間を基準とする）に変換。

	//年にあたるyyに負の値が代入されたときに不正とみなし、現在年を取得する分岐。
	//正の値の時の年数の上限は設けていない（年数は＋であれば正常とみなす）。
	if(yy < 0) {

		yy = local -> tm_year + 1900;	//年を代入（1970年～数えた年なので1900を＋）。
	}

	y = yy;	//クラスの年に当たる部分に代入。

	//月にあたるmmに13以上または負の値が代入されたときにはその値は不正として現在月を取得する。
	if(mm > 12 || mm < 1 ) {

		mm = local -> tm_mon + 1;		//月を代入（0～11が与えられるので＋１する）。
	}

	m = mm;	//クラスの月に当たる部分に代入。

	//まず初めに31日ある月か30日の月か28の月かで分岐する。
	switch(mm) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if(dd > 31 || dd < 1) {

			dd = local -> tm_mday;	//日を代入。
	}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if(dd > 30 || dd < 1) {

			dd = local -> tm_mday;	//日を代入。
		}
		break;
	case 2:
		if(dd > 28 || dd < 1) {

			dd =local -> tm_mday;	//日を代入。
		}
	}

	d = dd;	//クラスの日に当たる部分に代入。
}

//前日の日付を返却する関数（うるう年には対応していない）。

Date Date::preceding_day() const
{
	Date temp = *this;		//同一の日付を取得。

	//日付が1より大きいとき。
	if(temp.d > 1) {
		temp.d--;	//1を引く。

	//それ以外の時。
	} else {
		//月が1未満の時。
		//月が1未満の時は年を1個下げて月を12月にする。
		//例：2000年0月→1999年12月。
		if(--temp.m < 1) {
			temp.y--;		//年を1引く。
			temp.m = 12;	//月を12にする。
		}
		temp.d = dmax[temp.m - 1];	//月に対応した日付を代入する。要素数を月-1としているのは要素数の番号が0～始まるため。
	}
	//前日にした日付を返す。
	return temp;
}

//文字列表現を返却する関数。
string Date::to_string() const
{
	ostringstream s;		//文字列のストリームを行う。

	//文字列を表示。
	s	<<y	<<"年"	<<m	<<"月"	<<d		<<"日";
	//文字列にして返す。
	return s.str();
}

//挿入子の多重定義。
ostream& operator<<(ostream& s, const Date& x)
{
	//文字列を返す。
	return s	<<x.to_string();
}


