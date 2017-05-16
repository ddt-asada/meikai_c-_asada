/*演習12-2
 * クラスBooleanに対して、vがFalaseであればbool型のtrueを、Trueであればbool型のFalseを返却する演算子関数！を追加せよ。
 * 作成日：2017年5月16日
 * 作成者：浅田　知嗣
 */

#ifndef ___Class_Boolean
#define ___Class_Boolean

#include <iostream>

//真理値クラス
class Boolean
{
public:
	enum boolean {False, True};		//真か偽かの列挙体を定義。

private:
	boolean v;						//真理値を定義。

public:
	//デフォルトコンストラクターを定義。
	Boolean()
	:v(False)
	{
	}

	//コンストラクターを定義。
	Boolean(int val)
	:v(val == 0 ? False : True)
	{
	}

	//int型への変換関数。
	operator int() const
		{
		//int型へ変換して返す。
		return v;
		}

	//const char*型への変換関数。
	operator const char*() const
		{
		//const char*型へ変換。
		return v == False ? "False" : "True";
		}

	//vがFalseであればbool型のtureを、Trueであればbool型のfalseを返す関数。
	bool operator!() const {
		return v != False;
	}
};

//出力ストリームにxを挿入。
inline std::ostream& operator<<(std::ostream& s, Boolean& x)
{
	return s << static_cast<const char*>(x);
}

#endif
