//Write a program to print odd or even numbers based on odd-even input

#include <iostream>

using namespace std;

int main()
{
	int x,i;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	if(x%2==0)
	{
		cout<<0<<" ";
		
		for(i=1;i<=x;i++)
		{
			if(i%2==0)
			{
				cout<<i<<" ";
			}
		}
	}
	else
	{
		for(i=1;i<=x;i++)
		{
				if(i%2!=0)
			{
				cout<<i<<" ";
			}
		}
	}
	
	return 0;
}
