/*演習11-4
 * コンストラクタ初期化子によって明示的に初期化しない場合に、
 * メンバ部分オブジェクトがデフォルトコンストラクタで初期化されることをプログラムを作成して確認せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

//Accountのデータメンバ関数を定義、コンストラクタを定義しているソースファイル。

#include <string>
#include <iostream>
//口座の情報が格納されたヘッダを読み込む。
#include "e_11_04_Account.h"

using namespace std;

//デフォルトコンストラクタを定義。不正な口座であることを名義し、普通ではありえない値で初期化する。
Account::Account()
{
	full_name = "不正な口座。";		//口座名として不正な口座と明示。
	number = "不正な口座。";		//口座番号として不正な口座と明示。
	crnt_balance = -99999999;		//不正なことを一目で見分けるため、預金残高としてあり得ないであろう負の値を代入。
	open = Date();					//デフォルタコンストラクタで初期化されることを確かめるためにメンバ部分オブジェクトはそのまま。。
}
//コンストラクタを定義。コンストラクタ初期化子により初期化する（メンバ部分オブジェクトである日付に関してはあえて初期化しない）。
Account::Account(string name, string num, long amnt, int y, int m, int d)
		:full_name(name), number(num), crnt_balance(amnt)
{
	open = Date(y, m, d);
}

//口座にお金を預けるときに利用する関数を定義する。（関数宣言はe_11_04_Accountにて行っている。
void Account::deposit(long amnt)
{
	//預金残高をプラス。
	crnt_balance += amnt;
}

//口座からお金をおろす時に利用する関数を定義する。（関数宣言はe_11_04_Accountにて行っている。）
void Account::withdraw(long amnt)
{
	//預金残高をマイナス。
	crnt_balance -= amnt;
}
