//Write a program to check a number is Perfect or not
//a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself
//For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number

#include <iostream>

using namespace std;

int main()
{
	int x,i,count=0,temp;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	temp=x;
	
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			count=count+i;
		}
	}
	
	if(temp==count)
	{
		cout<<"Input number is a Perfect number"<<endl;
	}
	else
	{
		cout<<"Input number is not a Perfect number"<<endl;
	}
	
	return 0;
}
