// advanced solution-2
#include<iostream>
using namespace std;

string ReadName()
{
	string Name ;
	cout << "please enter your name : " ;
	getline(cin , Name) ;
	return Name ;
}

void PrintName(string Name)
{
	cout << "your name is : " << Name << endl;
}

int main()
{
	PrintName(ReadName()) ;
	return 0 ;
}
