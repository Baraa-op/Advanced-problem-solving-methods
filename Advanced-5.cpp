// advanced solution-5
#include<iostream>
using namespace std;

struct stInfo
{
	int Age ;
	bool HasDriveingLicense ;
	bool HasConnections ;
	
};

stInfo ReadInfo()
{
	stInfo Info ;
	
	cout << "please enter your Age : " ;
	cin >> Info.Age ;
	
	cout << "Do you have Driving License? " ;
	cin >> Info.HasDriveingLicense ;
	
	cout << "Do you have connections ? " ;
	cin >> Info.HasConnections ;
	
	return Info ;
	
}



bool IsAccepted(stInfo Info)
{
	if(Info.HasConnections)
	{
		return true;
	}
	else
	{
		return Info.Age > 21 && Info.HasDriveingLicense  ;
	}
	
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
