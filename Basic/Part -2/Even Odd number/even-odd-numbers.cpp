//Write a program to check a number even or odd

#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	if(x%2==0)
	{
		cout<<x<<" is an even number"<<endl;
	}
	else
	{
		cout<<x<<" is an odd number"<<endl;
	}
	
    return 0;	
} 
