             //FAHEEM KHALID
             // BSEF19M011

#include "ArmyOfficers.h"
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
ArmyOfficers ArmyOfficers :: getHighestRank(ArmyOfficers a2)
{
	ArmyOfficers temp(id,rank);
	ArmyOfficers temp2;
	temp2 = a2;
	if (temp.rank > temp2.rank)
	{
		return temp;
	}
	if(temp.rank < temp2.rank)
	{
		return temp2;
	}

}