/*演習8-1
 * 配列sの宣言を以下のように書き換えたプログラム。
 * char	test1[] = "ABC\0DEF";
 * 作成日：2017年5月9日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

int main()
{
	/*配列の要素を増やしたパターンを実行しようとしたときにコンパイルエラーを防ぐためコメントアウト。
	 * char	test1[6] = "ABC\0DEF";	//文字列を格納する配列を宣言し、どのように処理されるかを確認する。
	 *
	 * 配列を表示してどのように処理されたかを確認。
	 *
	 * cout	<<"配列test1に文字列\""	<<test1	<<"\"が格納されています。\n";
	*/

	char	test2[8] = "ABC\0DEF";	//文字列を格納する配列を宣言し、どのように処理されるかを確認する。

	//配列を表示してどのように処理されたかを確認。
	cout	<<"配列test2に文字列\""	<<test2	<<"\"が格納されています。\n";

	//0を返す。
	return 0;
}

/*実行しようとしたところ配列に対して文字列が長すぎるとエラーが出てコンパイルが出来なかった。
 * これはナル文字も一つの要素として認識されるためである。
 * また、試しに配列の要素を増やして実行してみても、"ABC"しか表示されなかった。
 * これはナル文字が文の終端と認識され、ナル文字以降の要素が全てナル文字で初期化されるためであると考える。
 */
