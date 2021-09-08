//Write a program to calculate GCD & LCM of 2 numbers

#include <iostream>

using namespace std;

int main()
{
	int x,y,gcd,lcm,i;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	for(i=1;i<1000;i++)
	{
		if((x%i==0) && (y%i==0))
		{
			gcd=i;
		}
	}
	
	lcm=(x*y)/gcd;
	
	cout<<"GCD is "<<gcd<<endl;
	cout<<"LCM is "<<lcm<<endl;
	
	return 0;
}
