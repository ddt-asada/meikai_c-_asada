/*演習2-18
 * 以下のif文が何を行うのかを説明せよ。
 * if(a = 0) c = 3;
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 */

//このif文の条件である(a = 0)は等価演算子や関係演算子のような比較するものではなく、代入演算子であるため、if文の条件として成り立たず、コンパイルエラーになると考える。

#include <iostream>

using namespace std;

int main()
{
	int	a = 1;	//検証のためint型の変数を生成し、aを1で初期化する。
	int	c;		//検証のための型。

	//先ほどのif文を打ち込む。
	if(	a = 0) {
		c = 3;
	}

	//この結果どのような値になるか検証するためにaとcを表示し、確認する。
	cout << "変数a：" << a << "\n変数c：" << c << '\n';
}

/*実行結果は以下のようになった。
 * 変数a：0
 * 変数c：0
 *
 * この結果より、if文はaがどのような値にも関わらず、必ず成立し、a=0、c=0という値が返される。
 * また、コンパイルの際、(a=0)の部分を(a==0)に変更したほうがいいですよ。という注意が出る。
 */
