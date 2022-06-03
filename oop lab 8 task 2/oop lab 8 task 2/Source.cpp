           // BSEF19M011                FAHEEM KHALID
#include<iostream>
#include<string>
#include"container.h"
using namespace std;
class ShippingContainer
{
private:
	int container_ID;
	string st;
public:
	ShippingContainer()
	{
		container_ID = 0;
		st = "";
	}
	void setID(int a)
	{
		container_ID = a;
	}
	int getID()
	{
		return container_ID;
	}
	virtual string getManifest()
	{
		return st;
	}
};
class ManualShippingContainer :public ShippingContainer
{
private:
	string store;
public:
	ManualShippingContainer()
	{
		store = "";
	}
	void setManifest(string b)
	{
		store = b;
	}
	string getManifest()
	{
		return (store);
	}
};
class RFIDShippingContainer:public ShippingContainer
{
private:
	string record;
public:
	RFIDShippingContainer()
	{
		record = "";
	}
	void add(string a)
	{
		record = a;
    }
	string getManifest()
	{
		return record;
	}
};
int main()
{
	ShippingContainer* s[6];
	ManualShippingContainer m[3];
	RFIDShippingContainer r[3];
	string a;
	int ID;
	for (int i = 0; i < 3; i++)
	{
		s[i] = &m[i];
	}
	for (int i = 3; i < 6; i++)
	{
		s[i] = &r[i-3];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter Container ID for ships " << i << " : ";
		cin >> ID;
		s[i]->setID(ID);
	}
	cin.ignore();
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter string for manual " << i << " :";
		getline(cin, a);
		m[i].setManifest(a);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter string for RFID " << i << " :";
		getline(cin, a);
		r[i].add(a);
	}
	for (int i = 0; i <= 5; i++)
	{

		cout <<s[i]->getID()<<" : "<< s[i]->getManifest() << endl;
	}
}