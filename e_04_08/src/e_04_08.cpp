/*演習4-8
 * 算術演算を行う各式にsizeof演算子やtypeid演算子を適用した値を表示するプログラム。実行結果に対する考察を行うこと。
 * 作成日：2017年5月2日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//typeid演算子を利用するためのヘッダ。
#include <typeinfo>

using namespace std;

int main()
{
	//int型の整数とdouble型の整数を生成する。
	int a =10;
	double b=0.1;

	//それぞれの大きさと型を調べる。
	cout <<"int + int の大きさ："<< sizeof(a+a)<<'\n';
	cout <<"int + int の型："<< typeid(a+a).name()<<'\n';
	cout <<"double + double の大きさ："<<sizeof(b+b)<<'\n';
	cout <<"double + double の型："<<typeid (b + b). name() <<'\n';
	cout <<"int + double の大きさ："<<sizeof(a+b)<<'\n';
	cout <<"int + double の型："<<typeid(a+b).name()<<'\n';
	cout <<"double + int の大きさ："<<sizeof(b+a)<<'\n';
	cout <<"double + int の型："<<typeid(b+a).name()<<'\n';
}

/*実行結果は次のようになった。
 * int + int の大きさ：4
 *int + int の型：i
 *double + double の大きさ：8
 *double + double の型：d
 *int + double の大きさ：8
 *int + double の型：d
 *double + int の大きさ：8
 *double + int の大きさ：d
 *この実行結果よりまず算術演算を行った際に、異なる方の場合は暗黙の型変換が行われる。今回の場合int型とdouble型なのでdouble型に変換された。
 *これは、int型では小数点以下を表示できないが、double型では実数値と小数点以下どちらも表示できる。この性質により両方を表現できるdouble型が選択されていると考える。
 *その際の大きさに関しては、型同士の大きさの足し算ではなく、型変換が行われた後に、その型に対して、大きさが求められる。
 */
