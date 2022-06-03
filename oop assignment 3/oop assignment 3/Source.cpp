#include<iostream>
#include<windows.h>
#include<conio.h>
int x_global;
int y_global;
int y_global2 = 0; int x_global2;
int x_check1; int x_check2; int y_check1; int y_check2; int x_check3; int x_check4; int y_check3; int y_check4;
int counter; int counter2; int counter3;
#define KEY_UP 72

#define KEY_DOWN 80

#define KEY_LEFT 75

#define KEY_RIGHT 77

using namespace std;

class Spaceship              
{
protected:
	int xcor;
	int ycor;
public:
	Spaceship()
	{
		xcor = 0;
		ycor = 0;
	}
	virtual void draw() = 0;
	virtual void fire_set()
	{

	}
	virtual void fire_get()
	{

	}
	virtual void move()
	{

	}
	virtual void check()
	{

	}
};
class Martian :public Spaceship
{
private:
	string martian; int w; int x; int y;
public:
	Martian()
	{
		w = 0;
		y = 0;
		x = 0;
		martian = "";
	}
	Martian(int xm, int ym)
	{
		xcor = xm;
		ycor = ym;
		w = xm;
	}
	void draw()
	{
		martian = "`~~`~~`";
	}
	void move()
	{
		HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD CH;
		CH.X = xcor;
		CH.Y = ycor;
		SetConsoleCursorPosition(faheem, CH);
		cout << martian;
		w++;
		if (w == 95)
		{
			
			xcor = xcor - 2;
			if (xcor != 1)
			{
				w = 94;
			}
			if (xcor == 1)
			{
				w = 1;
			}
		}
		xcor++;
		x_check1 = xcor;
		y_check1 = ycor;
	}
	void fire_set()
	{
		x = xcor;
		y = ycor;

	}
	void fire_get()
	{
		HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD CH;
		CH.X = x;
		CH.Y = y;
		SetConsoleCursorPosition(faheem, CH);
		cout << "!";
		x_check3 = x;
		y_check3 = y;
		y++;
	}
	
};

class Star :public Spaceship
{
private:
	string star; int w; int x; int y;
public:
	Star()
	{
		w = 0;
		x = 0;
		y = 0;
		star = "";
	}
	Star(int xs, int ys)
	{
		xcor = xs;
		ycor = ys;
		w = xs;
	}
	void draw()
	{
		star = "';:;'";
	}
	void move()
	{
		
		HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD CH;
		CH.X = xcor;
		CH.Y = ycor;
		SetConsoleCursorPosition(faheem, CH);
		cout << star;
		//			system("CLS");
		w--;
		if (w == 1)
		{
			
			xcor = xcor + 2;
			if (xcor != 100)
			{
				w = 2;
			}
			if (xcor == 100)
			{
				w = 100;
			}

		}
		xcor--;
		x_check2 = xcor;
		y_check2 = ycor;
	}
	void fire_set()
	{
		x = xcor;
		y = ycor;

	}
	void fire_get()
	{
		HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD CH;
		CH.X = x;
		CH.Y = y;
		SetConsoleCursorPosition(faheem, CH);
		cout << "!";
		x_check4 = x;
		y_check4 = y;
		y++;
	}
};
class Rocket :public Spaceship
{
protected:
	string rocket;
	int xroc;
	int yroc;
	char c;
public:
	Rocket()
	{
		xroc = 0;
		yroc = 0;
		rocket = "";
	}
	void draw()
	{
		rocket = "[{~~}]";
		xroc = 25;
		yroc = 28;
	}
	void move()
	{


		HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD CH;
		CH.X = xroc;
		CH.Y = yroc;
		SetConsoleCursorPosition(faheem, CH);
		cout << rocket;
		c = _getch();
		if (c == KEY_UP && yroc > 9)
		{
			yroc--;
		}
		else if (c == KEY_DOWN && yroc < 32)
		{
			yroc++;
		}
		else if (c == KEY_LEFT)
		{
			xroc--;
		}
		else if (c == KEY_RIGHT && xroc < 99)
		{
			xroc++;
		}
		else
		{
			//	system("CLS");
		}
		x_global = xroc;
		y_global = yroc;
	
	}
	void check()

	{
		if ((x_check3 == xroc && y_check3 == yroc) || (x_check3 == xroc + 1 && y_check3 == yroc) || (x_check3 == xroc + 2 && y_check3 == yroc) || (x_check3 == xroc + 3 && y_check3 == yroc) || (x_check3 == xroc + 4 && y_check3 == yroc) || (x_check3 == xroc + 5 && y_check3 == yroc))
		{
			counter++;
		}
		if ((x_check4 == xroc && y_check4 == yroc) || (x_check4 == xroc + 1 && y_check4 == yroc) || (x_check4 == xroc + 2 && y_check4 == yroc) || (x_check4 == xroc + 3 && y_check4 == yroc) || (x_check4 == xroc + 4 && y_check4 == yroc) || (x_check4 == xroc + 5 && y_check4 == yroc))
		{
			counter++;
		}
	}
};
class Fire :public Spaceship, public Rocket
{
private:
	char f;
	string fire;
	int xfir;
	int yfir;
public:
	Fire()
	{
		xfir = 0;
		yfir = 0;
		fire = "";
		f = 0;
	}
	void draw()
	{
		fire = "!";
	}

	void move()
	{
		xfir = x_global;
		f = _getch();
		if (f == 'f')
		{
			xfir = x_global;
			yfir = y_global;
			y_global2 = yfir;
			for (int i = 0; i <= 30; i++)
			{
				HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
				COORD CH;
				CH.X = xfir;
				CH.Y = yfir;
				SetConsoleCursorPosition(faheem, CH);
				cout << fire;
				yfir--;
				if (yfir == 1)
				{
					break;
				}
				if ((xfir == x_check1 && yfir == y_check1) || (xfir == x_check1 + 1 && yfir == y_check1) || (xfir == x_check1 + 2 && yfir == y_check1) || (xfir == x_check1 + 3 && yfir == y_check1))
				{
					counter2++;
					break;
				}
				if ((xfir == x_check2 && yfir == y_check2) || (xfir == x_check2 + 1 && yfir == y_check2) || (xfir == x_check2 + 2 && yfir == y_check2) || (xfir == x_check2 + 3 && yfir == y_check2))
				{
					counter3++;
					break;
				}
	
			}
			x_global2 = xfir;
		}


	}


};
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
		cout<<"\n\n\n PRess 's' key to Start the Game:";

		if (_getch() == 's')
		{
		 do{
			counter = 0;
			counter2 = 0;
			counter3 = 0;
			int counter4 = 0;
			int counter5 = 0;
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
					cout << "Zindagi Left : " << 3 - counter    << ".     Score : " << (counter2 * 5) + (counter3 * 3) << endl;

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

		 }while (counter == 3);
		 system("CLS");
	    }cout << "You won the game";
	
}

















