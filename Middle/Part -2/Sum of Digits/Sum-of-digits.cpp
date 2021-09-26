//Finding sum of digits of a number until sum becomes single digit
/* Example 1234 = 1+2+3+4 = 10
           10      = 1+0  = 1 */
           
#include <iostream>

using namespace std;

int main()
{
	int num,sum=0;
	
	cout<<"Enter a number ";
	cin>>num;
	
	while(num!=0 || sum>9)
	{
		if(num==0)
		{
			num=sum;
			sum=0;
		}
		
		sum= num%10;
		num=num/10;
		sum=sum+num;
	}
	
	cout<<sum;
	
	return 0;
}
