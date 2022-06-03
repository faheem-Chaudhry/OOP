                                    //BSEF19M011
                                   // Ch.FAHEEM KHALID
#include<iostream>
using namespace std;
#include"Element.h"
int main()
{
	int n;
	int id, alpha, beta;
	cout << "Enter the number of elements : ";
	cin >> n;
	Element* p;
	p = new Element[n];
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter the id for element " << i << ": ";
		cin >> id;
		if (id % 2 == 0)
		{
			alpha = 1;
			beta = 0;
			p[i].setVal(id, alpha, beta);
			p[i].setpointer();
		}
		else
		{
			alpha = 0;
			beta = 1;
			p[i].setVal(id, alpha, beta);
			p[i].setpointer();
		}
	}
	p->getalpha();
	p->getbeta();
	cout << endl;
	cout << "_____________________________________________" << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "Element # " << i << endl;
		cout << "ID = " << p[i].getID() << endl;
		p[i].printPointerAddress(p[i]);
		cout << "Size = " << p[i].getsize() << endl;
		cout << "________________________________________________" << endl << endl;
	}
	return 0;
}