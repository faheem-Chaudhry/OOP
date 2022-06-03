                     // BSEF19M011          Ch.FAHEEM KHALID
#include"game.h"
#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
 int x_global;                              //global variables
 int y_global;
 int y_global2;
 int x_global2;
 int x_check1; int x_check2;
 int y_check1; int y_check2;
 int x_check3; int x_check4;
 int y_check3; int y_check4;
 int counter;
 int counter2;
 int counter3;


using namespace std;

int main()
{
	cout << "\n\n\n\t\t\tWELCOME TO MY SPACE FIRING GAME.";
	cout << "\n\t\t\t\t  Powered by 'FK'Sports";
	cout << "\n\n\n\n\t\tGame Rules : \n\n\t\t\t Martian Spaceship = `~~`~~`\n\t\t\t Star Spaceship = ';:;'\n\t\t\t Rocket = [{~~}]";
	cout << "\n\n\t\t\tWhen you fire Martian Spacehip you Got 5 points";
	cout << "\n\t\t\tWhen you fire Star Spacehip you Got 3 points";
	cout << "\n\n\t\t\tWhen you fire 5 fires MArtian Spaceship Destroyed";
	cout << "\n\t\t\tWhen you fire 3 fires Star Spaceship Destroyed";
	cout << "\n\n\n\t\tYou only won game when you destroy all Spaceship";
	cout << "\n\t\tYou only have three lives othervise game will be restart";
	cout << "\n\n\n PRess 's' key to Start the Game:";

	if (_getch() == 's')
	{
		do {
			counter = 0;               //global variables counter,counter2,counter3
			counter2 = 0;
			counter3 = 0;
			int counter4 = 0;            
			int counter5 = 0;
			system("CLS");
			Spaceship* s1, * s2, * s3, * s4, * s5, * s6;              //Abstract class
			Martian m1(20, 6);             //derived class object m1 and m2
			Martian m2(1, 2);
			Star t1(100, 4);                //derived class object t1 and t2
			Star t2(70, 8);
			Rocket r1;
			Fire f1;
			s1 = &m1;
			s2 = &t1;                
			s3 = &r1;
			s4 = &f1;
			s5 = &m2;
			s6 = &t2;

			s1->draw();              //calling of pure virtual functions
			s2->draw();
			s3->draw();
			s4->draw();
			s5->draw();
			s6->draw();


			for (int i = 0; ; i++)
			{

				for (int j = 0; j <= 30; j++)
				{
					if (counter2 >= 5)
					{
						counter4 = counter2;
					}
					if (counter3 >= 3)
					{
						counter5 = counter3;
					}
					cout << "Zindagi Left : " << 3 - counter << ".     Score : " << (counter2 * 5) + (counter3 * 3) << endl;

					for (int k = 0; k <= 1; k++)
					{                                  
						{
							for (int i = 0; i <= 102; i++)
							{
								cout << "_";            //designing boundry of game

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

					if (counter4 < 10)
					{
						s1->move();                 
						s1->fire_get();
					}
					if (counter5 < 6)
					{
						s2->move();
						s2->fire_get();
					}
					s3->check();

					if (counter2 < 5)
					{
						s5->move();
						s5->fire_get();
					}
					if (counter3 < 3)
					{
						s6->move();
						s6->fire_get();
					}
					if (counter2 < 5 || counter3 < 3)
					{
						s3->check();
					}

					s4->move();

					system("CLS");
					if (counter == 3)
					{
						system("CLS");
						cout << "You lost the game.          Now game will be restart.";
						break;
					}
					if (counter4 >= 9 && counter5 >= 5)
					{
						break;
					}
					x_global = 0;
					y_global = 0;
					x_check1 = 0;
					x_check2 = 0;
					y_check1 = 0;
					y_check2 = 0;
					x_check3 = 0;
					x_check4 = 0;
					y_check3 = 0;
					y_check4 = 0;
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
					system("CLS");
					cout << "You lost the game.          Now game will be restart.";
					break;

				}
				if (counter4 >= 9 && counter5 >= 5)
				{
					break;
				}
			}

		} while (counter == 3);
		system("CLS");
	}cout << "\n\n\n\t\tYou won the game";

}