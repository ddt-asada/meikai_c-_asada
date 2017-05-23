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

#include <iostream>
#include "e_13_01_Date.h"

using namespace std;

//プログラムのメイン部に当たる部分。

int main()
{

	int	test;					//のちの演算子の動作確認で使う用の変数の型。
	Date today;					//デフォルトコンストラクタを呼び出し今日の日付を取得。
	Date defau;					//初期化用の呼び出し。
	Date testday(2000, 4, 4);	//適当な日付を入力。

	//呼び出された日付の確認。
	cout	<<"今　日の日付："	<<today													<<'\n';

	//昨日の日付を求める関数を呼び出して表示し確認。
	cout	<<"昨　日の日付："	<<today.preceding_day()									<<'\n';
	cout	<<"一昨日の日付："	<<today.preceding_day().preceding_day()					<<'\n';

	//明日の日付を求める関数を呼び出して表示し、確認。
	cout	<<"明　日の日付："	<<today.following_day()									<<'\n';
	cout	<<"明後日の日付："	<<today.following_day().following_day()					<<'\n';

	//年内の経過日数を求める関数を呼び出して表示し、確認。
	cout	<<"元旦から"		<<today.day_of_year()	<<"経過しています。"			<<'\n';

	//閏年かどうかを判定する関数を呼び出して表示し、確認。
	cout	<<"今年は閏年"		<<(today.leap_year() ? "です。" : "ではありません。")	<<'\n';

	int	y = 2000;

	//入力した年が閏年かどうかを判定。
	cout	<<"その年は閏年"	<<(Date::leap_year(y) ? "です。" : "ではありません。")	<<'\n';

	//ここからは演算子関数のテスト。
	//等価演算子==を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today == testday ? "は等しいです。" : "は等しくないです。")	<<'\n';

	//等価演算子!=を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today != testday ? "は等しくないです。" : "は等しいです。")	<<'\n';

	//関係演算子>を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today > testday ? "はtodayの方が大きいです。" : "はtestdayの方が大きいです。")	<<'\n';

	//関係演算子>=を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today >= testday ? "はtodayの方が大きいです。" : "はtestdayの方が大きいです。")	<<'\n';

	//関係演算子<を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today < testday ? "はtodayの方が小さいです。" : "はtestdayの方が小さいです。")	<<'\n';

	//関係演算子<=を呼び出す。
	cout	<<today	<<"と"	<<testday	<<(today <= testday ? "はtodayの方が小さいです。" : "はtestdayの方が小さいです。")	<<'\n';

	//2項-演算子を呼び出す。
	cout	<<today	<<"と"	<<testday	<<"の差をもとめます。\n";
	cout	<<"結果は"<<today - testday	<<"です。\n";

	//計算が終わったら一度初期化する。これ以降はtodayとtestdayは両方とも演算子のテストをしやすいように現在年月日で初期化。
	today = testday = defau;

	//前置および後置増分演算子++を呼び出す。
	cout	<<"日付をカウントアップします。\n何日後までカウントしますか？";
	cin		>>test;
	for(int i = 0; i < test; i++) {
		cout	<<++today	<<"　　　"	<<testday++	<<'\n';
	}
	cout	<<"カウントアップが終わりました。\n";

	//もう一度初期化する。
	today = testday = defau;

	cout	<<"日付をカウントダウンします。\n何日前までカウントしますか？";
	cin		>>test;
	//前置および後置増分演算子--を呼び出す。
	for(int i = 0; i < test; i++) {
		cout	<<--today	<<"　　　"	<<testday--	<<'\n';
	}
	cout	<<"カウントダウンが終わりました。\n";

	//もう一度初期化する。
	today = testday = defau;

	//進めたい日付を入力。
	cout	<<"何日後の日付をもとめますか？";
	cin		>>test;
	today += test;
	cout	<<"日後は"	<<today		<<'\n';

	cout	<<"何日前の日付をもとめますか？";
	cin		>>test;
	testday -= test;
	cout	<<"日前は"	<<testday	<<'\n';

	//もう一度初期化する。
	today = testday = defau;

	//加算したい日数を入力。
	cout	<<"何日後の日付をもとめますか？";
	cin		>>test;
	cout	<<test	<<"日後は"	<<today + test		<<'\n';

	//減算したい日数を入力。
	cout	<<"何日前の日付をもとめますか？";
	cin		>>test;
	cout	<<test	<<"日前は"	<<testday - test	<<'\n';

	//0を返す。
	return 0;

}
