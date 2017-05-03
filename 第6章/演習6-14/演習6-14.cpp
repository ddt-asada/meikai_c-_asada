/*演習6-14
 * a,bを昇順にソートする関数sortを作成する。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

/*関数名：void sort(int& a, int& b);
 * aとbに参照された値を昇順にソートする関数。
 * 引数a：ソートしたい値。
 * 引数b：ソートしたい値。
 * 作成日：2017年5月3日
 * 作成者：浅田　知嗣
 */

void sort(int& a, int& b)
{
	//ソートするための型。
	int t;
	//aがbより小さい時は、値を入れ替える。
	if(a > b) {
		t = b;
		b = a;
		a = t;
	}
}

int main()
{
	//入れ替えたい値の型。
	int nA, nB;

	//値の入力を促す。
	cout << "整数値nA：";
	cin >> nA;

	cout << "整数値nB：";
	cin >> nB;

	//昇順にソートする関数に参照渡しする。
	sort(nA, nB);

	//ソートされた値を表示する。
	cout << "整数値nA：" << nA << '\n';

	cout << "整数値nB：" << nB << '\n';
}
