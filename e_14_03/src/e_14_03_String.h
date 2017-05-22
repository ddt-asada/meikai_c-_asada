/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */

//文字列クラスの定義及びそれにかかわるデータメンバの宣言。

#ifndef ___Class_String
#define ___Class_String
#include <cstring>

//文字列クラスの定義。
class String
{
	int		len;		//文字列の長さすなわち文字列の配列の要素数。
	char*	ptr;		//ポインタによる文字列の先頭要素へのポインタ。

public:
	//変換コンストラクタの宣言。
	String(const char* s);

	//コピーコンストラクタの宣言。
	String(const String&);

	//デストラクタの宣言。
	~String();

	//文字列の長さを返す関数の宣言。
	int length();

	//文字列を返す関数の宣言。
	char* strings();



	//文字列をつぎ足す加算演算子を宣言。
	String operator+(const String& nmd);

	//文字を代入する代入演算子の宣言。
	void operator=(const String& cpy);
};

#endif
