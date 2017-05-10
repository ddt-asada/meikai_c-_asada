/*演習4-2
 * ・int型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * ・unsigned型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * するプログラム。
 * 今回はINT_MAXだと処理が長すぎるのでSHRT_MAXを上限としています。
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
//表示を検証する用のint型の最小値を定義。
#define TESTINT_MIN		-255
//表示を検証する用のint型の最大値を定義。
#define TESTINT_MAX		255

using namespace std;

int main()
{
	//符号付きのint型の最小値～最大値
	//10文字の間隔に「8進数」と表示。
	cout	<<setw(10)	<<"8進数";

	//10文字の間隔に「10進数」と表示。
	cout	<<setw(10)	<<"10進数";

	//10文字の間隔に「16進数」と表示。
	cout	<<setw(10)	<<"16進数\n";

	//TESTINT_MINからTESTINT_MAXまで繰り返すための繰り返し。
	for(int i = TESTINT_MIN; ; i++) {
		//8進数に変換して表示。
		//負の値のとき。
		if(i < 0) {
		//+に変換して表示。
			cout	<<setw(6)	<<"-"	<<hex	<<-i;
		} else {
		//8進数に変換して表示。
		cout	<<setw(6)	<<oct	<<i;
		}
		//10進数に変換して表示。
		cout	<<setw(6)	<<dec	<<i;
		//負の値のとき。
		if(i < 0) {
			//+に変換して表示。
			cout	<<setw(6)	<<"-"	<<hex	<<-i	<<'\n';
		} else {
		//16進数に変換して表示。
		cout	<<setw(6)	<<hex	<<i	<<'\n';
		}
		//終了条件そしてTESTINT_MAXを設定。
		//forの条件にTESTINT_MAXを組み込むとインクリメントされたときに限界値を超えてプログラムが破たんするため。
		if(i == TESTINT_MAX) {
			//ループを強制的に抜ける。
			break;
		}
	}

	//0を返す。
	return 0;
}
