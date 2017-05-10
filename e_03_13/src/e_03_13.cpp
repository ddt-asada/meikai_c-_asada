/*演習3-13
 * 身長と標準体重の対応表を表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月9日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	int	Range1, Range2;		//求めたい身長の範囲の型。

	int	Interval;			//求める身長の間隔の型。

	//「何cmから：」と表示。
	cout	<<"何cmから：";
	//求めたい身長の下限の入力。
	cin		>>Range1;

	//「何cmまで：」と表示。
	cout	<<"何cmまで：";
	//求めたい身長の上限の入力。
	cin		>>Range2;

	//「何cmごとに：」と表示。。
	cout	<<"何cmごとに：";
	//求めたい身長の間隔の入力。
	cin		>>Interval;

	//「身長	標準体重」と表示。
	cout <<"身長　標準体重\n";

	//Range1cmからRange2cmの範囲の標準体重をIntervalcmごとに表示するためのfor文
	for(int i = Range1; i <= Range2; i += Interval) {
		//身長とそれに対応した標準体重を出力。
		cout	<<setw(3)	<<i	<<	"　　"	<<setw(5)	<<(i - 100) * 0.9	<<'\n';
	}

	//0を返す。
	return 0;
}
