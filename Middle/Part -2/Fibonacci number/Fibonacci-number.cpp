//Write a program to print first n Fibonacci number
//a Fibonacci number is equal to the sum of the preceding two numbers
//Example  F (0) = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34....N

#include <iostream>

using namespace std;

int main()
{
	int x,i,a=0,b=1,c;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(i=0;i<=x;i++)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
