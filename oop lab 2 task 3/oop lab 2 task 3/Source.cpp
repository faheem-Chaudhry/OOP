#include<iostream>
using namespace std;
class job
{
private:
	int data;
public:
	job()        //default constructor
	{
		data = 0;
	}
	job(int m)                 //parametric constructor
	{
		data = m;
		
	}
	int getdata();
};
int job::getdata()
{
	return data;
}
int main()
{
	int b1 = 1, b2 = 2, b3 = 3, b4 = 4, b5 = 5, b6 = 6, b7 = 7, b8 = 8, b9 = 9, b10 = 10;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	a1 = 12; a2 = 1; a3 = 11; a4 = 45; a5 =6 ; a6 =9 ; a7 =66 ; a8 =5 ; a9 =27 ; a10 =34 ;
	job j1(a1);
	cout << "Job " << b1 << " has deadline = " << j1.getdata() << endl;
	job j2(a2);
	cout << "Job " << b2 << " has deadline = " << j2.getdata() << endl;
	job j3(a3);
	cout << "Job " << b3 << " has deadline = " << j3.getdata() << endl;
	job j4(a4);
	cout << "Job " << b4 << " has deadline = " << j4.getdata() << endl;
	job j5(a5);
	cout << "Job " << b5 << " has deadline = " << j5.getdata() << endl;
	job j6(a6);
	cout << "Job " << b6 << " has deadline = " << j6.getdata() << endl;
	job j7(a7);
	cout << "Job " << b7 << " has deadline = " << j7.getdata() << endl;
	job j8(a8);
	cout << "Job " << b8 << " has deadline = " << j8.getdata() << endl;
	job j9(a9);
	cout << "Job " << b9 << " has deadline = " << j9.getdata() << endl;
	job j10(a10);
	cout << "Job " << b10 << " has deadline = " << j10.getdata() << endl;
	cout << endl;

	if (a1 < a2 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
	{
		cout << "Job 1 has earliest ";
		if (a2 > a1 && a2 < a3 && a2 < a4 && a2 < a5 && a2 < a6 && a2 < a7 && a2 < a8 && a2 < a9 && a2 < a10)
		{                                                         //condition for 2nd earliest deadline
			cout << "and job 2 has 2nd most earliest deadline ";
		}
		if (a3 > a1 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
		{
			cout << "and job 3 has 2nd most earliest deadline ";
		}
		if (a4 > a1 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
		{
			cout << "and job 4 has 2nd most earliest deadline ";
		}
		if (a5 > a1 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
		{
			cout << "and job 5 has 2nd most earliest deadline ";
		}
		if (a6 > a1 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
		{
			cout << "and job 6 has 2nd most earliest deadline ";
		}
		if (a7 > a1 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
		{
			cout << "and job 7 has 2nd most earliest deadline ";
		}
		if (a8 > a1 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
		{
			cout << "and job 8 has 2nd most earliest deadline ";
		}
		if (a9 > a1 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
		{
			cout << "and job 9 has 2nd most earliest deadline ";
		}
		if (a10 > a1 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
		{
			cout << "and job 1 has 2nd most earliest deadline ";
		}
	}
		if (a2 < a1 && a2 < a3 && a2 < a4 && a2 < a5 && a2 < a6 && a2 < a7 && a2 < a8 && a2 < a9 && a2 < a10)
		{
			cout << "Job 2 has earliest ";
			if (a1 > a2 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a2 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a2 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a2 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a2 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a2 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a2 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a2 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a2 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 10 has 2nd most earliest deadline ";
			}
		}

		if (a3 < a1 && a3 < a2 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
		{
			cout << "Job 3 has earliest ";
			if (a1 > a3 && a1 < a2 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a2 > a3 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a4 > a3 && a4 < a2 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a3 && a5 < a2 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a3 && a6 < a2 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a3 && a7 < a2 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a3 && a8 < a2 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a3 && a9 < a2 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a3 && a10 < a2 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
		if (a4 < a1 && a4 < a2 && a4 < a3 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
		{
			cout << "Job 4 has earliest ";
			if (a1 > a4 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a4 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a2 > a4 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a5 > a4 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a4 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a4 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a4 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a4 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a4 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
		if (a5 < a1 && a5 < a2 && a5 < a3 && a5 < a4 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
		{
			cout << "Job 5 has earliest ";
			if (a1 > a5 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a5 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a5 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a5 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a6 > a5 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a5 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a5 && a8 < a3 && a8 < a4 && a8 < a2 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a5 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a5 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
		if (a6 < a1 && a6 < a2 && a6 < a4 && a6 < a5 && a6 < a3 && a6 < a7 && a6 < a8 && a6 < a9 && a6 < a10)
		{
			cout << "Job 6 has earliest ";
			if (a1 > a6 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a6 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a6 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a2 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a6 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a2 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a2 > a6 && a2 < a3 && a2 < a4 && a2 < a5 && a2 < a1 && a2 < a7 && a2 < a8 && a2 < a6 && a2 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a7 > a6 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a6 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a6 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a6 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
				
		}
		if (a7 < a1 && a7 < a2 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a3 && a7 < a8 && a7 < a9 && a7 < a10)
		{
			cout << "Job 7 has earliest ";
			if (a1 > a7 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a2 && a1 < a8 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a7 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a7 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a7 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a7 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a2 > a7 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a8 > a7 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a7 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a7 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
		if (a8 < a1 && a8 < a2 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a3 && a8 < a9 && a8 < a10)
		{
			cout << "Job 8 has earliest ";
			if (a1 > a8 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a2 && a1 < a9 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a8 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a8 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a8 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a8 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a8 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a2 > a8 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a9 > a8 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a10 > a8 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
		if (a9 < a1 && a9 < a2 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a3 && a9 < a10)
		{
			cout << "Job 9 has earliest ";
			if (a1 > a9 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a2 && a1 < a10)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a9 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a10)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a9 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a10)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a9 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a10)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a9 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a9 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a9 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a2 > a9 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 2 has 2nd most earliest deadline ";
			}
			if (a10 > a9 && a10 < a3 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a1)
			{
				cout << "and job 10 has 2nd most earliest deadline ";
				
			}
		}
		if (a10 < a1 && a10 < a2 && a10 < a4 && a10 < a5 && a10 < a6 && a10 < a7 && a10 < a8 && a10 < a9 && a10 < a3)
		{
			cout << "Job 10 has earliest ";
			if (a2 > a10 && a2 < a3 && a2 < a4 && a2 < a5 && a2 < a6 && a2 < a7 && a2 < a8 && a2 < a9 && a2< a1)
			{                                                         //condition for 2nd earliest deadline
				cout << "and job 1 has 2nd most earliest deadline ";
			}
			if (a3 > a10 && a3 < a1 && a3 < a4 && a3 < a5 && a3 < a6 && a3 < a7 && a3 < a8 && a3 < a9 && a3 < a1)
			{
				cout << "and job 3 has 2nd most earliest deadline ";
			}
			if (a4 > a10 && a4 < a3 && a4 < a1 && a4 < a5 && a4 < a6 && a4 < a7 && a4 < a8 && a4 < a9 && a4 < a1)
			{
				cout << "and job 4 has 2nd most earliest deadline ";
			}
			if (a5 > a10 && a5 < a3 && a5 < a4 && a5 < a1 && a5 < a6 && a5 < a7 && a5 < a8 && a5 < a9 && a5 < a1)
			{
				cout << "and job 5 has 2nd most earliest deadline ";
			}
			if (a6 > a10 && a6 < a3 && a6 < a4 && a6 < a5 && a6 < a1 && a6 < a7 && a6 < a8 && a6 < a6 && a1 < a10)
			{
				cout << "and job 6 has 2nd most earliest deadline ";
			}
			if (a7 > a10 && a7 < a3 && a7 < a4 && a7 < a5 && a7 < a6 && a7 < a1 && a7 < a8 && a7 < a9 && a7 < a10)
			{
				cout << "and job 7 has 2nd most earliest deadline ";
			}
			if (a8 > a10 && a8 < a3 && a8 < a4 && a8 < a5 && a8 < a6 && a8 < a7 && a8 < a1 && a8 < a9 && a8 < a10)
			{
				cout << "and job 8 has 2nd most earliest deadline ";
			}
			if (a9 > a10 && a9 < a3 && a9 < a4 && a9 < a5 && a9 < a6 && a9 < a7 && a9 < a8 && a9 < a9 && a9 < a10)
			{
				cout << "and job 9 has 2nd most earliest deadline ";
			}
			if (a1 > a10 && a1 < a3 && a1 < a4 && a1 < a5 && a1 < a6 && a1 < a7 && a1 < a8 && a1 < a9 && a1 < a1)
			{
				cout << "and job 1 has 2nd most earliest deadline ";
			}
		}
	

	


	return 0;
}
	