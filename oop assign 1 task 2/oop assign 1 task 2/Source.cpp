                          // FAHEEM BSEF19M011
#include<iostream>
#include<string>
#include"Stringformatter.h"
using namespace std;
int main()
{
	int space;
	string para;
	cout << "Input the paragraph : " << endl;
	getline(cin, para);
	Stringformatter s1(para);
	cout << "Enter no. of characters per line : ";
	cin >> space;
	cout << endl;
	s1.printrightaligned(space);
	cout << endl;
	s1.printleftaligned(space);
	cout << endl;
	
	return 0;
}