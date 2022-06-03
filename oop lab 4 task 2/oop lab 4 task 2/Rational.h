                               // BSEF19M011
							  //  Ch.FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class Rational
{
private:
	int p, q;
public:
	Rational()
	{
		p = 0;
		q = 0;
	}
	Rational(int, int);
	void set(int, int);
	void show();
	void simplify();
	Rational add(Rational&);
	Rational subtract(Rational&);
	Rational mul(Rational&);
};

