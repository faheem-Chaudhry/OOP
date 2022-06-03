                                               //BSEF19M011
                                              // Ch.FAHEEM KHALID
#include "Element.h"
int Element::size = 0;
int Element::alpha = 0;
int Element::beta = 0;
void Element::setVal(int ID, int alpha, int beta)
{
	this->ID = ID;
	this->alpha = alpha;
	this->beta = beta;
}
void Element::setpointer()
{
	if (this->alpha == 1)
	{
		this->pointer = &alpha;
	}
	else if (this->beta == 1)
	{
		this->pointer = &beta;
	}
}
 int Element::getsize()
{
	 return size;
}
int Element::getID()
{
	return ID;
}
void Element::getalpha()
{
	cout << "Alpha = " << &alpha << endl;
}
void Element::getbeta()
{
	cout << "Beta = " << &beta << endl;
}
void Element::printPointerAddress(Element e)
{
	e.pointer = this->pointer;
	cout << "pointer address : " << e.pointer << endl;
}
