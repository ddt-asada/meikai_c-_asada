/*演習7-11
 * no行5列のint型2次元配列matrixの全構成要素の値を縦横に並べて表示する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

/*関数名：void print2d(int matrix[][5], int no)
 * no行5れつの2次元配列matrixの全構成要素の値を縦横に並べて表示する関数。
 * 引数matrix[][5]：並べて表示したい行列。
 * 引数no：行列の行の数。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

void print2d(int matrix[][5], int no)
{

	//行列の確認。
	cout	<<"行列matrix\n";

	//行の処理。
	for(int i = 0; i < no; i++) {
		//列の処理。
		for(int j = 0; j < 5; j++) {

			//要素の表示。
			cout	<<setw(5)	<<matrix[i][j];

		}

		//改行。
		cout	<<'\n';

	}
}

int main()
{

	const int	no = 3;				//配列の要素数。

	int			matrix[no][5];		//任意の整数を格納する行列。


	//行列の各要素の入力を促す。
	//行の処理。
	for(int i = 0; i < no; i++) {
		//列の処理。
		for(int j = 0; j < 5; j++) {

			//要素の入力を促す。
			cout	<<"matrix["	<<i	<<"]["	<<j	<<"]：";
			//要素の入力。
			cin		>>matrix[i][j];

		}
	}

	//行列を並べて表示する関数を呼び出す。
	print2d(matrix, no);

	//0をかえす。
	return 0;
}
