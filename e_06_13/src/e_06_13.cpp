/*演習6-13
 * List6-14のプログラムにa=y;を追加して、プログラムの挙動を確認する。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月7日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//xを1で初期化する。
	int Test1 = 1;

	//yを2で初期化する。
	int Test2 = 2;

	//aをxに参照させる。
	int& Test3 = Test1;

	//Test1の値を表示。
	cout	<<"Test1 = "	<<Test1	<<'\n';

	//Test2の値を表示。
	cout	<<"Test2 = "	<<Test2	<<'\n';

	//Test3の値を表示。
	cout	<<"Test3 = "	<<Test3	<<'\n';

	//Test3に5を代入し、値がどのように変化するか確認する。
	Test3 = 5;

	//Test1の値を表示。
	cout	<<"Test1 = "	<<Test1	<<'\n';

	//Test2の値を表示。
	cout	<<"Test2 = "	<<Test2	<<'\n';

	//Test3の値を表示。
	cout	<<"Test3 = "	<<Test3	<<'\n';

	//Test3 = Test2 と入力するとどうなるかを確認する。
	Test3 = Test2;

	//Test1の値を表示。
	cout	<<"Test1 = "	<<Test1	<<'\n';

	//Test2の値を表示。
	cout	<<"Test2 = "	<<Test2	<<'\n';

	//Test3の値を表示。
	cout	<<"Test3 = "	<<Test3	<<'\n';

	//0を返す。
	return 0;
}

/*実行結果は次のようになった。
 *
 * Test1 = 1
 * Test2 = 2
 * Test3 = 1
 * Test1 = 5
 * Test2 = 2
 * Test3 = 5
 * Test1 = 2
 * Test2 = 2
 * Test3 = 2
 *
 * これより、Test3はTest1を参照しており、値を共有していることが確認できた。
 */
