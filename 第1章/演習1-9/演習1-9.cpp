/*演習1-9
 * キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Sample;	//キーボードから整数値を読み込むための型。

	//int型の整数値の入力を促す。
	cout	<<"整数値：";
	//変数Sampleに代入させる。
	cin		>>Sample;

	//キーボードより入力されたSampleを表示し、正常に処理できているか確認する。
	cout	<<Sample	<<"と入力しましたね。\n";

	//0を返す。
	return 0;
}
