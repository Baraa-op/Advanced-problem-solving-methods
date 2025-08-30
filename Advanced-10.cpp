// advanced solution-10
#include<iostream>
using namespace std;


void Read_Num(int &Mark1,int &Mark2,int&Mark3)
{
	cout << "enter mark 1 : " ;
	cin >> Mark1 ;
	
	cout << "enter mark 2 : " ; 
	cin >> Mark2 ;
	
	cout << "enter mark 3 : " ;
	cin >> Mark3 ;
}




int SumOf3Num(int &Mark1,int &Mark2,int&Mark3)
{
	return Mark1 + Mark2 + Mark3 ;
	
}

float CalculateAverage(int &Mark1,int &Mark2,int&Mark3)
{
	return (float)SumOf3Num(Mark1 , Mark2 ,Mark3) / 3 ;
}


void PrintResult(int total)
{
	cout << "\ntotal of sum : " << total << endl ;
}

int main()
{
	int Mark1 , Mark2 , Mark3 ;
	Read_Num(Mark1 , Mark2 ,Mark3) ;
	PrintResult(CalculateAverage(Mark1 , Mark2 ,Mark3)) ;
	
	

	return 0 ;
}
