/*演習11-6
 * 名前・身長・体重などをメンバとして持つ人間クラスに誕生日を追加したものを作成。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月17日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月18日
 * 更新者：浅田　知嗣
 */

//関数の定義を行うソースファイル。

#include <ctime>
#include <sstream>
#include <iostream>
//クラスの定義がされた自作ヘッダの読み込み。
#include "e_11_07_Date.h"

using namespace std;

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
	for( ;dd > dmax[mm % 12] || dd < 1 ; ) {
		//日数がその月の範囲を超えるとき。
		if(dd > dmax[mm % 12]) {
			dd -= dmax[mm % 12];	//日数を減らす。
			mm++;			//月を一つ加算し、
		} else if (dd < 1) {
			dd += dmax[mm % 12];	//日数を増やす。
			mm--;			//月を一つ減らす。
		}
	}
	//ここで日数に対する処理は終了するのでデータメンバに日数を代入。
	d = dd;

	for( ; mm > 12 || mm < 1; ) {
		//次に月の処理に移る。
		if(mm > 12) {
			yy++;		//年数を一つ加算し、、
			mm -= 12;	//月から12を減算する。
		} else if (mm < 1) {
			yy--;		//年数を一つ減算する。
			mm += 12;	//月を12増やす。
		}
	}
	//ここで月に対する処理が終わるので月をデータメンバに代入する。
	m = mm;

	//年数が負の値になったときは、不正値として年数に1を代入する。
	if(yy < 0) {

		y = 0;
	} else {

		y = yy;
	}
}

string Date::to_string() const
{
	ostringstream s;
	s	<<y	<<"年"	<<m	<<"月"	<<d	<<"日";
	return s.str();
}

ostream& operator << (ostream& s, const Date& x)
{
	return s <<x.to_string();
}
