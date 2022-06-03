                            //BSEF19M011            FAHEEM
#include "Polynomial.h"
Polynomial::Polynomial(int a)
{
	
	array = new int[a];
	for (int i = 0; i <= a; i++)
	{
		array[i] = 0;
	}
	degree = a;
}
Polynomial::Polynomial(const Polynomial& p)
{
	degree = p.degree;
	array = new int[p.degree];
	for (int i = 0; i <= degree; i++)
	{
		array[i] = p.array[i];
	}
}
void Polynomial::display()
{
	for (int i = 0; i <= degree; i++)
	{
		cout << array[i] << endl;
		
	}
}
void Polynomial::set( int a,int ind, int coff)
{
	degree = a;
	array[ind] = coff;
}
Polynomial Polynomial:: operator +(Polynomial p2)
{
	Polynomial temp(degree);
	if (degree<=p2.degree)
	{
		for (int i = 0; i <= degree; i++)
		{
			temp.array[i] = array[i] + p2.array[i];		
		}
	}
	else if (p2.degree <= degree)
	{
		for (int i = 0; i <= p2.degree; i++)
		{
			temp.array[i] = array[i] + p2.array[i];
		}
	}
	return temp;	
}
Polynomial Polynomial:: operator -(Polynomial p2)
{
	Polynomial temp(degree);
	if (index == p2.index)
	{
		for (int i = 0; i <= degree; i++)
		{
			temp.array[i] = array[i] - p2.array[i];		
		}
	}
	return temp;

}
void Polynomial::operator +=(Polynomial p2)
{
	if (index == p2.index)
	{
		for (int i = 0; i <= degree; i++)
		{
			array[i] += p2.array[i];
		}
	}
}
void Polynomial::operator -=(Polynomial p2)
{
	if (index == p2.index)
	{
		for (int i = 0; i <= degree; i++)
		{
			array[i] -= p2.array[i];
		}
	}
}
 
