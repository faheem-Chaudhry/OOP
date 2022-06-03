                            // BSEF19M011         FAHEEM KHALID
#include "Circle.h"
Circle::Circle(int x, int y, int dia, int red, int blue, int green)
{
	centrex = x;
	centrey = y;
	diametre = dia;
	redcolorVal = red;
	bluecolorVal = blue;
	greencolorVal = green;
}
Circle::Circle(const Circle& c2)
{
	centrex = c2.centrex;
	centrey = c2.centrey;
	diametre = c2.diametre;
	redcolorVal = c2.redcolorVal;
	bluecolorVal = c2.bluecolorVal;
	greencolorVal = c2.greencolorVal;
}
Circle Circle::operator +(Circle c2)                 //operator
{
	int diam;
	diam= diametre + c2.diametre;
	return Circle(0,0 , diam,253 ,253 , 253);
}
void Circle::moveup(int y)
{
	centrey = centrey + y;
}
void Circle::movedown(int y)
{
	centrey = centrey - y;
}
void Circle::moveleft(int x)
{
	centrex = centrex - x;
}
void Circle::moveright(int x)
{
	centrex = centrex + x;
}
void Circle::check(Circle c1, Circle c2, Circle c3, Circle c4)           //check concentric
{
	if (c1.centrex == c2.centrex == c3.centrex == c4.centrex && c1.centrey == c2.centrey == c3.centrey == c4.centrey)
	{
		cout << "Circle 1 ,Circle 2,Circle 3 and circle 4 are cocentric" << endl;
	}
		else if (c1.centrex == c2.centrex == c3.centrex && c1.centrey == c2.centrey == c3.centrey)
	{
		cout << "Circle 1 ,Circle 2,Circle 3 are cocentric" << endl;
	}
	else if (c1.centrex == c2.centrex == c4.centrex && c1.centrey == c2.centrey == c4.centrey)
	{
		cout << "Circle 1 ,Circle 2,Circle 4 are cocentric" << endl;
	}
	else if (c4.centrex == c2.centrex == c3.centrex && c4.centrey == c2.centrey == c3.centrey)
	{
		cout << "Circle 2 ,Circle 3,Circle 4 are cocentric" << endl;
	}
	else if (c1.centrex == c2.centrex && c1.centrey == c2.centrey )
	{
		cout << "Circle 1 ,Circle 2 are cocentric" << endl;
	}
	else if (c1.centrex == c3.centrex && c1.centrey == c3.centrey)
	{
		cout << "Circle 1 ,Circle 3 are cocentric" << endl;
	}
	else if (c1.centrex == c4.centrex && c1.centrey == c4.centrey)
	{
		cout << "Circle 1 ,Circle 4 are cocentric" << endl;
	}
	else if (c3.centrex == c2.centrex && c3.centrey == c2.centrey)
	{
		cout << "Circle 2 ,Circle 3 are cocentric" << endl;
	}
	else if (c4.centrex == c2.centrex && c4.centrey == c2.centrey)
	{
		cout << "Circle 2 ,Circle 4 are cocentric" << endl;
	}
	else if (c3.centrex == c4.centrex && c3.centrey == c4.centrey)
	{
		cout << "Circle 3 ,Circle 4 are cocentric" << endl;
	}
	else
	{
		cout << "Not any Circle is cocentric ." << endl;
	}

}
int Circle::getxcor()
{
	return centrex;
}
int Circle::getycor()
{
	return centrey;
}
int Circle::getradius()
{
	return(diametre / 2);
}
int Circle::getred()
{
	return redcolorVal;
}
int Circle::getblue()
{
	return bluecolorVal;
}
int Circle::getgreen()
{
	return greencolorVal;
}
