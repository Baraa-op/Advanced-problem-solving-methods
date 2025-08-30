// advanced solution-6
#include<iostream>
using namespace std;

struct stName
{
	string First_Name ;
	string Last_Name ;
};


stName ReadName()
{
	stName Name  ;
	
	cout << "please enter your First Name : ";
	cin >> Name.First_Name  ;
	
	cout << "please enter your Last Name : ";
	cin >> Name.Last_Name  ;
	
	return Name ;
}

string GetFullName(stName Name)
{
	string Full_Name = "" ;
	Full_Name = Name.First_Name + " " + Name.Last_Name;
	return Full_Name ;
}

void PrintFullName(string FullName)
{
	cout << "\n your full name is : " << FullName << endl;
}

int main()
{
	
	PrintFullName(GetFullName(ReadName())) ;
	
	return 0 ;
}
