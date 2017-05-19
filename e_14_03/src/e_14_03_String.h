/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 */

//文字列クラスの定義及びそれにかかわるデータメンバの宣言。

#ifndef ___Class_String
#define ___Class_String
#include <cstring>

//文字列クラスの定義。
class String
{
	char*	ptr;		//ポインタによる文字列の先頭要素へのポインタ。
	int		len = strlen(ptr);		//文字列の長さすなわち文字列の配列の要素数。

public:
	//コンストラクタの宣言。
	String(const char*);

	//コピーコンストラクタの宣言。
	String(const String&);

	//デストラクタの宣言。
	~String();

	//文字列の長さを返す関数の宣言。
	int length();

	//文字列を返す関数の宣言。
	char* strings();

	//文字列の中身を書き換える関数の宣言。
	void rewrite();

	//文字列から任意の文字を探しだす関数の宣言。
	void serch(const char key);

	//加算演算子+を宣言。
	//String operator+(String& s1, String& s2);
};

#endif
