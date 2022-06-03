#include<iostream>
#include<thread>
#include<windows.h>
#include<conio.h>
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
	virtual void fire()
	{

	}
	virtual void move()
	{

	}
};
class Martian:public Spaceship
{
private:
	string martian; int w;
public:
	Martian()
	{
		w = 0;
	}
	void draw()
	{
		martian = "####";
	}
	void move()
	{
		
	//	do {
	//		w++;
		//	ycor++;
		//	for (int i = 0; i < 100; i++)
		//	{
				HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
				COORD CH;
				CH.X = xcor;
				CH.Y = ycor;
				SetConsoleCursorPosition(faheem, CH);
				cout << martian;
				system("CLS");
				w++;
				if (w == 95)
				{
			//		for (int j = 0; j < 100; j++)
			//		{
					
			//			HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
			//			COORD CH;
			//			CH.X = xcor;
			//			CH.Y = ycor;
			//			SetConsoleCursorPosition(faheem, CH);
			//			cout << martian;
			//			system("CLS");
						xcor = xcor - 2;
			//		}
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
		//	}
	//	} while (w = 10);
	}
};
class Star :public Spaceship
{
private:
	string star;
public:
	Star()
	{
		xcor = 100;
		ycor = 2;
	}
	void draw()
	{
		star = "***";
	}
	void move()
	{
		int w = 0;
	//	do {
	//		w++;
		//	ycor++;
	//		for (int i = 0; i < 100; i++)
	//		{
				HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
				COORD CH;
				CH.X = xcor;
				CH.Y = ycor;
				SetConsoleCursorPosition(faheem, CH);
				cout << star;
				system("CLS");
				xcor--;
				if (xcor == 0)
				{
					for (int j = 0; j < 100; j++)
					{

						HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
						COORD CH;
						CH.X = xcor;
						CH.Y = ycor;
						SetConsoleCursorPosition(faheem, CH);
						cout << star;
						system("CLS");
						xcor++;
					}

				}
	//		}
//		} while (w = 10);
	}
};
int main()
{
	cout << "WELCOME TO MY SPACE FIRING GAME.\n PRess any key to contiue:";
	_getch();
	system("CLS");
	Spaceship* s1, *s2;
	Martian m1;
	Star t1;
	s1 = &m1;
	s2 = &t1;
	
	s1->draw();
	s2->draw();
	for (int i = 0; i < 1000; i++)
	{


		s1->move();
		s2->move();
	}
}
