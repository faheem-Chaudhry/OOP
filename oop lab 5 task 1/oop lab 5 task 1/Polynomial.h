                  //Faheem BSEF19M011
#pragma once
#include<iostream>
using namespace std;
class Polynomial
{
private:
    int* array;
    int degree;
    int index;
public:
    Polynomial()
    {
        degree = 0;
    }
    Polynomial(const Polynomial& );
    Polynomial(int );
 //   ~Polynomial()
 //   {
//        delete[] array;
 //       array = nullptr;
 //   }
    void set( int, int ,int );
    void display();
    Polynomial operator +(Polynomial);
    Polynomial operator -(Polynomial);
    void operator += (Polynomial);
    void operator -= (Polynomial);
    void operator > (Polynomial);
    void operator < (Polynomial);
    void operator == (Polynomial);
    void operator != (Polynomial);
    void operator >= (Polynomial);
    void operator <= (Polynomial);

};

