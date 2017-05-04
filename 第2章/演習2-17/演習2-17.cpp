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
	double	dSample;	//double型の変数dSampleを生成。

	int		Sample;		//int型の変数Sampleを生成。

	/*代入演算子「=」は右結合のため、dSample = Sample = 1.5は次のように解釈される。
	 * dSample = (Sample = 1.5)
	 * したがってまず初めにint型の変数Sampleに1.5が代入される。この時、int型は整数型のため小数点以下は切り捨てられSampleには1が代入される。
	 * 次に、double型の変数dSampleにint型の変数Sampleが代入される。この時先ほどの 1がSampleに代入されているため、dSampleはdSample=1と解釈される。
	 */

	dSample = Sample = 1.5;	//dSample = (Sample = 1.5)と解釈される。

	//答えの確認のための表示。
	cout	<<"double型の変数dSample："	<<dSample	<<"\nint型の変数Sample："	<<Sample	<<'\n';

	//0を返す。
	return 0;
}
