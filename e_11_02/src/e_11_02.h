/*演習11-2
 * クラスDateに抽出子を追加。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

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

	//前日の日付を返却する関数を宣言。
	Date preceding_day () const;

	//文字列表現を返却する関数を宣言。
	std::string to_string () const;

	//文字列を入力する関数を宣言。
	//void for_string() const;
};

//挿入子を宣言。
std::ostream& operator << (std::ostream& s, const Date& x);
