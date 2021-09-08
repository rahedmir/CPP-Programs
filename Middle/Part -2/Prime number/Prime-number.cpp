//Write a program to check a number Prime number or not
//A prime number is a whole number greater than 1 whose only factors are 1 and itself
//Example 5%1=0, 5%5=0

#include <iostream>

using namespace std;

int main()
{
	int x,i,count=0;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count=count+1;
		}
	}
	
	if(count==2)
	{
		cout<<"Input number is a Prime number"<<endl;
	}
	else
	{
		cout<<"Input number is not a Prime number"<<endl;
	}
	
	return 0;
} 
