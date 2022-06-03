#pragma once
#include<iostream>
using namespace std;
                           //BSEF19M011         FAHEEM KHALID
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

};



