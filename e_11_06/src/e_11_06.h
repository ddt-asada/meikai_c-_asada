/*演習11-6
 * 名前・身長・体重などをメンバとして持つ人間クラスに誕生日を追加したものを作成。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <string>

//自作クラスの定義。今回は人間クラスとして、名前・身長・体重・年齢を定義する。
class Human {
	//名前の定義。
	std::string	name;
	//身長・体重・年齢の定義。
	double		height, weight, old;
	//誕生日の定義。
	int			birth_year, birth_month, birth_day;

	//コンストラクタの宣言。
	public:
	Human(std::string n, double h, double w, double o, int y, int m, int d)
	:name(n), height(h), weight(w), old(o), birth_year(y), birth_month(m), birth_day(d)
	{
	}

	//名前を返却する関数。
	std::string my_name()
	{
		//名前を返す。
		return name;
	}

	//身長返却する関数。
	double my_height()
	{
		//身長を返す。
		return height;
	}

	//体重を返却する関数。
	double my_weight()
	{
		//体重を返す。
		return weight;
	}

	//年齢を返却する関数。
	double my_old()
	{
		//年齢を返す。
		return old;
	}

	//誕生年を返却する関数。
	int my_birth_year()
	{
		//誕生年を返す。
		return birth_year;
	}

	//誕生月を返却する関数。
	int my_birth_month()
	{
		//誕生月を返す。
		return birth_month;
	}

	//誕生日を返却する関数。
	int my_birth_day()
	{
		//誕生日を返す。
		return birth_day;
	}

	//BMIを求め、それに平均に対する過不足を表示する関数。
	void bmi()
	{
		double	bmi = 0;		//BMIを求めて代入する型。

		bmi = weight / ((height / 100) * (height / 100));		//BMIを求め、代入。

		//BMIを表示。
		std::cout	<<"あなたのBMIは"	<<bmi	<<"です。\n";

		//BMIが18.5以下の時。
		if(bmi <= 18.5) {
			//痩せすぎと表示。
			std::cout	<<"これは痩せすぎです。\n";

		//18.5～25.0の時。
		} else if (bmi > 18.5 && bmi < 25) {
			//健康的です。と表示。
			std::cout	<<"健康的です。\n";

		//これら以外の時。
		} else {
			//太りすぎです。と表示。
			std::cout	<<"太りすぎです。\n";
		}
	}

	//理想の身長までの差を表示する。
	void theight()
	{
		//理想の身長との差を表示適当に180cmぐらい。
		std::cout	<<"理想の身長との差は"	<<180 - height	<<"cmです。\n";
	}

};
