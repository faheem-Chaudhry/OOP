                     // BSEF19M011                 FAHEEM KHALID
#include<iostream>
#include"Mask.h"
#include"image.h"
using namespace std;
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