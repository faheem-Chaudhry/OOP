                               //FAHEEM KHALID BSEF19M011
#include "Stringformatter.h"
Stringformatter::Stringformatter(string a)
{
	Paragraph = a ;
}
void Stringformatter::printrightaligned(int s)
{
	int count;
	val = s;
	int z = 0;
	for (int k = 0; k < Paragraph.size(); k++)
	{
		count = 0;
		for (int i = 0; i <=  val*2 ; i++)
		{
			if (z == Paragraph.size() - 1)
			{
				break;
			}
			cout << " ";
		}
		for (int j = 1; j <= val; j++)
		{	
			if (z == Paragraph.size() - 1)
			{
				break;
			}

				cout << Paragraph[z];
			
				z++;
			
		}	
		if (z == Paragraph.size() - 1)
		{
			break;
		}
		cout << endl;
	}
}
void Stringformatter::printleftaligned(int s)
{
	val = s;
	int z = 0;
	for (int k = 1; k <= Paragraph.size(); k++)
	{
		
		for (int j = 0; j < val; j++)
		{
			if (z == Paragraph.size() - 1)
			{
				break;
			}
			cout << Paragraph[z];

			z++;
		}
		if (z == Paragraph.size() - 1)
		{
			break;
		}
		cout << endl;
	
	}
}
