//Write a program to find a largest of 3 numbers using else if

#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	
	cout<<"Enter three numbers "<<endl;
	cin>>x>>y>>z;
	
    if(x>y && x>z)
    {
    	cout<<x<<" is the largest number"<<endl;
	}
	else if(y>x && y>z)
	{
		cout<<y<<" is the largest number"<<endl;
	}
	else if(z>x && z>y)
	{
		cout<<z<<" is the largest number"<<endl;
	}
	
	
	return 0;
}
