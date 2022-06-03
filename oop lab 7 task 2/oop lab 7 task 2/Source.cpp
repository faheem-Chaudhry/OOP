                // BSEF19M011     FAHEEM KHALID
#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	int ID;
	string EMPname;
	string designation;
public:
	Employee()
	{
		ID = 0;
		EMPname = "";
		designation = "";
	}
	void takeinput()
	{
		cout << "Enter ID of employee : ";
		cin >> ID;
		cout << "Enter name of employee : ";
		cin.ignore();
		getline(cin, EMPname);
		cout << "Enter designation of employee : ";
		getline(cin, designation);
		
	}
	void display()
	{
		cout << "ID = " << ID << endl;
		cout << "Name = " << EMPname << endl;
		cout << "Designation = " << designation << endl;
	}
};
class Salary :public Employee
{
protected:
	int basicPay, humanResourceAllowance, dearnessAllowance, profitabilityFund, netPay;
public:
	Salary()
	{
		basicPay = 0;
		humanResourceAllowance = 0;
		dearnessAllowance = 0;
		profitabilityFund = 0;
		netPay = 0;
	}
	void getemployeedetails()
	{
		takeinput();

		cout << "Enter basic pay = ";
		cin >> basicPay;
		cout << "Enter human Resource Allowance = ";
		cin >> humanResourceAllowance;
		cout << "Enter dearness Allowance = ";
		cin >> dearnessAllowance;
		cout << "Enter profit ability Fund = ";
		cin >> profitabilityFund;

		netPay = basicPay + humanResourceAllowance + dearnessAllowance - profitabilityFund;
	}
	void display()
	{
		Employee::display();
		cout << "basic Pay = " << basicPay << endl;
		cout << "Human Resource allownce = " << humanResourceAllowance << endl;
		cout << "dearness Allowance = " << dearnessAllowance << endl;
		cout << "profitability Fund = " << profitabilityFund << endl;
		cout << "net Pay = " << netPay << endl;
	}
};
class BankCredit :public Salary
{
protected:
	int accountNo;
	string bankname;
public:
	BankCredit()
	{
		accountNo = 0;
		bankname = "";
	}
	void getbankdetails()
	{
		getemployeedetails();

		cout << "Enter account NO. = ";
		cin >> accountNo;
		cout << "Enter Bank Name = ";
		cin.ignore();
		getline(cin, bankname);
	}
	void print()
	{
		display();
		cout << "account NO. = " << accountNo << endl;
		cout << "Bank name = " << bankname << endl;
	}
};
int main()
{
	BankCredit b1[5];
	int a;
	cout << "Enter no of employee : ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cout << "Enter data for employee " << i+1 << endl;
		b1[i].getbankdetails();
	}
	for (int i = 0; i < a; i++)
	{
		cout << "**************** Result for employee " << i+1 << " ****************" << endl;
		b1[i].print();
	}
	return 0;
}