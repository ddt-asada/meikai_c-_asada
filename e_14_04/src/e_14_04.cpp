/*演習14-4
 * 簡易的な行列クラスを作成。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */

#include <iostream>
//自作ヘッダの読み込み。
#include "e_14_04_Matrix.h"

using namespace std;

int main()
{
	//行列のクラスを呼び出し、行列を生成する。3行3列の行列を生成する。
	Matrix mat(3, 3);

	//行列の行と列を返すゲッタを呼び出し、行数と列数を確認する。
	cout	<<"行数は"	<<mat.height_size()	<<"です。\n";
	cout	<<"列数は"	<<mat.width_size()	<<"です。\n";

	//行列のコピーを行う。
	Matrix matcp = mat;

	//行列の表示を行う。
	mat.display_matrix();

	matcp.display_matrix();

	//行列の加算を行う。
	Matrix matp = mat + matcp;

	//表示する。
	matp.display_matrix();

	//行列の減算を行う。
	matp = mat - matcp;

	//表示する。
	matp.display_matrix();

	//行列の積算を行う。
	matp = mat * matcp;

	//表示する。
	matp.display_matrix();

	//0を返す。
	return 0;
}
