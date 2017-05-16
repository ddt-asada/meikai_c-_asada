/*演習11-6
 * 名前・身長・体重などをメンバとして持つ人間クラスに誕生日を追加したものを作成。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <string>
//クラスの情報が入った自作ヘッダを読み込む。
#include "e_11_06.h"

using namespace std;

int main()
{
	string	name;					//名前の定義。
	double	height, weight, old;	//身長・体重・年齢の定義。
	int		year, month, day;		//誕生日の定義。

	//名前の入力を促す。
	cout	<<"あなたの名前は：";
	//名前の入力。
	cin		>>name;

	//身長の入力を促す。
	cout	<<"身長は：";
	//身長の入力。
	cin		>>height;

	//体重の入力を促す。
	cout	<<"体重は：";
	//体重の入力。
	cin		>>weight;

	//年齢の入力を促す。
	cout	<<"年齢は：";
	//年齢の入力。
	cin		>>old;

	//誕生年の入力を促す。
	cout	<<"誕生年：";
	//誕生年の入力。
	cin		>>year;

	//誕生月の入力を促す。
	cout	<<"誕生月：";
	//誕生月の入力。
	cin		>>month;

	//誕生日の入力を促す。
	cout	<<"誕生日：";
	//誕生日の入力。
	cin		>>day;

	//コンストラクタを通じてデータを読み込ませる。
	Human Personal(name, height, weight, old, year, month, day);

	//入力した情報を表示。
	cout	<<"名前は"		<<Personal.my_name()		<<"ですね。\n";
	//身長を表示。
	cout	<<"身長は"		<<Personal.my_height()		<<"ですね。\n";
	//体重を表示。
	cout	<<"体重は"		<<Personal.my_weight()		<<"ですね。\n";
	//年齢を表示。
	cout	<<"年齢は"		<<Personal.my_old()			<<"ですね。\n";
	//誕生日を表示。
	cout	<<"誕生日は"	<<Personal.my_birth_year()	<<"年"	<<Personal.my_birth_month()	<<"月"	<<Personal.my_birth_day()	<<"日ですね。\n";

	//BMIを表示する。
	Personal.bmi();

	//理想の身長との差を表示。
	Personal.theight();

	//0を返す。
	return 0;
}
