                                            // BSEF19M011
										   //  Ch.FAHEEM KHALID
#include "primenumbergenerator1.h"
void primenumbergenerator1::reset(int a1)
{
	a1 = 0;
	counter = a1;
}
int primenumbergenerator1::getreset()
{
	return counter;
}
void primenumbergenerator1::setnextprime(int a2)
{
	int i, j;
	for (i = 2; i <= a2; i++)
	{
		if (a2 == 2)
		{
			counter = 2;
			a2++;
			break;
		}
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				a2++;
				break;
			}
			else if (i == j + 1)
			{
				counter = i;
				break;
			}
		}
	}
}
int primenumbergenerator1::getnextprime()
{
	return counter;
}
