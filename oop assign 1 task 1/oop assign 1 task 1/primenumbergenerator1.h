                                                // BSEF19M011
                                               //  Ch.FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class primenumbergenerator1
{
private:
	int  counter;
public:
	primenumbergenerator1()
	{
		counter = 0;
	}
	void reset(int);
	int getreset();
	void setnextprime(int);
	int getnextprime();
};

