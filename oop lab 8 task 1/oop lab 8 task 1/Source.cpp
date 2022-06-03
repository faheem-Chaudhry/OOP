                //BSEF19M011         FAHEEM KHALID
#include<iostream>
#include<fstream>
using namespace std;
#include"ArmyOfficers.h"
int ranking[10];
void findHighRanks()
{
	int temp = 0;
	fstream f1;
	ArmyOfficers af[10];
	f1.open("ArmyOfficers.dat", ios::in | ios::binary);
	for (int i = 0; i < 10; i++)
	{
		f1.read((char*)&af[i], sizeof(af[i]));
		for (int j = 0; j < 10; j++)
		{
			if (af[i].getRank() <= af[j].getRank())
			
				temp++;
		}
		ranking[i] = temp;
		temp = 0;
		for (int j = 0; j < 10; j++)
		{

			if (ranking[i] == ranking[j])
			{

				ranking[j] = ranking[j] - 1;
			}
		}
		cout << "Ranking: " << ranking[i] << endl;
	}
	

	f1.close();

}
int main()
{
	ArmyOfficers a1[10];
	int id;
	int rank;
	fstream f;
	f.open("ArmyOfficers.dat", ios::out | ios::binary);
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter id of army officer " << i << " : ";
		cin >> id;
		cout << "Enter rank of army officer " << i << " : ";
		cin >> rank;
		a1[i].set(id, rank);
		cout << endl;
		f.write((char*)&a1[i], sizeof(a1[i]));
	}
	f.close();
	f.open("ArmyOfficers.dat", ios::in | ios::binary);
	for (int i = 0; i < 10; i++)
	{
		cout << "ID of army officer : " << a1[i].getId() << endl;
		cout << "RANK : " << a1[i].getRank() << endl;
	}

	f.close();
	findHighRanks();
	return 0;
}