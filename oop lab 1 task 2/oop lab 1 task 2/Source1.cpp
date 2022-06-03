#include<iostream>
using namespace std;
#include"C:\Users\Ch FAHEEM\Desktop\Source.cpp"
int main()
{
	int** arrA[4];
	int* arrB[4];
	for (int i = 0; i <= 3; i++)
	{
		cout << i << " " << &arrA[i] << endl;
	}
	for (int i = 0; i <= 3; i++)
	{
		cout << i << " " << &arrB[i] << endl;
	}
	libfile(arrA, arrB);
	for (int i = 0; i <= 3; i++)
	{
		cout << i << &arrA[i] << endl;
		}
	return 0;
}