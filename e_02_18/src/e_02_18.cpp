/*演習2-18
 * 以下のif文が何を行うのかを説明せよ。
 * if(a = 0) c = 3;
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月4日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月8日
 * 更新者：浅田　知嗣
 */

//このif文の条件である(a = 0)は等価演算子や関係演算子のような比較するものではなく、代入演算子であるため、if文の条件として成り立たず、コンパイルエラーになると考える。

#include <iostream>

using namespace std;

int main()
{
	int	Sample1 = 1;	//検証のためint型の変数を生成し、Sample1を1で初期化する。
	int	Sample2 = 1;		//検証のための型。

	//先ほどのif文を打ち込む。
	if(	Sample1 = 0) {
		Sample2 = 100;
	}

	//この結果どのような値になるか検証するためにSample1とSample2を表示し、確認する。
	cout	<<"変数Sample1："	<<Sample1	<<"\n変数Sample2："	<<Sample2	<<'\n';

	//先ほどのif文を打ち込む。
	if(	Sample1 = 1) {
		Sample2 = 100;
	}

	//この結果どのような値になるか検証するためにSample1とSample2を表示し、確認する。
	cout	<<"変数Sample1："	<<Sample1	<<"\n変数Sample2："	<<Sample2	<<'\n';

	//0を返す。
	return 0;
}

/*実行結果は以下のようになった。
 * 変数Sample1：0
 * 変数Sample2：1
 * 変数Sample1：1
 * 変数Sample2：100
 * この結果よりSample1が0の時はif文の中身が実行されず、1の時はif文の中身が実行されている。
 * これはSample1の値が0かそれ以外か、つまりTrueかFalseなのかにより判定しているためと考えられる。
 */
