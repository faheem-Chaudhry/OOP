                               //       BSEF19M011                 FAHEEM KHALID 
#include<iostream>
#include"Matrix1.h"
using namespace std;

int main()
{
	int rows, columns;
	rows = 3;
	columns = 3;
	Matrix m1(rows, columns);
	m1.set(rows, columns);
	cout << endl << "***********Matrix 1**********" << endl;
	m1.get(rows,columns);
	Matrix m2(rows, columns);
	m2.set(rows, columns);
	cout << endl << "***********Matrix 2**********" << endl;
	m2.get(rows,columns);
	cout << endl << "*************Addition********" << endl;
	Matrix m3 = m1 + m2;
	m3.get1();
	cout << endl << "*************Subtraction********" << endl;
	m3 = m1 - m2;
	cout << endl << "*************Multiplication of array********" << endl;
	m3 = m1 * m2;
	cout << endl << "*************multiplication of array with vector********" << endl;
	int array[3];
	cout << "enter values for 1d array:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter [" << i << "] : ";
		cin >> array[i];
	}
	m3 = m1 * array;
	int c;
	cout << "Enter value for multiplication/power/division : ";
	cin >> c;
	cout << endl << "*************multiplication with constant********" << endl;
	m3 = m1 * c;
	cout << endl << "**************constant multiplication****************" << endl;
	int ccc;
	ccc =  m1;
	cout << endl << "*************Power********" << endl;
	m3 = m1 ^ c;
	cout << endl << "*************Division********" << endl;
	m3 = m1 / c;
	cout << endl << "*************Comparison********" << endl;
	cout << endl << " for m1 >m2" << endl;
	if (m1 > m2)
	{
		cout << "matrix 1 is greater";
	}
	else
	{
		cout << "no" << endl;
	}
	
	cout << endl << "for m1 < m2" << endl;
 	if (m1 < m2)
	{
		cout << "matrix 1 is less than m2 ";
	}
	else
	{
		cout << "No" << endl;
	}
	cout << endl << "For m1>=m2" << endl;
	if (m1 >= m2)
	{
		cout << "Matrix 1 is >= matrix 2";
	}
	else
	{
		cout << "No" << endl;
	}
	cout << endl;
	cout<<"For m1<=m2" << endl;
	if (m1 <= m2)
	{
		cout << "Matrix 1 is <= matrix 2";
	}
	else
	{
		cout<<"No" << endl;
	}
	cout << endl << "For m1==m2" << endl;
	 if (m1 == m2)
	{
		cout << "Matrix 1 is = matrix 2";
	}
	 else
	 {
		 cout << "Matrics are not equal";
	 }
	
	return 0;
}