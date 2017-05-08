/*演習7-10
 * no行5列のint型2次元配列matrixの各行の最大値を要素数noの1次元配列arrayに格納する関数を作成。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

/*関数名：void maxline(int matrix[][5], int array[], int no)
 * no行5列のint型2次元配列matrixの各行の最大値を要素数noの1次元配列arrayに格納する関数
 * 引数matrix[][5]：最大値を取得するno行5列の行列。
 * 引数array[]：最大値を格納する配列。
 * 引数no：配列の要素数。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

void maxline(int matrix[][5], int array[], int no)
{
	//各行の最大値を求める。
	//行の処理。
	for(int i = 0; i < no; i++) {
		//列の処理。
		for(int j = 0; j < 5; j++) {

			array[i] < matrix[i][j] ? array[i] = matrix[i][j] : array[i];

		}
	}
}

int main()
{
	const int	no = 3;				//配列の要素数。

	int			matrix[no][5];		//任意の整数を格納する行列。

	int			array[no] = {0};	//最大値を格納するための配列を0で初期化。

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

	//入力された全要素の確認。
	cout	<<"行列matrix\n";

	//行の処理。
	for(int i = 0; i < no; i++) {
		//列の処理。
		for(int j = 0; j < 5; j++) {

			//要素の表示。
			cout	<<setw(3)	<<matrix[i][j];

		}

		//改行。
		cout	<<'\n';

	}

	//各行の最大値を求める関数を呼び出す。
	maxline(matrix, array, no);

	//各行の最大値を表示。
	cout	<<"各行の最大値を求めました。\n最大値は\n";

	//最大値を格納した配列の表示。
	for(int i = 0; i < no; i++) {

		//要素の表示。
		cout	<<i + 1	<<"行目："	<<array[i]	<<'\n';
	}

	//0を返す。
	return 0;
}
