                //       BSEF19M011                 FAHEEM KHALID
#include "Matrix1.h"
Matrix::Matrix(int r, int c)                  // parametrized
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
void Matrix:: set(int ro, int cl)                              // setter
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
void Matrix::get(int r, int c)                           //  getter
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
void Matrix::get1()                           //  getter
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
Matrix Matrix :: operator +(Matrix m)                   //  addition
{
//	Matrix temp;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			arr[i][j]=arr[i][j] + m.arr[i][j];
		}
	}
	return *this;
}
Matrix Matrix :: operator -(Matrix& m)                // subtraction
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << arr[i][j] - m.arr[i][j] << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
Matrix Matrix :: operator *(int m)                     // multiplication with const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << arr[i][j] * m << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
Matrix Matrix :: operator ^(int m)                               //    power
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << pow(arr[i][j], m) << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
Matrix Matrix :: operator /(int m)                       // division
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << arr[i][j] / m << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
bool Matrix::operator > (Matrix& m)             //bool function
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] > m.arr[i][j])
			{
				return true;

			}
		//	else if (arr[i][j] == m.arr[i][j])
		//	{

		//	}
			else
			{
				return  false;
				break;
			}
		}
	}
}
bool Matrix::operator < (Matrix& m)          //     bool function
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < m.arr[i][j])
			{
				return true;

			}
	
			else
			{
				return  false;
				break;
			}
		}
	}
}
bool Matrix::operator >= (Matrix& m)                          //bool function
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] >= m.arr[i][j])
			{
				return  true;

			}

			else
			{
				return  false;
				break;
			}
		}
	}
}
bool Matrix::operator <= (Matrix& m)            //bool function
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] <= m.arr[i][j])
			{
				return  true;

			}

			else
			{
				return false;
				break;
			}
		}
	}
}
bool Matrix::operator == (Matrix& m)             // bool function
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] == m.arr[i][j])
			{
				return  true;

			}

			else
			{
				return false;
				break;
			}
		}
	}
}
Matrix Matrix::operator *(int array[])             //matrix - vector multiplication
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << arr[i][j] * array[j] << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
Matrix Matrix::operator *(Matrix& m)          //Matrix multiply
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << arr[i][j] * m.arr[i][j] << " ";
		}
		cout << endl;
	}
	return Matrix(rows, columns);
}
 Matrix::operator int()                 // constant first multiply
{
	 int pak;
	 cout << "Constant for multiplication :";
	 cin >> pak;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << pak *arr[i][j] << " ";
		}
		cout << endl;
	}
	return pak;
}