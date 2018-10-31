#include "pch.h"
#include "matrix.h"
#include <iostream>
#include <iomanip>

using namespace std;


matrix::matrix()
{
}

void matrix::setcol(int c)
{
	col = c;
}

int matrix::getcol()
{
	return col;
}

void matrix::setrow(int r)
{
	row = r;
}

int matrix::getrow()
{
	return row;
}

void matrix::createMatrix(int row, int col, int num[], matrix & mat)
{
	mat.row = row;
	mat.col = col;
	mat.data = new int*[row];

	for (int i = 0; i < row; i++) {
		mat.data[i] = new int[col];

		for (int j = 0; j < col; j++) {
			mat.data[i][j] = num[i * col + j];
		}
	}
}

//Adding 2 matrcies
matrix matrix::operator+(matrix mat2)
{
	if ((this-> row == mat2.row) && (this-> col == mat2.col)) {
		matrix mat3;
		mat3.row = this-> row;
		mat3.col = this-> col;

		mat3.data = new int*[mat3.row];

		for (int i = 0; i < mat3.row; i++) {
			mat3.data[i] = new int[mat3.col];

			for (int j = 0; j < mat3.col; j++) {
				mat3.data[i][j] = this-> data[i][j] + mat2.data[i][j];
			}
		}
		return mat3;
	}
	else {
		cout << "Not Possible" << endl;
	}
	
}

//Subtracting 2 matrcies
matrix matrix::operator-(matrix mat2)
{
	if ((this-> row == mat2.row) && (this-> col == mat2.col)) {
		matrix mat3;
		mat3.row = this-> row;
		mat3.col = this-> col;

		mat3.data = new int*[mat3.row];

		for (int i = 0; i < mat3.row; i++) {
			mat3.data[i] = new int[mat3.col];

			for (int j = 0; j < mat3.col; j++) {
				mat3.data[i][j] = this-> data[i][j] - mat2.data[i][j];
			}
		}
		return mat3;
	}

	else {
		cout << "Not Possible;" << endl;
	}
}

//Multiplying 2 matracies
matrix matrix::operator*(matrix mat2)
{
	if (this-> col == mat2.row) {
		matrix mat3;
		mat3.row = this-> row;
		mat3.col = mat2.col;

		mat3.data = new int*[mat3.row];

		for (int i = 0; i < mat3.row; i++) {
			mat3.data[i] = new int[mat3.col];

			for (int j = 0; j < mat3.col; j++) {
				mat3.data[i][j] = 0;
			}
		}

		for (int i = 0; i < mat3.row; i++) {
			for (int k = 0; k < mat3.col; k++) {
				for (int j = 0; j < this-> col; j++) {
					mat3.data[i][k] += (this-> data[i][j] * mat2.data[j][k]);
				}
			}
		}
		return mat3;
	}

	else {
		cout << "Not Possible" << endl;
	}
}

/*matrix matrix::operator+=(matrix & mat1)
{
	return matrix();
}*/

matrix::~matrix()
{
}

//Adding a scalar to a matrix
matrix operator+(matrix mat1, int scalar)
{
	for (int i = 0; i < mat1.row; i++) {
		for (int j = 0; j < mat1.col; j++) {
			mat1.data[i][j] += scalar;
		}
	}
	return mat1;
}

//Subtracting a scalar from a matrix
matrix operator-(matrix mat1, int scalar)
{
	for (int i = 0; i < mat1.row; i++) {
		for (int j = 0; j < mat1.col; j++) {
			mat1.data[i][j] -= scalar;
		}
	}
	return mat1;
}


//Mutiplying a scalar to a matrix
matrix operator*(matrix mat1, int scalar)
{
	for (int i = 0; i < mat1.row; i++) {
		for (int j = 0; j < mat1.col; j++) {
			mat1.data[i][j] *= scalar;
		}
	}
	return mat1;
}



ostream & operator<<(ostream & out, matrix mat)
{
	for (int i = 0; i < mat.row; ++i) {
		for (int j = 0; j < mat.col; ++j) {
			out << setw(5) << mat.data[i][j];

		}
		cout << endl;
	}
	return out;
}


