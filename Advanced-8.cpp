// advanced solution-8
#include<iostream>
using namespace std;

enum enPassFail { Pass = 1 , Fail = 2} ;


int ReadMark()
{
	int Mark;
	
	cout << "enter mark : " ;
	cin >> Mark ;
	return Mark ;
}

enPassFail CheckMark(int Mark)
{
	if(Mark >= 50 && Mark <= 100)
		return enPassFail::Pass ;
	
	else
		return enPassFail::Fail ;

		
}

void PrintResult(int Mark)
{
	if(CheckMark(Mark) == enPassFail::Pass)
	
		cout << "\nyou passed " << endl ;
	
	else 
		cout << "\nyou Failed " << endl ;
	
}


int main()
{
	
	PrintResult(ReadMark()) ;
	
	
	return 0 ;
}
