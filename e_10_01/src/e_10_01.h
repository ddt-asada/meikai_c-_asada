/*演習10-1
 * 名前・身長・体重などをメンバとして持つ人間クラスを自由に定義せよ。
 * 作成日：2017年5月15日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <string>

//自作クラスの定義。今回は人間クラスとして、名前・身長・体重・年齢を定義する。
class Human {
	//名前の定義。
	std::string	name;
	//身長・体重・年齢の定義。
	int			height, weight, old;

	//コンストラクタの宣言。
	public:
	Human(std::string n, int h, int w, int o) {

		name = n;		//名前。
		height = h;		//身長。
		weight = w;		//体重。
		old = o;		//年齢。

	}

	//入力したパラメータを表示する関数。
	void print_spec()
	{
		//名前の表示。
		std::cout	<<"名前："	<<name		<<'\n';

		//身長の表示。
		std::cout	<<"身長："	<<height	<<'\n';

		//体重の表示。
		std::cout	<<"体重："	<<weight	<<'\n';

		//年齢の表示。
		std::cout	<<"年齢："	<<old		<<'\n';

	}

};
