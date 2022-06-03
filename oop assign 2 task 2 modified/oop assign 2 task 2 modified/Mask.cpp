                                   // BSEF19M011                 FAHEEM KHALID
#include "Mask.h"
mask::mask(int r, int c)
{
	rows = r;
	columns = c;
	arr = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = 0;
		}
	}
}
void mask::set(int ro, int cl)                              // setter
{
	rows = ro;
	columns = cl;
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << " Input value at row " << i << " and column " << j << " : ";
			cin >> arr[i][j];
		}
	}
}
void mask::get(int r, int c)                           //  getter
{
	rows = r;
	columns = c;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
