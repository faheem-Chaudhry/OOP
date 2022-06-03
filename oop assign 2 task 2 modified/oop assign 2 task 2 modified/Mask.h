                            // BSEF19M011                 FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class mask
{
private:
	int** arr;
	int rows;
	int columns;
public:
	friend class Image;
	mask()
	{
		rows = 0;
		columns = 0;
	}
	~mask()
	{
		for (int i = 0; i < rows; ++i) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	mask(int r, int c);
	void set(int ro, int cl);
	void get(int r, int c);
};

