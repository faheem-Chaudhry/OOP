                                //       BSEF19M011                 FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class Matrix
{
private:
	int** arr;
	int rows;
	int columns;
public:
	Matrix()
	{
		rows = 0;
		columns = 0;
	}
	~Matrix()
	{
		for (int i = 0; i < rows; ++i) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	Matrix(int, int);
	
	void set(int, int);
	
	void get(int, int);
	void get1();
	
	Matrix operator +(Matrix);
	Matrix operator -(Matrix&);
	Matrix operator *(int);
	Matrix operator ^(int);
	Matrix operator /(int);
	bool operator >(Matrix &);
	bool operator <(Matrix &);
	bool operator >=(Matrix &);
	bool operator <=(Matrix &);
	bool operator ==(Matrix &);
	Matrix operator *(int[]);
	Matrix operator *(Matrix&);
	operator int();
};

