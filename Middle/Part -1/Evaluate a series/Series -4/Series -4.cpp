//Write a program to evaluate a number series...
//1+ 2/2! + 3/3! + 4/4! ....N

#include <iostream>

using namespace std;

int main()
{
	int x,count;
	double fact=1,sum=0;
	
	cout<<"1+ 2/2! + 3/3! + 4/4! ....N"<<endl;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(count=1;count<=x;count++)
	{
		fact=fact*count;
		sum=sum+(count/fact);
		
	}
	
	cout<<"Output of the series is "<<sum;
	
	return 0;
}
