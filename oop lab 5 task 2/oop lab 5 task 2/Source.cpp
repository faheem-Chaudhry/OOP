                  // BSEF19M011         FAHEEM KHALID
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include"Circle.h"
using namespace cv;
using namespace std;
int main()
{
	// Read the image file
	Mat image = imread("D:/murree/New folder/IMG_4921.JPG");
	// Check for failure
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}
	Circle cir1(350, 150, 160, 230, 31, 31);
	Circle cir2(450, 42, 70, 76, 153, 0);
	Circle cir3(100, 80, 90, 31, 204, 230);
	Circle cir4(500, 200, 100, 197, 31, 230);
	Circle cir5;
	cir5 = cir1 + cir3;                     // operator overloading
	cir1.moveup(1);
	cir2.movedown(1);
	cir3.moveleft(1);
	cir4.moveright(1);
	cir1.check(cir1, cir2, cir3, cir4);           //check concentric
	
	String windowName = "OpenCV Test"; //Name of the window
	namedWindow(windowName); // Create a window
	imshow(windowName, image); // Show our image inside the created window.
	waitKey(0); // Wait for any keystroke in the window
	destroyWindow(windowName); //destroy the created window
	//Mat image = Mat::zeros(300, 600, CV_8UC3);
	//draw a circle
//	circle(image, Point(350, 150), 100, Scalar(231, 123, 255), -100);


circle(image, Point(cir1.getxcor(),cir1.getycor()), cir1.getradius(), Scalar(cir1.getblue(), cir1.getgreen(), cir1.getred()), 20);
circle(image, Point(cir2.getxcor(), cir2.getycor()), cir2.getradius(), Scalar(cir2.getblue(), cir2.getgreen(), cir2.getred()), 30);
circle(image, Point(cir3.getxcor(), cir3.getycor()), cir3.getradius(), Scalar(cir3.getblue(), cir3.getgreen(), cir3.getred()), 5);
circle(image, Point(cir4.getxcor(), cir4.getycor()), cir4.getradius(), Scalar(cir4.getblue(), cir4.getgreen(), cir4.getred()), 10);
	//show the circle to window
	imshow("OOP Lab Task 5", image);
	waitKey(0);
	return 0;
}