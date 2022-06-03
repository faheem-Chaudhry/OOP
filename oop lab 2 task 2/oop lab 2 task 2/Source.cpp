#include<iostream>
using namespace std;
class circle
{
private:
	double radius;
	int orignx;
	int origny;
public:
	circle()
	{
		radius = 0;
		orignx = 0;
		origny = 0;
	}
	circle(int a, int b)
	{
		orignx = a;
		origny = b;
	}
	void setradius(double);
	double getradius();
};
void circle::setradius(double r)
{
	radius = r;
	
}
double circle::getradius()
{
	return radius;
}
int main()
{
	double radius, r1, r2, r3, r4;
	r1 = 4; r2 = 5; r3 = 7; r4 = 8;
	int a1=1, a2=1, b1=1, b2=2, e1=1, e2=1, d1=2, d2=2;
	cout << "Enter radius= ";
	cin >> radius;
	circle c1;
	double area, circumference, diameter;    //initial values for part a
	c1.setradius(radius);
	area = c1.getradius() * c1.getradius() * 3.14;
	cout << "area= " << area << endl;                    //area

	circumference = c1.getradius() * 2 * 3.14;
	cout << "Circumference= " << circumference << endl;               //circumference

	diameter = c1.getradius() * 2;
	cout << "Diameter= " << diameter << endl;

	double da1, da2, da3, da4;                  //initialization of diameter for part c
	circle c2(a1, a2);                           //parametrized constructor call
	c2.setradius(r1);
	da1 = c2.getradius() * 2;

	circle c3(b1, b2);                    //parametrized constructor call
	c3.setradius(r2);
	da2 = c3.getradius() * 2;

	circle c4(e1, e2);                            //parametrized constructor call
	c4.setradius(r3);
	da3 = c4.getradius() * 2;

	circle c5(d1, d2);                            //parametrized constructor call
	c5.setradius(r4);
	da4 = c5.getradius() * 2;
	cout << "diameter for circle 1 = " << da1 << endl;
	cout << "diameter for circle 2 = " << da2 << endl;
	cout << "diameter for circle 3 = " << da3 << endl;
	cout << "diameter for circle 4 = " << da4 << endl << endl;

	if (a1 == b1 && a2 == b2)                 //conditions check
	{
		cout << "Circle 1 and circle 2 are cocentric" << endl;
		if (r1 < r2)                         //label check
		{
			cout << "circle 1 has Label 1 and circle 2 has label 2" << endl;
		}
		else
		{
			cout << "circle 2 has Label 1 and circle 1 has label 2" << endl;
		}
		if (da1 > 12)
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
	}
	if (a1 == e1 && a2 == e2)             //in each condition we check concentric, label and diameter greater 12 
	{
		cout << "Circle 1 and circle 3 are cocentric" << endl;
		if (r1 < r3)                         //label check
		{
			cout << "circle 1 has Label 1 and circle 3 has label 2" << endl;
		}
		else
		{
			cout << "circle 3 has Label 1 and circle 1 has label 2" << endl;
		}
		if (da1 > 12)                        //diameter check
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}
	}
	if (a1 == d1 && a2 == d2)
	{
		cout << "Circle 1 and circle 4 are cocentric" << endl;
		if (r1 < r4)                         //label check
		{
			cout << "circle 1 has Label 1 and circle 4 has label 2" << endl;
		}
		else
		{
			cout << "circle 4 has Label 1 and circle 1 has label 2" << endl;
		}
		if (da1 > 12)
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}
	}
	if (e1 == b1 && e2 == b2)
	{
		cout << "Circle 2 and circle 3 are cocentric" << endl;
		if (r2 < r3)                         //label check
		{
			cout << "circle 2 has Label 1 and circle 3 has label 2" << endl;
		}
		else
		{
			cout << "circle 3 has Label 1 and circle 2 has label 2" << endl;
		}
		if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}
	}
	if (d1 == b1 && d2 == b2)
	{
		cout << "Circle 2 and circle 4 are cocentric" << endl;
		if (r2 < r4)                         //label check
		{
			cout << "circle 2 has Label 1 and circle 4 has label 2" << endl;
		}
		else
		{
			cout << "circle 4 has Label 1 and circle 2 has label 2" << endl;
		}
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}
		if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
	}
	if (e1 == d1 && e2 == d2)
	{
		cout << "Circle 3 and circle 4 are cocentric" << endl;
		if (r3 < r4)                         //label check
		{
			cout << "circle 3 has Label 1 and circle 4 has label 2" << endl;
		}
		else
		{
			cout << "circle 4 has Label 1 and circle 3 has label 2" << endl;
		}
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}
	}
	if (a1==b1==d1==e1&&a2==b2==e2==d2)
	{
		cout << "Circle 1 and circle 2 circle 3 circle 4 are cocentric" << endl;
		if (da1 > 12)
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}
		if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}
	}
	if (a1 == b1 ==e1 && a2 == b2 ==e2)
	{
		cout << "Circle 1 and circle 2 circle 3 are cocentric" << endl;
		if (da1 > 12)
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
		
	}
	if (a1 == b1 == d1 && a2 == b2 == d1)
	{
		cout << "Circle 1 and circle 2 circle 4 are cocentric" << endl;
		if (da1 > 12)
		{
			cout << "circle 1 diameter greater than 12" << endl;
		}
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
	}
	if ( d1== b1 == e1 && d2 == b2 == e2)
	{
		cout << "Circle 2 and circle 3 circle 4 are cocentric" << endl;
		if (da4 > 12)
		{
			cout << "circle 4 diameter greater than 12" << endl;
		}
		if (da3 > 12)
		{
			cout << "circle 3 diameter greater than 12" << endl;
		}if (da2 > 12)
		{
			cout << "circle 2 diameter greater than 12" << endl;
		}
	}
	return 0;
}