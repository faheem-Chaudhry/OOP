                                // BSEF19M011
                               //  Ch.FAHEEM KHALID
#include "Rational.h"
Rational::Rational(int a, int b)
{
	p = a;
	q = b;
}
void Rational::set(int a, int b)
{
	if (b == 0)
	{
		b = 1;
	}
	q = b;
}
void Rational::show()
{
	cout << p << "/" << q << endl;
}
void Rational::simplify()
{
	while (p % 2 == 0 && q % 2 == 0)
	{
		p = p / 2;
		q = q / 2;
	}
	while (p % 3 == 0 && q % 3 == 0)
	{
		p = p / 3;
		q = q / 3;
	}
	while (p % 5 == 0 && q % 5 == 0)
	{
		p = p / 5;
		q = q / 5;
	}
	while (p % 7 == 0 && q % 7 == 0)
	{
		p = p / 7;
		q = q / 7;
	}
	while (p % 11 == 0 && q % 11 == 0)
	{
		p = p / 11;
		q = q / 11;
	}
	while (p % 13 == 0 && q % 13 == 0)
	{
		p = p / 13;
		q = q / 13;
	}
}
Rational Rational::add (Rational &r2)
{
	Rational temp;
	temp.p = (p * r2.q) + (r2.p * q);
	temp.q = q * r2.q;
	return temp;
}
Rational Rational::subtract(Rational& r2)
{
	Rational temp;
	temp.p = (p * r2.q) - (r2.p * q);
	temp.q = q * r2.q;
	return temp;
}
Rational Rational::mul(Rational& r2)
{
	Rational temp;
	temp.p = p * r2.p;
	temp.q = q * r2.q;
	return temp;
}
