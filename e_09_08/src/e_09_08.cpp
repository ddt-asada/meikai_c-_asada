/*演習9-8
 * 演習9-7のプログラムを名前空間メンバの宣言と定義を分離したプログラムを作成。
 * 作成日：2017年5月14日
 * 作成者：浅田　知嗣
 */

#include <iostream>

using namespace std;

//名前空間メンバの宣言。
//名前空間Englishの宣言。
namespace English
{
	//変数の宣言。
	extern int x;
	//関数の宣言。
	void		print_x();
	//関数の宣言。
	void		hello();
}


//名前空間Japaneseの宣言。
namespace Japanese
{
	//変数の宣言。
	extern int x;
	//関数の宣言。
	void		print_x();
	//関数の宣言。
	void		hello();
}


//名前空間Osakaの宣言。
namespace Osaka
{
	//変数の宣言。
	extern int x;
	//関数の宣言。
	void		print_x();
	//関数の宣言。
	void		hello();
}


//名前空間Engilishの定義。
//1で初期化。
int		English::x = 1;

//関数の定義。
void 	English::print_x()
	{
		//英語で整数値xは1です。と表示。
		cout	<<"The value of x is "	<<x	<<".\n";
	}

//関数の宣言。
void	English::hello()
	{
		//英語でこんにちは。と表示。
		cout	<<"Hello！\n";
	}


//名前空間Japaneseの定義。
//2で初期化。
int		Japanese::x = 2;

//関数の宣言。
void	Japanese::print_x()
	{
		//日本語で整数値xは2です。と表示。
		cout	<<"変数xの値は"	<<x	<<"です。\n";
	}

//関数の宣言。
void	Japanese::hello()
	{
		//こんにちは。と表示。
		cout	<<"こんにちは。\n";
	}


//名前空間Osakaの定義。
//3で初期化。
int		Osaka::x = 3;

//関数の宣言。
void	Osaka::print_x()
	{
		//大阪弁で表示。
		cout	<<"変数xの値は"	<<x	<<"でっせ。\n";
	}

//関数の宣言。
void	Osaka::hello()
	{
		//もうかってまっか。と表示。
		cout	<<"もうかってまっか。\n";
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
	cout	<<"Osaka::x = "		<<Osaka::x		<<'\n';
	//Osakaの関数を呼び出す。
	Osaka::print_x();
	//Osakaの関数を呼び出す。
	Osaka::hello();

	//0を返す。
	return 0;


}
