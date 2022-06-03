                 // BSEF19M011     FAHEEM KHALID
#include<iostream>
#include<string>
using namespace std;
class Book
{
protected:
	string title;
	string auther;
public:
	Book()
	{
		title = "";
		auther = "";
	}
	void setTitle(string a)
	{
		title = a;
	}
	void setAuther(string b)
	{
		 auther = b;
	}
	void show()
	{
		cout << "Parent class called" << endl;
		cout << "Title = " << title << endl;
		cout << "Auther = " << auther << endl;
	}
};
class Fiction :public Book
{
private:
	int level;
public:
	Fiction()
	{
		level = 0;
	}
	void setLevel( int a1,string aa, string bb)
	{
		setTitle(aa);
		setAuther(bb);
		level = a1;
	}
	void show()
	{
		Book::show();
		cout << "Derived class called" << endl;
		cout << "Level = " << level << endl;
	}

};
class nonFiction :public Book
{
private:
	int pages;
public:
	nonFiction()
	{
		pages = 0;
	}
	void setpages(int a1, string aa, string bb)
	{
		setTitle(aa);
		setAuther(bb);
		pages = a1;
	}
	void show()
	{
		Book::show();
		cout << "Derived class called" << endl;
		cout << "Pages = " << pages << endl;
	}

};
int main()
{
	string title;
	int level=0;
	int pages=0;

	string auther;

	
	Fiction f[2];
	nonFiction nf[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "**********(Fiction) For BOOK " << i + 1 << " ******" << endl;
		cout << "Enter title of book : ";
		getline(cin, title);
		cout << "Enter Auther of book : ";
		getline(cin, auther);
		cout << "Enter level : ";
		
		cin >> level;
		f[i].setLevel(level, title, auther);
		cin.ignore();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "**********(nonFiction) For BOOK " << i + 1 << " ******" << endl;
		cout << "Enter title of book : ";
		getline(cin, title);
		cout << "Enter Auther of book : ";
		getline(cin, auther);
		cout << "Enter pages : ";
	
		cin >> pages;
		nf[i].setpages(pages, title, auther);
		cin.ignore();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "********* Result of Book " << i + 1 << " for fiction***************" << endl;
		f[i].show();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "********* Result of Book " << i + 1 << " for non_fiction***************" << endl;
		nf[i].show();
	}
	
	
	return 0;
}