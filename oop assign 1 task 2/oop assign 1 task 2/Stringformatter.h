                       // BSEF19M011 FAHEEM KHALID
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Stringformatter
{
private:
	string Paragraph;
	int val;
public:
	Stringformatter()
	{
		Paragraph = "";
	}
	Stringformatter(string);
	void printrightaligned(int);
	void printleftaligned(int);
};

