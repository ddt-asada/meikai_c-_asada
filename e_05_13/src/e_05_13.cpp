/*演習5-13
 * 2次元配列の初期化を実行し、確認するためのプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	//適当な配列を作り、全要素を初期化する。
	int	Sample[3][3] = {
			{1, 2, 3,},
			{4, 5, 6,},
			{7, 8, 9,}
	};

	//配列を表示し、初期化されているかどうかを確認する。
	cout	<<"配列Sample\n";

	//配列内の行の移動。
	for(int i = 0; i < 3; i++) {

		//配列内の列の移動。
		for(int j = 0; j < 3; j++) {

			//見やすくするために3文字の間隔を確保する。
			cout	<<setw(3)	<<Sample[i][j];

		}

		//改行
		cout	<<'\n';

	}

	//0を返す。
	return 0;
}
