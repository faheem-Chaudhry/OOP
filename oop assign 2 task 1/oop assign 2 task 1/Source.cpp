                         // BSEF19M011            FAHEEM KHALID
#include<iostream>
#include<cmath>
#include"Point.h"
#include"transformationmatrix.h"
using namespace std;

int main()
{
	double x, y;
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	point p1(x, y);
	p1.getpoints();
	
	TransformationMatrix t1(2, 2);


	double shearX, shearY, scaleX, scaleY, theta;
	int flag = -1;
	                                            //1 for shear
	                                               //2 for rotation
	                                                  //3 for scaling

	cout << "Which operation do you need to perform? Enter 1 for shear, 2 for rotation, 3 for scaling " << endl;
	cin >> flag;
	if (flag == 1)
	{
		cout << "Enter the x shear factor: " << endl;
		cin >> shearX;
		cout << "Enter the y shear factor: " << endl;
		cin >> shearY;
		t1.shear(shearX, shearY);
	}
	else if (flag == 3)
	{
		cout << "Enter the x scaling factor: " << endl;
		cin >> scaleX;
		cout << "Enter the y scaling factor: " << endl;
		cin >> scaleY;
		t1.scaling(scaleX, scaleY);
	}
	else if (flag == 2)
	{
		cout << "Enter theta: " << endl;
		cin >> theta;
		t1.rotation(theta);
	}
	
	else
	{
		cout << "invalid choice" << endl;
	}
	cout << endl << "Desired answer after appplying multiply rule : " << endl;
	t1.transform(flag, p1);
	
	return 0;

}