/*演習10-2
 * 自動車クラスにデータメンバやメンバ関数を自由に追加せよ。
 * 作成日：2017年5月15日
 * 作成者：浅田　知嗣
 */

#include <cmath>
#include <string>
#include <iostream>

//クラスの定義。
class Car
{
	std::string	name, number;			//名前・ナンバーの定義。
	int			width, length, height;	//車幅・車長・車高の定義。
	double		xp, yp;					//現在位置座標。
	double		fuel_level;				//残り燃料。
	double		fuel_eco;				//燃費。

public:
	//コンストラクタの定義。
	Car(std::string n, std::string no, int w, int l, int h, double fl, double fe){
		name = n;			//名前の入力。
		number = no;		//ナンバーの入力。
		width = w;			//車幅の入力。
		length = l;			//車長の入力。
		height = h;			//車高の入力。
		fuel_level = fl;	//残り燃料。
		fuel_eco = fe;		//燃費。
		xp = yp =0.0;		//座標を0で初期化。
	}

	//現在位置のX座標を返す関数の定義。
	double x()
	{
		//現在位置の座標Xを返す。
		return xp;
	}

	//現在位置のY座標を返す関数の定義。
	double y()
	{
		//現在位置の座標Yを返す。
		return yp;
	}

	//残り燃料を返す関数の定義。
	double fuel()
	{
		//残り燃料を返す。
		return fuel_level;
	}

	//入力されたスペックの表示を行う関数。
	void print_spec()
	{
		//名前を表示。
		std::cout	<<"名前："		<<name		<<'\n';
		//ナンバーを表示。
		std::cout	<<"ナンバー："	<<number	<<'\n';
		//車幅を表示。
		std::cout	<<"車幅："		<<width		<<'\n';
		//車長を表示。
		std::cout	<<"車長："		<<length	<<'\n';
		//車高を表示。
		std::cout	<<"車高："		<<height	<<'\n';
		//燃費を表示。
		std::cout	<<"燃費："		<<fuel_eco	<<'\n';
	}

	//移動距離の分だけ燃料を減らす関数。
	bool move(double dx, double dy)
	{
		//燃費を考慮しつつ移動距離を計算する。
		double dist = sqrt(dx * dx + dy * dy) / fuel_eco;

		//燃料不足の時の分岐。
		if(dist > fuel_level) {
			//燃料不足であることを返す。
			return false;

		//燃料があるとき。
		} else {
			fuel_level -= dist;		//移動距離の分だけ燃料を減らす。
			xp += dx;				//移動距離を加算する。
			yp += dy;				//移動距離の分だけ加算する。

			//正しく処理されたことを返す。
			return true;
		}
	}

	//燃料を補給するための関数。
	void fuel_charge()
	{
		int	charge;		//補充する量の定義。

		//燃料を何リットル補充するかの確認。
		std::cout	<<"燃料を何リットル補充しますか：";
		//補充したい量を入力。
		std::cin	>>charge;

		fuel_level += charge;	//燃料を補充。
	}
};
