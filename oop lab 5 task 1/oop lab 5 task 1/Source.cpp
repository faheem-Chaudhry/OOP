                //BSEF19M011             FAHEEM KHALID
#include<iostream>
#include"Polynomial.h"
using namespace std;
int main()
{
//	int* array;
	int degree;
	cout << "Enter degree of polynomial for p1: ";
	cin >> degree;
	int cofficient ;
	int index;
	Polynomial p1(degree);
	
	for (int i = 0; i <= degree; i++)
	{
			cout << "Enter cofficient for index [" << i << "] = ";
			cin >> cofficient;
			p1.set(degree, i, cofficient);
	}
	int degree2;
	cout << "Enter degree of polynomial for p2: ";
	cin >> degree2;
	Polynomial p2(degree2);
	for (int i = 0; i <= degree2; i++)
	{
		cout << "Enter cofficient for index [" << i << "] = ";
		cin >> cofficient;
		p2.set(degree2, i, cofficient);
	}
	p1.display();
	p2.display();
	Polynomial p3 = p1;
	p3.display();
	Polynomial p4 = p1 + p2;
	p4.display();
	return 0;
}