                                                    // BSEF19M011
                                                   //  Ch.FAHEEM KHALID
#include<iostream>
using namespace std;
#include"Rational.h"
int main()
{	
	int nom, denom;
	cout << "Enter Nominator = ";
	cin >> nom;
	cout << "Enter Denominator = ";
	cin >> denom;
	cout << endl;
	Rational r1(nom, denom);                  //for 1st rational no.
	r1.set(nom, denom);
	cout << "Before simplificayion of 1st rational No. : ";
	r1.show();
	r1.simplify();
	cout << "After simplificayion of 1st rational No. : ";
	r1.show();
	cout << endl;

	int nom2, denom2;
	cout<<"Nominator 2 = ";
	cin >> nom2;
	cout << "Denominator 2 = ";
	cin >> denom2;
	cout << endl;
	Rational r2(nom2, denom2);                    //for 2nd rational no.
	r2.set(nom2, denom2);
	r2.simplify();
	cout << "After Simplification of 2nd rational No. : ";
	r2.show();
	cout << endl;

	Rational r3;                                //for addition
	r3 = r1.add(r2);
	r3.simplify();
	cout << "After addition : ";
	r3.show();
	cout << endl;
                                      // for subtraction
	r3 = r1.subtract(r2);
	r3.simplify();
	cout << "After subtraction : ";
	r3.show();
	cout << endl;
                                    // for multiplication
	r3 = r1.mul(r2);
	r3.simplify();
	cout << "After multiplication : ";
	r3.show();

	return 0;
}