/*演習3-12
 * 1からnまでの和を式を表示として表示するプログラム。（for文使用）。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int n;

	//求めたい和の終わりの入力を促す。
	cout <<"整数値：";
	cin >>n;

	//求めた和を代入するための変数。
	int sum;

	//1からnまでの総和を求めるための繰り返し。
	for(int i = 1; i <= n; i++){
		//sumにiを加算していく。
		sum += i;
		//式を表示。
		//for文の最後のみ=を表示するようにするための分岐。
		//for文が繰り返し中の時
		if(i!=n)
			cout <<i<<" + ";
		//for文の最後の時（i==nの時）。
		else
			cout <<i<<" = "<<sum;
	}
}
