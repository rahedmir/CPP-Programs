//Write a program to check a number Armstrong or not
//Armstrong number is a number that is equal to the sum of cubes of its digits
//Example 153 = 1(cube) + 5(cube) + 3(cube)

#include <iostream>

using namespace std;

int main()
{
	int x,y,cube,temp,sum=0;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	temp=x;
	
	while(x!=0)
	{
		y=x%10;
		x=x/10;
		
		cube=(y*y*y);
		sum=sum+cube;
	}
	
	if(temp==sum)
	{
		cout<<"Input number is a Armstrong number"<<endl;
	}
	else
	{
		cout<<"Input number is not a Armstrong number"<<endl;
	}
	
	return 0;
}
