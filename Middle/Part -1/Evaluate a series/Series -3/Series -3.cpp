//Write a program to evaluate a number series...
//1+ 1/4 + 1/9 + 1/16 ....N

#include <iostream>

using namespace std;

int main()
{
	int x,count;
	double sum=0;
	
	cout<<"1+ 1/4 + 1/9 + 1/16 ....N"<<endl;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(count=1;count<=x;count++)
	{
		sum=sum+1/(double)(count*count);
		
	}
	
	cout<<"Output of the series is "<<sum;
	
	return 0;
}
