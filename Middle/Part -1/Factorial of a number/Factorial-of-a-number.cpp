//Write a program to calculate factorial of a number

#include <iostream>

using namespace std;

int main()
{
	int x, fact=1, count;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(count=1;count<=x;count++)
	{
		fact=fact*count;
	}
	
	cout<<"Factorial of "<<x<<" is "<<fact<<endl;
	
	return 0;
}
