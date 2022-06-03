                        //BSEF19M011            FAHEEM KHALID
#include<iostream>
#include"linklist.h"
using namespace std;
int main()
{
	int size;
	
	do {
		cout << "Enter The total number of Students : ";
		cin >> size;
		if (size > 6)
		{
			Student* S;
			S = new Student[size];
			Linked_list<Student>* L;
			L = new Linked_list<Student>[size];

			for (int i = 0; i < size; i++)
			{
				cout << "Enter data for student " << i + 1 << " :" << endl;
				cin >> S[i];
				L->add(S[i]);
			}
			cout << "\n********************" << endl;
			L->print();
			cout << "\n********************" << endl;
			int a;
			cout << "Which position you want to delete : ";
			cin >> a;
			L->delete_ele(a);
			L->print();

			cout << "\n********************" << endl;
			int b;
			cout << "Which ID you want to search : ";
			cin >> b;
			L->search(b);
			cout << "\n********************" << endl;
			L->print();
			cout << "\n********************" << endl;
			int c;
			cout << "Which position you want to shuffle :";
			cin >> c;
			L->shuffle(c);
			cout << "\n********************" << endl;
			L->print();
		}
		if(size < 6)
		{
			cout << "Enter size greater than 6" << endl;
		}
	} while (size < 6 );
}