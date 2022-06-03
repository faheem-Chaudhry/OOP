                                   //FAHEEM KHALID
			                       // BSEF19M011
#include<iostream>
using namespace std;
#include"ArmyOfficers.h"
int main()
{
	ArmyOfficers a1;                       //object a1
	int id;
	int rank;
	cout << "Enter id of army officer : ";
	cin >> id;
	cout << "Enter rank of army officer : ";
	cin >> rank;
	a1.set(id, rank);
	cout << endl;

	ArmyOfficers a2(10,4);                   //hardcorded object a2
	cout <<"ID of army officer(Hardcorded) : "<< a2.getId() << endl;
	cout << "RANK(Hardcorded) : "<<a2.getRank() << endl;

	cout << endl;
	cout << "__________________________________" << endl;
	cout << endl;

	a1.getHighestRank(a2);                 
	cout << "ID of highest rank officer : "<< a1.getHighestRank(a2).getId() << endl;
	cout <<"RANK : "<< a1.getHighestRank(a2).getRank() << endl;

	return 0;
}