/*演習6-17
 * 呼び出された回数を表示する関数put_countをさくせいする。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int	Count = 0;	//呼び出された回数をカウントするための変数。

/*関数名：void put_count()
 * 呼び出された回数を表示する関数。
 * 引数：なし。
 * 返却値：なし。
 * 作成日：2017年5月8日
 * 作成者：浅田　知嗣
 */

//呼び出された回数を表示する関数。
void put_count()
{
	Count++;	//呼び出された回数をカウント。

	//呼び出された回数を表示。
	cout	<<"put_count："	<<Count	<<"回目\n";

}

int main()
{
	const int	Call = 10;	//関数を呼び出す回数を指定。

	//指定した回数だけ関数を呼び出す。
	for(int i= 0; i < Call; i++) {

		//呼び出された回数を表示する関数を呼び出す。
		put_count();

	}

	//0を返す。
	return 0;
}
