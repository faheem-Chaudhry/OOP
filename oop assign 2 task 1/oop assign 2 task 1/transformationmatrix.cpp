                           // BSEF19M011            FAHEEM KHALID
#include "transformationmatrix.h"
TransformationMatrix::TransformationMatrix(int r, int c)                  // parametrized
{
	rows = r;
	columns = c;
	arr = new double* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new double[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = 0;
		}
	}
}
void TransformationMatrix::scaling(double scalingx, double scalingy)                              // setter
{

	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new double[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = scalingx;
			}
			if (i == 0 && j == 1)
			{
				arr[i][j] = 0;
			}
			if (i == 1 && j == 0)
			{
				arr[i][j] = 0;
			}
			if (i == 1 && j == 1)
			{
				arr[i][j] = scalingy;
			}
		}
	}
	cout << "Scaling Matrix = " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	x = scalingx;
	y = scalingy;
}
void TransformationMatrix::shear(double shearx, double sheary)                              // setter
{
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new double[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == 0 && j == 1)
			{
				arr[i][j] = shearx;
			}
			if (i == 1 && j == 0)
			{
				arr[i][j] = sheary;
			}
			if (i == 1 && j == 1)
			{
				arr[i][j] = 1;
			}
		}
	}
	cout << "Shear Matrix = " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	x = shearx;
	y = sheary;
}
void TransformationMatrix::rotation(double theeta)                              // setter
{

	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new double[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = cos(theeta);
			}
			if (i == 0 && j == 1)
			{
				arr[i][j] = -sin(theeta);
			}
			if (i == 1 && j == 0)
			{
				arr[i][j] = sin(theeta);
			}
			if (i == 1 && j == 1)
			{
				arr[i][j] = cos(theeta);
			}
		}
	}
	cout << "Rotation Matrix = " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	angle = theeta;
}

void TransformationMatrix::transform(int ii, point p)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (j == 0)
			{
				arr[i][j] = arr[i][j] * p.x;
			}
			if (j == 1)
			{
				arr[i][j] = arr[i][j] * p.y;
			}
		}

	}

	int j;
	for (int i = 0; i < rows; i++)
	{
		j = 0;

		cout << " " << arr[i][j] + arr[i][j + 1];

		cout << endl;
	}
}
