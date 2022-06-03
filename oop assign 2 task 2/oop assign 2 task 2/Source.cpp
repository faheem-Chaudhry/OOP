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
	~ mask()
	{
		for (int i = 0; i < rows; ++i) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	mask(int r, int c)
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
	void set(int ro, int cl)                              // setter
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
	void get(int r, int c)                           //  getter
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
};
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
	Image(int r, int c)
	{
		rows = r;
		columns = c;
		arr = new int* [rows];
		for ( int i = 0; i < rows; ++i)
		{
			arr[i] = new int[columns];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				arr[i][j] = 1;
			}
		}
	}
	void set(int ro, int cl)                              // setter
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
	void get(int r, int c)                           //  getter
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
	void convolution(mask m1)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				if (i == 0 && j == 0)
				{
					cout<< 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
					cout << " ";

				}
				else if (i == 0 && j == columns-1)
				{
					cout<< 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + 1 * m1.arr[2][2];
					cout << " ";
				}
				else if (i == rows-1 && j == 0)
				{
					cout << 1 * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
					cout << " ";
				}
				else if (i == rows - 1 && j == columns - 1)
				{
					cout << arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
					cout << " ";
				}
				else if (i == 0 && j != 0 && j != columns - 1)
				{
					cout << 1 * m1.arr[0][0] + 1 * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j-1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + arr[i+1][j-1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
					cout << " ";
				}
				else if (i == rows - 1 && j != 0 && j != columns - 1)
				{
					cout << arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + arr[i][j-1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + 1 * m1.arr[2][1] + 1 * m1.arr[2][2];
					cout << " ";
				}

				else if (j == 0 && i != 0 && i != rows - 1)
				{
					cout << 1 * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + 1 * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + 1 * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
					cout << " ";
				}
				else if (j == columns - 1 && i != 0 && i != rows - 1)
				{
					cout << arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + 1 * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + 1 * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + 1 * m1.arr[2][2];
					cout << " ";
				}

				else
				{
					cout << arr[i - 1][j - 1] * m1.arr[0][0] + arr[i - 1][j] * m1.arr[0][1] + arr[i - 1][j + 1] * m1.arr[0][2] + arr[i][j - 1] * m1.arr[1][0] + arr[i][j] * m1.arr[1][1] + arr[i][j + 1] * m1.arr[1][2] + arr[i + 1][j - 1] * m1.arr[2][0] + arr[i + 1][j] * m1.arr[2][1] + arr[i + 1][j + 1] * m1.arr[2][2];
					cout << " ";
				}

				
			}
			cout << endl;
		}
	}
};
int main()
{
	mask m1(3, 3);
	cout << "Enter values for mask : " << endl;
	m1.set(3, 3);
	m1.get(3, 3);

	int rows, columns;
	cout << "Enter rows for image : ";
	cin >> rows;
	cout << "Enter columns for image : ";
	cin >> columns;

	Image i1(rows, columns);
	cout << "Enter values for Image : " << endl;
	i1.set(rows, columns);
	i1.get(rows, columns);
	cout << "Result : " << endl;
	i1.convolution(m1);
	return 0;

}