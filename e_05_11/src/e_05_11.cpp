/*演習5-11
 * 6人の2科目（国語・数学）の点数を読み込んで、科目ごとの合計点と平均点、学生ごとの合計点と平均点を求めるプログラム。
 * 作成日：2017月5月3日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月6日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月10日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//時間を参照するためのヘッダ。
#include <ctime>
//C言語ライブラリ関数を利用するためのヘッダ。
#include <cstdlib>

using namespace std;

int main()
{

	const int	People = 6;		//人数を宣言。

	const int	Subject = 2;	//科目数を宣言。

	const int	Year = 2;		//学年を宣言。

	int			Score[Year][People][Subject];			//2学年6人分の2科目の点数を入れる配列を生成。

	int			sumpeople[Year][People] = {0};			//各学年の個人ごとの2科目の合計点の配列。

	int			sumsubject[Year][Subject] = {0};		//各科目の学年ごとの合計点の配列。

	//乱数の種を時間に指定。
	srand(time(NULL));

	//配列に点数を入力する繰り返し今回は値を入れたときに動くかを確認したいだけなので全要素に乱数を代入。
	//学年の指定。
	for(int i = 0; i < Year; i++) {
		//人数の指定。
		for(int j = 0; j < People; j++) {
			//科目の指定。
			for(int k = 0; k < Subject; k++) {

				Score[i][j][k] = rand() % 101;		//点数を0～100乱数により代入

			}
		}
	}

	//各学年の学生ごとの合計点と平均点を求める。
	for(int i = 0; i < Year; i++) {

		//学年を表示。
		cout	<<i + 1	<<"年生\n";

		//学生を選択。
		for(int j = 0; j < People ; j++) {

			//何人目かを表示。
			cout	<<j + 1	<<"人目\n";

			//学生ごとの2科目の合計点を求める。
			for(int k = 0; k < Subject; k++) {

			sumpeople[i][j] += Score[i][j][k];		//合計点を求める。

			}

		//合計点の表示。
		cout	<<"2科目の合計点は："	<<sumpeople[i][j]	<<"です。\n";

		//平均点を表示。
		cout	<<"2科目の平均点は："	<<sumpeople[i][j] / Subject	<<"です。\n";

		}
	}

	//各学年の国語の合計点と平均点を求める。
	//学年を選択。
	for(int i = 0; i < Year; i++) {

		//学年を表示。
		cout	<<i + 1	<<"年生\n";

		//学生を選択。
		for(int j = 0; j < People; j++) {

			sumsubject[i][0] += Score[i][j][0];		//国語の合計点を求める。

		}

		//国語の合計点を表示。
		cout	<<"国語の合計点は："	<<sumsubject[i][0]	<<"です。\n";
		//国語の平均点の表示。
		cout	<<"国語の合計点は："	<<sumsubject[i][0] / People	<<"です。\n";
	}

	//各学年の英語の合計点と平均点を求める。
	//学年を選択。
	for(int i = 0; i < Year; i++) {

		//学年を表示。
		cout	<<i + 1	<<"年生\n";

		//学生を選択。
		for(int j = 0; j < People; j++) {

			sumsubject[i][1] += Score[i][j][1];		//英語の合計点を求める。

		}

		//英語の合計点を表示。
		cout	<<"英語の合計点は："	<<sumsubject[i][1]	<<"です。\n";
		//英語の平均点の表示。
		cout	<<"英語の合計点は："	<<sumsubject[i][1] / People	<<"です。\n";

	}

	//0を返す。
	return 0;
}
