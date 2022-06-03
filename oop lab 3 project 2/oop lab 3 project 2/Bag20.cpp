#include "Bag20.h"
Bag20::Bag20()
{
	
	 size = 0;
}
 void Bag20::insert(int a)
{
	 arr[size++] = { a };
}
 void  Bag20::show()
 {
	 cout << "Contents of array : " << endl;
	 for (int i = 0; i <= (size-1); i++)
	 {
		 cout << arr[i] << "  ";
	 }
 }
 int Bag20::elementAt(int a2)
 {
	 if (a2 > size)
	 {
		 cout << "Index goes out of bound" << endl;
		 return -1;
	 }
	 else {
		 return arr[a2];
	 }
 }
 int Bag20::findFrequency(int a3)
 {
	 int count = 0;
	 for (int i = 0; i <= size;i++)
	 {
		 if (arr[i] ==  a3 )
		 {
			 count++;
		 }
	 }
	 return count;
 }
 void Bag20::delet(int a4)
 {
	 int s;
	 s = size;
	 for (int i = 0; i < s; i++)
	 {
		 if (arr[i] == a4)
		 {
			 arr[--size];
		 }
	 }
 }
 int Bag20::findEquilibriumIndex(Bag20 b2)
 {
	 
	 if (arr[0] + arr[1] == arr[size] + arr[size - 1])
	 {
		 return arr[0] + arr[1];
		 }
	 if (arr[0] + arr[1] + arr[2] == arr[size] + arr[size - 1] + arr[size - 2])
	 {
		 return arr[0] + arr[1] + arr[2];
	 }
	 else return -1;
	 
 }
 int Bag20::arr[20];
 