                                             // BSEF19M011
                                            //  Ch.FAHEEM KHALID
#include<iostream>
using namespace std;
#include"primenumbergenerator1.h"
int main()
{
	primenumbergenerator1 p1;
	int a;
	int z;
	z = 2;
	for (int i = 0; ; i++)
	{
		cout << "Enter 1 if you want to reset " << endl;
		cout << "Enter 2 if you want next prime no " << endl;
		cout << "Enter -1 to get quit " << endl;
		cin >> a;
		if (a == -1)
		{
			break;
		}
		if(a==2)
		{
			p1.setnextprime(z);
			cout << "Counter value = " << p1.getnextprime() << endl;
			z++;
		}
		if (a == 1)
		{
			p1.reset(z);
			cout << "Counter value = " << p1.getreset() << endl;
			z = 2;
		}
	}
	return 0;
}
