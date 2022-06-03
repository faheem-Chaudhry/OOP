#include "Stringformatter.h"
#include<string>
Stringformatter::Stringformatter(string a)
{
	getline(cin, a);
	Paragraph = a;
}
void Stringformatter::printrightaligned(int s)
{
	val = s;
	int z = 0;
	for (int k = 0; k < 12; k++)
	{
		for (int i = 0; i <= 119 - val; i++)
		{
			cout << " ";
		}
		for (int j = 0; j < val; j++)
		{
			cout << Paragraph[z];
			z++;
		}
	}
}
void Stringformatter::printleftaligned(int s)
{
	val = s;
	int z = 0;
	for (int k = 0; k < 12; k++)
	{

		for (int j = 0; j < val; j++)
		{
			cout << Paragraph[z];
			z++;
		}
		for (int i = 0; i <= 119 - val; i++)
		{
			cout << " ";
		}
	}
}
