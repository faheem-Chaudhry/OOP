#include<iostream>
#include<string>
using namespace std;
class book
{
private:
	int id;
	char name[100];
	float price;
public:
	book()
	{
		id = 0;
		price = 0;
	}
	void input()
	{
		cout << "enter id :";
		cin >> id;
		cout << "enter price :";
		cin >> price;
		cout << "enter name :";
		cin >> name;
	}
	void display()
	{
		cout << id << endl;
		cout << price << endl;
		cout << name << endl;
	}
};
class writer
{
private:
	string writerName;
	string address;
	int No_of_books;
	book b[5];
public:
	void input()
	{
		for (int i = 0; i < 5; i++)
		{
			b[i].input();
		}
		cout << "Enter writer name :";
		cin >> writerName;
		cout << "Enter writer address :";
		cin >> address;
		cout << "Enter writer No of books :";
		cin >> No_of_books;
	}
	void output()
	{
		for (int i = 0; i < 5; i++)
		{
			b[i].display();
		}
		cout << writerName << endl;
		cout << address<< endl;
		cout << No_of_books << endl;
	}
};
int main()
{
	writer w;
	w.input();
	w.output();
}