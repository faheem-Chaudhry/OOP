                                // BSEF19M011            FAHEEM KHALID
#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class TransformationMatrix
{
private:
private:
	double** arr;
	int rows;
	int columns;
	double x;
	double y;
	double angle;
public:
	TransformationMatrix()
	{
		rows = 0;
		columns = 0;
		x = 0;
		y = 0;
		angle = 0;
	}
	~TransformationMatrix()
	{
		for (int i = 0; i < rows; ++i) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	TransformationMatrix(int r, int c);     // parametrized
	void scaling(double scalingx, double scalingy);
	void shear(double shearx, double sheary);
	void rotation(double theeta);
	void transform(int ii, point p);
};

