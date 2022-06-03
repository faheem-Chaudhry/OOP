               //   BSEF19M011               FAHEEM KHALID
#include "IsocelesTriangle1.h"
IsocelesTriangle::IsocelesTriangle(int s1, int s2, int s3, int a1, int a2, int a3)
{
	sid1 = s1;
	sid2 = s2;
	sid3 = s3;
	angl1 = a1;
	angl2 = a2;
	angl3 = a3;
}
void IsocelesTriangle::display()
{
	cout << "side 1 = " << sid1 << endl;
	cout << "side 2 = " << sid2 << endl;
	cout << "side 3 = " << sid3 << endl;
	cout << "angle 1 = " << angl1 << endl;
	cout << "angle 2 = " << angl2 << endl;
	cout << "angle 3 = " << angl3 << endl;
}
EquilateralTriangle::EquilateralTriangle(int s1, int s2, int s3, int a1, int a2, int a3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
	angle1 = a1;
	angle2 = a2;
	angle3 = a3;
}
void EquilateralTriangle::display1()
{
	cout << "side 1 = " << side1 << endl;
	cout << "side 2 = " << side2 << endl;
	cout << "side 3 = " << side3 << endl;
	cout << "angle 1 = " << angle1 << endl;
	cout << "angle 2 = " << angle2 << endl;
	cout << "angle 3 = " << angle3 << endl;
}
