/*演習2-2
 *List 2-5のプログラムの最後のelseを、else if(n == 0)に変更するとどうなるか。
 *作成日：2017年5月1日
 *作成者：浅田　知嗣
 *更新日：2017年5月4日
 *更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	//入力するための変数を生成。
	int n;

	//入力を促す。
	cout << "整数値：";
	cin >> n;

	//値が正の時は「その値は正です。」と表示。
	if(n > 0) {
		cout << "その値は正です。\n";
	//値が負の時は「その値は負です。」と表示。
	} else if(n < 0) {
		cout << "その値は負です。\n";
	//値が0の時は「その値は0です。」と表示。
	} else if(n == 0) {
		cout << "その値は0です。\n";
	}
}

/*検討結果
 * if文にて、0より大きいとき、0より小さいとき、0ちょうどの時
 * の3パターンがすべて範囲に含まれているためエラーが出ることなく実行できる。
 */
