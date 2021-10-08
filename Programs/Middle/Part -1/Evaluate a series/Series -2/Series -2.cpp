//Write a program to evaluate a number series...
//1+ (1+2) + (1+2+3) + (1+2+3+4)....N

#include <iostream>

using namespace std;

int main()
{
	int x,count,sum=0,final=0;
	
	cout<<"1+ (1+2) + (1+2+3) + (1+2+3+4)....N"<<endl;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(count=1;count<=x;count++)
	{
		sum=sum+count;
		final=final+sum;
	}
	
	cout<<"Output of the series is "<<final;
	
	return 0;
}
