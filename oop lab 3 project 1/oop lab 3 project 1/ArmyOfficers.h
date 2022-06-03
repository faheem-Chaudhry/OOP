                                               //FAHEEM KHALID
		                                    	 // BSEF19M011
#pragma once
#include<iostream>
using namespace std;
class ArmyOfficers
{
private:
	int id;
	int rank;
public:
	ArmyOfficers();
	ArmyOfficers(int, int);
	void set(int, int);
	int getId();
	int getRank();
	ArmyOfficers getHighestRank(ArmyOfficers);

};

