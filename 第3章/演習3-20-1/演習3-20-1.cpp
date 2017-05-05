/*演習3-20-1
 * 直角が左上側、右下側、右上側の直角三角形を表示するプログラム。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	int	Triangle;	//表示したい三角形の段数の型。

	//「左上直角の三角形を表示します。何段表示しますか：」と表示。
	cout	<<"左上直角の三角形を表示します。\n何段表示しますか：";
	//表示したい三角形の段数の表示。
	cin		>>Triangle;

	//左上直角の三角形を表示するための繰り返し。
	//縦方向の移動。
	for(int i = Triangle; i >= 1; i--) {
		//横方向の移動。
		for(int j = 1; j <= i; j++) {
			//iの数だけ「*」を表示。
			cout	<<'*';
		}

		//横方向の処理が終わった時に改行。
		cout	<<'\n';
	}

	//0を返す。
	return 0;
}
