/*演習14-3
 * 簡易的な文字列クラスstringを作成せよ。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */

//文字列クラスのヘッダで宣言した関数及びコンストラクタの定義。

#include <cstring>
#include "e_14_03_String.h"

//変換コンストラクタの定義。
String::String(const char* s)
{
	len = strlen(s);			//最初に文字列の長さを取得する。
	ptr = new char[len + 1];	//受け取った文字列文の長さの配列を生成する。末尾にナル文字を挿入する多面、確保する要素数は文字列の長さ + 1としている。

	//文字列を代入していく。
	for(int i = 0; i < len; i++) {
		ptr[i] = s[i];
	}
}
//コピーコンストラクタの定義。
String::String(const String& s)
{
	len = s.len;			//コピー元の要素数をコピー先の要素数に代入。
	ptr = new char[len + 1];		//ポインタが指す先として、要素数が元と同じの動的記憶域期間をもつ配列の生成。

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

//文字列を返す関数を定義。
char* String::strings()
{
	//文字列を返す。
	return ptr;
}

//文字列をつぎ足す加算演算子を定義。
String String::operator+(const String& nm)
{
	//仮の配列を生成。
	char* nmd;
	nmd = new char[len + nm.len];

	for(int i = 0; i < len; i++) {
		nmd[i] = ptr[i];
	}

	for(int i = 0; i < nm.len; i++) {
		nmd[i + len] = nm.ptr[i];
	}

	return nmd;
}


void String::operator=(const String& cpy)
{
	delete[] ptr;

	len = cpy.len;
	ptr = new char[len];

	for(int i = 0; i < len; i++) {
		ptr[i] = cpy.ptr[i];
	}
}
