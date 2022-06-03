//#include"C:\Users\Ch FAHEEM\Desktop\ffffffffffffff\a3.cpp"
#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
#include"game.cpp"
#include"game.h"


using namespace std;

int main()
{
	cout << "WELCOME TO MY SPACE FIRING GAME.\n PRess any key to contiue:";
	_getch();
	system("CLS");
	Spaceship* s1, * s2, * s3, * s4, * s5, * s6;
	Martian m1(20, 6);
	Martian m2(1, 2);
	Star t1(100, 4);
	Star t2(70, 8);
	Rocket r1;
	Fire f1;
	s1 = &m1;
	s2 = &t1;
	s3 = &r1;
	s4 = &f1;
	s5 = &m2;
	s6 = &t2;

	s1->draw();
	s2->draw();
	s3->draw();
	s4->draw();
	s5->draw();
	s6->draw();

	for (int i = 0; i < 1000; i++)
	{

		for (int j = 0; j <= 30; j++)
		{
			cout << "Zindagi Left : " << 3 - counter << ".  Score : " << (counter2 * 10) + (counter3 * 5) << endl;

			for (int k = 0; k <= 1; k++)
			{

				{
					for (int i = 0; i <= 100; i++)
					{
						cout << "~";
					}
				}
				if (k == 0)
				{
					for (int j = 0; j < 32; j++)
					{
						cout << endl;
					}
				}

			}


			s3->move();
			//	s4->move();
			s1->move();
			s2->move();
			s1->fire_get();
			s2->fire_get();
			s3->check();
			//	s4->check();

			s5->move();
			s6->move();
			//	m1.check(m2);			            
			s5->fire_get();
			s6->fire_get();
			s3->check();
			//	s4->check();
			//	s3->move();
			s4->move();

			system("CLS");
			if (counter == 3)
			{
				break;
			}
			x_global = 0;
			y_global = 0;
			x_check1 = 0;
			x_check2 = 0;
			y_check1 = 0;
			y_check2 = 0;
			y_global2--;
		}
		y_global2 = 0;
		x_global2 = 0;
		s1->fire_set();
		s2->fire_set();

		s5->fire_set();
		s6->fire_set();

		if (counter == 3)
		{
			break;
		}
	}
	system("CLS");
	cout << "You lost the game";
	return 0;
}