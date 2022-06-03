                              //BSEF19M011         FAHEEM KHALID
#include "ArmyOfficers.h"
#include<fstream>
ArmyOfficers::ArmyOfficers()
{
	id = 0;
	rank = 0;
}
ArmyOfficers::ArmyOfficers(int a, int b)
{
	id = a;
	rank = b;
}
void ArmyOfficers::set(int ID, int RANK)
{
	id = ID;
	rank = RANK;
}
int ArmyOfficers::getId()
{
	return id;
}
int ArmyOfficers::getRank()
{
	return rank;
}

