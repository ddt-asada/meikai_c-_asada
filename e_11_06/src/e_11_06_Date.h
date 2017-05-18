/*演習11-6
 * 名前・身長・体重などをメンバとして持つ人間クラスに誕生日を追加したものを作成。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月17日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月18日
 * 更新者：浅田　知嗣
 */

//日付情報に関わるクラスDateが定義、宣言されているヘッダ。
#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

class Date
{
	int	y;	//西暦年を表す。
	int	m;	//月を表す。
	int	d;	//日を表す。

public:
	//デフォルトコンストラクタを宣言。
	Date();
	//コンストラクタを宣言。西暦年、月、日の順番。月と日にはデフォルト実引数を与える。
	Date(int yy, int mmm =1,int dd = 1);

	//年を返す関数。
	int year () const
	{
		return y;
	}

	//月を返す関数。
	int month () const
	{
		return m;
	}

	//日を返す関数。
	int day() const
	{
		return d;
	}

	std::string to_string() const;
};
std::ostream& operator << (std::ostream& s, const Date& x);

#endif
