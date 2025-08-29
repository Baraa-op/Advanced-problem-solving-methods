// advanced solution-4
#include<iostream>
using namespace std;

struct stInfo
{
	int Age ;
	bool HasDriveingLicense ;
	
};

stInfo ReadInfo()
{
	stInfo Info ;
	
	cout << "please enter your Age : " ;
	cin >> Info.Age ;
	
	cout << "Do you have Driving License? " ;
	cin >> Info.HasDriveingLicense ;
	
	return Info ;
	
}



bool IsAccepted(stInfo Info)
{
	return Info.Age > 21 && Info.HasDriveingLicense  ;
	
} ;

void PrintResult(stInfo Info)
{
	if(IsAccepted(Info))
	{
		cout << "\n Hired \n" ;
	}
	else 
	{
		cout << "\n Rejected \n" ;
	}
}


int main()
{
	
	PrintResult(ReadInfo()) ;
	
	return 0 ;
}
