//Write a program to evaluate a number series...
//1-2+3-4+5-6+7-8.....N

#include <iostream>

using namespace std;

int main()
{
	int x,count,even=0,odd=0, final;
	
	cout<<"1-2+3-4+5-6+7-8.....N"<<endl;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(count=1;count<=x;count++)
	{
		if(count%2==0)
		{
			even=even+count;
		}
		else
		{
			odd=odd+count;
		}
	}
	
	final=odd-even;
	
	cout<<"Output of the series is "<<final;
	
	return 0;
}
