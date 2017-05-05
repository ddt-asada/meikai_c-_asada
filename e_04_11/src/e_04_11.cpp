/*演習4-11
 * float型の変数を0.0から1.0まで0.001ずつ増やしながら、その値と、その値の2乗を表示するプログラムを作成せよ。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//操作子を利用するためのヘッダ
#include <iomanip>

using namespace std;

int main()
{
	//表を見やすくするため、setw操作子により10文字幅を確保。
	cout << setw(10) << "float";
	cout << setw(10) << "2乗値\n";
	//表題との境目。
	cout << "-----------------\n";

	//浮動小数点の精度を指定。
	cout << fixed <<setprecision(6);

	//0.001～1.000までの繰り返しを宣言。
	for(float x = 0.0F; x <= 1.0F; x +=0.001F){
		//見やすくするため10文字幅を確保。
		cout << setw(10) << x;
		//見やすくするため10文字幅を確保。
		cout << setw(10) << x*x<<'\n';
	}

}
