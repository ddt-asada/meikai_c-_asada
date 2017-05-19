/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 */

//文字列クラスのヘッダで宣言した関数及びコンストラクタの定義。

#include <cstring>
#include "e_14_03_String.h"

//コピーコントラスタの定義。
String::String(const String& s)
{
	len = s.len;			//コピー元の要素数をコピー先の要素数に代入。
	ptr = new char[len];		//ポインタが指す先として、要素数が元と同じの動的記憶域期間をもつ配列の生成。

	//新たに生成した文字列の配列にコピー元の全要素をコピーする。
	for(int i = 0; i < len; i++) {
		ptr[i] = s.ptr[i];	//コピー元の要素をコピー先に代入する。
	}
}

//デストラクタの定義。
String::~String()
{
	delete[] ptr;			//動的なポインタによる文字列の配列を削除する。
}

//文字列の長さを返す関数を定義。
int String::length()
{
	//文字列の長さを返す。
	return len;
}

char* String::strings()
{
	//文字列を返す。
	return ptr;
}

//文字列を返す関数を定義。


//文字列の中身を書き換える関数の宣言。
void String::rewrite()
{
	const char* re = "hello";		//文字列を入力型。

	*ptr = &re;				//文字列を書き換える。
}

//加算演算子の定義。
String& operator+(const String& s1, String& s2)
{
	//文字列の長さを加算して返す。
	//return String(strlen(s1.ptr) + strlen(s2.ptr));
}
