                           // BSEF19M011          Ch.FAHEEM KHALID
#include "game.h"
void Spaceship::fire_set()              //base class virtual function
{

}
void Spaceship::fire_get()                 //base class virtual function
{

}
void Spaceship::move()                     //base class virtual function
{

}
void Spaceship::check()                    //base class virtual function
{

}
Martian::Martian(int xm, int ym)             //derives class parametrized consructor
{
	xcor = xm;
	ycor = ym;
	w = xm;
}
void Martian::draw()                      //pure virtual function of derives class
{
	martian = "`~~`~~`";
}
void Martian::move()                         //virtual function of derives class
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
void Martian::fire_set()                        //virtual function of derives class
{
	x = xcor;
	y = ycor;

}
void Martian::fire_get()                       //virtual function of derives class
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

Star::Star(int xs, int ys)                //parametrized constructor of derives class
{
	xcor = xs;
	ycor = ys;
	w = xs;
}
void Star::draw()                          //pure virtual function of derives class
{
	star = "';:;'";
}
void Star::move()                         //virtual function of derives class
{
	HANDLE faheem = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CH;
	CH.X = xcor;
	CH.Y = ycor;
	SetConsoleCursorPosition(faheem, CH);
	cout << star;
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
	x_check2 = xcor;                        //global variables x_check2 and y_check2
	y_check2 = ycor;
}
void Star::fire_set()                         //virtual function of derives class
{
	x = xcor;
	y = ycor;

}
void Star::fire_get()                        //virtual function of derives class
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

void Rocket::draw()                     //pure virtual function of derives class
{
	rocket = "[{~~}]";
	xroc = 25;
	yroc = 28;
}
void Rocket::move()                          //virtual function of derives class
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
		
	}
	x_global = xroc;                              //global variables
	y_global = yroc;

}

void Rocket::check()               //virtual function of derives class

{
	if ((x_check3 == xroc && y_check3 == yroc) || (x_check3 == xroc + 1 && y_check3 == yroc) || (x_check3 == xroc + 2 && y_check3 == yroc) || (x_check3 == xroc + 3 && y_check3 == yroc) || (x_check3 == xroc + 4 && y_check3 == yroc) || (x_check3 == xroc + 5 && y_check3 == yroc))
	{
		counter++;                      //global variable
	}
	if ((x_check4 == xroc && y_check4 == yroc) || (x_check4 == xroc + 1 && y_check4 == yroc) || (x_check4 == xroc + 2 && y_check4 == yroc) || (x_check4 == xroc + 3 && y_check4 == yroc) || (x_check4 == xroc + 4 && y_check4 == yroc) || (x_check4 == xroc + 5 && y_check4 == yroc))
	{
		counter++;                      //global variable
	}
}
void Fire::draw()                         //pure virtual function of derives class
{
	fire = "!";
}

void Fire::move()                       //virtual function of derives class
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
			if ((xfir == x_check1 && yfir == y_check1) || (xfir == x_check1 + 1 && yfir == y_check1) || (xfir == x_check1 + 2 && yfir == y_check1) || (xfir == x_check1 + 3 && yfir == y_check1) || (xfir == x_check1 + 4 && yfir == y_check1) || (xfir == x_check1 + 5 && yfir == y_check1))
			{
				counter2++;               //global variable
				break;
			}
			if ((xfir == x_check2 && yfir == y_check2) || (xfir == x_check2 + 1 && yfir == y_check2) || (xfir == x_check2 + 2 && yfir == y_check2) || (xfir == x_check2 + 3 && yfir == y_check2) || (xfir == x_check2 + 4 && yfir == y_check2) || (xfir == x_check2 + 5 && yfir == y_check2))
			{
				counter3++;                 //global variable
				break;
			}

		}
		x_global2 = xfir;                       //global variable
	}


}

