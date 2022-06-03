#include<iostream>
using namespace std;
#include"Bag20.h"

int main()
{
	Bag20 b1;
	Bag20 b2;
	 int arr[20];
	 int insert;
	 cout << "****Enter the elements for two bags****" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter the value to insert in bag 1 : ";
		cin >> arr[i];
		
		if (arr[i] == -1)
		{
			break;
		}
		b1.insert(arr[i]);
	}
	b1.show();
	cout << "__________________________________________________" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter the value to insert in bag 2 : ";
		cin >> arr[i];

		if (arr[i] == -1)
		{
			break;
		}
		b2.insert(arr[i]);
	}
	b2.show();
	cout << endl;
	cout << "Enter the index at which value should be found in bag 2 array:";
	cin >> insert;
	cout << "value at index " << insert << " : " << b2.elementAt(insert);
	cout << endl;
	int f1;
	cout << "Enter the element whose frequency should be found in bag 2 array : ";
	cin >> f1;
	cout << "Frequency of " << f1 << " : " << b2.findFrequency(f1) << endl;
	int f2;
	cout << "Enter the element which should be removed from bag 2 array: ";
	cin >> f2;
	b2.delet(f2);
	b2.show();
	cout << endl;

	cout << "Equilibrium index of bag 2 : "<< b2.findEquilibriumIndex(b2);
	return 0;
}