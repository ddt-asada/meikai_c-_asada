/*演習2-17
 * 変数aがdouble型、変数bがint型であるときこのプログラムはどのように処理されるか。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	double	a;	//double型の変数aを生成。

	int		b;	//int型の変数bを生成。

	/*代入演算子「=」は右結合のため、a=b=1.5は次のように解釈される。
	 * a = (b = 1.5)
	 * したがってまず初めにint型の変数bに1.5が代入される。この時、int型は整数型のため小数点以下は切り捨てられbには1が代入される。
	 * 次に、double型の変数aにint型の変数bが代入される。この時先ほどの 1がbに代入されているため、aはa=1と解釈される。
	 */
	a = b = 1.5;

	//答えの確認のための表示。
	cout	<< "double型の変数a：" << a << "\nint型の変数b：" << b << '\n';
}
