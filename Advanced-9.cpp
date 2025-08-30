// advanced solution-9
#include<iostream>
using namespace std;


void Read_Num(int &Num1,int &Num2,int&Num3)
{
	cout << "enter num 1 : " ;
	cin >> Num1 ;
	
	cout << "enter num 2 : " ; 
	cin >> Num2 ;
	
	cout << "enter num 3 : " ;
	cin >> Num3 ;
}


int SumOf3Num(int &Num1,int &Num2,int&Num3)
{
	return Num1 + Num2 + Num3 ;
	
}

void PrintResult(int total)
{
	cout << "\ntotal of sum : " << total << endl ;
}

int main()
{
	int Num1 , Num2 , Num3 ;
	Read_Num(Num1 , Num2 ,Num3) ;
	PrintResult(SumOf3Num(Num1 , Num2 ,Num3)) ;
	
	

	return 0 ;
}
