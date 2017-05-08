/*演習6-9
 * a以上b未満の乱数を生成して、その値を返却する関数randomを作成する（bの値がa未満である場合には、aの値をそのまま返却する）。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダ。
#include <ctime>
//C言語の関数ライブラリを利用するためのヘッダ。
#include <cstdlib>

using namespace std;

/*関数名：int random(int a, int b);
 * a以上b未満の乱数を生成して、その値を返却する関数（bの値がa未満である場合には、aの値をそのまま返却する）。
 * 引数a：生成したい乱数の下限値。
 * 引数b：生成したい乱数の上限値。
 * 返却値：a以上b未満の乱数。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

int random(int MIN, int MAX)
{
	//乱数の種を時間を参照に決定。
	srand(time(NULL));

	//bの値が未満の場合はaをそのまま返却する。
	if(MAX <= MIN) {

		//MINを返す。
		return MIN;

	} else {

		//MIN以上MAX未満の乱数を生成し、返却する。。
		return rand() % (MAX - MIN) + MIN;

	}
}

int main()
{

	int	MIN,MAX;	//生成したい乱数の上限値と下限値の型。

	//生成したい乱数の下限値の入力を促す。
	cout	<<"生成したい乱数の下限値を入力してください。\n";
	//下限値の入力。
	cin		>>MIN;

	//生成したい乱数の上限値の入力を促す。
	cout	<<"生成したい乱数の上限値を入力してください。\n";
	//上限値の入力。
	cin		>>MAX;

	//MIN以上MAX未満の乱数を生成する関数に値を渡し、返却された値を表示する。
	cout	<<"生成された乱数は"	<<random(MIN, MAX)	<<"です。\n";

	//0を返す。
	return 0;
}