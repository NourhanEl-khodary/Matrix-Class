#pragma once
#include <iostream>

using namespace std;

class matrix
{
private:
	int** data;
	int row, col;
public:
	matrix();

	void setcol(int c);
	int getcol();

	void setrow(int r);
	int getrow();

	void createMatrix(int row, int col, int num[], matrix& mat);

	// By Nourhan
	matrix operator+  (matrix mat2);//Adding 2 matrcies
	matrix operator-  (matrix mat2);//Subtracting 2 matrcies
	matrix operator*  (matrix mat2);//Multiplying 2 matrcies
	friend matrix operator+  (matrix mat1, int scalar);//Adding a scalar to a matrix
	friend matrix operator-  (matrix mat1, int scalar);//Subtracting a scalar from a matrix
	friend matrix operator*  (matrix mat1, int scalar);//Multiplying a scalar to a matrix

	//By Mira
	/*matrix operator+= (matrix& mat1); // mat1 changes & return new matrix with the sum
	mat operator-= (mat& mat1); // mat1 changes + return new
	// matrix with difference
	friend mat operator+= (mat& mat, int scalar);   // change mat & return new matrix
	friend mat operator-= (mat& mat, int scalar);   // change mat & return new matrix
	friend void operator++ (mat& mat);   	// Add 1 to each element ++mat
	friend void   operator-- (mat& mat);    	// Sub 1 from each element --mat
	friend istream& operator>> (istream& in, mat& mat);
	// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
	// and return istream to allow cascading input
	//By Nada*/
	friend ostream& operator<< (ostream& out, matrix mat);

	~matrix();
};

