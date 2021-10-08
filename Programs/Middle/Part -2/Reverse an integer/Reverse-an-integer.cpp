//Write a program to reverse an integer

#include <iostream>

using namespace std;

int main()
{
	int x,rev,count=0;

	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	while(x!=0)
	{
		rev=x%10;
		x=x/10;
		count=count*10+rev;
	}
	
	cout<<"Reverse of this number is "<<count<<endl;
	
	return 0;
}
