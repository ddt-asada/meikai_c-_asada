/*演習3-3
 * 二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を、小さいほうから順に表示するプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int a,b;
	//入力を促す。
	cout <<"整数値a：";
	cin >>a;

	cout <<"整数値b：";
	cin >>b;

	//二つの整数値の大小を判定した値を代入するための変数を生成。
	int max,min;

	//二つの整数値の大小を判定するif文
	if(a>b){
		max = a;
		min = b;
	}
	else{
		max = b;
		min = a;
	}

	//小さいほうの整数minから大きいほうの整数maxの間の全整数を小さいほうから表示するためのdo文
	do{
		//小さい整数minを表示。
		cout <<min<<" \n";
		//minに1を加えた値を次のminにする。
		min = min + 1;
		//minとmaxが等しくなるまで、処理を繰り返す。
		//後判定の繰り返し文につき、min==max+1とすることによりmin~～maxまでの整数を表示させるまで繰り返す。
	}while (min != max+1);
}
