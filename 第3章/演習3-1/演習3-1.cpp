/*演習3-1
 * 読み込んだ整数値の符号を判定する、を好きなだけ何度でも入力・表示を繰り返せるプログラム。
 * 作成日：2017年5月1日
 * 作成者：浅田　知嗣
 */

#include <iostream>
//文字列を扱うためのヘッダを読み込む。
#include <string>

using namespace std;

int main()
{
	//繰り返しの判定に利用するための文字列の型を生成。
	string retry;
	//後判定の繰り返し文do文
	do{
		//符号を判定したい任意の整数を代入するための変数。
		int a;

		//入力を促す。
		cout <<"判定したい任意の整数を入力してください。\n";
		cin >>a;

		//入力された整数の方を判定するためのif文
		if(a>0)
			cout <<"整数aは正の整数です。\n";
		else if(a<0)
			cout <<"整数aは負の整数です。\n";
		else
			cout <<"整数aは0です。\n";

		//繰り返し実行するかの確認。
		cout <<"もう一度？Y…Yes／N…NO：";
		//繰り返しの判定用の文字列を入力。
		cin >> retry;
		//Yまたはyが入力されたとき繰り返すようにする命令。
	}while (retry == "Y" || retry == "y" );
}
