/*演習14-4
 * 簡易的な行列クラスを作成。
 * 作成日：2017年5月19日
 * 作成者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 * 更新日：2017年5月22日
 * 更新者：浅田　知嗣
 */

#ifndef ___Class_Matrix
#define ___Class_Matrix

class Matrix{

	int height;  //行
	int width;  //列

	double** ptr; //配列の最初を指すポインタ

public:
	//コンストラクタの宣言。
	Matrix(int h = 1, int w = 1);

	//コピーコンストラクタの宣言。
	Matrix(const Matrix &x);

	//デストラクタの宣言。
	~Matrix()
	{
		delete [] *ptr;
		delete [] ptr;
	}

	//行数のゲッタ。
	int height_size()
	{
		return(height);
	}

	//列数のゲッタ。
	int width_size()
	{
		return(width);
	}

	//添字演算子[]の宣言。
	double* &operator[](int i)
	{
		return(ptr[i]);
	}

	//行列の表示。
	void display_matrix();

	//代入演算子 = の宣言。
	Matrix& operator=(const Matrix &a);

	//加算演算子の宣言。
	Matrix operator+(const Matrix &a);

	//減算演算子の宣言。
	Matrix operator-(const Matrix &a);

	//積算演算子の宣言。
	Matrix operator*(const Matrix &a);
	friend Matrix operator*(const Matrix &a, double b);
	friend Matrix operator*(double b, const Matrix &a);

};

#endif
