/*演習9-7
 * 名前空間Osakaを追加したプログラムを作成。
 * 作成日：2017年5月14日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月16日
 * 更新者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//名前空間Engilishを定義。
namespace English {

	//1で初期化。
	int x = 1;

	void print_x()
	{

		//英語で整数値xは1です。と表示。
		cout	<<"The value of x is "	<<x	<<".\n";

	}

	void hello()
	{

		//英語でこんにちは。と表示。
		cout	<<"Hello！\n";

	}
}


//名前空間Japaneseを定義。
namespace Japanese
{
	//2で初期化。
	int x = 2;

	void print_x()
	{

		//日本語で整数値xは2です。と表示。
		cout	<<"変数xの値は"	<<x	<<"です。\n";

	}

	void hello()
	{

		//こんにちは。と表示。
		cout	<<"こんにちは。\n";

	}


	//名前空間Osakaを定義。
	namespace Osaka
	{
		//3で初期化。
		int x = 3;

		void print_x()
		{

			//大阪弁で表示。
			cout	<<"変数xの値は"	<<x	<<"でっせ。\n";

		}

		void hello()
		{

			//もうかってまっか。と表示。
			cout	<<"もうかってまっか。\n";

		}
	}
}

int main()
{
	//名前空間Engilishを呼び出す。
	cout	<<"English::x = "	<<English::x	<<'\n';
	//Englishの関数を呼び出す。
	English::print_x();
	//Englishの関数を呼び出す。
	English::hello();

	//名前空間japaneseを呼び出す。
	cout	<<"Japanese::x = " <<Japanese::x	<<'\n';
	//Jpaneseの関数を呼び出す。
	Japanese::print_x();
	//Japaneseの関数を呼び出す。
	Japanese::hello();

	//名前空間Osakaを呼び出す。
	cout	<<"Japanese::Osaka::x = "		<<Japanese::Osaka::x		<<'\n';
	//Osakaの関数を呼び出す。
	Japanese::Osaka::print_x();
	//Osakaの関数を呼び出す。
	Japanese::Osaka::hello();

	//0を返す。
	return 0;


}
