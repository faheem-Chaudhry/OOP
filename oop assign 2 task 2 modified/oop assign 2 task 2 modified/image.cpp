                                   // BSEF19M011                 FAHEEM KHALID
#include "image.h"
Image::Image(int r, int c)
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
void Image::set(int ro, int cl)                              // setter
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


			cout << " Input value at row " << i << " and column " << j << " : ";
			cin >> arr[i][j];

		}
	}
}
void Image::get(int r, int c )                           //  getter
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
void Image::convolution(mask m1)
{
	int** temp;
	temp = new int*[ rows];
	for (int i = 0; i < rows; ++i)
	{
		temp[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			temp[i][j] = 0;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == 0 && j == 0)
			{
				temp[i][j]= 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
				cout << temp[i][j] << " ";
		
		
				
			}
			else if (i == 0 && j == columns - 1)
			{
				temp[i][j]= 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + 1 * m1.arr[2][2];
				cout <<temp[i][j]<< " ";
				
			}
			else if (i == rows - 1 && j == 0)
			{
				temp[i][j]= 1 * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
				cout << temp[i][j] << " ";
				
			}
			else if (i == rows - 1 && j == columns - 1)
			{
				temp[i][j]= arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
				cout <<temp[i][j]<< " ";
				
			}
			else if (i == 0 && j != 0 && j != columns - 1)
			{
				temp[i][j]= 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
				cout << temp[i][j] << " ";
				
			}
			else if (i == rows - 1 && j != 0 && j != columns - 1)
			{
				temp[i][j] = arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
				cout << temp[i][j] << " ";
				
			}

			else if (j == 0 && i != 0 && i != rows - 1)
			{
				temp[i][j] = 1 * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
				cout << temp[i][j] << " ";
				
			}
			else if (j == columns - 1 && i != 0 && i != rows - 1)
			{
				temp[i][j] = arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + 1 * m1.arr[2][2];
				cout << temp[i][j] << " ";
				
			}

			else
			{
				temp[i][j] = arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
				cout << temp[i][j] << " ";
			}


		}
		cout << endl;
	}
	for (int i = 0; i < rows; ++i)
	{
		delete[] temp[i];
	}
	delete[] temp;
}
