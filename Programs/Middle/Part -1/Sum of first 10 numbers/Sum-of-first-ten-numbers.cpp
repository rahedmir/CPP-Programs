//Write a program to print the sum of the numbers from 1 to 10

#include <iostream>

using namespace std;

int main()
{
	int x, sum=0;
	
	for(x=1; x<=10; x++)
	{
		sum=sum+x;
	}
	
	cout<<"The sum of 1 to 10 is "<<sum<<endl;
	
	return 0;
}
