               // BSEF19M011                   FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class IsocelesTriangle
{
private:
	int sid1, sid2, sid3;
	int angl1, angl2, angl3;
public:
	IsocelesTriangle()
	{
		sid1 = 0;
		sid2 = 0;
		sid3 = 0;
		angl1 = 0;
		angl2 = 0;
		angl3 = 0;
	}
	IsocelesTriangle(int, int, int, int, int, int);
	void display();
};
class EquilateralTriangle
{
private:
	int side1, side2, side3;
	int angle1, angle2, angle3;
public:
	EquilateralTriangle()
	{
		side1 = 0;
		side2 = 0;
		side3 = 0;
		angle1 = 0;
		angle2 = 0;
		angle3 = 0;
	}
	EquilateralTriangle(int, int, int, int, int, int);
	operator IsocelesTriangle()
	{
		int sd1 = side1;
		int sd2 = side2;
		int sd3 = 0;
		int ag1 = angle1 + 30;
		int ag2 = angle2 + 30;
		int ag3 = 0;
		return IsocelesTriangle(sd1, sd2, sd3, ag1, ag2, ag3);
	}
	void display1();
};

