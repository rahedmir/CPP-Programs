//Write a program to check a number is Krishnamurthy or not
//A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself.
//Example 145

#include <iostream>

using namespace std;

int main()
{
	int x,i,count,temp,fact,sum=0;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	temp=x;
	
    while(x!=0)
    {
    	i=x%10;
    	x=x/10;
    	fact=1;	
    	
    	for(count=1;count<=i;count++)
    	{
    		fact=fact*count;
		}

		sum=sum+fact;
				
	}
	
	if(temp==sum)
	{
		cout<<"Input number is a Krishnamurthy number"<<endl;
	}
	else
	{
		cout<<"Input number is not a Krishnamurthy number"<<endl;
	}
	
	return 0;
}
