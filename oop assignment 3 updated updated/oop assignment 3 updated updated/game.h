                          // BSEF19M011          Ch.FAHEEM KHALID
#pragma once
#include<iostream>
#include<string>
 #include<windows.h>
 #include<conio.h>

extern int x_global;                         //global variables defining method in header file
extern int y_global;
extern int y_global2;
extern int x_global2;
extern int x_check1;
extern int x_check2;
extern int y_check1;
extern int y_check2;
extern int x_check3;
extern int x_check4;
extern int y_check3;
extern int y_check4;
extern int counter;
extern int counter2;
extern int counter3;
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
	virtual void fire_set();
	virtual void fire_get();
	virtual void move();
	virtual void check();
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
	Martian(int xm, int ym);
	void draw();
	void move();
	void fire_set();
	void fire_get();

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
	Star(int xs, int ys);
	void draw();
	void move();

	void fire_set();
	void fire_get();
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
	void draw();
	void move();

	void check();
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
	void draw();

	void move();


};

