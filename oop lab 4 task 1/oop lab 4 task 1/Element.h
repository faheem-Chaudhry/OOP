                                   //BSEF19M011
								  // Ch.FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class Element
{
private:
	int ID;
	int* pointer;
	static int size;
	static int alpha;
	static int beta;
public:
	Element()
	{
		ID = 0;
		pointer = nullptr;
		size++;
	}
	void setVal(int, int, int);
	void setpointer();
	static int getsize();
	int getID();
	void getalpha();
	void getbeta();
	void printPointerAddress(Element);
};

