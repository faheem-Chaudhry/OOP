                                   // BSEF19M011            FAHEEM KHALID
#pragma once
#include<iostream>
using namespace std;
class point
{
private:
	double x;
	double y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	friend class TransformationMatrix;
	point(double xcor, double ycor);
	void getpoints();
};

