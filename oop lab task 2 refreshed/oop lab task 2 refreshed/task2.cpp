#include<iostream>
using namespace std;
#include"C:\Users\Ch FAHEEM\Desktop\Source.cpp"
int main()
{
	int** arrA[4];
	int* arrB[4];

	libfile(arrA, arrB);
	cout << "address of arr A" << endl;
	for (int i = 0; i <= 3; i++)
	{
		cout << "arr A[" << i << "]=" << &arrA[i] << endl;
	}
	cout << endl;
	cout << "address of arr B" << endl;
	for (int i = 0; i <= 3; i++)
	{
		cout << "arr B[" << i << "]= " << &arrB[i] << endl;
	}
	cout << endl;
	cout << "Now content of arr A" << endl;
	for (int i = 0; i <= 3; i++)
	{
		cout << "arr A[" << i << "]=" << arrA[i] << endl;
		cout << "arr A[" << i << "]=" << arrA[i] << endl;
	}
	return 0;
}