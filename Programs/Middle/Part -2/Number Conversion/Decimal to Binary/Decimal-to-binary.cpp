//Write a program to convert Decimal numbers to Binary

#include <iostream>

using namespace std;

int main()
{
	int num,temp,i=1,bin=0,rem;
	
	cout<<"Enter a number "<<endl;
	cin>>num;
	
	temp=num;
	
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		bin=bin+(i*rem);
		i=i*10;
	}
	
	cout<<"Binary equivalent "<<temp<<" is "<<bin;
	
	return 0;
}
