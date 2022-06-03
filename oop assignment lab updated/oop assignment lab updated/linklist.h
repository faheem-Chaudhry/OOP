               //BSEF19M011            FAHEEM KHALID      
#pragma once
#include<iostream>
using namespace std;
template<class Student>               
class Element
{
public:
	Student data;
	Element* next;
	Element* before;
};

template<class Student>
class Linked_list
{
private:
	Element<Student>* head, * tail;
public:
	int size;
	Student data;

	Linked_list()
	{
		head = NULL;
		tail = NULL;
	}
	
	void add(Student n);
	void search(int num);
	void delete_ele(int a);
	void print();
	void shuffle(int b);
};

class Student
{
private:
	int ID;
	float CGPA;
public:
	Student()
	{
		ID = 0;
		CGPA = 0;
	}
	void set(int, int);
	int getID();
	float getCGPA();
	void print();
	friend istream& operator >> (istream& s, Student& e);
	friend ostream& operator << (ostream& s, Student& e);
};

template<class Student>
void Linked_list<Student>::add(Student n)              //linklist class add function
{
	Element<Student>* tmp = new Element<Student>();
	tmp->data = n;

	tmp->next = NULL;
	
	if (head == NULL)
	{
		tmp->before = NULL;
		head = tmp;
		tail = tmp;
	}

	if (head->data.getID() > n.getID())
	{
		tmp->data = head->data;
		head->data = n;
	}

	if (n.getID() < tail->data.getID())
	{
		tmp->data = tail->data;
		tail->data = n;
	}


	if (head != NULL)
	{
		tail->next = tmp;
		tail = tail->next;
	}
}
template<class Student>
void Linked_list<Student>::delete_ele(int a)
{
	Element<Student>* curr = new Element<Student>();
	Element<Student>* bef = new Element<Student>();
	
		curr = head;
		for (int i = 0; i < a - 1; i++)
		{
			bef = curr;
			curr = curr->next;
		}
		bef->next = curr->next;
	
}
template<class Student>
void Linked_list<Student>::search(int num)
{
	Element<Student>* tmp;
	tmp = head;
	while (tmp != NULL)
	{
		if (num == tmp->data.getID())
		{
			tmp->data.print();
		}

		tmp = tmp->next;
	}
	
}
template<class Student>
void Linked_list<Student>::shuffle(int b)
{
	int r;
	r = (rand() % (size + 1));
	Element<Student>* temp1;
	temp1 = head;
	Element<Student>* temp2;
	temp2 = head;
	Element<Student>* temp3;
	temp3 = head;
	while (temp1 != NULL)
	{
		if (temp1->data.getID() == b)
		{
			while (temp2 != NULL)
			{
				if (temp2->data.getID() == r)
				{
					    temp3->data = temp1->data;
						temp1->data = temp2->data;
						temp2->data = temp3->data;	    
				}

				temp2 = temp2->next;
			}
		}

		temp1 = temp1->next;
	}
}
template<class Student>
void Linked_list<Student>::print()
{
	Element<Student>* tmp = head;
	while (tmp != NULL)
	{
		cout << tmp->data;
		tmp = tmp->next;
	}
	cout << endl;
}
void Student::set(int a, int b)
{
	ID = a;
	CGPA = b;
}
int Student::getID()
{
	return ID;
}
float Student::getCGPA()
{
	return CGPA;
}
void  Student::print()
{
	cout << "ID = " << ID << endl;
	cout << "CGPA = " << CGPA << endl;
}
istream& operator >> (istream& s, Student& e)
{
	cout << "Enter ID: "; cin >> e.ID;
	cout << "Enter CGPA : "; cin >> e.CGPA;
	return s;
}
ostream& operator << (ostream& s, Student& e)
{
	cout << "ID : " << e.ID << endl;
	cout << "CGPA : " << e.CGPA << endl;
	return s;
}

