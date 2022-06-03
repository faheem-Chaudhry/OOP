#include<iostream>
using namespace std;
class team
{
private:
	int score;
	int wickets;
public:
	team()           //default constructor
	{
		score = 0;
		wickets = 0;
	}
	team(int a,int b)                   //parametrized constructor
	{
		cout << "**** Team 4 created (parameterized)****" << endl;
		score = a;
		wickets = b;
	}
	void setscore(int);
	int getscore();
	void setwicket(int);
	int getwicket();
};
void team::setscore(int s)
{
	score = s;
}
int team::getscore()
{
	return score;
}
void team::setwicket(int w)
{
	wickets = w;
}
int team::getwicket()
{
	return wickets;
}

int main()
{
	team t;
	int s1, s2, s3, s4;   //initilized in main
	int w1, w2, w3, w4;
	s3 = 59;     //hardcore value for team 3
	w3 = 7;
	s4 = 25;       //hardcore value for team 4
	w4 = 2;
	cout << "****Enter data for team 1****" << endl;
	cout << "Enter score=";
	cin >> s1;
	cout << "Enter wickets=";
	cin >> w1;
	t.setscore(s1);
	t.setwicket(w1);
	cout << "Team 1 has score: " << t.getscore();
	cout << " and no. of wickets: " << t.getwicket() << endl << endl;
	cout << endl;
	cout << "****Enter data for team 2****" << endl;
	cout << "Enter score=";
	cin >> s2;
	cout << "Enter wickets=";
	cin >> w2;

	team t2;           //object for team 2
	t2.setscore(s2);
	t2.setwicket(w2);
	cout << "Team 2 has score: " << t2.getscore();
	cout << " and no. of wickets: " << t2.getwicket() << endl << endl;
	cout << endl;

	team t3;                //object for team 3
	cout << "**** Team3 created (default)****" << endl;
	t3.setscore(s3);
	t3.setwicket(w3);
	cout<<"Team 3 has score: "<<t3.getscore();
	cout << " and no. of wickets: " << t3.getwicket() << endl << endl;

	team t4(s4,w4);               //object for team 4
	cout << "Team 4 has score: " << t4.getscore();
	cout << " and no. of wickets: " << t4.getwicket() << endl << endl;

	if (s1 > s2 && s1 > s3 && s1 > s4)   //comparison for max score
	{
		cout<<"TEAM 1 HAS MAX SCORE" << endl;
	}
	else if (s2 > s1 && s2 > s3 && s2 > s4)
	{
		cout << "TEAM 2 HAS MAX SCORE" << endl;
	}
	else if (s3 > s1 && s3 > s2 && s3 > s4)
	{		
			cout << "TEAM 3 HAS MAX SCORE" << endl;		
	}
	else
	{
		cout << "TEAM 4 HAS MAX SCORE" << endl;
	}

	if (s1 < s2 && s1 < s3 && s1 < s4)           //comparison for min score
	{
		cout << "TEAM 1 HAS MIN SCORE" << endl;
	}
	else if (s2 < s1 && s2 < s3 && s2 < s4)
	{
		cout << "TEAM 2 HAS MIN SCORE" << endl;
	}
	else if (s3 < s1 && s3 < s2 && s3 < s4)
	{
		cout << "TEAM 3 HAS MIN SCORE" << endl;
	}
	else
	{
		cout << "TEAM 4 HAS MIN SCORE" << endl;
	}

	if (w1 > 6)                            //comparison for wickets greater than 6
	{
		cout << "TEAM 1 and ";
	}
	 if (w2 > 6)
	{
		cout << "TEAM 2 and ";
	}
	 if (w3 > 6)
	{
		cout << "TEAM 3 ";
	}
	 if (w1 > 6)
	{
		cout << "TEAM 4 ";
	}
	cout << "have greater than 6 wickets";
	return 0;
}