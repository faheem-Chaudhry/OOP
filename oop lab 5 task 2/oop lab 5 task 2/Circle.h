                               // BSEF19M011         FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class Circle
{
private:
	int centrex;
	int centrey;
	int diametre;
	int redcolorVal;
	int bluecolorVal;
	int greencolorVal;
public:
	Circle()
	{
		centrex = 0;
		centrey = 0;
		diametre = 0;
		redcolorVal = 0;
		bluecolorVal = 0;
		greencolorVal = 0;
	}
	Circle(int, int, int, int, int, int);
	Circle(const Circle&);
	Circle operator +( Circle);
	void moveup(int);
	void movedown(int);
	void moveleft(int);
	void moveright(int);
	void check(Circle, Circle, Circle, Circle);
	int getxcor();
	int getycor();
	int getradius();
	int getred();
	int getblue();
	int getgreen();

};

