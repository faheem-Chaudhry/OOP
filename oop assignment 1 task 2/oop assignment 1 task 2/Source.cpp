#include<iostream>
#include<string>
#include"Stringformatter.h"
using namespace std;
int main()
{
	int space;
	string para;
	Stringformatter s1(para);
	cin >> space;
	s1.printleftaligned(space);
	s1.printrightaligned(space);

	return 0;
}