//Write a program to check a number Plaindrome or not

#include <iostream>

using namespace std;

int main()
{
	int x,rev,count=0,temp;

	cout<<"Enter a number "<<endl;
	cin>>x;
	
	temp=x;
	
	while(x!=0)
	{
		rev=x%10;
		x=x/10;
		count=count*10+rev;
	}
	
	if(temp==count)
	{
		cout<<"Input number is a Plaindrome number "<<endl;
	}
	else
	{
		cout<<"Input number is not a Plaindrome number "<<endl;
	}
	
	return 0;
}
