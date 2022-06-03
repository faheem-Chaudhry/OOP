#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Employee
{
	friend ostream& operator<<(ostream&, const Employee&);
	friend istream& operator>>(istream&, Employee&);
private:
	string name;
	string auther;
	int date;
};
ostream& operator<<(ostream& out, const Employee& anEmployee)
{
	out << "Name: " << anEmployee.name <<
		" Auther: " << anEmployee.auther << " Date: " << anEmployee.date;
	return out;
}
istream& operator>>(istream& in, Employee& anEmployee)
{
	cout << "Enter name: ";
	in >> anEmployee.name;
	cout << "Enter Auther: ";
	in >> anEmployee.auther;
	cout << "Enter date: ";
	in >> anEmployee.date;
	return in;
}
int main()
{
	vector<Employee>vec;
	Employee e1, e2;
	cout << "Enter book:";
	cin >> e1;
	cin >> e2;
//	vec.push_back(e1);
//	vec.push_back(e2);
	
	vec.insert(vec.begin(), e1);
	vec.insert(vec.begin()+1, e2);

	

}
