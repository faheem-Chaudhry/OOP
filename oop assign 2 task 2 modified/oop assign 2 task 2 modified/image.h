                           // BSEF19M011                 FAHEEM KHALID
#pragma once
#include<iostream>
#include"Mask.h"
using namespace std;
class Image
{
private:
	int** arr;
	int rows;
	int columns;
public:
	Image()
	{
		rows = 0;
		columns = 0;
	}
	~Image()
	{
		for (int i = 0; i < rows; ++i)
		{
			delete[] arr[i];
		}
		delete[] arr;
	}
	Image(int r, int c);
	void set(int ro, int cl);
	void get(int r, int c);
	void convolution(mask m1);
};

