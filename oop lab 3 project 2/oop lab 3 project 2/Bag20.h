#pragma once
#include<iostream>
using namespace std;
class Bag20
{
private:
   static int arr[20];
   int size;
public:
	Bag20();
	void insert(int);
	void show();
	int elementAt(int);
	int findFrequency(int);
	void delet(int);
	int findEquilibriumIndex(Bag20);
};

