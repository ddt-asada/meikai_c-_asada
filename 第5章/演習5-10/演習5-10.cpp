/*演習5-10
 * 4行3列の行列と3行4列の行列の積を求めるプログラム。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//操作子を読み込むためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	//4行3列の行列。
	int na[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};

	//3行4列の行列。
	int nar[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};

	//行列の積を入れる行列。
	int nans[4][4];

	//行列の積も求めるのに使う変数。
	int sum;

	//行列の積を計算。
	//行列内を縦に移動。
	for(int i = 0; i < 4; i++) {
		//行列内を横に移動。
		for(int j = 0; j < 4 ; j++) {
			//行列の積の計算。
			for(int k = 0 ; k < 3 ; k++) {
			sum += na[i][k]*nar[k][j];
			}

			//求めた積を行列に代入。
			nans[i][j] = sum;
			//積を入れ終わった後に一度0にする。
			sum = 0;
		}
	}

	//行列naを表示。
	cout << "行列na\n";
	//縦の移動。
	for(int i = 0 ; i < 4 ; i++){
		//横の移動。
		for(int j = 0 ; j <3 ; j++)
			//見やすくするため間隔を確保。
			cout << setw(3) << na[i][j];
		cout << '\n';
	}

	//行列narを表示。
		cout << "行列nar\n";
		//縦の移動。
		for(int i = 0 ; i < 3 ; i++){
			//横の移動。
			for(int j = 0 ; j < 4 ; j++)
				//見やすくするため間隔を確保。
				cout << setw(3) << nar[i][j];
			cout << '\n';
		}

	//行列nansを表示。
		cout << "行列nans\n";
		//縦の移動。
		for(int i = 0 ; i < 4 ; i++){
			//横の移動。
			for(int j = 0 ; j <4 ; j++)
				//見やすくするため間隔を確保。
				cout << setw(4) << nans[i][j];
			cout << '\n';
		}
}
