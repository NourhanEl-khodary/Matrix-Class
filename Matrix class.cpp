// Matrix class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
	int data1[] = { 1,2,3,4,5,6,7,8 };
	int data2[] = { 13,233,3,4,5,6 };
	int data3[] = { 10,100,10,100,10,100,10,100 };

	matrix mat1, mat2, mat3;
	mat1.createMatrix(4, 2, data1, mat1);
	mat2.createMatrix(2, 3, data2, mat2);
	mat3.createMatrix(4, 2, data3, mat3);

	cout << mat1 << endl;
	cout << mat2 << endl;
	cout << mat3 << endl;

	cout << (mat3 + mat3) << endl << endl;
	cout << (mat3 - mat1) << endl << endl;
	cout << (mat1 * mat2) << endl << endl;

	cout << (mat1 + 2) << endl;
	cout << (mat2 - 3) << endl;
	cout << (mat3 * 5) << endl;

	//cout << mat1 << endl;
	//cout << mat2 << endl;
	//cout << mat3 << endl;

	//cout << (mat1 + mat3) << endl << endl;
	//cout << (mat3 + mat3) << endl << endl;

	//++mat1;
	//cout << mat1 << endl;

	//mat1 += mat3 += mat3;
	//cout << mat1 << endl;
	//cout << mat2 << endl;
	//cout << mat3 << endl;

	//cout << (mat1 += mat2) << endl;
	//cout << (mat1 += mat3) << endl;

	return 0;
}

