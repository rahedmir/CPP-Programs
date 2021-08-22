//Write a program to swap the value of 2 variables using 3rd variable

#include <iostream>

using namespace std;

int main()
{
	int x,y,temp;
	
	cout<<"Before swaping"<<endl;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	cout<<"After swaping"<<endl;
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<x<<" "<<y<<endl;
	
	return 0;
}
