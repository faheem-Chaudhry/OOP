#include<iostream>
using namespace std;
#include"finduniquenumber.h"
#include"removerepititiveelements.h"

int main()
{
	int* marks; int size;
	cout << "Enter the size:" << endl;
	cin >> size;
	marks = new int[size];
	cout << "Enter elements:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> *marks;
	}
	takeInput(marks, size);
	return 0;
}