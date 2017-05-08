/*演習5-10
 * 4行3列の行列と3行4列の行列の積を求めるプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月6日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//操作子を読み込むためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	//4行3列の行列。
	int	Array1[4][3] = {
		{1,  2,  3 },
		{4,  5,  6 },
		{7,  8,  9 },
		{10, 11, 12}
	};

	//3行4列の行列。
	int	Array2[3][4] = {
		{1,  2,  3,  4},
		{5,  6,  7,  8},
		{9, 10, 11, 12}
	};

	int	Answer[4][4];	//行列の積をいれる行列。

	int	Product;			//行列の積を求めるために使う。

	//行列の積を計算。
	//行列内を縦に移動。
	for(int i = 0; i < 4; i++) {

		//行列内を横に移動。
		for(int j = 0; j < 4 ; j++) {

			//行列の積の計算。
			for(int k = 0; k < 3; k++) {

			Product += Array1[i][k] * Array2[k][j];	//行×列

			}

			Answer[i][j] = Product;	//求めた積を行列の対応する場所に代入。

			Product = 0;			//次の計算に使うために、一度0にする。

		}
	}

	//行列Array1を表示。
	cout	<<"行列Array1\n";

	//縦の移動。
	for(int i = 0; i < 4; i++) {

		//横の移動。
		for(int j = 0; j <3; j++) {

			//見やすくするため間隔を確保。
			cout	<<setw(3)	<<Array1[i][j];

		}

		//改行。
		cout	<<'\n';

	}

	//行列Array2を表示。
	cout	<<"行列Array2\n";

	//縦の移動。
	for(int i = 0; i < 3; i++) {
		//横の移動。
		for(int j = 0; j < 4; j++) {

			//見やすくするため間隔を確保。
			cout	<<setw(3)	<<Array2[i][j];

		}

		//改行。
		cout	<<'\n';

	}

	//行列Answerを表示。
	cout	<<"行列Answer\n";

		//縦の移動。
	for(int i = 0; i < 4; i++) {

		//横の移動。
		for(int j = 0; j <4; j++) {

			//見やすくするため間隔を確保。
			cout	<<setw(4)	<<Answer[i][j];

		}

		//改行。
		cout	<<'\n';

	}

	//0を返す。
	return 0;
}
