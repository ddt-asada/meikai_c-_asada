/*演習11-2
 * クラスDateに抽出子を追加。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#include <iostream>
#include <sstream>
#include "e_11_02.h"

using namespace std;

int main()
{
	string s = "2125/23/28";	//入力される文字。

	istringstream is(s);		//文字列からの入力を行うためのストリーム。

	int y, m, d;

	char	ch;					//スラッシュを空読みするための定義。

	is	>>y	>>ch	>>m	>>ch	>>d;

	cout	<<y	<<"年"	<<m	<<"月"	<<d	<<"日\n";
}
