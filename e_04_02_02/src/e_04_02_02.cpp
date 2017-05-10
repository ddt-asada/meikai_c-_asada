/*演習4-2
 * ・unsigned型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * するプログラム。
 * 今回はINT_MAXだと処理が長すぎるのでTESTINT_MAXを上限としています。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 * 更新日；2017年5月9日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//整数型の最大値を取得するためのヘッダ。
#include <climits>
//setw操作子を利用するためのヘッダ。
#include <iomanip>
//表示を検証する用のunsigned int型の最大値を定義。
#define TESTUINT_MAX	510

using namespace std;

int main()
{
//符号なしのINTの最小値～最大値。
	//6文字の間隔に「8進数」と表示。
	cout << setw(6) << "8進数";

	//6文字の間隔に「10進数」と表示。
	cout << setw(6) << "10進数";

	//6文字の間隔に「16進数」と表示。
	cout << setw(6) << "16進数\n";

	for(int i = 0; ; i++) {
		//8進数に変換して表示。
		cout	<<setw(6)	<<oct	<<i;

		//10進数に変換して表示。
		cout	<<setw(6)	<<dec	<<i;

		//16進数に変換して表示。
		cout	<<setw(6)	<<hex	<<i	<<'\n';

		//終了条件そしてTESTUINT_MAXを設定。
		//forの条件にSHRT_MAXを組み込むとインクリメントされたときに限界値を超えてプログラムが破たんするため。
		if(i == TESTUINT_MAX) {
			//ループを強制的に抜ける。
			break;
		}
	}

	//0を返す。
	return 0;
}
