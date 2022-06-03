#include<iostream>
using namespace std;
template<class TYPE>
class Element
{
public:
	TYPE data;
	Element* next;
	Element* before;
};
class Student
{
private:
	int id;
	int cgpa;
public:
	void setter(int a, int b)
	{
		id = a;
		cgpa = b;
    }
	void getter()
	{
		cout << id;
		cout << cgpa;
	}
	friend istream& operator >> (istream& s, Student& e)
	{
		cout << "\n Enter ID : "; s >> e.id;
		cout << " Enter CGPA : "; s >> e.cgpa;
		return s;
	}
	friend ostream& operator << (ostream& s, Student& e)
	{
		cout << "\n Id : " << e.id;
		cout << "\n CGPA : " << e.cgpa;
		return s;
	}
};
template<class TYPE>
class linked_list
{
private:
	Element<TYPE>* head, * tail;
public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}
	void get()
	{
		cout << tail->data;
	}
	void add(TYPE n)
	{
		Element<TYPE>* tmp = new Element<TYPE>();
		tmp->data = n;
		tmp->next = NULL;
		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
};

int main()
{
//	linked_list<int> a;
	int n;
	do {
		cout << "Enter size = ";
		cin >> n;
		if (n >= 6)
		{
			Student* StockArrayArray = new Student[n]; // where n is number of arrays to create
			for (int i = 0; i < n; i++)
			{
				StockArrayArray[i] = Student();
			}
			for (int i = 0; i < n; i++)
			{
				cin >> StockArrayArray[i];
			}
			linked_list<Student> a;
			a.add(StockArrayArray[1]);
			//	a.add(2);
			a.get();
		}
		else
		{
			cout << "enter size 6 or greator than 6" << endl;
		}
		
	} while (n < 6);

}
