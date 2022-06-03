#include<iostream>
#include<cmath>
#include"clintA.h"
#include"clintB.h"
using namespace std;
int main()
{
	char ch = 0;
	do
	{
		double a;
		cout << "enter 1st input=";
		cin >> a;
		double b;
		cout << "input 2nd input=";
		cin >> b;
		cout << "press 1 for add" << endl;
		cout << "press 2 for sub" << endl;
		cout << "press 3 for div" << endl;
		cout << "press 4 for mul" << endl;
		cout << "press 5 for mod" << endl;
		cout << "press 6 for power" << endl;
		cout << "press 7 for sqrt" << endl;
		cout << "press 8 for sin" << endl;
		cout << "press 9 for cos" << endl;
		cout << "press 10 for tan" << endl;
		int A;
		cin >> A;
		switch (A)
		{
		case 1:
			double sum;
			sum = add(a, b);
			cout << "sum=" << sum;
			break;
		case 2:
			double sub;
			sub = subtract(a, b);
			cout <<"sub="<< sub;
			break;
		case 3:
			double division;
			division = divide(a, b);
			cout << "div="<<division;
			break;
		case 4:
			double mul;
			mul = multiply(a, b);
			cout <<"mul="<< mul;
			break;
		case 5:
			double mod;
			mod = takemod(a, b);
			cout <<"mod="<< mod;
			break;
		case 6:
			double power;
			power = takepower(a, b);
			cout << "power="<< power;
			break;
		case 7:
			double sqrt;
			sqrt = takesquareroot(a);
			cout <<"sqrt="<< sqrt;
			break;
		case 8:
			double sin;
			sin = takesin(a);
			cout <<"sin="<< sin;
			break;
		case 9:
			double cos;
			cos = takecos(a);
			cout <<"cos="<< cos;
			break;
		case 10:
			double tan;
			tan = taketan(a);
			cout << "tan="<< tan;
			break;

		}
		cout << "     if you want to continue press y else press any key";
		cin >> ch;
	} while (ch == 'y'|| ch=='Y');
	return 0;
}