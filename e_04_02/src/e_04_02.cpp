/*演習4-2
 * ・int型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * ・unsigned型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * するプログラム。
 * 今回はINT_MAXだと処理が長すぎるのでSHRT_MAXを上限としています。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月5日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//整数型の最大値を取得するためのヘッダ。
#include <climits>
//setw操作子を利用するためのヘッダ。
#include <iomanip>

using namespace std;

int main()
{
	//符号付きのINTの最小値～最大値
	//6文字の間隔に「8進数」と表示。
	cout	<<setw(6)	<<"8進数";
	
	//6文字の間隔に「10進数」と表示。
	cout	<<setw(6)	<<"10進数";
	
	//6文字の間隔に「16進数」と表示。
	cout	<<setw(6)	<<"16進数\n";
	
	//INT_MINからINT_MAXまで繰り返すための繰り返し。
	for(int i = SHRT_MIN; ; i++) {
		//8進数に変換して表示。
		cout	<<setw(6)	<<oct	<<i;
		//10進数に変換して表示。
		cout	<<setw(6)	<<dec	<<i;
		//16進数に変換して表示。
		cout	<<setw(6)	<<hex	<<i	<<'\n';
		//終了条件そしてSHRT_MAXを設定。
		//forの条件にSHRT_MAXを組み込むとインクリメントされたときに限界値を超えてプログラムが破たんするため。
		if(i==SHRT_MAX) break;
	}

	//符号なしのINTの最小値～最大値。
		cout << setw(6) << "8進数";
		cout << setw(6) << "10進数";
		cout << setw(6) << "16進数\n";
		for(int i = 0; ; i++){
			//8進数に変換して表示。
			cout << setw(6) << oct << i;
			//10進数に変換して表示。
			cout << setw(6) << dec << i;
			//16進数に変換して表示。
			cout << setw(6) << hex << i <<'\n';
			//終了条件そしてSHRT_MAXを設定。
			//forの条件にSHRT_MAXを組み込むとインクリメントされたときに限界値を超えてプログラムが破たんするため。
			if(i==USHRT_MAX) break;
		}
}
