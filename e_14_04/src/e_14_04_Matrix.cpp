/*演習14-4
 * 簡易的な行列クラスを作成。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */


#include <iostream>
#include <cmath>
#include <iomanip>

#include "e_14_04_Matrix.h"
using namespace std;

//通常のコンストラクタ
Matrix::Matrix(int h, int w):height(h), width(w)
{
	ptr = new double*[h];				//要素数hの配列を生成。行列の行に当たる部分。
	*ptr = new double[h * w];			//行列の全要素分の要素数をもつ配列を生成。

	//ポインタptr（行に当たる部分）が指す先を列数の数だけ先に進める。
	for(int i = 1; i <= h; i++) {
		*(ptr + i) = *ptr + ((i - 1) * w);
	}
	//値の初期化
	for(int i = 1; i <= h; i++) {

		for(int j = 1; j <= w; j++) {

			ptr[i][j] = j * i;
		}
	}
}

//コピーコンストラクタ
Matrix::Matrix(const Matrix &x)
{
	height = x.height;			//行数をコピー
	width = x.width;			//列数をコピー。

	//  配列のメモリ領域を動的に確保
	ptr = new double*[height];			//行列の行に当たる部分の生成。
	*ptr = new double[height*width];		//行列の全要素分の配列を生成。

	//ポインタptr（行に当たる部分）が指す先を列数の数だけ進める。
	for(int i = 1; i <= height; i++) {
		*(ptr + i) = *ptr+((i - 1) * width);
	}
	//値をコピーする。
	for(int i = 1; i <= height; i++) {

		for(int j = 1; j <= width; j++) {

			ptr[i][j] = x.ptr[i][j];
		}
	}
}

//行列の表示。
void Matrix::display_matrix()
{
	for(int i = 1; i <= height; i++) {
		for(int j = 1; j <= width; j++) {
			cout	<<setw(3)	<<ptr[i][j];
		}
		cout	<<'\n';
	}
	cout	<<'\n';
}

//代入
Matrix& Matrix::operator=(const Matrix &a)
{
	//値を代入していく。
	for(int i = 1; i <= height; i++) {
		for(int j = 1; j <= width; j++) {
			ptr[i][j] = a.ptr[i][j];
		}
	}
	return(*this);
}

//行列の加算
Matrix Matrix::operator+(const Matrix &a)
{
	Matrix b(height, width);
	for(int i = 1; i <= height; i++){
		for(int j = 1; j <= width; j++){
			b.ptr[i][j] = ptr[i][j] + a.ptr[i][j];
		}
	}
	return(b);
}


//行列の減算
Matrix Matrix::operator-(const Matrix &a)
{
	Matrix b(height, width);
	for(int i = 1; i <= height; i++) {
		for(int j = 1; j <= width; j++) {
			b.ptr[i][j] = ptr[i][j] - a.ptr[i][j];
		}
	}
	return(b);
}

//行列の積
Matrix Matrix::operator*(const Matrix &a)
{
	Matrix b(height, a.width);
	for(int i = 1; i <= height; i++) {
		for(int j = 1; j <= a.width; j++) {
			for(int k = 1; k <= width; k++){
				b.ptr[i][j] += ptr[i][k] * a.ptr[k][j];
			}
		}
	}
	return(b);
}
