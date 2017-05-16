/*演習11-4
 * コンストラクタ初期化子によって明示的に初期化しない場合に、
 * メンバ部分オブジェクトがデフォルトコンストラクタで初期化されることをプログラムを作成して確認せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

//口座情報に関するクラスAccountが定義、宣言されているヘッダ。

#include <string>
//日付情報クラスが定義されているヘッダを読み込む。
#include "e_11_04_Date.h"

class Account
{
	std::string	full_name;	//名義氏名を定義。
	std::string	number;		//口座番号を定義。
	long	crnt_balance;	//預金残高を定義。
	Date	open;			//口座開設日を定義。Date型クラスは日付情報が格納されたe_11_04_Dateに存在している。

public:
	//デフォルトコンストラクタを宣言。
	Account();

	//コンストラクタを宣言。
	Account(std::string name, std::string num, long amnt, int y, int m, int d);

	//口座にお金を預けるときに利用する関数の宣言。(e_11_04_sourceにて定義。）
	void deposit(long amnt);

	//口座からお金を引き出す時に利用する関数の宣言。(e_11_04_sourceにて定義。）
	void withdraw(long amnt);

	//名義指名を返す関数を定義。
	std::string name() const
	{
		//名義指名を返す。
		return full_name;
	}

	//口座番号を返す関数を定義。
	std::string no() const
	{
		//口座番号を返す。
		return number;
	}

	//預金残高を返す関数を定義。
	long balance() const
	{
		//預金残高を返す。
		return crnt_balance;
	}

	//口座開設日を返す関数を定義。（クラスDateはe_11_04_Dateにて定義。）
	Date opening_date() const
	{
		//開設日を返す。
		return open;
	}
};
