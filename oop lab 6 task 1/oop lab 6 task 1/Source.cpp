                                
                           //BSEF19M011               FAHEEM KHLID
#include<iostream>
#include"IsocelesTriangle1.h"
using namespace std;


int main()
{
	int sidee1;
	int sidee2;
	int sidee3;
	cout << "For equilateral Triangles : " << endl;
	cout << "Enter side for equilateral triangle : ";
	cin >> sidee1;
	
	EquilateralTriangle e1(sidee1, sidee1, sidee1, 60, 60, 60);
	cout << "equilateral triangle = " << endl;
	e1.display1();
	int s1, s2, s3;
	int a1, a2, a3;
	cout << "For isoceles Triangle : " << endl;
	cout << "Enter same sides : ";
	cin >> s1;
	
	cout << "Enter different side : "; 
	cin >> s3;
	cout << "Enter value for same angles  :";
	cin >> a1;
	
	cout << "Enter different angle :"; 
	cin >> a3;
	IsocelesTriangle i1, i2(s1, s1, s3, a1, a1, a3);
	cout << "Isoceles triangle = " << endl;
	i2.display();
	i1 = e1;
	cout << "Conversion from equilateral to isoceles " << endl;
	i1.display();
	return 0;

}