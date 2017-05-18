/*演習11-3
 * 時・分・秒のデータメンバで構成される時刻クラスに挿入子と抽出子を追加して作成せよ。
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
#include "e_11_03.h"

using namespace std;

//文字列表現を返却する関数。
string Time::to_string() const
{
	ostringstream st;		//文字列のストリームを行う。

	//文字列を表示。
	st	<<h	<<"時"	<<m	<<"分"	<<s	<<"秒";
	//文字列にして返す。
	return st.str();
}

//挿入子の多重定義。
ostream& operator<<(ostream& st, const Time& x)
{
	//文字列を返す。
	return st	<<x.to_string();
}


