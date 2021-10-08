//Write a program to swap the value of two variables without using the 3rd variable.

//Write a program to swap the value of 2 variables using 3rd variable

#include <iostream>

using namespace std;

int main()
{
	int x,y;
	
	cout<<"Before swaping"<<endl;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	cout<<"After swaping"<<endl;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<x<<" "<<y<<endl;
	
	return 0;
}
